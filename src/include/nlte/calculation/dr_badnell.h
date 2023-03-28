#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "../data/element.h"
#include "../data/dr_badnell.h"


namespace nlte {


/**
 * Formula
 */
Eigen::MatrixXd dr_badnell_rates(
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
  std::vector<double> C; // cm^3 * s^{-1} * K^{3/2}
  std::vector<double> E; // K
  auto alpha_DR = 0.0; // cm^3 * s^{-1}

  for (auto fit : DRBadnell::fit()) {
    if (fit.Z == Z && fit.N == N) {
      C = fit.C;
      E = fit.E;
    }
    break;
  }

  for (int i = 0; i < C.size(); i++) {
    alpha_DR += std::pow(T, -3.0 / 2.0) * C[i] * std::exp(-E[i] / T);
  }

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (
        initial.term == final.limit_term &&
        final.term == initial.ground_state_term
      ) {
        q(i, j) = alpha_DR;
      }
    }
  }

  P = N_e * q;

  return P;
};


}