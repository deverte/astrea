/**
 * \file astrea/transitions/rd.h
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::rd {


/**
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \param f_ij Oscillator strengths in 1.
 * \param g_i Statistical weight of term i in 1.
 * \param g_j Statistical weight of term j in 1.
 * \param E_ij Energy differenece between terms i and j in eV.
 * \return Transitions rate in s-1.
 */
inline double R_ji(
  const double& f_ij,
  const double& g_i,
  const double& g_j,
  const double& E_ij
) {
  const auto a = 43391988.531763464; // eV-2 s-1
  const auto R_ji = a * f_ij * g_i / g_j * std::pow(E_ij, 2.0);
  return R_ji;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \param f_KK Oscillator strengths in 1.
 * Must be sorted in ascending order over energies!
 * \param g_K Statistical weights in 1.
 * Must be sorted in ascending order over energies!
 * \param E_K Energies in eV.
 * Must be sorted in ascending order!
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd R_KK(
  const Eigen::MatrixXd& f_KK,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K
) {
  const auto& K = g_K.size();
  Eigen::MatrixXd R_KK_ = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      const auto E_ij = E_K(j) - E_K(i);
      R_KK_(j, i) = R_ji(f_KK(i, j), g_K(i), g_K(j), E_ij);
    }
  }
  return R_KK_;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \param f_ZKK Oscillator strengths in 1.
 * Must be sorted in ascending order over energies per element!
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_ZKK(
  const std::vector<Eigen::MatrixXd>& f_ZKK,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = g_ZK.size();
  std::vector<Eigen::MatrixXd> R_ZKK_(Z);
  for (int z = 0; z < Z; z++) {
    R_ZKK_[z] = R_KK(f_ZKK[z], g_ZK[z], E_ZK[z]);
  }
  return R_ZKK_;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \param x_X Any vector with shape corresponding to spatial points.
 * \param f_ZKK Oscillator strengths in 1.
 * Must be sorted in ascending order over energies per element!
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(
  const Eigen::VectorXd& x_X,
  const std::vector<Eigen::MatrixXd>& f_ZKK,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& X = x_X.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_XZKK_(X);
  const auto R_XZKK__ = R_ZKK(f_ZKK, g_ZK, E_ZK);
  for (int x = 0; x < X; x++) {
    R_XZKK_[x] = R_XZKK__;
  }
  return R_XZKK_;
}


}