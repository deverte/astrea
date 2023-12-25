/**
 * \file astrea/optics/doppler_line_width.h
 * Doppler line width.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>


namespace astrea::optics::doppler_line_width {


/**
 * Doppler line widths.
 * 
 * \param T_X Temperatures in K.
 * \param m_i Mass in Da.
 * \param nu_ij Line center frequency in s-1.
 * \return Line width in s-1.
 */
inline Eigen::VectorXd Delta_nu_D_X(
  const Eigen::VectorXd& T_X,
  const double& m_i,
  const double& nu_ij
) {
  const auto pi = 3.141592653589793;
  const auto c = 2.99792458e10; // cm s-1
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto a = 938.27e6; // Da-1 eV

  const auto Delta_nu_D_X =
    (2.0 * k_B * T_X.array() / (a * m_i)).sqrt() * nu_ij;

  return Delta_nu_D_X;
}


}