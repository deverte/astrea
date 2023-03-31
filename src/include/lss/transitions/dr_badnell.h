#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/dr_badnell.h"


namespace lss {


/**
 * Dielectronic recombination
 * 
 * A^{i+}(1s, ...) + e^- \rightarrow A^{(i - 1)+}_*(n_1 l_1; n_2 l_2)
 * A^{(i - 1)+}(n_1 l_1; n_2 l_2) \rightarrow
 *   A^{(i - 1)+}_*(n_3 l_3; n_2 l_2) + h \nu
 * A^{(i - 1)+}_*(n_3 l_3; n_2 l_2) \rightarrow
 *   A^{(i - 1)+}(n_3 l_3; n_4 l_4) + h \nu_1 + h \nu_2...
 * 
 * formula: doi-10.1086%2F508465 (Badnell 2006)
 * data: doi-10.1086%2F508465 (Badnell 2006)
 * inverse process: photoionization - radiative recombination
 */
inline Eigen::MatrixXd dr_badnell_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto N = element->ionization_stage(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto Z = element->atomic_number(); // 1

  std::vector<double> C; // cm^3 * s^{-1} * K^{3/2}
  std::vector<double> E; // K
  for (auto fit : DRBadnell::fit()) {
    if (fit.Z == Z && fit.N == Z - N - 1.0) {
      C = fit.C;
      E = fit.E;

      break;
    }
  }

  auto alpha_DR = fm::sum(0, C.size(), [&](int i) { // cm^3 * s^{-1}
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
}


}