/**
 * \file astrea/transition/collisional_excitation.h
 * Collisional excitation transitions rates using collision rate coefficients.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::transition::collisional_excitation {


/**
 * Collisional excitation transitions rate.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param C_vs_T Collision rate coefficient.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rate in s-1.
 */
inline double R_ij(
  const double& T,
  const double& N_e,
  const Eigen::Matrix2Xd& C_vs_T
) {
  auto C_ij = 0.0;
  if (C_vs_T.cols() > 0) {
    const auto& T_X = C_vs_T.row(0);
    const auto& C_X = C_vs_T.row(1);

    C_ij = astrea::math::interp1d_linear::f(T_X, C_X, T);
  }

  const auto R_ij = N_e * C_ij;

  return R_ij;
}


/**
 * Collisional excitation transitions rate.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param C_vs_T_KK Collision rate coefficient.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd R_KK(
  const double& T,
  const double& N_e,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& C_vs_T_KK
) {
  const auto& K = C_vs_T_KK.size();
  Eigen::MatrixXd R_KK = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      R_KK(i, j) = R_ij(T, N_e, C_vs_T_KK[i][j]);
    }
  }
  return R_KK;
}


/**
 * Collisional excitation transitions rate.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param C_vs_T_ZKK Collision rate coefficients.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_ZKK(
  const double& T,
  const double& N_e,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& C_vs_T_ZKK
) {
  const auto& Z = C_vs_T_ZKK.size();
  std::vector<Eigen::MatrixXd> R_ZKK(Z);
  for (int z = 0; z < Z; z++) {
    R_ZKK[z] = R_KK(T, N_e, C_vs_T_ZKK[z]);
  }
  return R_ZKK;
}


/**
 * Collisional excitation transitions rates.
 * 
 * \param T_X Temperatures in K.
 * \param N_e_X Electron number densities in cm-3.
 * \param C_vs_T_ZKK Collision rate coefficients.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(
  const Eigen::VectorXd& T_X,
  const Eigen::VectorXd& N_e_X,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& C_vs_T_ZKK
) {
  const auto& X = T_X.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(X);
  for (int x = 0; x < X; x++) {
    R_XZKK[x] = R_ZKK(T_X(x), N_e_X(x), C_vs_T_ZKK);
  }
  return R_XZKK;
}


}