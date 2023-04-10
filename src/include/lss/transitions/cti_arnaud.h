#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/transitions/cti_arnaud.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Charge transfer ionization
 * 
 * formula: bibcode-1985A&AS...60..425A (Arnaud 1985)
 * data: bibcode-1985A&AS...60..425A (Arnaud 1985)
 * inverse process: charge transfer recombination
 */
inline Eigen::MatrixXd cti_arnaud_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto T_4 = T / 1.0e4; // 1
  auto Z = elements[0]->atomic_number(); // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::MatrixXd C_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    // TODO: Now ionization acts only with H, add He.
    auto a = 0.0; // cm^3 * s^{-1}
    auto b = 0.0; // 1
    auto c = 0.0; // 1
    auto delta_E = 0.0; // eV
    auto T_max = 0.0; // K
    auto T_min = 0.0; // K
    for (auto fit : CTIArnaud::fit()) {
      if (fit.atomic_number == Z && fit.ionization_stage == s) {
        if (fit.temperatures_range.size() == 1) {
          T_min =
          fit.temperatures_range[0] - std::sqrt(fit.temperatures_range[0]);
          T_max =
          fit.temperatures_range[0] + std::sqrt(fit.temperatures_range[0]);
        }
        else if (fit.temperatures_range.size() == 2) {
          T_min = fit.temperatures_range[0];
          T_max = fit.temperatures_range[1];
        }

        a = fit.a;
        b = fit.b;
        c = fit.c;
        delta_E = fit.delta_E;

        break;
      }
    }

    auto C_CTI_iN = fm::cases({ // cm^3 * s^{-1}
      {
        [&]() {
          return
            + a
            * std::pow(T_4, b)
            * std::exp(-c * T_4)
            * std::exp(-delta_E / (k_B * T))
          ;
        },
        Z != 8.0
      },
      {
        [&]() {
          return
            + a
            * std::exp(-delta_E / (k_B * T))
            * (1.0 - 0.93 * std::exp(-c * T_4))
          ;
        },
        Z == 8.0
      },
    });

    for (int i = 0; i <= L(s) - 1; i++) {
      C_CTI(i + K(s), L(s) + K(s)) = C_CTI_iN;
    }
  }

  Eigen::MatrixXd R_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CTI = N_e * C_CTI;

  return R_CTI;
}


}