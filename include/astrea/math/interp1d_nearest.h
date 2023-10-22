/**
 * \file astrea/math/interp1d_nearest.h
 * Nearest-neighbor interpolation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math {


/**
 * Nearest-neighbor 1D interpolation.
 * 
 * \param xs x points.
 * \param ys y points.
 * \param x x point to interpolate.
 * \return Interpolated y.
 */
inline double interp1d_nearest_x(
  const Eigen::VectorXd& xs,
  const Eigen::VectorXd& ys,
  const double x
) {
  Eigen::Index nearest_index;
  (xs.array() - x).abs().minCoeff(&nearest_index);

  const auto y = ys(nearest_index);

  return y;
}


/**
 * Nearest-neighbor 1D interpolation.
 * 
 * \param xs x points.
 * \param ys y points.
 * \param x x points to interpolate.
 * \return Interpolated y.
 */
inline Eigen::VectorXd interp1d_nearest_xs(
  const Eigen::VectorXd& xs,
  const Eigen::VectorXd& ys,
  const Eigen::VectorXd& x
) {
  Eigen::VectorXd y = Eigen::VectorXd(x.size());

  for (int i = 0; i < x.size(); i++) {
    y(i) = interp1d_nearest_x(xs, ys, x(i));
  }

  return y;
}


}