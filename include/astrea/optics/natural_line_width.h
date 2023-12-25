/**
 * \file astrea/optics/natural_line_width.h
 * Natural (Lorentz) line width.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>


namespace astrea::optics::natural_line_width {


/**
 * Natural (Lorentz) line width.
 * 
 * \param A_ji Spontaneous emission rate in s-1.
 * \return Line width in s-1.
 */
inline double Delta_nu_L(const double& A_ji) {
  const auto pi = 3.141592653589793;

  const auto Delta_nu_L = A_ji / (2.0 * pi);

  return Delta_nu_L;
}


}