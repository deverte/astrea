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


namespace astrea::transition::ri {


/**
 * Radiative ionization (photoionization) transition rate at coordinate x for
 * element z for i->k transition.
 * 
 * \param sigma_z_k Photoionization cross section of element z of term k in cm2.
 * \param F_lambda Spectrum. Row 0: wavelengths in nm. Row 1: spectral flux
 * density in W m-2 nm-1.
 * \return Transition rate in s-1.
 */
inline double
R_x_z_ik(const Eigen::Matrix2Xd& sigma_z_k, const Eigen::Matrix2Xd& F_lambda) {
  const auto a = 1.5091901796421518e29; // cm-2 s-2 W-1 m2
  const auto c = 2.99792458e17; // nm s-1

  const auto nu_0 = std::max(
    sigma_z_k.row(0).minCoeff(),
    (c / F_lambda.row(0).array()).minCoeff()
  );
  const auto infty = std::min(
    sigma_z_k.row(0).maxCoeff(),
    (c / F_lambda.row(0).array()).maxCoeff()
  );
  const auto d_nu = (infty - nu_0) / sigma_z_k.cols(); // s-1

  // Integration using trapezoidal rule
  auto R_z_ik = 0.0;
  for (double nu = nu_0; nu < infty - d_nu; nu += d_nu) {
    const auto& nu_a = nu; // s-1
    const auto nu_b = nu + d_nu; // s-1

    // Nearest neighbor interpolation
    Eigen::Index F_lambda_a_index;
    (F_lambda.row(0).array() - c / nu_a).abs().minCoeff(&F_lambda_a_index);
    const auto F_nu_a =
      c / std::pow(nu_a, 2.0) * F_lambda.row(1)(F_lambda_a_index); // m-2 W s

    // Nearest neighbor interpolation
    Eigen::Index F_lambda_b_index;
    (F_lambda.row(0).array() - c / nu_b).abs().minCoeff(&F_lambda_b_index);
    const auto F_nu_b =
      c / std::pow(nu_b, 2.0) * F_lambda.row(1)(F_lambda_b_index); // m-2 W s

    // Nearest neighbor interpolation
    Eigen::Index sigma_a_index;
    (sigma_z_k.row(0).array() - nu_a).abs().minCoeff(&sigma_a_index);
    const auto sigma_a = sigma_z_k.row(1)(sigma_a_index); // cm2

    // Nearest neighbor interpolation
    Eigen::Index sigma_b_index;
    (sigma_z_k.row(0).array() - nu_b).abs().minCoeff(&sigma_b_index);
    const auto sigma_b = sigma_z_k.row(1)(sigma_b_index); // cm2

    const auto C_a = sigma_a * F_nu_a / nu_a; // m-2 W cm2 s2
    const auto C_b = sigma_b * F_nu_b / nu_b; // m-2 W cm2 s2

    R_z_ik += a * (C_a + C_b) / 2.0 * d_nu;
  }
  return R_z_ik;
}


/**
 * Radiative ionization (photoionization) transition rates at coordinate x for
 * element z.
 * 
 * \param sigma_z Photoionization cross sections of element z in cm2. Must be
 * sorted in ascending order over energies of the source element.
 * \param F_lambda Spectrum. Row 0: wavelengths in nm. Row 1: spectral flux
 * density in W m-2 nm-1.
 * \return Transition rate in s-1.
 */
inline Eigen::VectorXd R_x_z(
  const std::vector<Eigen::Matrix2Xd>& sigma_z,
  const Eigen::Matrix2Xd& F_lambda
) {
  const auto& k = sigma_z.size();
  Eigen::VectorXd R_x_z = Eigen::VectorXd::Zero(k);
  for (int i = 0; i < k; i++) {
    R_x_z(i) = R_x_z_ik(sigma_z[i], F_lambda);
  }
  return R_x_z;
}


/**
 * Radiative ionization (photoionization) transition rates at coordinate x.
 * 
 * \param sigma Photoionization cross sections in cm2. Must be
 * sorted in ascending order over energies of the source element for each
 * element.
 * \param F_lambda Spectrum. Row 0: wavelengths in nm. Row 1: spectral flux
 * density in W m-2 nm-1.
 * \return Transition rate in s-1.
 */
inline std::vector<Eigen::VectorXd> R_x(
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma,
  const Eigen::Matrix2Xd& F_lambda
) {
  const auto& Z = sigma.size();
  std::vector<Eigen::VectorXd> R_x(Z);
  for (int z = 0; z < Z - 1; z++) {
    R_x[z] = R_x_z(sigma[z], F_lambda);
  }
  return R_x;
}


}