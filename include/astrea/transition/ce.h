/**
 * \file astrea/transitions/ce.h
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


namespace astrea::transition::ce {


/**
 * Collisional excitation transitions rate at coordinate x for element z for
 * i->j transition.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \param C_vs_T_z_ij Collision rate coefficient of element z for i->j
 * transition.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rate in s-1.
 */
inline double R_x_z_ij(
  const double T_x,
  const double N_e_x,
  const Eigen::Matrix2Xd& C_vs_T_z_ij
) {
  auto C_x_z_ij = 0.0;
  if (C_vs_T_z_ij.cols() > 0) {
    const auto& T_z_ij = C_vs_T_z_ij.row(0);
    const auto& C_z_ij = C_vs_T_z_ij.row(1);

    C_x_z_ij = astrea::math::interp1d_linear_x(T_z_ij, C_z_ij, T_x);
  }

  const auto R_x_z_ij = N_e_x * C_x_z_ij;

  return R_x_z_ij;
}


/**
 * Collisional excitation transitions rate at coordinate x for element z.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \param C_vs_T_z Collision rate coefficient of element z.
 * Axis 0: Initial term (i-index).
 * Axis 1: Final term (j-index).
 * Axis 2: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 3: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 */
inline Eigen::MatrixXd R_x_z(
  const double T_x,
  const double N_e_x,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& C_vs_T_z
) {
  const auto& k = C_vs_T_z.size();
  Eigen::MatrixXd R_z = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      R_z(i, j) = R_x_z_ij(T_x, N_e_x, C_vs_T_z[i][j]);
    }
  }
  return R_z;
}


/**
 * Collisional excitation transitions rate at coordinate x.
 * 
 * \param T_x Temperature in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \param C_vs_T Collision rate coefficients.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Final term (j-index).
 * Axis 3: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 4: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 */
inline std::vector<Eigen::MatrixXd> R_x(
  const double T_x,
  const double N_e_x,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& C_vs_T
) {
  const auto& Z = C_vs_T.size();
  std::vector<Eigen::MatrixXd> R_x(Z);
  for (int z = 0; z < Z; z++) {
    R_x[z] = R_x_z(T_x, N_e_x, C_vs_T[z]);
  }
  return R_x;
}


/**
 * Collisional excitation transitions rates.
 * 
 * \param T Temperatures in K. Axis 0: Coordinate index.
 * \param N_e Electron number densities in cm-3.
 * Axis 0: Coordinate index.
 * \param C_vs_T Collision rate coefficients.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Final term (j-index).
 * Axis 3: Bivariate data (row). Row 0: Temperature in K. Row 1: Collision rate
 * coefficient in cm3 s-1.
 * Axis 4: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Initial term.
 * Axis 3: Final term.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R(
  const Eigen::VectorXd& T,
  const Eigen::VectorXd& N_e,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& C_vs_T
) {
  const auto& X = T.size();
  std::vector<std::vector<Eigen::MatrixXd>> R(X);
  for (int x = 0; x < X; x++) {
    R[x] = R_x(T(x), N_e(x), C_vs_T);
  }
  return R;
}


}