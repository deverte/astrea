#pragma once


#include <memory>

#include <Eigen/Dense>

#include "../data/element.h"
#include "../data/oxygen_1_col.h"
#include "../interpolation/linear_interpolant.h"


namespace nlte {


/**
 * INASAN
 */
Eigen::MatrixXd oxygen_1_col_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& T = temperature; // K
  auto& N_e = electron_number_density; // cm^{-3}
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::MatrixXd q = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];
      for (auto& transition : OxygenCol::transitions()) {
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


}