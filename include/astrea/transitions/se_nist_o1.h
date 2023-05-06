/**
 * \file astrea/transitions/se_nist_o1.h
 * Spontaneous emission transitions rates using NIST data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/se_nist_o1.h"


namespace astrea {


/**
 * Spontaneous emission transitions rates using NIST data.
 * 
 * \param elements Elements.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd
se_nist_o1_rates(std::vector<std::shared_ptr<Element>> elements) {
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  auto se_nist_o1 = SENistO1();

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  std::pair<Eigen::MatrixXd, frequency> R_SE;
  R_SE.first = Eigen::MatrixXd::Zero(K(S), K(S));
  R_SE.second = pow<-1>(second);
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      for (int j = 0; j <= L(s) - 1; j++) {
        auto initial = elements[s]->levels()[i];
        auto final = elements[s]->levels()[j];

        std::vector<ISENistO1Transition> transitions;
        for (auto transition : se_nist_o1.transitions()) {
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

        R_SE.first(i + K(s), j + K(s)) = fm::cases<quantity<frequency>>({
          {[&]() { return 0.0 * pow<-1>(second); }, (i == j) || (M <= 0)},
          {
            [&]() {
              return
                + fm::sum<quantity<frequency>>(0, M - 1, [&](int m) {
                  return (R(m) * pow<-1>(second)) * (2.0 * J(m) + 1.0);
                })
                / fm::sum<double>(0, M - 1, [&](int m) {
                  return 2.0 * J(m) + 1.0;
                })
              ;
            },
            (i != j) || (M > 0)
          },
        }) / R_SE.second;
      }
    }
  }

  return R_SE.first;
}


}