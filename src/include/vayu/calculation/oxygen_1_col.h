#pragma once


#include <Eigen/Dense>

#include "../data/oxygen_1_col.h"
#include "../data/oxygen_1.h"
#include "../interpolation/linear_interpolant.h"


Eigen::MatrixXd oxygen_col_rates(
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  Oxygen oxygen;
  OxygenCol col;

  auto& T = temperature; // K
  auto& N_e = electron_number_density; // cm^{-3}
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(oxygen.levels.size(), oxygen.levels.size());
  Eigen::MatrixXd q = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(oxygen.levels.size(), oxygen.levels.size());

  for (int i = 0; i < oxygen.levels.size(); i++) {
    auto& initial = oxygen.levels[i];
    for (int j = 0; oxygen.levels.size(); j++) {
      auto& final = oxygen.levels[j];
      for (auto& transition : col.transitions) {
        if (
          transition.initial == initial.term && transition.final == final.term
        ) {
          LinearInterpolant q_ij; // cm^3 * s^{-1}
          q_ij.data_points(
            transition.temperatures,
            transition.collision_rate_coefficients
          );

          q(i, j) = q_ij(T);
        }
      }
    }
  }

  P = N_e * q;

  return P;
};