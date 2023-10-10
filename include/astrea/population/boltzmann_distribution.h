/**
 * \file astrea/population/boltzmann_distribution.h
 * LTE electrons population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::population::boltzmann_distribution {


/**
 * Calculates LTE electrons population using Boltzmann distribution at
 * coordinate x for element z.
 * 
 * \param g_z Statistical weights for element z in 1.
 * \param E_z Energies for element z in eV.
 * \param T_x Temperature at coordinate x in K.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd n_x_z(
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z,
  const double T_x
) {
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto& k = g_z.size(); // 1
  Eigen::VectorXd n_x_z = Eigen::VectorXd::Zero(k);
  auto S = 0.0;
  for (int j = 0; j < k; j++) {
    S += g_z(j) * std::exp(-E_z(j) / (k_B * T_x));
  }
  for (int i = 0; i < k; i++) {
    n_x_z(i) = g_z(i) * std::exp(-E_z(i) / (k_B * T_x)) / S;
  }
  return n_x_z;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution at
 * coordinate x.
 * 
 * \param g Statistical weights in 1.
 * \param E Energies in eV.
 * \param T_x Temperature at coordinate x in K.
 * \return Electrons population in 1.
 */
inline std::vector<Eigen::VectorXd> n_x(
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E,
  const double T_x
) {
  const auto& Z = g.size(); // 1
  std::vector<Eigen::VectorXd> n_x(Z);
  for (int z = 0; z < Z; z++) {
    n_x[z] = n_x_z(g[z], E[z], T_x);
  }
  return n_x;
}


}