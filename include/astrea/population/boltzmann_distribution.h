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
 * \param T_x Temperature at coordinate x in K.
 * \param g_z Statistical weights for element z in 1.
 * Axis 0: Term.
 * \param E_z Energies for element z in eV.
 * Axis 0: Term.
 * \return Electrons population at point x for element z in 1.
 * Axis 0: Term.
 */
inline Eigen::VectorXd n_x_z(
  const double T_x,
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z
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
 * \param T_x Temperature at coordinate x in K.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * \return Electrons population at point x in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 */
inline std::vector<Eigen::VectorXd> n_x(
  const double T_x,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& Z = g.size(); // 1
  std::vector<Eigen::VectorXd> n_x(Z);
  for (int z = 0; z < Z; z++) {
    n_x[z] = n_x_z(T_x, g[z], E[z]);
  }
  return n_x;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution across all
 * spatial points.
 * 
 * \param T Temperatures in K.
 * Axis 0: Coordinate index.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * \return Electrons population in 1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Term.
 */
inline std::vector<std::vector<Eigen::VectorXd>> n(
  const Eigen::VectorXd& T,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& X = T.size(); // 1
  std::vector<std::vector<Eigen::VectorXd>> n(X);
  for (int x = 0; x < X; x++) {
    n[x] = n_x(T(x), g, E);
  }
  return n;
}


}