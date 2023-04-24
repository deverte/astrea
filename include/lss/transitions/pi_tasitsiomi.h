#pragma once


#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/quadrature/trapezoidal.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "./se_nist_o1.h"
#include "../data/elements/element.h"
#include "../data/spectra/spectrum.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Photoionization
 * (??? and inner shell ionization = auger ionization + autoionization)
 * 
 * A^i + h \nu \rightarrow A^{(i + 1)+} + e^- + \Delta E
 * 
 * formula: doi-10.1086%2F504460 (Tasitsiomi 2006 for cross-sections)
 * inverse process: radiative recombination + dielectronic recombination
 */
inline Eigen::MatrixXd pi_tasitsiomi_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double optical_depth /* 1 */,
  double temperature /* K */,
  Eigen::MatrixXd R_SE /* s^{-1} */
) {
  auto cm_to_angstrom = 1.0e8;
  auto cm_to_m = 1.0e-2;
  auto cm_to_nm = 1.0e7;
  auto eV_to_J = 1.602177e-19;
  auto nm_to_angstrom = 10.0;
  auto nm_to_cm = 1.0e-7;
  auto m_to_cm = 100.0;
  auto statC_to_C = 3.33564e-10;
  auto u_to_eV_s2_cm_2 = 1.03642696526422e-12;

  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& e = ELEMENTARY_CHARGE; // statC
  auto& epsilon_0 = VACUUM_PERMITTIVITY; // F * m^{-1}
  auto h = PLANCK_CONSTANT; // eV * s
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto Lambda = 6.6702e15; // angstrom^2 * s^{-1}
  auto m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  auto& pi = PI; // 1

  auto chi = 21.0; // 1
  auto epsilon = 1.77245385; // 1
  auto kappa_0 = 0.1117; // 1
  auto kappa_1 = 4.421; // 1
  auto kappa_2 = -9.207; // 1
  auto kappa_3 = 5.674; // 1
  auto zeta_0 = 0.855; // 1
  auto zeta_1 = 3.42; // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto lambda_infty = spectrum->min_wavelength(); // nm
  auto m_i = elements[0]->mass(); // u
  auto& T = temperature; // K
  auto& tau = optical_depth; // 1
  auto infty = c / (spectrum->min_wavelength() * nm_to_cm); // s^{-1}

  auto F_lambda = [&](double lambda /* nm */) { // W * m^{-2} * nm^{-1}
    return spectrum->operator()(lambda);
  };

  Eigen::VectorXd g(K(S)); // 1
  Eigen::VectorXd I(K(S)); // eV
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
      I(i + K(s)) = elements[s]->levels()[i].ionization_energy;
    }
  }

  Eigen::MatrixXd R_PI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto nu_0 =  I(i + K(s)) / h; // s^{-1}

      auto f_ij = [&](double nu /* s^{-1} */) { // 1
        return 1.0;
        // return 1.0e-3;
      };

      auto delta_nu_L = [&]() { // s^{-1}
        return
          + 3.0                             // 1
          * m_i * u_to_eV_s2_cm_2 * eV_to_J // J * s^2 * cm^{-2}
          * std::pow(c, 3.0)                // cm^3 * s^{-3}
          * epsilon_0 / m_to_cm             // C^2 * J^{-1} * cm^{-1}
          / std::pow(e * statC_to_C, 2.0)   // C^{-2}
        ;
      };

      auto delta_nu_D = [&]() { // s^{-1}
        auto m_i_ = m_i * u_to_eV_s2_cm_2; // eV * s^2 * cm^{-2}

        return
          + nu_0       // s^{-1}
          * std::sqrt( // 1
            2.0 * k_B * T / (m_i_ * std::pow(c, 2))
          )
        ;
      };

      auto x = [&](double nu /* s^{-1} */) { // 1
        return
          (nu - nu_0) / delta_nu_D()
        ;
      };

      auto z = [&](double nu /* s^{-1} */) { // 1
        return
          + (std::pow(x(nu), 2.0) - zeta_0) // 1
          / (std::pow(x(nu), 2.0) + zeta_1) // 1
        ;
      };

      auto alpha = [&]() { // 1
        return delta_nu_L() / (2.0 * delta_nu_D());
      };

      auto q = [&](double nu /* s^{-1} */) { // 1
        return fm::cases({
          {
            [&]() {
              return
                + z(nu)                              // 1
                * (1.0 + chi / std::pow(x(nu), 2.0)) // 1
                * alpha()                            // 1
                / (pi * (std::pow(x(nu), 2.0) + 1))  // 1
                * (                                  // 1
                  + kappa_0 // 1
                  + z(nu)   // 1
                  * (       // 1
                    + kappa_1                     // 1
                    + z(nu)                       // 1
                    * (kappa_2 + kappa_3 * z(nu)) // 1
                  )
                )
              ;
            },
            z(nu) > 0.0
          },
          {[]() { return 0.0; }, z(nu) <= 0.0}
        });
      };

      auto H = [&](double nu /* s^{-1} */) { // 1
        return
          + std::sqrt(pi) // 1
          * (             // 1
            + q(nu)                                     // 1
            + std::exp(-std::pow(x(nu), 2.0)) / epsilon // 1
          )
        ;
      };

      auto sigma = [&](double nu /* s^{-1} */) { // m^2
        auto epsilon_0_ = epsilon_0 / m_to_cm; // C^2 * J^{-1} * cm^{-1}
        auto e_ = e * statC_to_C; // C
        auto m_e_ = m_e * eV_to_J; // cm^{-2} * J * s^2

        auto sigma_ = // m^2
          + 1.0                               // 1
          / (4.0 * pi * epsilon_0_)           // C^{-2} * J * cm
          * f_ij(nu)                          // 1
          * std::sqrt(pi) * std::pow(e_, 2.0) // C^2
          / (m_e_ * c * delta_nu_D())         // cm * J^{-1}
          * H(nu)                             // 1
          * std::pow(cm_to_m, 2.0)
        ;

        return sigma_;
      };

      R_PI(i + K(s), L(s) + K(s)) =
        4.0 * pi * boost::math::quadrature::trapezoidal( // s^{-1}
          [&](double nu /* s^{-1} */) {
            auto lambda = c / nu * cm_to_nm; // nm
            auto F_nu = // W * m^{-2} * s
              + (c * cm_to_nm) // nm * s^{-1}
              / std::pow(nu, 2.0) // s^2
              * F_lambda(lambda) // W * m^{-2} * nm^{-1}
            ;

            return
              + sigma(nu)            // m^2
              / ((h * eV_to_J) * nu) // J^{-1} = W^{-1} * s^{-1}
              * F_nu                 // W * m^{-2} * s
              * std::exp(-tau)       // 1
              // * dnu               // s^{-1}
            ;
          },
          nu_0,
          infty
        )
      ;
    }
  }

  return R_PI;
}


}