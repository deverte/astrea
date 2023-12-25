/**
 * \file astrea/optics/optical_depth.h
 * Optical depth.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/math/trapezoid.h"
#include "astrea/optics/absorption_coefficient.h"


namespace astrea::optics::optical_depth {


/**
 * Optical depth.
 * 
 * \param x_X Coordinates (positive, over single axis in ascending order) in au.
 * \param alpha_nu_X Absorption coefficients in au-1.
 * \return Optical depth in 1.
 */
inline double tau(
  const Eigen::VectorXd& x_X,
  const Eigen::VectorXd& alpha_nu_X
) {
  const auto tau = astrea::math::trapezoid::F(alpha_nu_X, x_X);
  return tau;
}


/**
 * Optical depth.
 * 
 * \param x_X Coordinates (positive, over single axis in ascending order) in au.
 * \param alpha_nu_XE Absorption coefficients in au-1.
 * \return Optical depth in 1.
 */
inline Eigen::VectorXd tau_E(
  const Eigen::VectorXd& x_X,
  const Eigen::MatrixXd& alpha_nu_XE
) {
  const auto& E = alpha_nu_XE.cols();

  Eigen::VectorXd tau_E = Eigen::VectorXd::Zero(E);
  for (int e = 0; e < E; e++) {
    tau_E(e) = tau(x_X, alpha_nu_XE.col(e));
  }

  return tau_E;
}


}