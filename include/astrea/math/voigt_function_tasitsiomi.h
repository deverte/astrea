/**
 * \file astrea/math/voigt_function.h
 * Voigt function Tasitsiomi approximation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::math::voigt_function_tasitsiomi {


/**
 * Voigt function Tasitsiomi approximation.
 * 
 * \param u_X u points.
 * \param a Normalized scaled parameter.
 * \return Distribution.
 */
inline Eigen::VectorXd H_X(const Eigen::VectorXd& u_X, const double& a) {
  const auto pi = 3.141592653589793;
  const auto sqrt_pi = 1.772453850905516;
  const auto chi = 21.0;
  const auto kappa_0 = 0.1117;
  const auto kappa_1 = 4.421;
  const auto kappa_2 = -9.207;
  const auto kappa_3 = 5.674;
  const auto zeta_0 = 0.855;
  const auto zeta_1 = 3.42;

  const auto& X = u_X.size();

  const auto z_X =
    (u_X.array().pow(2.0) - zeta_0) / (u_X.array().pow(2.0) + zeta_1)
  ;

  Eigen::VectorXd q_X =
    z_X.array()
    * (1 + chi / u_X.array().pow(2.0))
    * (a / (pi * (u_X.array().pow(2.0) + 1.0)))
    * (
      + kappa_0
      + z_X.array()
      * (kappa_1 + z_X.array() * (kappa_2 + kappa_3 * z_X.array()))
    )
  ;
  for (int i = 0; i < X; i++) {
    if (z_X(i) <= 0.0) {
      q_X(i) = 0.0;
    }
  }

  const auto H_X =
    sqrt_pi * (q_X.array() + (-u_X.array().pow(2.0)).exp() / sqrt_pi)
  ;

  return H_X;
}


}