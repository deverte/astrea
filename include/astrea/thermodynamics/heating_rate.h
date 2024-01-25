/**
 * \file astrea/thermodynamics/heating_rate.h
 * Heating rate.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::thermodynamics::heating_rate {


/**
 * Heating rate.
 * 
 * \param n_K Electrons population in 1.
 * Must be sorted over energies!
 * \param R_KK Transitions rates in s-1.
 * Must be sorted over energies!
 * \param E_K Energies of element z in eV.
 * Must be sorted!
 * \return Heating rate in erg s-1 cm-3.
 */
inline double H(
  const Eigen::VectorXd& n_K,
  const Eigen::MatrixXd& R_KK,
  const Eigen::VectorXd& E_K
) {
  const auto a = 1.602176634e-12; // erg eV-1
  const auto& K = n_K.size();

  auto H = 0.0;
  for (int j = 0; j < K; j++) {
    for (int i = 0; i < j; i++) {
      H += a * (E_K(j) - E_K(i)) * R_KK(j, i) * n_K(j);
    }
  }

  return H;
}


/**
 * Heating rate.
 * 
 * \param x_X Any array with coordinates shape.
 * \param n_XK Electrons population in 1.
 * Must be sorted over energies!
 * \param R_XKK Transitions rates in s-1.
 * Must be sorted over energies!
 * \param E_K Energies of element z in eV.
 * Must be sorted!
 * \return Heating rates in erg s-1 cm-3.
 */
inline Eigen::VectorXd H_X(
  const Eigen::VectorXd& x_X,
  const std::vector<Eigen::VectorXd>& n_XK,
  const std::vector<Eigen::MatrixXd>& R_XKK,
  const Eigen::VectorXd& E_K
) {
  const auto& X = x_X.size();

  Eigen::VectorXd H_X = Eigen::VectorXd::Zero(X);
  for (int x = 0; x < X; x++) {
    H_X(x) = H(n_XK[x], R_XKK[x], E_K);
  }

  return H_X;
}


}