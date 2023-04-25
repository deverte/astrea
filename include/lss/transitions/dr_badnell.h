/**
 * \file lss/transitions/dr_badnell.h
 * Dielectronic recombination transitions rates using Badnell formula and data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/dr_badnell.h"


namespace lss {


/**
 * Dielectronic recombination transitions rates using Badnell formula and data
 * (doi-10.1086%2F508465).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd dr_badnell_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_number_density
) {
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto Z = elements[0]->atomic_number(); // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::MatrixXd C_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    std::vector<double> C; // cm^3 * s^{-1} * K^{3/2}
    std::vector<double> E; // K
    for (auto fit : DRBadnell::fit()) {
      if (fit.Z == Z && fit.N == Z - s - 1.0) {
        C = fit.C;
        E = fit.E;

        break;
      }
    }
    auto M = C.size();

    auto C_DR_Nj = fm::sum(0, M - 1, [&](int i) { // cm^3 * s^{-1}
      return std::pow(T, -3.0 / 2.0) * C[i] * std::exp(-E[i] / T);
    });

    for (int j = 0; j <= L(s) - 1; j++) {
      C_DR(L(s) + K(s), j + K(s)) = C_DR_Nj;
    }
  }

  Eigen::MatrixXd R_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_DR = N_e * C_DR;

  return R_DR;
}


}