/**
 * \file astrea/population/boltzmann_distribution.h
 * LTE electrons population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::population::boltzmann_distribution {


/**
 * Calculates LTE electrons population using Boltzmann distribution.
 * 
 * \param T Temperature in K.
 * \param g_K Statistical weights in 1.
 * \param E_K Energies in eV.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd n_K(
  const double& T,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K
) {
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto& K = g_K.size(); // 1
  Eigen::VectorXd n_K = Eigen::VectorXd::Zero(K);
  auto S = 0.0;
  for (int j = 0; j < K; j++) {
    S += g_K(j) * std::exp(-E_K(j) / (k_B * T));
  }
  for (int i = 0; i < K; i++) {
    n_K(i) = g_K(i) * std::exp(-E_K(i) / (k_B * T)) / S;
  }
  return n_K;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution.
 * 
 * \param T Temperature at coordinate x in K.
 * \param g Statistical weights in 1.
 * \param E Energies in eV.
 * \return Electrons population at point x in 1.
 */
inline std::vector<Eigen::VectorXd> n_ZK(
  const double& T,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = g_ZK.size(); // 1
  std::vector<Eigen::VectorXd> n_ZK(Z);
  for (int z = 0; z < Z; z++) {
    n_ZK[z] = n_K(T, g_ZK[z], E_ZK[z]);
  }
  return n_ZK;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution.
 * 
 * \param T_X Temperatures in K.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Electrons population in 1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> n_XZK(
  const Eigen::VectorXd& T_X,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& X = T_X.size(); // 1
  std::vector<std::vector<Eigen::VectorXd>> n_XZK(X);
  for (int x = 0; x < X; x++) {
    n_XZK[x] = n_ZK(T_X(x), g_ZK, E_ZK);
  }
  return n_XZK;
}


}