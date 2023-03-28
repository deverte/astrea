#pragma once


#include <memory>

#include <Eigen/Dense>

#include "../data/element.h"
#include "../data/rr_badnell.h"


namespace nlte {


/**
 * Formula
 */
Eigen::MatrixXd rr_badnell_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::MatrixXd q = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& T = temperature; // K
  auto& N_e = electron_number_density; // cm^{-3}
  auto Z = element->atomic_number(); // 1
  auto N = element->number_of_ion_electrons_before_recombination(); // 1
  auto A = 0.0; // cm^3 * s^{-1}
  auto B = 0.0; // 1
  auto T_0 = 0.0; // K
  auto T_1 = 0.0; // K
  auto C = 0.0; // 1
  auto T_2 = 0.0; // K
  auto alpha_RR = 0.0; // cm^3 * s^{-1}

  for (auto fit : RRBadnell::fit()) {
    if (fit.Z == Z && fit.N == N) {
      A = fit.A;
      T_0 = fit.T0;
      T_1 = fit.T1;
      T_2 = fit.T2;

      B = fit.B;
      if (fit.C != 0.0 && fit.T2 != 0.0) {
        B = B + C * std::exp(-T_2 / T);
      }
    }
    break;
  }

  alpha_RR = 
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

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (
        initial.term == final.limit_term &&
        final.term == initial.ground_state_term
      ) {
        q(i, j) = alpha_RR;
      }
    }
  }

  P = N_e * q;

  return P;
};


}