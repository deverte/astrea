/**
 * \file astrea/math/interp1d_log10y.h
 * Logarithmic interpolation over Y axis.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::math::interp1d_log10y {


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
  const auto ylog =
    astrea::math::interp1d_linear::f(x_Y, y_Y.array().log10(), x);
  const auto y = std::pow(10.0, ylog);
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
  Eigen::VectorXd ylog_X =
    astrea::math::interp1d_linear::f_X(x_Y, y_Y.array().log10(), x_X);
  Eigen::VectorXd y_X = Eigen::pow(10.0, ylog_X.array());
  return y_X;
}


}