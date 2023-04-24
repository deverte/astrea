#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

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
  std::vector<std::shared_ptr<Element>> elements
) {
  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::MatrixXd R_SE = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      for (int j = 0; j <= L(s) - 1; j++) {
        auto initial = elements[s]->levels()[i];
        auto final = elements[s]->levels()[j];

        std::vector<SENistO1Transition> transitions;
        for (auto transition : SENistO1::transitions()) {
          if (
            (transition.initial == initial.term) &&
            (transition.final == final.term)
          ) {
            transitions.push_back(transition);
          }
        }

        int M = transitions.size();
        Eigen::VectorXd R(M);
        Eigen::VectorXd J(M);
        for (int m = 0; m <= M - 1; m++) {
          R(m) = transitions[m].rate;
          J(m) = transitions[m].initial_total_angular_momentum_quantum_number;
        }

        R_SE(i + K(s), j + K(s)) = fm::cases({
          {[&]() { return 0.0; }, (i == j) || (M <= 0)},
          {
            [&]() {
              return
                + fm::sum(0, M - 1, [&](int m) {
                  return R(m) * (2.0 * J(m) + 1.0);
                })
                / fm::sum(0, M - 1, [&](int m) { return 2.0 * J(m) + 1.0; })
              ;
            },
            (i != j) || (M > 0)
          },
        });
      }
    }
  }

  return R_SE;
}


}