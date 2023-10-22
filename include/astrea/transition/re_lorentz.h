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
 * shape at coordinate x for element z for i->j transition.
 * 
 * \param g_z_i Statistical weight of element z of term i in 1.
 * \param g_z_j Statistical weight of element z of term j in 1.
 * \param E_z_ij Energies differenece of element z between terms i and j in eV.
 * \param A_z_ji Spontaneous emission rate of element z for j->i transition in
 * s-1.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 */
inline double R_x_z_ij(
  const double g_z_i,
  const double g_z_j,
  const double E_z_ij,
  const double A_z_ji,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto a = 6.681326651529935e-22; // nm-4 J-1 s m2
  const auto lambda_z_ij = 1239.841975960640 / E_z_ij; // nm
  const auto& lambda = F_lambda_vs_lambda.row(0); // nm
  const auto& F_lambda = F_lambda_vs_lambda.row(1); // W m-2 nm-1

  const auto F_lambda_z_ij = // W m-2 nm-1
    astrea::math::interp1d_linear_x(lambda, F_lambda, lambda_z_ij);

  const auto R_x_z_ij =
    a * A_z_ji * g_z_j / g_z_i * std::pow(lambda_z_ij, 5.0) * F_lambda_z_ij;
  return R_x_z_ij;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape at coordinate x for element z.
 * 
 * \param g_z Statistical weights of element z in 1.
 * Axis 0: Term.
 * Must be sorted in ascending order over energies!
 * \param E_z Energies of element z in eV.
 * Axis 0: Term.
 * Must be sorted in ascending order!
 * \param A_z Spontaneous emission rates of element z in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 * Must be sorted in ascending order over energies for both axes.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row).
 * Row 0: Wavelength in nm. Row 1: Spectral irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 */
inline Eigen::MatrixXd R_x_z(
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z,
  const Eigen::MatrixXd& A_z,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_x_z = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      const auto E_z_ij = E_z(j) - E_z(i);
      R_x_z(i, j) =
        R_x_z_ij(g_z(i), g_z(j), E_z_ij, A_z(j, i), F_lambda_vs_lambda);
    }
  }
  return R_x_z;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape at coordinate x.
 * 
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \param A Spontaneous emission rates in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * Must be sorted in ascending order over energies for both axes for each
 * element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 */
inline std::vector<Eigen::MatrixXd> R_x(
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const std::vector<Eigen::MatrixXd>& A,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x(Z);
  for (int z = 0; z < Z; z++) {
    R_x[z] = R_x_z(g[z], E[z], A[z], F_lambda_vs_lambda);
  }
  return R_x;
}


/**
 * Radiative excitation (photoexcitation) transition rates using Lorentz line
 * shape at coordinate x.
 * 
 * \param x Any vector with shape corresponding to spatial points.
 * Axis 0: Coordinate index.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \param A Spontaneous emission rates in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * Must be sorted in ascending order over energies for both axes for each
 * element.
 * \param F_lambda_vs_lambda Spectrum.
 * Axis 0: Bivariate data (row). Row 0: Wavelength in nm. Row 1: Spectral
 * irradiance in W m-2 nm-1.
 * Axis 1: Bivariate pair index (column).
 * \return Transition rate in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Initial term.
 * Axis 3: Final term.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R(
  const Eigen::VectorXd& x,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const std::vector<Eigen::MatrixXd>& A,
  const Eigen::Matrix2Xd& F_lambda_vs_lambda
) {
  const auto& X = x.size();
  std::vector<std::vector<Eigen::MatrixXd>> R(X);
  const auto R_x_ = R_x(g, E, A, F_lambda_vs_lambda);
  for (int i = 0; i < X; i++) {
    R[i] = R_x_;
  }
  return R;
}


}