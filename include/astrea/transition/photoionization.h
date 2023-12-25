/**
 * \file astrea/transition/photoionization.h
 * Photoionization transition.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "astrea/math/interp1d_linear.h"
#include "astrea/math/trapezoid.h"


namespace astrea::transition::photoionization {


/**
 * Photoionization transition rate.
 * 
 * \param sigma_vs_nu Photoionization cross section.
 * Axis 0: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline double R_ik(
  const Eigen::Matrix2Xd& sigma_vs_nu,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto a = 1.5091901796421518e29; // cm-2 s-2 W-1 m2
  const auto c = 2.99792458e17; // nm s-1
  const auto& nu_A = sigma_vs_nu.row(0); // nm
  const auto& sigma_A = sigma_vs_nu.row(1); // cm2
  const auto& lambda_L = F_lambda_vs_lambda.row(0); // nm
  const auto& F_lambda_L = F_lambda_vs_lambda.row(1); // W m-2 nm-1

  const auto nu_L = c / lambda_L.array();

  const auto nu_0 = std::max(nu_A.minCoeff(), nu_L.minCoeff());
  const auto nu_infty = std::min(nu_A.maxCoeff(), nu_L.maxCoeff());
  const auto d_nu = (nu_infty - nu_0) / sigma_vs_nu.cols(); // s-1

  const Eigen::VectorXd nu = // s-1
    Eigen::VectorXd::LinSpaced(sigma_vs_nu.cols(), nu_0, nu_infty);
  const Eigen::VectorXd lambda = c / nu.array(); // nm

  const Eigen::VectorXd F_lambda = // W m-2 nm-1
    astrea::math::interp1d_linear::f_X(lambda_L, F_lambda_L, lambda);
  const Eigen::VectorXd F_nu =
    c / nu.array().pow(2) * F_lambda.array(); // W m-2 s

  const Eigen::VectorXd sigma = // cm2
    astrea::math::interp1d_linear::f_X(nu_A, sigma_A, nu);

  const Eigen::VectorXd C = a * sigma.array() * F_nu.array() / nu.array(); // 1

  const auto R_ik =
    astrea::math::trapezoid::F_dx(C, d_nu) * std::exp(-tau); // s-1

  return R_ik;
}


/**
 * Photoionization transition rates.
 * 
 * \param sigma_vs_nu_K Photoionization cross sections.
 * Axis 0: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline Eigen::VectorXd R_K(
  const std::vector<Eigen::Matrix2Xd>& sigma_vs_nu_K,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto& K = sigma_vs_nu_K.size();
  Eigen::VectorXd R_K = Eigen::VectorXd::Zero(K);
  for (int i = 0; i < K; i++) {
    R_K(i) = R_ik(sigma_vs_nu_K[i], F_lambda_vs_lambda, tau);
  }
  return R_K;
}


/**
 * Photoionization transition rates.
 * 
 * \param sigma_vs_nu_ZK Photoionization cross sections.
 * Axis 0: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline std::vector<Eigen::VectorXd> R_ZK(
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_nu_ZK,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const double& tau
) {
  const auto& Z = sigma_vs_nu_ZK.size();
  std::vector<Eigen::VectorXd> R_ZK(Z);
  for (int z = 0; z < Z - 1; z++) {
    R_ZK[z] = R_K(sigma_vs_nu_ZK[z], F_lambda_vs_lambda, tau);
  }
  return R_ZK;
}


/**
 * Photoionization transition rates.
 * 
 * \param x_X Any vector with shape corresponding to spatial points.
 * \param sigma_vs_nu_ZK Photoionization cross sections in cm2.
 * Axis 0: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \param tau_X Optical depth in 1.
 * \return Transition rate in s-1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> R_XZK(
  const Eigen::VectorXd& x_X,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_nu_ZK,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda,
  const Eigen::VectorXd& tau_X
) {
  const auto& X = x_X.size();
  std::vector<std::vector<Eigen::VectorXd>> R_XZK(X);
  for (int x = 0; x < X; x++) {
    R_XZK[x] = R_ZK(sigma_vs_nu_ZK, F_lambda_vs_lambda, tau_X[x]);
  }
  return R_XZK;
}


}