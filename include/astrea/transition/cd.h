/**
 * \file astrea/transitions/cd.h
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::cd {


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution) at coordinate x for element z for j->i transition.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param R_x_z_ij Collisional excitation rate of element z for i->j transition
 * at coordinate x in s-1.
 * \param g_z_i Statistical weight of element z of term i in 1.
 * \param g_z_j Statistical weight of element z of term j in 1.
 * \param E_z_ij Energy differenece of element z between terms i and j in eV.
 * \return Transitions rate in s-1.
 */
inline double R_x_z_ji(
  const double T_x,
  const double R_x_z_ij,
  const double g_z_i,
  const double g_z_j,
  const double E_z_ij
) {
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto R_x_z_ji =
    R_x_z_ij * std::exp(E_z_ij / (k_B * T_x)) * g_z_i / g_z_j;
  return R_x_z_ji;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution) at coordinate x for element z.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param R_x_z Collisional excitation rate of element z at coordinate x in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 * \param g_z Statistical weights of element z in 1.
 * Axis 0: Term.
 * Must be sorted in ascending order over energies!
 * \param E_z Energies of element z in eV.
 * Axis 0: Term.
 * Must be sorted in ascending order!
 * \return Transitions rates in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 */
inline Eigen::MatrixXd R_x_z(
  const double T_x,
  const Eigen::MatrixXd& R_x_z,
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z
) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_x_z_ = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      const auto E_z_ij = E_z(j) - E_z(i);
      R_x_z_(j, i) = R_x_z_ji(T_x, R_x_z(i, j), g_z(i), g_z(j), E_z_ij);
    }
  }
  return R_x_z_;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution) at coordinate x.
 * 
 * \param T_x Temperature at coordinate x in K.
 * \param R_x Collisional excitation rates at coordinate x in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 */
inline std::vector<Eigen::MatrixXd> R_x(
  const double T_x,
  const std::vector<Eigen::MatrixXd>& R_x,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x_(Z);
  for (int z = 0; z < Z; z++) {
    R_x_[z] = R_x_z(T_x, R_x[z], g[z], E[z]);
  }
  return R_x_;
}


/**
 * Collisional de-excitation transitions rates from LTE (using Boltzmann
 * distribution).
 * 
 * \param T Temperatures in K.
 * Axis 0: Coordinate index.
 * \param R Collisional excitation rates in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Initial term.
 * Axis 3: Final term.
 * \param g Statistical weights in 1.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order over energies per element!
 * \param E Energies in eV.
 * Axis 0: Element index.
 * Axis 1: Term.
 * Must be sorted in ascending order per element!
 * \return Transitions rates in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Element index.
 * Axis 2: Initial term.
 * Axis 3: Final term.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R(
  const Eigen::VectorXd& T,
  const std::vector<std::vector<Eigen::MatrixXd>>& R,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& X = T.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_(X);
  for (int x = 0; x < X; x++) {
    R_[x] = R_x(T(x), R[x], g, E);
  }
  return R_;
}


}