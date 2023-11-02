/**
 * \file astrea/cooling/cooling_rate_approximation.h
 * Cooling rate approximation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::cooling {


/**
 * Cooling rate approximation.
 * 
 * \param Lambda_vs_T Cooling efficiency.
 * Axis 0: Bivariate data (row).
 *   0: Temperature in K.
 *   1: Cooling efficiency in erg s-1 cm3.
 * Axis 1: Bivariate pair index (column).
 * \param T Temperatures in K.
 * Axis 0: Coordinate index.
 * \param N_e Electron number densities in cm-3.
 * Axis 0: Coordinate index.
 * \param N_A Element number densities in cm-3.
 * Axis 0: Coordinate index.
 * \return Cooling rates in erg s-1 cm-3.
 * Axis 0: Coordinate index.
 */
inline Eigen::VectorXd L_approximation(
  const Eigen::MatrixXd& Lambda_vs_T,
  const Eigen::VectorXd& T,
  const Eigen::VectorXd& N_e,
  const Eigen::VectorXd& N_A
) {
  const auto& T_ = Lambda_vs_T.row(0);
  const auto& Lambda_ = Lambda_vs_T.row(1);

  const auto Lambda = astrea::math::interp1d_linear_xs(T_, Lambda_, T);

  const auto L = Lambda.array() * N_A.array() * N_e.array();

  return L;
}


}