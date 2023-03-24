#pragma once


#include <memory>

#include <Eigen/Dense>

#include "../data/element.h"
#include "../data/oxygen_1_spontaneous_emission.h"


namespace nlte {


/**
 * NIST
 */
Eigen::MatrixXd oxygen_1_spontaneous_emission_rates(
  std::shared_ptr<Element> element
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      double sum_total_angular_momentum_quantum_numbers = 0.0;
      for (auto& transition : OxygenSpontaneousEmission::transitions()) {
        if (
          transition.initial == initial.term && transition.final == final.term
        ) {
          sum_total_angular_momentum_quantum_numbers +=
            + 2.0 * transition.initial_total_angular_momentum_quantum_number
            + 1.0
          ;
        }
      }

      for (auto& transition : OxygenSpontaneousEmission::transitions()) {
        if (
          transition.initial == initial.term && transition.final == final.term
        ) {
          P(i, j) +=
            + transition.rate
            * (
              + 2.0 * transition.initial_total_angular_momentum_quantum_number
              + 1.0
            )
            / sum_total_angular_momentum_quantum_numbers
          ;
        }
      }
    }
  }

  return P;
};


}