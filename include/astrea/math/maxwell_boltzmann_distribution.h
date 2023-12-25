/**
 * \file astrea/math/maxwell_boltzmann_distribution.h
 * Maxwell-Boltzmann distribution.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>


namespace astrea::math::maxwell_boltzmann_distribution {


/**
 * Maxwell-Boltzmann velocity distribution.
 * 
 * \param v_X Velocities.
 * \param T_X Temperatures.
 * \param m Mass.
 * \return Distribution.
 */
inline Eigen::VectorXd P_v_X(
  const Eigen::VectorXd& v_X,
  const Eigen::VectorXd& T_X,
  const double& m
) {
  const auto pi = 3.141592653589793;
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto P_X =
    (m / (2.0 * pi * k_B * T_X.array())).pow(3.0 / 2.0)
    * (-m * v_X.array().pow(2.0) / (2.0 * k_B * T_X.array())).exp()
  ;

  return P_X;
}


}