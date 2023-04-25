/**
 * \file lss/transitions/cbb_mashonkina_o1.h
 * Collisional bound-bound transitions rates for electrically neutral oxygen
 * using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <boost/math/interpolators/barycentric_rational.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/cbb_mashonkina_o1.h"


namespace lss {


/**
 * Collisional bound-bound transitions rates for electrically neutral oxygen
 * using Mashonkina data (from private communication).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd cbb_mashonkina_o1_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_number_density
) {
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::MatrixXd C_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 1; s++) {

    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (int j = 0; j <= L(s) - 1; j++) {
        auto final = elements[s]->levels()[j];

        for (auto transition : CBBMashonkinaO1::transitions()) {
          if (
            transition.initial == initial.term &&
            transition.final == final.term
          ) {
            auto vec_T = transition.temperatures;
            auto vec_q = transition.collision_rate_coefficients;

            boost::math::interpolators::barycentric_rational<double>
            C_CE_CD_ij(std::move(vec_T), std::move(vec_q)); // cm^3 * s^{-1}

            C_CE_CD(i + K(s), j + K(s)) = C_CE_CD_ij(T);

            vec_T = C_CE_CD_ij.return_x();
            vec_q = C_CE_CD_ij.return_y();
          }
        }
      }
    }
  }

  Eigen::MatrixXd R_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CE_CD = N_e * C_CE_CD;

  return R_CE_CD;
}


}