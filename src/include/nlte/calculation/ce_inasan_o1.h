#pragma once


#include <memory>

#include <Eigen/Dense>

#include "../data/element.h"
#include "../data/ce_inasan_o1.h"
#include "../interpolation/linear_interpolant.h"


namespace nlte {


/**
 * Collisional excitation (INASAN)
 */
Eigen::MatrixXd ce_inasan_o1_rates(
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
      for (auto& transition : CEInasanO1::transitions()) {
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