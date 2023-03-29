#pragma once


#include <memory>

#include <Eigen/Dense>

#include "./transition_type.h"
#include "../data/element.h"
#include "../data/rr_badnell.h"


namespace nlte {


/**
 * Radiative recombination (Badnell formula)
 */
inline Eigen::MatrixXd rr_badnell_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto N = element->number_of_ion_electrons_before_recombination(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto Z = element->atomic_number(); // 1

  auto A = 0.0; // cm^3 * s^{-1}
  auto B = 0.0; // 1
  auto T_0 = 0.0; // K
  auto T_1 = 0.0; // K
  for (auto fit : RRBadnell::fit()) {
    if (fit.Z == Z && fit.N == N) {
      A = fit.A;
      B = fit.B;
      auto& C = fit.C; // 1
      T_0 = fit.T0;
      T_1 = fit.T1;
      auto& T_2 = fit.T2; // K

      if (C != 0.0 && T_2 != 0.0) {
        B = B + C * std::exp(-T_2 / T);
      }

      break;
    }
  }

  auto alpha_RR = // cm^3 * s^{-1}
    + A
    * std::pow(
      (
        + std::sqrt(T / T_0)
        * std::pow(1.0 + std::sqrt(T / T_0), 1.0 - B)
        * std::pow(1.0 + std::sqrt(T / T_1), 1.0 + B)
      ),
      -1.0
    )
  ;

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_recombination(initial, final)) {
        q(i, j) = alpha_RR;
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = N_e * q;

  return P;
};


}