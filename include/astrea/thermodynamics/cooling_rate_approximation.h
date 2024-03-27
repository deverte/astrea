/**
 * \file astrea/thermodynamics/cooling_rate_approximation.h
 * Cooling rate approximation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/math/interp1d_log10xy.h"


namespace astrea::thermodynamics::cooling_rate_approximation {


/**
 * Cooling rate approximation.
 * 
 * \param Lambda_vs_T Cooling efficiency.
 * Axis 0: Bivariate data (row).
 *   0: Temperature in K.
 *   1: Cooling efficiency in erg s-1 cm3.
 * Axis 1: Bivariate pair index (column).
 * \param T_X Temperatures in K.
 * \param N_e_X Electron number densities in cm-3.
 * \param N_A_X Element number densities in cm-3.
 * \return Cooling rates in erg s-1 cm-3.
 */
inline Eigen::VectorXd L_X(
  const Eigen::MatrixXd& Lambda_vs_T,
  const Eigen::VectorXd& T_X,
  const Eigen::VectorXd& N_e_X,
  const Eigen::VectorXd& N_A_X
) {
  const auto& T_ = Lambda_vs_T.row(0);
  const auto& Lambda_ = Lambda_vs_T.row(1);

  const auto Lambda = astrea::math::interp1d_log10xy::f_X(T_, Lambda_, T_X);

  const auto L = Lambda.array() * N_A_X.array() * N_e_X.array();

  return L;
}


}