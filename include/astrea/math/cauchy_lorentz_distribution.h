/**
 * \file astrea/math/cauchy_lorentz_distribution.h
 * Cauchy-Lorentz distribution.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>


namespace astrea::math::cauchy_lorentz_distribution {


/**
 * Cauchy-Lorentz distribution.
 * 
 * \param x_X x points.
 * \param x_0 Center.
 * \param gamma Scale parameter.
 * \return Distribution.
 */
inline Eigen::VectorXd P_X(
  const Eigen::VectorXd& x_X,
  const double& x_0,
  const double& gamma
) {
  const auto pi = 3.141592653589793;

  const auto& X = x_X.size();

  const auto P_X =
    (1.0 / pi) * (gamma / ((x_X.array() - x_0).pow(2.0) + std::pow(gamma, 2.0)))
  ;

  return P_X;
}


}