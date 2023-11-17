/**
 * \file astrea/transitions/cd.h
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::cd {


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \param T Temperature in K.
 * \param R_ij Collisional excitation rate in s-1.
 * \param g_i Statistical weight of term i in 1.
 * \param g_j Statistical weight of term j in 1.
 * \param E_ij Energy differenece between terms i and j in eV.
 * \return Transition rate in s-1.
 */
inline double R_ji(
  const double& T,
  const double& R_ij,
  const double& g_i,
  const double& g_j,
  const double& E_ij
) {
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto R_ji = R_ij * std::exp(E_ij / (k_B * T)) * g_i / g_j;
  return R_ji;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \param T Temperature in K.
 * \param R_KK Collisional excitation rate in s-1.
 * \param g_K Statistical weights in 1.
 * Must be sorted in ascending order over energies!
 * \param E_K Energies in eV.
 * Must be sorted in ascending order!
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd R_KK(
  const double& T,
  const Eigen::MatrixXd& R_KK,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K
) {
  const auto& K = g_K.size();
  Eigen::MatrixXd R_KK_ = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      const auto E_ij = E_K(j) - E_K(i);
      R_KK_(j, i) = R_ji(T, R_KK(i, j), g_K(i), g_K(j), E_ij);
    }
  }
  return R_KK_;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \param T Temperature in K.
 * \param R_ZKK Collisional excitation rates in s-1.
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_ZKK(
  const double& T,
  const std::vector<Eigen::MatrixXd>& R_ZKK,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = g_ZK.size();
  std::vector<Eigen::MatrixXd> R_ZKK_(Z);
  for (int z = 0; z < Z; z++) {
    R_ZKK_[z] = R_KK(T, R_ZKK[z], g_ZK[z], E_ZK[z]);
  }
  return R_ZKK_;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \param T_X Temperatures in K.
 * \param R_XZKK Collisional excitation rates in s-1.
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(
  const Eigen::VectorXd& T_X,
  const std::vector<std::vector<Eigen::MatrixXd>>& R_XZKK,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& X = T_X.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_XZKK_(X);
  for (int x = 0; x < X; x++) {
    R_XZKK_[x] = R_ZKK(T_X(x), R_XZKK[x], g_ZK, E_ZK);
  }
  return R_XZKK_;
}


}