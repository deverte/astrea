/**
 * \file astrea/transitions/re_lorentz.h
 * Radiative excitation (photoexcitation) transitions rates using Lorentz line
 * shape.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"


namespace astrea::transition::re_lorentz {


/**
 * Radiative excitation (photoexcitation) transition rate using Lorentz line
 * shape.
 * 
 * \param g_i Statistical weight term i in 1.
 * \param g_j Statistical weight of term j in 1.
 * \param E_ij Energies differenece between terms i and j in eV.
 * \param A_ji Spontaneous emission rate for j->i transition in s-1.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline double R_ij(
  const double& g_i,
  const double& g_j,
  const double& E_ij,
  const double& A_ji,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto a = 6.681326651529935e-22; // nm-4 J-1 s m2
  const auto lambda_ij = 1239.841975960640 / E_ij; // nm
  const auto& lambda_L = F_lambda_vs_lambda.row(0); // nm
  const auto& F_lambda_L = F_lambda_vs_lambda.row(1); // W m-2 nm-1

  const auto F_lambda = // W m-2 nm-1
    astrea::math::interp1d_linear(lambda_L, F_lambda_L, lambda_ij);

  const auto R_ij =
    a * A_ji * g_j / g_i * std::pow(lambda_ij, 5.0) * F_lambda * std::exp(-tau);
  return R_ij;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape.
 * 
 * \param g_K Statistical weights in 1.
 * Must be sorted in ascending order over energies!
 * \param E_K Energies in eV.
 * Must be sorted in ascending order!
 * \param A_KK Spontaneous emission rates in s-1.
 * Must be sorted in ascending order over energies for both axes.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row).
 * Row 0: Wavelength in nm. Row 1: Spectral irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline Eigen::MatrixXd R_KK(
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K,
  const Eigen::MatrixXd& A_KK,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto& K = g_K.size();
  Eigen::MatrixXd R_KK = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < K; j++) {
      const auto E_ij = E_K(j) - E_K(i);
      R_KK(i, j) =
        R_ij(g_K(i), g_K(j), E_ij, A_KK(j, i), F_lambda_vs_lambda, tau);
    }
  }
  return R_KK;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape.
 * 
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \param A_ZKK Spontaneous emission rates in s-1.
 * Must be sorted in ascending order over energies for both axes for each
 * element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_ZKK(
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK,
  const std::vector<Eigen::MatrixXd>& A_ZKK,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto& Z = g_ZK.size();
  std::vector<Eigen::MatrixXd> R_ZKK(Z);
  for (int z = 0; z < Z; z++) {
    R_ZKK[z] = R_KK(g_ZK[z], E_ZK[z], A_ZKK[z], F_lambda_vs_lambda, tau);
  }
  return R_ZKK;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape.
 * 
 * \param x_X Any vector with shape corresponding to spatial points.
 * \param g_ZK Statistical weights in 1.
 * Must be sorted in ascending order over energies per element!
 * \param E_ZK Energies in eV.
 * Must be sorted in ascending order per element!
 * \param A_ZKK Spontaneous emission rates in s-1.
 * Must be sorted in ascending order over energies for both axes for each
 * element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau_X Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(
  const Eigen::VectorXd& x_X,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK,
  const std::vector<Eigen::MatrixXd>& A_ZKK,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const Eigen::VectorXd& tau_X
) {
  const auto& X = x_X.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_XZKK(X);
  for (int x = 0; x < X; x++) {
    R_XZKK[x] = R_ZKK(g_ZK, E_ZK, A_ZKK, F_lambda_vs_lambda, tau_X[x]);
  }
  return R_XZKK;
}


}