/**
 * \file astrea/math/trapezoid.h
 * Trapezoidal integration.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math {


/**
 * Trapezoidal integration.
 * 
 * \param y Input array.
 * \param dx Spacing between sample points.
 * \return Definite integral.
 */
inline double trapezoid_dx(const Eigen::VectorXd& y, const double dx) {
  auto trapezoid = 0.0;
  for (int i = 0; i < y.size() - 1; i++) {
    trapezoid += (y(i) + y(i + 1)) / 2.0 * dx;
  }
  return trapezoid;
}


/**
 * Trapezoidal integration.
 * 
 * \param y Input array.
 * \param x Sample points corresponding to y values.
 * \return Definite integral.
 */
inline double trapezoid_x(const Eigen::VectorXd& y, const Eigen::VectorXd& x) {
  auto trapezoid = 0.0;
  for (int i = 0; i < y.size() - 1; i++) {
    const auto dx = x(i + 1) - x(i);
    trapezoid += (y(i) + y(i + 1)) / 2.0 * dx;
  }
  return trapezoid;
}


}