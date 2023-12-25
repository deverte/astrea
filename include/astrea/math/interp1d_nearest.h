/**
 * \file astrea/math/interp1d_nearest.h
 * Nearest-neighbor interpolation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math::interp1d_nearest {


/**
 * Nearest-neighbor 1D interpolation.
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
  Eigen::Index nearest_index;
  (x_Y.array() - x).abs().minCoeff(&nearest_index);

  const auto y = y_Y(nearest_index);

  return y;
}


/**
 * Nearest-neighbor 1D interpolation.
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
  Eigen::VectorXd y_X = Eigen::VectorXd(x_X.size());

  for (int i = 0; i < x_X.size(); i++) {
    y_X(i) = f(x_Y, y_Y, x_X(i));
  }

  return y_X;
}


}