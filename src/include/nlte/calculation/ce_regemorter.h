#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./transition_type.h"
#include "../data/constants.h"
#include "../data/element.h"


namespace nlte {


/**
 * Collisional excitation / de-excitation
 * 
 * formula: doi-10.1086%2F147445 (Regemorter 1961)
 * inverse process: this
 */
inline Eigen::MatrixXd ce_regemorter_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& a_0 = BOHR_RADIUS; // cm
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  auto& Ry = RYDBERG_ENERGY; // eV

  auto gamma_ij = 1.0; // effective electron collision strength.

  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto& T_e = electron_temperature; // K

  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
    g(i) = element->levels()[i].statistical_weight;
  }

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int alpha = 0; alpha < element->levels().size(); alpha++) {
    auto& initial = element->levels()[alpha];

    for (int beta = 0; beta < element->levels().size(); beta++) {
      auto& final = element->levels()[beta];

      if (is_excitation(initial, final)) {
        if (E(alpha) == E(beta)) {
          continue;
        }
        else if (E(alpha) > E(beta)) {
          auto& i = beta;
          auto& j = alpha;

          q(j, i) =
            + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
            * std::sqrt(Ry / (k * T_e))
            * gamma_ij / g(j)
          ;
        }
        else if (E(alpha) < E(beta)) {
          auto& i = alpha;
          auto& j = beta;

          q(i, j) =
            + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
            * std::sqrt(Ry / (k * T_e))
            * gamma_ij / g(i)
            * std::exp(- (E(j) - E(i)) / (k * T))
          ;
        }
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = N_e * q;

  return P;
}


}