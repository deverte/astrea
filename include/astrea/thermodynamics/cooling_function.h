/**
 * \file astrea/thermodynamics/cooling_function.h
 * Cooling function.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/thermodynamics/cooling_rate.h"
#include "astrea/thermodynamics/heating_rate.h"


namespace astrea::thermodynamics::cooling_function {


/**
 * Cooling function.
 * 
 * \param n_K Electrons population in 1.
 * Must be sorted over energies!
 * \param R_KK Transitions rates in s-1.
 * Must be sorted over energies!
 * \param E_K Energies of element z in eV.
 * Must be sorted!
 * \return Cooling rate in erg s-1 cm-3.
 */
inline double Lambda(
  const Eigen::VectorXd& n_K,
  const Eigen::MatrixXd& R_KK,
  const Eigen::VectorXd& E_K
) {
  const auto L = astrea::thermodynamics::cooling_rate::L(n_K, R_KK, E_K);
  const auto H = astrea::thermodynamics::heating_rate::H(n_K, R_KK, E_K);
  const auto Lambda = L - H;
  return Lambda;
}


/**
 * Cooling function.
 * 
 * \param x_X Any array with coordinates shape.
 * \param n_XK Electrons population in 1.
 * Must be sorted over energies!
 * \param R_XKK Transitions rates in s-1.
 * Must be sorted over energies!
 * \param E_K Energies of element z in eV.
 * Must be sorted!
 * \return Cooling rates in erg s-1 cm-3.
 */
inline Eigen::VectorXd Lambda_X(
  const Eigen::VectorXd& x_X,
  const std::vector<Eigen::VectorXd>& n_XK,
  const std::vector<Eigen::MatrixXd>& R_XKK,
  const Eigen::VectorXd& E_K
) {
  const auto L_X =
    astrea::thermodynamics::cooling_rate::L_X(x_X, n_XK, R_XKK, E_K);
  const auto H_X =
    astrea::thermodynamics::heating_rate::H_X(x_X, n_XK, R_XKK, E_K);
  const auto Lambda_X = L_X - H_X;
  return Lambda_X;
}


/**
 * Cooling function.
 * 
 * \param x_X Any array with coordinates shape.
 * \param n_XZK Electrons population in 1.
 * Must be sorted over energies!
 * \param R_XZKK Transitions rates in s-1.
 * Must be sorted over energies!
 * \param E_ZK Energies of elements in eV.
 * Must be sorted!
 * \return Cooling rates in erg s-1 cm-3.
 */
inline std::vector<Eigen::VectorXd> Lambda_ZX(
  const Eigen::VectorXd& x_X,
  const std::vector<std::vector<Eigen::VectorXd>>& n_XZK,
  const std::vector<std::vector<Eigen::MatrixXd>>& R_XZKK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = E_ZK.size();

  const auto L_ZX =
    astrea::thermodynamics::cooling_rate::L_ZX(x_X, n_XZK, R_XZKK, E_ZK);
  const auto H_ZX =
    astrea::thermodynamics::heating_rate::H_ZX(x_X, n_XZK, R_XZKK, E_ZK);

  std::vector<Eigen::VectorXd> Lambda_ZX(Z);
  for (int z = 0; z < Z; z++) {
    Lambda_ZX[z] = L_ZX[z] - H_ZX[z];
  }

  return Lambda_ZX;
}


}