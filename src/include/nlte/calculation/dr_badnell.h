#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <sigma/sum.h>

#include "./transition_type.h"
#include "../data/element.h"
#include "../data/dr_badnell.h"


namespace nlte {


/**
 * Dielectronic recombination (Badnell formula)
 */
inline Eigen::MatrixXd dr_badnell_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto N = element->number_of_ion_electrons_before_recombination(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto Z = element->atomic_number(); // 1

  std::vector<double> C; // cm^3 * s^{-1} * K^{3/2}
  std::vector<double> E; // K
  for (auto fit : DRBadnell::fit()) {
    if (fit.Z == Z && fit.N == N) {
      C = fit.C;
      E = fit.E;

      break;
    }
  }

  auto alpha_DR = sigma::sum(0, C.size(), [&](int i) { // cm^3 * s^{-1}
    return std::pow(T, -3.0 / 2.0) * C[i] * std::exp(-E[i] / T);
  });

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_recombination(initial, final)) {
        q(i, j) = alpha_DR;
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = N_e * q;

  return P;
};


}