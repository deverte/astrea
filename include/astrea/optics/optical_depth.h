/**
 * \file astrea/optics/optical_depth.h
 * Optical depth.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/math/trapezoid.h"
#include "astrea/optics/absorption_coefficient.h"


namespace astrea::optics::optical_depth {


/**
 * Optical depth.
 * 
 * \param x_X Coordinates in au.
 * \param n_X Element number densities in cm-3.
 * \param g_K Statistical weights in 1.
 * \param E_K Energies in eV.
 * \param A_KK Spontaneous emission rates in s-1.
 * \param nu Frequency in s-1.
 * \return Optical depth in 1.
 */
inline double tau(
  const Eigen::VectorXd& x_X,
  const Eigen::VectorXd& n_X,
  const Eigen::VectorXd& g_K,
  const Eigen::VectorXd& E_K,
  const Eigen::MatrixXd& A_KK,
  const double& nu
) {
  const auto alpha_nu_X_ =
    absorption_coefficient::alpha_nu_X(n_X, g_K, E_K, A_KK, nu);
  const auto tau = astrea::math::trapezoid(alpha_nu_X_, x_X);
  return tau;
}


}