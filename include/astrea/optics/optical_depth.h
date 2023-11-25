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
  const auto tau = astrea::math::trapezoid(alpha_nu_X, x_X);
  return tau;
}


/**
 * Optical depth.
 * 
 * \param x_X Coordinates (positive, over single axis in ascending order) in au.
 * \param alpha_nu_X Absorption coefficients in au-1.
 * \return Optical depth in 1.
 */
inline Eigen::VectorXd tau_X(
  const Eigen::VectorXd& x_X,
  const Eigen::VectorXd& alpha_nu_X
) {
  const auto& X = x_X.size();

  Eigen::VectorXd tau_X = Eigen::VectorXd::Zero(X);
  for (int x = 0; x < X; x++) {
    tau_X[x] = tau(x_X.head(x + 1), alpha_nu_X.head(x + 1));
  }

  return tau_X;
}


}