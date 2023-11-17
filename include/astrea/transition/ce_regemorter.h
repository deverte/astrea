/**
 * \file astrea/transitions/ce_regemorter.h
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::transition::ce_regemorter {


/**
 * Collisional excitation transitions rate using Regemorter formula.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param g_i Statistical weight of term i in 1.
 * \param E_ij Energy differenece between terms i and j in eV.
 * \param f_vs_T Effective collision strengths.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1:
 * Effective collision strength in 1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rate in s-1.
 */
inline double R_ij(
  const double& T,
  const double& N_e,
  const double& g_i,
  const double& E_ij,
  const Eigen::Matrix2Xd& f_vs_T
) {
  auto f_ij = 1.0;
  if (f_vs_T.cols() > 0) {
    const auto& T_X = f_vs_T.row(0);
    const auto& f_X = f_vs_T.row(1);

    f_ij = astrea::math::interp1d_linear(T_X, f_X, T);
  }

  const auto a = 8.62913210858377e-6; // cm3 s-1 K1/2
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto R_ij =
    + a * N_e * std::pow(T, -1.0 / 2.0) / g_i
    * std::exp(-E_ij / (k_B * T)) * f_ij
  ;

  return R_ij;
}


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param g_K Statistical weights in 1.
 * Axis 0: Term.
 * Must be sorted in ascending order over energies!
 * \param E_K Energies in eV.
 * Axis 0: Term.
 * Must be sorted in ascending order!
 * \param f_vs_T_KK Effective collision strengths.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1:
 * Effective collision strength in 1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd R_KK(
  const double& T,
  const double& N_e,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& f_vs_T_KK
) {
  const auto& K = g_K.size();
  Eigen::MatrixXd R_KK = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      const auto E_ij = E_K(j) - E_K(i);
      R_KK(i, j) = R_ij(T, N_e, g_K(i), E_ij, f_vs_T_KK[i][j]);
    }
  }
  return R_KK;
}


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \param f_vs_T_ZKK Effective collision strengths.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1:
 * Effective collision strength in 1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_ZKK(
  const double& T,
  const double& N_e,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& f_vs_T_ZKK
) {
  const auto& Z = g_ZK.size();
  std::vector<Eigen::MatrixXd> R_ZKK(Z);
  for (int z = 0; z < Z; z++) {
    R_ZKK[z] = R_KK(T, N_e, g_ZK[z], E_ZK[z], f_vs_T_ZKK[z]);
  }
  return R_ZKK;
}


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param T_X Temperature in K.
 * \param N_e_X Electron number densities in cm-3.
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \param f_vs_T_ZKK Effective collision strengths.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1:
 * Effective collision strength in 1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(
  const Eigen::VectorXd& T_X,
  const Eigen::VectorXd& N_e_X,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& f_vs_T_ZKK
) {
  const auto& X = T_X.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(X);
  for (int x = 0; x < X; x++) {
    R_XZKK[x] = R_ZKK(T_X(x), N_e_X(x), g_ZK, E_ZK, f_vs_T_ZKK);
  }
  return R_XZKK;
}


}