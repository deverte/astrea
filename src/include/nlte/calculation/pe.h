#pragma once


#include <algorithm>
#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./oxygen_1_spontaneous_emission.h"
#include "../data/constants.h"
#include "../data/element.h"
#include "../interpolation/linear_interpolant.h"


namespace nlte {


/**
 * Formula
 */
Eigen::MatrixXd pe_rates(
  std::shared_ptr<Element> element,
  std::vector<double> wavelengths /* nm */,
  std::vector<double> spectral_flux_densities /* W * m^{-2} * nm^{-1} */,
  double optical_depth /* 1 */,
  double temperature /* K */,
  double wavelengths_step
) {
  Eigen::MatrixXd A = oxygen_1_spontaneous_emission_rates(element); // s^{-1}
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::VectorXd g(element->levels().size()); // 1
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& e = ELEMENTARY_CHARGE; // statC
  auto& tau = optical_depth; // 1
  auto& T = temperature; // K
  auto m_i = element->mass(); // u
  auto m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  double& delta_lambda = wavelengths_step; // nm
  double lambda_0 = // nm
    *std::max_element(wavelengths.begin(), wavelengths.end());
  double lambda_infty = // nm
    *std::min_element(wavelengths.begin(), wavelengths.end());
  auto eV_to_J = 1.602177e-19;
  auto hbar = REDUCED_PLANCK_CONSTANT * eV_to_J; // J * s = W * s^2
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI;
  auto& epsilon_0 = VACUUM_PERMITTIVITY; // F * m^{-1}
  auto zeta_0 = 0.855;
  auto zeta_1 = 3.42;
  auto chi = 21.0;
  auto kappa_0 = 0.1117;
  auto kappa_1 = 4.421;
  auto kappa_2 = -9.207;
  auto kappa_3 = 5.674;
  auto epsilon = 1.77245385;
  auto nm_to_angstrom = 10.0;
  auto nm_to_cm = 1.0e-7;
  auto nm_to_m = 1.0e-9;
  auto u_to_eV_s2_cm_2 = 1.03642696526422e-12;
  auto statC_to_C = 3.33564e-10;

  for (int i = 0; i < element->levels().size(); i++) {
    g(i) = element->levels()[i].statistical_weight;
  }

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      LinearInterpolant F; // W * m^{-2} * nm^{-1}
      F.data_points(wavelengths, spectral_flux_densities);

      auto P_ij = 0.0;
      for (
        double lambda = lambda_infty; // nm
        lambda < lambda_0;
        lambda += delta_lambda
      ) {
        auto nu = c / (lambda * nm_to_cm); // s^{-1}
        auto nu_0 = c / (lambda_0 * nm_to_cm); // s^{-1}

        auto f_ij = // 1
          + A(j, i)
          * g(j) / g(i)
          * std::pow(lambda * nm_to_angstrom, 2.0) / 6.6702e15
        ;

        auto delta_nu_L = A(j, i) / (2.0 * pi); // s^{-1}

        auto delta_nu_D = // s^{-1}
          + c / (lambda_0 * nm_to_cm)
          * std::sqrt(
            2.0 * k_B * T / ((m_i * u_to_eV_s2_cm_2) * std::pow(c, 2))
          )
        ;

        // TODO: Check formula
        auto u = (nu - nu_0) / delta_nu_D; // 1

        auto alpha = delta_nu_L / (2.0 * delta_nu_D); // 1

        auto z = // 1
          (std::pow(u, 2.0) - zeta_0) / (std::pow(u, 2.0) + zeta_1)
        ;

        auto q = 0.0; // 1
        if (z > 0.0) {
          q =
            + z
            * (1.0 + chi / std::pow(u, 2.0))
            * alpha / (pi * (std::pow(u, 2.0) + 1))
            * (kappa_0 + z * (kappa_1 + z * (kappa_2 + kappa_3 * z)))
          ;
        }

        auto H = // 1
          std::sqrt(pi) * (q + std::exp(-std::pow(u, 2.0)) / epsilon)
        ;

        auto sigma = // m^2
          + f_ij
          * std::sqrt(pi)
          / (4.0 * pi * epsilon_0)
          * (std::pow(e * statC_to_C, 2.0) * lambda * nm_to_m)
          / (m_e * eV_to_J * std::pow(c, 2.0))
          * std::sqrt(
            (m_i * u_to_eV_s2_cm_2) * std::pow(c, 2.0) / (2.0 * k_B * T)
          )
          * H
        ;

        P_ij += // s^{-1}
          + F(lambda)
          * lambda / (hbar * c)
          * std::exp(-tau)
          * sigma
          * (delta_lambda * nm_to_cm)
        ;
      }

      P(i, j) = P_ij;
    }
  }

  return P;
};


}