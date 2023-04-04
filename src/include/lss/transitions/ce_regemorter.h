#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


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
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
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

  Eigen::MatrixXd C_CE_CD = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];

    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_excitation(initial, final)) {
        C_CE_CD(i, j) = fm::cases({
          {
            + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
            * std::sqrt(Ry / (k_B * T_e))
            * gamma_ij / g(i),
            E(i) > E(j)
          },
          {
            + 2.0 * std::sqrt(PI) * a_0 * hbar / m_e
            * std::sqrt(Ry / (k_B * T_e))
            * gamma_ij / g(i)
            * std::exp(-(E(j) - E(i)) / (k_B * T)),
            E(i) < E(j)
          },
          {0.0, true},
        });
      }
    }
  }

  Eigen::MatrixXd R_CE_CD = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  R_CE_CD = N_e * C_CE_CD;

  return R_CE_CD;
}


}