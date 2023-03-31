#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Collisional ionization
 * 
 * formula: doi-10.1016%2FS0375-9601(97)00287-9 (Hahn 1997)
 * inverse process: three-body recombination
 */
inline Eigen::MatrixXd ci_hahn_rates(
  std::shared_ptr<Element> element,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto Ry = RYDBERG_ENERGY; // eV

  auto Gamma = [](double Z, double n) { return 1.0; }; // 1, TODO: calculate Gaunt factor
  auto n = element->atomic_number(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& N_Z = N_e; // cm^{-3}
  auto& T_e = electron_temperature; // K
  auto Z = n - element->ionization_stage(); // 1

  auto I = [&](double Z, double n) { // eV
    return std::pow(Z, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double n) { return I(Z, n) / (k_B * T_e); }; // 1

  auto beta = [&](double Z, double n) { // cm^{-3} * s^{-1}
    return fm::cases({
      {
        (
          + 2.2e-8                              // cm^3 * s^{-1}
          * N_Z                                 // cm^{-3}
          * N_e                                 // cm^{-3}
          * std::pow(k_B * T_e / Ry, 1.0 / 2.0) // 1
          * std::pow(n, 4.0)                    // 1
          * std::exp(-x(n))                     // 1
          * Gamma(Z, n) / std::pow(Z, 4.0)      // 1
        ),
        x(n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        (
          + 2.2e-8                                              // cm^3 * s^{-1}
          * N_Z                                                      // cm^{-3}
          * N_e                                                      // cm^{-3}
          * std::pow(n, 2.0)                                         // 1
          * std::exp(-x(n))                                          // 1
          * Gamma(Z, n)                                              // 1
          / (std::pow(Z, 2.0) * std::pow(k_B * T_e / Ry, 1.0 / 2.0)) // 1
        ),
        x(n) >= 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_ionization(initial, final)) {
        q(i, j) = beta(Z, n);
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = q / N_e;

  return P;
}


}