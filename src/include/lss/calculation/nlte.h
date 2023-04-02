#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"


namespace lss {


inline Eigen::MatrixXd nlte_transition_operator(
  std::shared_ptr<Element> element,
  Eigen::MatrixXd rates_matrix // s^{-1}
) {
  auto& P = rates_matrix; // s^{-1}

  Eigen::MatrixXd R = Eigen::MatrixXd::Zero(P.rows(), P.cols()); // s^{-1}
  for (int i = 0; i < R.rows(); i++) {
    for (int j = 0; j < R.cols(); j++) {
      R(i, j) = fm::cases({
        {
          fm::sum(0, R.cols(), [&](int k) {
            return fm::cases({
              {-P(i, k), i != k},
              {0.0, i == k},
            });
          }),
          i == j
        },
        {P(j, i), i != j},
      });
    }
  }

  return R;
}


inline Eigen::VectorXd nlte_population(
  std::shared_ptr<Element> element,
  Eigen::VectorXd population /* 1 */,
  double delta_time /* s */,
  Eigen::MatrixXd rates_matrix // s^{-1}
) {
  auto R = nlte_transition_operator(
    element,
    rates_matrix
  ); // s^{-1}
  auto& dt = delta_time; // s
  auto I = Eigen::MatrixXd::Identity(R.rows(), R.cols()); // 1
  auto& n_t = population; // 1

  auto n_t_plus_dt = (I - R * dt).inverse() * n_t; // 1

  auto norm_n_t_plus_dt = n_t_plus_dt / n_t_plus_dt.sum();

  return norm_n_t_plus_dt;
}


}