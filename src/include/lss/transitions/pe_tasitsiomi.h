#pragma once


#include <algorithm>
#include <cmath>
#include <memory>

#include <boost/math/interpolators/barycentric_rational.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "./se_nist_o1.h"
#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Photoexcitation / photo-de-excitation
 * 
 * formula: doi-10.1086%2F504460 (Tasitsiomi 2006 for cross-sections)
 * inverse process: this
 */
inline Eigen::MatrixXd pe_tasitsiomi_rates(
  std::shared_ptr<Element> element,
  std::vector<double> wavelengths /* nm */,
  std::vector<double> spectral_flux_densities /* W * m^{-2} * nm^{-1} */,
  double optical_depth /* 1 */,
  double temperature /* K */
) {
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
  auto& epsilon_0 = // F * m^{-1} = C * V^{-1} * m^{-1} = C^2 * J^{-1} * m^{-1}
    VACUUM_PERMITTIVITY
  ;
  auto hbar = REDUCED_PLANCK_CONSTANT * eV_to_J; // J * s = W * s^2
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
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

  Eigen::MatrixXd A = se_nist_o1_rates(element); // s^{-1}
  auto m_i = element->mass(); // u
  auto& T = temperature; // K
  auto& tau = optical_depth; // 1
  auto vec_F = spectral_flux_densities; // W * m^{-2} * nm^{-1}
  auto vec_lambda = wavelengths; // nm

  boost::math::interpolators::barycentric_rational<double>
  F(std::move(vec_lambda), std::move(vec_F)); // W * m^{-2} * nm^{-1}

  Eigen::VectorXd g(element->levels().size()); // 1
  for (int i = 0; i < element->levels().size(); i++) {
    g(i) = element->levels()[i].statistical_weight;
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_excitation(initial, final)) {
        auto lambda_0 = [&]() { // nm
          auto E = std::abs(final.energy - initial.energy); // eV
          auto c_ = c * cm_to_nm; // nm * s^{-1}
          auto E_ = E * eV_to_J; // J

          return c_ / (E_ / hbar);
        };


        auto f_ij = [&](double lambda /* nm */) { // 1
          auto lambda_ = lambda * nm_to_angstrom; // angstrom
          auto coefficient = 6.6702e15; // angstrom * s^{-1}

          return
            + A(j, i)                              // s^{-1}
            * g(j) / g(i)                          // 1
            * std::pow(lambda_, 2.0) / coefficient // s
          ;
        };

        auto delta_nu_L = [&]() { return A(j, i) / (2.0 * pi); }; // s^{-1}

        auto delta_nu_D = [&]() { // s^{-1}
          auto lambda_0_ = lambda_0() * nm_to_cm; // cm
          auto m_i_ = m_i * u_to_eV_s2_cm_2; // eV * s^2 * cm^{-2}

          return
            + c / lambda_0_ // s^{-1}
            * std::sqrt(    // 1
              2.0 * k_B * T / (m_i_ * std::pow(c, 2)) // 1
            )
          ;
        };

        auto u = [&](double lambda /* nm */) { // 1
          auto lambda_ = lambda * nm_to_cm; // cm
          auto lambda_0_ = lambda_0() * nm_to_cm; // cm
          auto nu = c / lambda_; // s^{-1}
          auto nu_0 = c / lambda_0_; // s^{-1}

          return (nu - nu_0) / delta_nu_D();
        };

        auto z = [&](double lambda /* nm */) { // 1
          return
            + (std::pow(u(lambda), 2.0) - zeta_0) // 1
            / (std::pow(u(lambda), 2.0) + zeta_1) // 1
          ;
        };

        auto alpha = [&]() { // 1
          return delta_nu_L() / (2.0 * delta_nu_D());
        };

        auto q = [&](double lambda /* nm */) { // 1
          if (z(lambda) > 0.0) {
            return
              + z(lambda)                              // 1
              * (1.0 + chi / std::pow(u(lambda), 2.0)) // 1
              * alpha()                                // 1
              / (pi * (std::pow(u(lambda), 2.0) + 1))  // 1
              * (                                      // 1
                + kappa_0   // 1
                + z(lambda) // 1
                * (         // 1
                  + kappa_1                         // 1
                  + z(lambda)                       // 1
                  * (kappa_2 + kappa_3 * z(lambda)) // 1
                )
              )
            ;
          }
          return 0.0;
        };

        auto H = [&](double lambda /* nm */) { // 1
          return
            + std::sqrt(pi) // 1
            * (             // 1
              + q(lambda)                                     // 1
              + std::exp(-std::pow(u(lambda), 2.0)) / epsilon // 1
            )
          ;
        };

        auto sigma = [&](double lambda /* nm */) {// m^2
          auto epsilon_0_ = epsilon_0 / m_to_cm; // C^2 * J^{-1} * cm^{-1}
          auto e_ = e * statC_to_C; // C
          auto m_e_ = m_e * eV_to_J; // cm^{-2} * J * s^2

          auto sigma_ = // cm^2
            + 1.0                               // 1
            / (4.0 * pi * epsilon_0_)           // C^{-2} * J * cm
            * f_ij(lambda)                      // 1
            * std::sqrt(pi) * std::pow(e_, 2.0) // C^2
            / (m_e_ * c * delta_nu_D())         // cm * J^{-1}
            * H(lambda)                         // 1
          ;

          return sigma_ * std::pow(cm_to_m, 2.0);
        };

        P(i, j) = boost::math::quadrature::trapezoidal( // s^{-1}
          [&](double lambda /* nm */) {
            auto c_ = c * cm_to_nm; // nm * s^{-1}

            return
              + F(lambda)           // W * m^{-2} * nm^{-1}
              * lambda / (hbar * c) // nm * W^{-1} * s^{-1} * nm^{-1}
              * std::exp(-tau)      // 1
              * sigma(lambda)       // m^2
              // * dlambda          // nm
            ;
          },
          lambda_0() - (c * cm_to_nm / (2.0 * (delta_nu_L() + delta_nu_D()))),
          lambda_0() + (c * cm_to_nm / (2.0 * (delta_nu_L() + delta_nu_D())))
        );
      }
    }
  }

  return P;
}


}