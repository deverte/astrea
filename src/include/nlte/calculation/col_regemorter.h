#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/element.h"


namespace nlte {


Eigen::MatrixXd col_regemorter_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& T = temperature; // K
  auto& T_e = electron_temperature; // K
  auto& N_e = electron_number_density; // cm^{-3}
  auto& a_0 = BOHR_RADIUS; // cm
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s
  auto& m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  auto& Ry = RYDBERG_ENERGY; // eV
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto gamma_ij = 1.0; // effective electron collision strength.
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::MatrixXd q = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());

  for (int alpha = 0; alpha < element->levels().size(); alpha++) {
    auto& initial = element->levels()[alpha];
    auto& E_alpha = initial.energy;

    for (int beta = 0; beta < element->levels().size(); beta++) {
      auto& final = element->levels()[beta];
      auto& E_beta = final.energy;

      if (E_alpha == E_beta) {
        continue;
      }
      else if (E_alpha > E_beta) {
        auto& i = beta;
        auto& j = alpha;
        auto& g_j = initial.statistical_weight; // one

        q(j, i) =
          + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
          * std::sqrt(Ry / (k * T_e))
          * gamma_ij / g_j
        ;
      }
      else if (E_alpha < E_beta) {
        auto& i = alpha;
        auto& j = beta;
        auto& E_i = E_alpha; // eV
        auto& E_j = E_beta; // eV
        auto& g_i = initial.statistical_weight; // one

        q(i, j) =
          + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
          * std::sqrt(Ry / (k * T_e))
          * gamma_ij / g_i
          * std::exp(- (E_j - E_i) / (k * T))
        ;
      }
    }
  }

  P = N_e * q;

  return P;
};


}