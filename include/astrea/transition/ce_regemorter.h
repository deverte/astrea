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
 * Collisional excitation transitions rate using Regemorter formula at
 * coordinate x for element z for i->j transition.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \param g_z_i Statistical weight of element z of term i in 1.
 * \param E_z_ij Energy differenece of element z between terms i and j in eV.
 * \param f_vs_T_z_ij Effective collision strengths of element z for i->j
 * transition.
 * Axis 0: Bivariate data (row). Row 0: Temperature in K. Row 1:
 * Effective collision strength in 1.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rate in s-1.
 */
inline double R_x_z_ij(
  const double T_x,
  const double N_e_x,
  const double g_z_i,
  const double E_z_ij,
  const Eigen::Matrix2Xd& f_vs_T_z_ij
) {
  auto f_x_z_ij = 1.0;
  if (f_vs_T_z_ij.cols() > 0) {
    const auto& T_z_ij = f_vs_T_z_ij.row(0);
    const auto& f_z_ij = f_vs_T_z_ij.row(1);

    f_x_z_ij = astrea::math::interp1d_linear_x(T_z_ij, f_z_ij, T_x);
  }

  const auto a = 8.62913210858377e-6; // cm3 s-1 K1/2
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto R_x_z_ij =
    + a * N_e_x * std::pow(T_x, -1.0 / 2.0) / g_z_i
    * std::exp(-E_z_ij / (k_B * T_x)) * f_x_z_ij
  ;

  return R_x_z_ij;
}


/**
 * Collisional excitation transitions rates using Regemorter formula at
 * coordinate x for element z.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \param g_z Statistical weights of element z in 1.
 * Axis 0: Term.
 * Must be sorted in ascending order over energies!
 * \param E_z Energies of element z in eV.
 * Axis 0: Term.
 * Must be sorted in ascending order!
 * \param f_vs_T_z Effective collision strengths of element z.
 * Axis 0: Initial term (i-index).
 * Axis 1: Final term (j-index).
 * Axis 2: Bivariate data (row). Row 0: Temperature in K. Row 1: Effective
 * collision strength in 1.
 * Axis 3: Bivariate pair index (column).
 * Must be sorted in ascending order over energies!
 * \return Transitions rates in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 */
inline Eigen::MatrixXd R_x_z(
  const double T_x,
  const double N_e_x,
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z,
  const std::vector<std::vector<Eigen::Matrix2Xd>>& f_vs_T_z
) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_z = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      const auto E_z_ij = E_z(j) - E_z(i);
      R_z(i, j) = R_x_z_ij(T_x, N_e_x, g_z(i), E_z_ij, f_vs_T_z[i][j]);
    }
  }
  return R_z;
}


/**
 * Collisional excitation transitions rates using Regemorter formula at
 * coordinate x.
 * 
 * \param T_x Temperature in K.
 * \param N_e_x Electron number density  at coordinate x in cm-3.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \param f_vs_T Effective collision strengths.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Final term (j-index).
 * Axis 3: Bivariate data (row). Row 0: Temperature in K. Row 1: Effective
 * collision strength in 1.
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
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& f_vs_T
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x(Z);
  for (int z = 0; z < Z; z++) {
    R_x[z] = R_x_z(T_x, N_e_x, g[z], E[z], f_vs_T[z]);
  }
  return R_x;
}


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param T Temperature in K.
 * Axis 0: Coordinate index.
 * \param N_e Electron number densities in cm-3.
 * Axis 0: Coordinate index.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \param f_vs_T Effective collision strengths.
 * Axis 0: Element index.
 * Axis 1: Initial term (i-index).
 * Axis 2: Final term (j-index).
 * Axis 3: Bivariate data (row). Row 0: Temperature in K. Row 1: Effective
 * collision strength in 1.
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
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const std::vector<std::vector<std::vector<Eigen::Matrix2Xd>>>& f_vs_T
) {
  const auto& X = T.size();
  std::vector<std::vector<Eigen::MatrixXd>> R(X);
  for (int x = 0; x < X; x++) {
    R[x] = R_x(T(x), N_e(x), g, E, f_vs_T);
  }
  return R;
}


}