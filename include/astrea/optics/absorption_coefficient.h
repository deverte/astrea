/**
 * \file astrea/optics/absorption_coefficient.h
 * Absorption coefficient.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>


namespace astrea::optics::absorption_coefficient {


/**
 * Absorption coefficients.
 * 
 * \param n Element number density in cm-3.
 * \param g_j Statistical weight of level j in 1.
 * \param g_i Statistical weight of level i in 1.
 * \param nu_ij Frequency in s-1.
 * \param A_ji Spontaneous emission rate in s-1.
 * \param H_E Voigt function in s.
 * \return Absorption coefficients in au-1.
 */
inline Eigen::VectorXd alpha_nu_E(
  const double& n,
  const double& g_j,
  const double& g_i,
  const double& nu_ij,
  const double& A_ji,
  const Eigen::VectorXd& H_E
) {
  const auto a = 6.684587e-14; // au-1 cm
  const auto pi = 3.141592653589793; // 1
  const auto c = 2.99792458e10; // cm s-1

  const auto alpha_nu = // au-1
    + a
    * A_ji
    * g_j
    / g_i
    * std::pow(c, 2.0)
    / (8.0 * pi * std::pow(nu_ij, 2.0))
    * n
    * H_E.array()
  ;

  return alpha_nu;
}


/**
 * Absorption coefficients.
 * 
 * \param n_X Element number densities in cm-3.
 * \param g_j Statistical weight of level j in 1.
 * \param g_i Statistical weight of level i in 1.
 * \param nu_ij Frequency in s-1.
 * \param A_ji Spontaneous emission rate in s-1.
 * \param H_E Voigt function in s.
 * \return Absorption coefficients in au-1.
 */
inline Eigen::MatrixXd alpha_nu_XE(
  const Eigen::VectorXd& n_X,
  const double& g_j,
  const double& g_i,
  const double& nu_ij,
  const double& A_ji,
  const Eigen::VectorXd& H_E
) {
  const auto& X = n_X.size();
  const auto& E = H_E.size();

  Eigen::MatrixXd alpha_nu_XE(X, E); // au-1
  for (int x = 0; x < X; x++) {
    alpha_nu_XE.row(x) = alpha_nu_E(n_X(x), g_j, g_i, nu_ij, A_ji, H_E);
  }

  return alpha_nu_XE;
}


}