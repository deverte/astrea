#pragma once


#include <cstring>
#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/se_nist_o1.h"


namespace lss {


/**
 * Spontaneous emission rates
 * 
 * data: NIST
 * inverse process: ?
 */
inline Eigen::MatrixXd se_nist_o1_rates(
  std::shared_ptr<Element> element
) {
  Eigen::MatrixXd R_SE = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_excitation(initial, final)) {
        std::vector<SENistO1Transition> transitions;
        for (auto transition : SENistO1::transitions()) {
          if (
            transition.initial == initial.term && transition.final == final.term
          ) {
            transitions.push_back(transition);
          }
        }

        Eigen::VectorXd R(transitions.size());
        Eigen::VectorXd J(transitions.size());
        auto K = R.size();
        for (int k = 0; k < R.size(); k++) {
          R(k) = transitions[k].rate;
          J(k) = transitions[k].initial_total_angular_momentum_quantum_number;
        }

        R_SE(i, j) = fm::cases({
          {
            + fm::sum(0, K, [&](int k) {
              return R(k) * (2.0 * J(k) + 1.0);
            })
            / fm::sum(0, K, [&](int l) { return 2.0 * J(l) + 1.0; }),
            K > 0
          },
          {0.0, true},
        });
      }
    }
  }

  return R_SE;
}


}