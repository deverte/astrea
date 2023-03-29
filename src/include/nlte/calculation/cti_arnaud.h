#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "./transition_type.h"
#include "../data/constants.h"
#include "../data/cti_arnaud.h"
#include "../data/element.h"


namespace nlte {


/**
 * Charge transfer ionization (Arnaud formula)
 */
inline Eigen::MatrixXd cti_arnaud_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto N = element->number_of_ion_electrons_before_recombination(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& T = temperature; // K
  auto T_4 = T / 1.0e4; // 1
  auto Z = element->atomic_number(); // 1

  // TODO: Now ionization acts only with H, add He.
  auto a = 0.0; // cm^3 * s^{-1}
  auto b = 0.0; // 1
  auto c = 0.0; // 1
  auto delta_E = 0.0; // eV
  auto T_max = 0.0; // K
  auto T_min = 0.0; // K
  for (auto fit : CTIArnaud::fit()) {
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
      delta_E = fit.delta_E;

      break;
    }
  }
  if (T < T_min || T > T_max) {
    return P;
  }

  auto alpha = // cm^3 * s^{-1}
    a * std::pow(T_4, b) * std::exp(-c * T_4) * std::exp(-delta_E / (k_B * T));
  if (Z == 8.0) {
    alpha =
      a * std::exp(-delta_E / (k_B * T)) * (1.0 - 0.93 * std::exp(-c * T_4))
    ;
  }

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_ionization(initial, final)) {
        q(i, j) = alpha;
      }
    }
  }

  P = N_e * q;

  return P;
};


}