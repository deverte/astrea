/**
 * \file astrea/transitions/cd_regemorter.h
 * Collisional de-excitation transitions rates using Regemorter formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::cd_regemorter {


/**
 * Collisional de-excitation transitions rate using Regemorter formula at
 * coordinate x for element z for j->i transition.
 * 
 * \param g_z_j Statistical weight of element z of term j in 1.
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \return Transitions rate in s-1.
 */
inline double
R_x_z_ji(const double g_z_j, const double T_x, const double N_e_x) {
  const auto a = 8.62913210858377e-6; // cm3 s-1 K1/2
  const auto R_x_z_ji = a * N_e_x * std::pow(T_x, -1.0 / 2.0) / g_z_j;
  return R_x_z_ji;
}


/**
 * Collisional de-excitation transitions rates using Regemorter formula at
 * coordinate x for element z.
 * 
 * \param g_z Statistical weights of element z in 1. Must be sorted in ascending
 * order over energies!
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd
R_x_z(const Eigen::VectorXd& g_z, const double T_x, const double N_e_x) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_x_z = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      R_x_z(j, i) = R_x_z_ji(g_z(j), T_x, N_e_x);
    }
  }
  return R_x_z;
}


/**
 * Collisional de-excitation transitions rates using Regemorter formula at
 * coordinate x.
 * 
 * \param g Statistical weights in 1. Must be sorted in ascending order over
 * energies per element!
 * \param T_x Temperature at coordinate x in K.
 * \param N_e_x Electron number density at coordinate x in cm-3.
 * \return Transitions rates in s-1.
 */
inline std::vector<Eigen::MatrixXd> R_x(
  const std::vector<Eigen::VectorXd>& g,
  const double T_x,
  const double N_e_x
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x(Z);
  for (int z = 0; z < Z; z++) {
    R_x[z] = R_x_z(g[z], T_x, N_e_x);
  }
  return R_x;
}


}