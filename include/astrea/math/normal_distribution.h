/**
 * \file astrea/math/normal_distribution.h
 * Normal distribution.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math::normal_distribution {


/**
 * Normal distribution.
 * 
 * \param x_X x points.
 * \param x_0 Center.
 * \param sigma Standard deviation.
 * \return Distribution.
 */
inline Eigen::VectorXd P_X(
  const Eigen::VectorXd& x_X,
  const double& x_0,
  const double& sigma
) {
  const auto sqrt_2_pi = 2.506628274631001;

  const auto P_X =
    + (1.0 / (sigma * sqrt_2_pi))
    * ((-1.0 / 2.0) * ((x_X.array() - x_0) / sigma).pow(2.0)).exp()
  ;

  return P_X;
}


}