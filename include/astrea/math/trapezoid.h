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
 * \param y_X Input array.
 * \param dx Spacing between sample points.
 * \return Definite integral.
 */
inline double trapezoid_dx(const Eigen::VectorXd& y_X, const double& dx) {
  auto trapezoid = 0.0;
  for (int i = 0; i < y_X.size() - 1; i++) {
    trapezoid += (y_X(i) + y_X(i + 1)) / 2.0 * dx;
  }
  return trapezoid;
}


/**
 * Trapezoidal integration.
 * 
 * \param y_X Input array.
 * \param x_X Sample points corresponding to y values.
 * \return Definite integral.
 */
inline double
trapezoid(const Eigen::VectorXd& y_X, const Eigen::VectorXd& x_X) {
  auto trapezoid = 0.0;
  for (int i = 0; i < y_X.size() - 1; i++) {
    const auto dx = x_X(i + 1) - x_X(i);
    trapezoid += (y_X(i) + y_X(i + 1)) / 2.0 * dx;
  }
  return trapezoid;
}


}