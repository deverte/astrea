#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/se_nist_o1.h"


namespace nlte {


/**
 * Spontaneous emission rates
 * 
 * data: NIST
 * inverse process: ?
 */
inline Eigen::MatrixXd se_nist_o1_rates(
  std::shared_ptr<Element> element
) {
  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      std::vector<double> A;
      std::vector<double> J;
      for (auto& transition : SENistO1::transitions()) {
        if (
          transition.initial == initial.term && transition.final == final.term
        ) {
          A.push_back(transition.rate);
          J.push_back(transition.initial_total_angular_momentum_quantum_number);
        }
      }

      P(i, j) = fm::sum(0, A.size(), [&](int k) {
        return
          + A[k]
          * (2.0 * J[k] + 1.0)
          / fm::sum(0, J.size(), [&](int l) { return J[l]; })
        ;
      });
    }
  }

  return P;
}


}