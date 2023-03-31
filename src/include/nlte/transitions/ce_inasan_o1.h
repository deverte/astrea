#pragma once


#include <memory>

#include <boost/math/interpolators/barycentric_rational.hpp>
// #include <boost/math/interpolators/vector_barycentric_rational.hpp>
// #include <boost/math/interpolators/makima.hpp>
// #include <boost/math/interpolators/pchip.hpp>
#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/ce_inasan_o1.h"


namespace nlte {


/**
 * Collisional excitation / de-excitation
 * 
 * data: INASAN
 * inverse process: this
 */
inline Eigen::MatrixXd ce_inasan_o1_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K

  Eigen::MatrixXd q = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];
      for (auto& transition : CEInasanO1::transitions()) {
        if (
          transition.initial == initial.term &&
          transition.final == final.term
        ) {
          auto vec_T = transition.temperatures;
          auto vec_q = transition.collision_rate_coefficients;

          boost::math::interpolators::barycentric_rational<double>
          q_ij(std::move(vec_T), std::move(vec_q)); // cm^3 * s^{-1}

          q(i, j) = q_ij(T);
        }
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = N_e * q;

  return P;
}


}