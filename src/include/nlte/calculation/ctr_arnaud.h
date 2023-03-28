#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "../data/ctr_arnaud.h"
#include "../data/element.h"


namespace nlte {


/**
 * Charge transfer recombination (Arnaud formula)
 */
Eigen::MatrixXd ctr_arnaud_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::MatrixXd q = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& T = temperature; // K
  auto T_4 = T / 1.0e4;
  auto& N_e = electron_number_density; // cm^{-3}
  auto Z = element->atomic_number(); // 1
  auto N = element->number_of_ion_electrons_before_recombination(); // 1
  auto T_min = 0.0; // K
  auto T_max = 0.0; // K
  auto a = 0.0; // cm^3 * s^{-1}
  auto b = 0.0; // 1
  auto c = 0.0; // 1
  auto d = 0.0; // 1
  auto alpha = 0.0; // cm^3 * s^{-1}

  // TODO: Now recombination acts only with H, add He.
  for (auto fit : CTRArnaud::fit()) {
    if (fit.atomic_number == Z && fit.ionization_stage == Z - N) {
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
    }
    break;
  }

  if (T < T_min || T > T_max) {
    return P;
  }

  alpha = a * std::pow(T_4, b) * (1.0 + c * std::exp(d * T_4));

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (
        initial.term == final.limit_term &&
        final.term == initial.ground_state_term
      ) {
        q(i, j) = alpha;
      }
    }
  }

  P = N_e * q;

  return P;
};


}