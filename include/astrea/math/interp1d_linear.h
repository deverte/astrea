/**
 * \file astrea/math/interp1d_linear.h
 * Linear interpolation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math {


/**
 * Linear 1D interpolation.
 * 
 * \param xs x points.
 * \param ys y points.
 * \param x x point to interpolate.
 * \return Interpolated y.
 */
inline double interp1d_linear_x(
  const Eigen::VectorXd& xs,
  const Eigen::VectorXd& ys,
  const double x
) {
  if (x < xs(0) || x > xs(Eigen::last)) {
    return 0.0;
  }

  Eigen::Index nearest_index;
  (xs.array() - x).abs().minCoeff(&nearest_index);
  Eigen::Index l = nearest_index - (x < xs(nearest_index)); // left index

  const auto y =
    + (ys(l) * (xs(l + 1) - x) + ys(l + 1) * (x - xs(l)))
    / (xs(l + 1) - xs(l))
  ;

  return y;
}


/**
 * Linear 1D interpolation.
 * 
 * \param xs x points.
 * \param ys y points.
 * \param x x points to interpolate.
 * \return Interpolated y.
 */
inline Eigen::VectorXd interp1d_linear_xs(
  const Eigen::VectorXd& xs,
  const Eigen::VectorXd& ys,
  const Eigen::VectorXd& x
) {
  Eigen::VectorXd y = Eigen::VectorXd(x.size());

  for (int i = 0; i < x.size(); i++) {
    y(i) = interp1d_linear_x(xs, ys, x(i));
  }

  return y;
}


}