/**
 * \file astrea/math/voigt_function.h
 * Voigt function.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>

#include "astrea/math/trapezoid.h"


namespace astrea::math::voigt_function {


/**
 * Voigt function.
 * 
 * \param u_X u points.
 * \param a Normalized scaled parameter.
 * \param Y Number of integration points.
 * \return Distribution.
 */
inline Eigen::VectorXd H_X(
  const Eigen::VectorXd& u_X,
  const double& a,
  const int& Y = int(1e3)
) {
  const auto pi = 3.141592653589793;

  const auto& X = u_X.size();

  const Eigen::VectorXd w_Y = // s-1
    Eigen::VectorXd::LinSpaced(Y, u_X.minCoeff(), u_X.maxCoeff());

  Eigen::MatrixXd f_XY = Eigen::MatrixXd(X, Y);
  for (int i = 0; i < X; i++) {
    f_XY.row(i) =
      (-w_Y.array().pow(2.0)).exp()
      / ((-w_Y.array() + u_X(i)).pow(2.0) + std::pow(a, 2.0))
    ;
  }

  Eigen::VectorXd H_X = Eigen::VectorXd(X);
  for (int i = 0; i < X; i++) {
    H_X(i) = (a / pi) * trapezoid::F(f_XY.row(i), w_Y);
  }

  return H_X;
}


}