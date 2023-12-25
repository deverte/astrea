/**
 * \file astrea/transition/radiative_recombination.h
 * Radiative recombination transition.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/population/saha_ionization_equation.h"


namespace astrea::transition::radiative_recombination {


/**
 * Radiative recombination transition rates calculation using LTE.
 * 
 * \param R_ZK Photoionization rates in s-1.
 * \param T Temperature in K.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Transition rates in s-1.
 */
inline std::vector<Eigen::VectorXd> R_ZK(
  const std::vector<Eigen::VectorXd>& R_ZK,
  const double& T,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = I_Z.size();

  const auto Phi_Z =
    astrea::population::saha_ionization_equation::Phi_Z(T, I_Z, g_ZK, E_ZK);

  std::vector<Eigen::VectorXd> R_ZK_(Z);
  for (int z = 0; z < Z - 1; z++) {
    R_ZK_[z] = Phi_Z(z) * R_ZK[z];
  }
  return R_ZK_;
}


/**
 * Radiative recombination transition rates calculation using LTE.
 * 
 * \param R_XZK Photoionization rates in s-1.
 * \param T_X Temperatures in K.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Transition rates in s-1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> R_XZK(
  const std::vector<std::vector<Eigen::VectorXd>>& R_XZK,
  const Eigen::VectorXd& T_X,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& X = T_X.size();
  std::vector<std::vector<Eigen::VectorXd>> R_XZK_(X);
  for (int x = 0; x < X; x++) {
    R_XZK_[x] = R_ZK(R_XZK[x], T_X(x), I_Z, g_ZK, E_ZK);
  }
  return R_XZK_;
}


}