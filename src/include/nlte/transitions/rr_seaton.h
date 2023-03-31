#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace nlte {


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

  auto lambda = 157890.0 * std::pow(Z, 2.0) / T_e; // 1

  auto alpha = // cm^3 * s^{-1}
    + 5.197e-14                   // cm^3 * s^{-1}
    * Z                           // 1
    * std::pow(lambda, 1.0 / 2.0) // 1
    * (                           // 1
      + 0.4288                               // 1
      + 0.5 * std::log(lambda)               // 1 // or 0.4 * log(lambda) ?
      + 0.469 * std::pow(lambda, -1.0 / 3.0) // 1
    )
  ;

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_recombination(initial, final)) {
        q(i, j) = alpha;
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = n_e * q;

  return P;
}


}