/**
 * \file astrea/math/interp1d_log10x.h
 * Logarithmic interpolation over X axis.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::math::interp1d_log10x {


/**
 * Logarithmic 1D interpolation.
 * 
 * \param x_Y x points.
 * \param y_Y y points.
 * \param x x point to interpolate.
 * \return Interpolated y.
 */
inline double f(
  const Eigen::VectorXd& x_Y,
  const Eigen::VectorXd& y_Y,
  const double& x
) {
  const auto y =
    astrea::math::interp1d_linear::f(x_Y.array().log10(), y_Y, std::log10(x));
  return y;
}


/**
 * Logarithmic 1D interpolation.
 * 
 * \param x_Y x points.
 * \param y_Y y points.
 * \param x_X x points to interpolate.
 * \return Interpolated y.
 */
inline Eigen::VectorXd f_X(
  const Eigen::VectorXd& x_Y,
  const Eigen::VectorXd& y_Y,
  const Eigen::VectorXd& x_X
) {
  Eigen::VectorXd y_X = astrea::math::interp1d_linear::f_X(
    x_Y.array().log10(),
    y_Y,
    x_X.array().log10()
  );
  return y_X;
}


}