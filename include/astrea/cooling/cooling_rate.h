/**
 * \file astrea/cooling/cooling_rate.h
 * Cooling rate.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::cooling {


/**
 * Cooling rate.
 * 
 * \param n_x_z Electrons population at point x for element z in 1.
 * Axis 0: Term index.
 * Must be sorted over energies!
 * \param R_x_z Transitions rates at point x for element z in s-1.
 * Axis 0: Initial term.
 * Axis 1: Final term.
 * Must be sorted over energies!
 * \param E_z Energies of element z in eV.
 * Axis 0: Term index.
 * Must be sorted!
 * \return Cooling rate in erg s-1 cm-3.
 */
inline double L_x(
  const Eigen::VectorXd& n_x_z,
  const Eigen::MatrixXd& R_x_z,
  const Eigen::VectorXd& E_z
) {
  const auto a = 1.602176634e-12; // erg eV-1
  const auto& K = n_x_z.size();

  auto L_x = 0.0;
  for (int k = 0; k < K; k++) {
    L_x += a * E_z(k) * R_x_z(k, 0) * n_x_z(k);
  }

  return L_x;
}


/**
 * Cooling rate.
 * 
 * \param x Any array with coordinates shape.
 * Axis 0: Coordinate index.
 * \param n_z Electrons population for element z in 1.
 * Axis 0: Coordinate index.
 * Axis 1: Term index.
 * Must be sorted over energies!
 * \param R_x_z Transitions rates for element z in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * Must be sorted over energies!
 * \param E_z Energies of element z in eV.
 * Axis 0: Term index.
 * Must be sorted!
 * \return Cooling rates in erg s-1 cm-3.
 * Axis 0: Coordinate index.
 */
inline Eigen::VectorXd L(
  const Eigen::VectorXd& x,
  const std::vector<Eigen::VectorXd>& n_z,
  const std::vector<Eigen::MatrixXd>& R_z,
  const Eigen::VectorXd& E_z
) {
  const auto& X = x.size();

  Eigen::VectorXd L = Eigen::VectorXd::Zero(X);
  for (int i = 0; i < X; i++) {
    L(i) = L_x(n_z[i], R_z[i], E_z);
  }

  return L;
}


}