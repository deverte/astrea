/**
 * \file lss/transitions/rr_badnell_verner.h
 * Radiative recombination transitions rates using Verner formula and Badnell
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/rr_badnell.h"


namespace lss {


/**
 * Radiative recombination transitions rates using Verner formula
 * (doi-10.1086%2F192284) and Badnell data (doi-10.1086%2F508465).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd rr_badnell_verner_rates(
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

  Eigen::MatrixXd C_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    auto A = 0.0; // cm^3 * s^{-1}
    auto B = 0.0; // 1
    auto T_0 = 0.0; // K
    auto T_1 = 0.0; // K
    for (auto fit : RRBadnell::fit()) {
      if (fit.Z == Z && fit.N == Z - s - 1.0) {
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

    auto C_RR_Nj = // cm^3 * s^{-1}
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

    for (int j = 0; j <= L(s) - 1; j++) {
      C_RR(L(s) + K(s), j + K(s)) = C_RR_Nj;
    }
  }

  Eigen::MatrixXd R_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_RR = N_e * C_RR;

  return R_RR;
}


}