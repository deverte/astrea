#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"


namespace lss {


inline Eigen::MatrixXd nlte_transition_operator(
  Eigen::MatrixXd rates_matrix // s^{-1}
) {
  auto& R = rates_matrix; // s^{-1}

  Eigen::MatrixXd Q = Eigen::MatrixXd::Zero(R.rows(), R.cols()); // s^{-1}
  auto K = Q.cols(); // 1

  for (int i = 0; i <= K - 1; i++) {
    for (int j = 0; j <= K - 1; j++) {
      Q(i, j) = fm::cases({
        {
          [&]() {
            return
              - fm::sum(0, K - 1, [&](int k) {
                return fm::cases({
                  {[&]() { return R(i, k); }, i != k},
                  {[]() { return 0.0; }, i == k},
                });
              })
            ;
          },
          i == j
        },
        {[&]() { return R(j, i); }, i != j},
      });
    }
  }

  return Q;
}


inline Eigen::VectorXd nlte_population(
  Eigen::VectorXd population /* 1 */,
  double delta_time /* s */,
  Eigen::MatrixXd rates_matrix // s^{-1}
) {
  auto Q_tot = nlte_transition_operator(
    rates_matrix
  ); // s^{-1}
  auto& dt = delta_time; // s
  auto I = Eigen::MatrixXd::Identity(Q_tot.rows(), Q_tot.cols()); // 1
  auto& n_t = population; // 1

  auto P = (I - Q_tot * dt).inverse(); // 1

  auto n_t_plus_dt = P * n_t; // 1

  auto norm_n_t_plus_dt = n_t_plus_dt / n_t_plus_dt.sum();

  return norm_n_t_plus_dt;
}


}