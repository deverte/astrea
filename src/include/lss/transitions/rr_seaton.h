#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative recombination
 * 
 * formula: doi-10.1093%2Fmnras%2F119.2.81 (Seaton 1959)
 * inverse process: photoionization - dielectronic recombination
 */
Eigen::MatrixXd rr_seaton_rates(
  std::shared_ptr<Element> element,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& n_e = electron_number_density; // cm^{-3}
  auto& T_e = electron_temperature; // K
  auto Z = element->atomic_number(); // 1

  auto D = 5.197e-14; // cm^3 * s^{-1}
  auto E = 0.4288; // 1
  auto F = 0.5; // 1 // or 0.4 * log(lambda) ?
  auto G = 0.469; // 1

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

  Eigen::MatrixXd C_RR = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_recombination(initial, final)) {
        C_RR(i, j) = C_RR_Nj;
      }
    }
  }

  Eigen::MatrixXd R_RR = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  R_RR = n_e * C_RR;

  return R_RR;
}


}