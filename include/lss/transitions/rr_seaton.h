/**
 * \file lss/transitions/rr_seaton.h
 * Radiative recombination transitions rates using Seaton formula.
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
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative recombination transitions rates using Seaton formula
 * (doi-10.1093%2Fmnras%2F119.2.81).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
Eigen::MatrixXd rr_seaton_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& n_e = electron_number_density; // cm^{-3}
  auto& T_e = electron_temperature; // K
  auto Z = elements[0]->atomic_number(); // 1

  auto D = 5.197e-14; // cm^3 * s^{-1}
  auto E = 0.4288; // 1
  auto F = 0.5; // 1 // or 0.4 * log(lambda) ?
  auto G = 0.469; // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto lambda = 157890.0 * std::pow(Z, 2.0) / T_e; // 1

  auto C_RR_Nj = // cm^3 * s^{-1}
    + D                           // cm^3 * s^{-1}
    * Z                           // 1
    * std::pow(lambda, 1.0 / 2.0) // 1
    * (                           // 1
      + E                                // 1
      + F * std::log(lambda)             // 1
      + G * std::pow(lambda, -1.0 / 3.0) // 1
    )
  ;

  Eigen::MatrixXd C_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_RR(L(s) + K(s), j + K(s)) = C_RR_Nj;
    }
  }

  Eigen::MatrixXd R_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_RR = n_e * C_RR;

  return R_RR;
}


}