#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/ctr_arnaud.h"


namespace lss {


/**
 * Charge transfer recombination
 * 
 * formula: bibcode-1985A&AS...60..425A (Arnaud 1985)
 * data: bibcode-1985A&AS...60..425A (Arnaud 1985)
 * inverse process: charge transfer ionization
 */
inline Eigen::MatrixXd ctr_arnaud_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto N = element->ionization_stage(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  Eigen::MatrixXd R_CTR = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& T = temperature; // K
  auto T_4 = T / 1.0e4; // 1
  auto Z = element->atomic_number(); // 1

  // TODO: Now recombination acts only with H, add He.
  auto a = 0.0; // cm^3 * s^{-1}
  auto b = 0.0; // 1
  auto c = 0.0; // 1
  auto d = 0.0; // 1
  auto T_max = 0.0; // K
  auto T_min = 0.0; // K
  for (auto fit : CTRArnaud::fit()) {
    if (fit.atomic_number == Z && fit.ionization_stage == N) {
      if (fit.temperatures_range.size() == 1) {
        T_min =
          fit.temperatures_range[0] - std::sqrt(fit.temperatures_range[0]);
        T_max =
          fit.temperatures_range[0] + std::sqrt(fit.temperatures_range[0]);
      }
      else if (fit.temperatures_range.size() == 2) {
        T_min = fit.temperatures_range[0];
        T_max = fit.temperatures_range[1];
      }

      a = fit.a;
      b = fit.b;
      c = fit.c;
      d = fit.d;

      break;
    }
  }
  if (T < T_min || T > T_max) {
    return R_CTR;
  }

  auto C_CTR_Nj = // cm^3 * s^{-1}
    a * std::pow(T_4, b) * (1.0 + c * std::exp(d * T_4))
  ;

  Eigen::MatrixXd C_CTR = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_recombination(initial, final)) {
        C_CTR(i, j) = C_CTR_Nj;
      }
    }
  }

  R_CTR = N_e * C_CTR;

  return R_CTR;
}


}