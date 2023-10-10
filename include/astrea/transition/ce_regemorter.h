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


namespace astrea::transition::ce_regemorter {


/**
 * Collisional excitation transitions rate using Regemorter formula at
 * coordinate x for element z for i->j transition.
 * 
 * \param g_z_i Statistical weight of element z of term i in 1.
 * \param E_z_ij Energy differenece of element z between terms i and j in eV.
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \return Transitions rate in s-1.
 */
inline double R_x_z_ij(
  const double g_z_i,
  const double E_z_ij,
  const double T_x,
  const double N_e_x
) {
  const auto a = 8.62913210858377e-6; // cm3 s-1 K1/2
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto R_x_z_ij =
    + a * N_e_x * std::pow(T_x, -1.0 / 2.0) / g_z_i
    * std::exp(-E_z_ij / (k_B * T_x))
  ;
  return R_x_z_ij;
}


/**
 * Collisional excitation transitions rates using Regemorter formula at
 * coordinate x for element z.
 * 
 * \param g_z Statistical weights of element z in 1. Must be sorted in ascending
 * order over energies!
 * \param E_z Energies of element z in eV. Must be sorted in ascending order!
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd R_x_z(
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z,
  const double T_x,
  const double N_e_x
) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_z = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      const auto E_z_ij = E_z(j) - E_z(i);
      R_z(i, j) = R_x_z_ij(g_z(i), E_z_ij, T_x, N_e_x);
    }
  }
  return R_z;
}


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param g Statistical weights in 1. Must be sorted in ascending order over
 * energies per element!
 * \param E Energies in eV. Must be sorted in ascending order per element!
 * \param T_x Temperature in K.
 * \param N_e_x in cm-3.
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_x(
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const double T_x,
  const double N_e_x
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x(Z);
  for (int z = 0; z < Z; z++) {
    R_x[z] = R_x_z(g[z], E[z], T_x, N_e_x);
  }
  return R_x;
}


}