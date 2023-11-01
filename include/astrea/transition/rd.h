/**
 * \file astrea/transitions/rd.h
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::rd {


/**
 * Radiative de-excitation transitions rates using oscillator strengths at
 * coordinate x for element z for j->i transition.
 * 
 * \param f_z_ij Oscillator strengths of element z for i->j transition in 1.
 * \param g_z_i Statistical weight of element z of term i in 1.
 * \param g_z_j Statistical weight of element z of term j in 1.
 * \param E_z_ij Energy differenece of element z between terms i and j in eV.
 * \return Transitions rate in s-1.
 */
inline double R_x_z_ji(
  const double f_z_ij,
  const double g_z_i,
  const double g_z_j,
  const double E_z_ij
) {
  const auto a = 43391988.531763464; // eV-2 s-1
  const auto R_x_z_ji = a * f_z_ij * g_z_i / g_z_j * std::pow(E_z_ij, 2.0);
  return R_x_z_ji;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths at
 * coordinate x for element z.
 * 
 * \param f_z Oscillator strengths of element z in 1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 * Must be sorted in ascending order over energies!
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
  const Eigen::MatrixXd& f_z,
  const Eigen::VectorXd& g_z,
  const Eigen::VectorXd& E_z
) {
  const auto& k = g_z.size();
  Eigen::MatrixXd R_x_z_ = Eigen::MatrixXd::Zero(k, k);
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      const auto E_z_ij = E_z(j) - E_z(i);
      R_x_z_(j, i) = R_x_z_ji(f_z(i, j), g_z(i), g_z(j), E_z_ij);
    }
  }
  return R_x_z_;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths at
 * coordinate x.
 * 
 * \param f Oscillator strengths in 1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * Must be sorted in ascending order over energies per element!
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
  const std::vector<Eigen::MatrixXd>& f,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& Z = g.size();
  std::vector<Eigen::MatrixXd> R_x_(Z);
  for (int z = 0; z < Z; z++) {
    R_x_[z] = R_x_z(f[z], g[z], E[z]);
  }
  return R_x_;
}


/**
 * Radiative de-excitation transitions rates using oscillator strengths.
 * 
 * \param x Any vector with shape corresponding to spatial points.
 * Axis 0: Coordinate index.
 * \param f Oscillator strengths in 1.
 * Axis 0: Element index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * Must be sorted in ascending order over energies per element!
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
  const Eigen::VectorXd& x,
  const std::vector<Eigen::MatrixXd>& f,
  const std::vector<Eigen::VectorXd>& g,
  const std::vector<Eigen::VectorXd>& E
) {
  const auto& X = x.size();
  std::vector<std::vector<Eigen::MatrixXd>> R_(X);
  const auto R__ = R_x(f, g, E);
  for (int x = 0; x < X; x++) {
    R_[x] = R__;
  }
  return R_;
}


}