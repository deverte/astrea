/**
 * \file astrea/transitions/ri.h
 * Radiative ionization transition.
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


namespace astrea::transition::ri {


/**
 * Radiative ionization (photoionization) transition rate at coordinate x for
 * element z for i->k transition.
 * 
 * \param sigma_vs_nu_z_i Photoionization cross section of element z of term
 * i in cm2.
 * Axis 0: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 */
inline double R_x_z_ik(
  const Eigen::Matrix2Xd& sigma_vs_nu_z_i,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto a = 1.5091901796421518e29; // cm-2 s-2 W-1 m2
  const auto c = 2.99792458e17; // nm s-1
  const auto& nu_sigma = sigma_vs_nu_z_i.row(0); // nm
  const auto& sigma_sigma = sigma_vs_nu_z_i.row(1); // cm2
  const auto& lambda_F_lambda = F_lambda_vs_lambda.row(0); // nm
  const auto& F_lambda_F_lambda = F_lambda_vs_lambda.row(1); // W m-2 nm-1

  const auto nu_F_lambda = c / lambda_F_lambda.array();

  const auto nu_0 = std::max(nu_sigma.minCoeff(), nu_F_lambda.minCoeff());
  const auto nu_infty = std::min(nu_sigma.maxCoeff(), nu_F_lambda.maxCoeff());
  const auto d_nu = (nu_infty - nu_0) / sigma_vs_nu_z_i.cols(); // s-1

  const Eigen::VectorXd nu = // s-1
    Eigen::VectorXd::LinSpaced(sigma_vs_nu_z_i.cols(), nu_0, nu_infty);
  const Eigen::VectorXd lambda = c / nu.array(); // nm

  const Eigen::VectorXd F_lambda = // W m-2 nm-1
    astrea::math::interp1d_linear_xs(lambda_F_lambda, F_lambda_F_lambda, lambda)
  ;
  const Eigen::VectorXd F_nu = c / nu.array().pow(2) * F_lambda.array(); // W m-2 s

  const Eigen::VectorXd sigma = // cm2
    astrea::math::interp1d_linear_xs(nu_sigma, sigma_sigma, nu);

  const Eigen::VectorXd C = a * sigma.array() * F_nu.array() / nu.array(); // 1

  const auto R_z_ik = astrea::math::trapezoid_dx(C, d_nu); // s-1

  return R_z_ik;
}


/**
 * Radiative ionization (photoionization) transition rates at coordinate x for
 * element z.
 * 
 * \param sigma_vs_nu_z Photoionization cross sections of element z in cm2.
 * Axis 0: Initial term (i-index).
 * Axis 1: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 2: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Term.
 */
inline Eigen::VectorXd R_x_z(
  const std::vector<Eigen::Matrix2Xd>& sigma_vs_nu_z,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& k = sigma_vs_nu_z.size();
  Eigen::VectorXd R_x_z = Eigen::VectorXd::Zero(k);
  for (int i = 0; i < k; i++) {
    R_x_z(i) = R_x_z_ik(sigma_vs_nu_z[i], F_lambda_vs_lambda);
  }
  return R_x_z;
}


/**
 * Radiative ionization (photoionization) transition rates at coordinate x.
 * 
 * \param sigma_vs_nu Photoionization cross sections in cm2.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 3: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element for
 * each element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Element index.
 * Axis 1: Term.
 */
inline std::vector<Eigen::VectorXd> R_x(
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_nu,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& Z = sigma_vs_nu.size();
  std::vector<Eigen::VectorXd> R_x(Z);
  for (int z = 0; z < Z - 1; z++) {
    R_x[z] = R_x_z(sigma_vs_nu[z], F_lambda_vs_lambda);
  }
  return R_x;
}


/**
 * Radiative ionization (photoionization) transition rates at coordinate x.
 * 
 * \param x Any vector with shape corresponding to spatial points.
 * Axis 0: Coordinate index.
 * \param sigma_vs_nu Photoionization cross sections in cm2.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Bivariate data (row). Row 0: Frequency in s-1. Row 1: Cross section
 * in cm2.
 * Axis 3: Bivariate pair index (column).
 * Must be sorted in ascending order over energies of the source element for
 * each element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Term.
 */
inline std::vector<std::vector<Eigen::VectorXd>> R(
  const Eigen::VectorXd& x,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_nu,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& X = x.size();
  std::vector<std::vector<Eigen::VectorXd>> R(X);
  const auto R_x_ = R_x(sigma_vs_nu, F_lambda_vs_lambda);
  for (int i = 0; i < X; i++) {
    R[i] = R_x_;
  }
  return R;
}


}