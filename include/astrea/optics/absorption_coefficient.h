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
 * Absorption coefficient.
 * 
 * \param n Element number density in cm-3.
 * \param g_i Statistical weight of level i in 1.
 * \param g_j Statistical weight of level j in 1.
 * \param E_ij Energy difference in eV.
 * \param A_ji Spontaneous emission rate in s-1.
 * \param nu Frequency in s-1.
 * \return Absorption coefficient in au-1.
 */
inline double alpha_nu_(
  const double& n,
  const double& g_i,
  const double& g_j,
  const double& E_ij,
  const double& A_ji,
  const double& nu
) {
  const auto h = 4.135667669e-15; // eV s
  const auto a = 2.139867828917797e33; // cm3 au-1 s-2
  const auto b = 157.9136704174297; // 1
  const auto nu_ij = E_ij / h; // s-1

  const auto alpha_nu = // au-1
    + a
    * n
    * g_j / g_i
    / std::pow(nu_ij, 2.0)
    / (b * std::pow((nu - nu_ij) / A_ji, 2.0) + 1.0)
  ;

  return alpha_nu;
}


/**
 * Absorption coefficient.
 * 
 * \param n Element number density in cm-3.
 * \param g_K Statistical weights in 1.
 * \param E_K Energies in eV.
 * \param A_KK Spontaneous emission rates in s-1.
 * \param nu Frequency in s-1.
 * \return Absorption coefficient in au-1.
 */
inline double alpha_nu(
  const double& n,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K,
  const Eigen::MatrixXd& A_KK,
  const double& nu
) {
  const auto& K = g_K.size();

  auto alpha_nu = 0.0;
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      const auto E_ij = E_K(j) - E_K(i); // eV
      alpha_nu += alpha_nu_(n, g_K(i), g_K(j), E_ij, A_KK(j, i), nu); // au-1
    }
  }

  return alpha_nu;
}


/**
 * Absorption coefficients.
 * 
 * \param n_X Element number densities in cm-3.
 * \param g_K Statistical weights in 1.
 * \param E_K Energies in eV.
 * \param A_KK Spontaneous emission rates in s-1.
 * \param nu Frequency in s-1.
 * \return Absorption coefficients in au-1.
 */
inline Eigen::VectorXd alpha_nu_X(
  const Eigen::VectorXd& n_X,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K,
  const Eigen::MatrixXd& A_KK,
  const double& nu
) {
  const auto& X = n_X.size();

  Eigen::VectorXd alpha_nu_X(X);
  for (int x = 0; x < X; x++) {
    alpha_nu_X(x) = alpha_nu(n_X(x), g_K, E_K, A_KK, nu); // au-1
  }

  return alpha_nu_X;
}


}