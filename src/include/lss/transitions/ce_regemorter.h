#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

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
  std::vector<std::shared_ptr<Element>> elements,
  double temperature /* K */,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto gamma_ij = 1.0; // 1 // effective electron collision strength
  auto zeta = 8.62913210858377e-6; // cm^3 * s^{-1} * K^{1 / 2}

  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto& T_e = electron_temperature; // K

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  Eigen::MatrixXd C_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      for (int j = 0; j <= L(s) - 1; j++) {
        C_CE_CD(i + K(s), j + K(s)) = fm::cases({
          {
            [&]() {
              return
                + zeta
                * std::sqrt(1.0 / T_e)
                * gamma_ij / g(i + K(s))
              ;
            },
            E(i + K(s)) > E(j + K(s))
          },
          {
            [&]() {
              return
                + zeta
                * std::sqrt(1.0 / T_e)
                * gamma_ij / g(i + K(s))
                * std::exp(-(E(j + K(s)) - E(i + K(s))) / (k_B * T))
              ;
            },
            E(i + K(s)) < E(j + K(s))
          },
          {[]() { return 0.0; }, true},
        });
      }
    }
  }

  Eigen::MatrixXd R_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CE_CD = N_e * C_CE_CD;

  return R_CE_CD;
}


}