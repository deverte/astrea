/**
 * \file astrea/math/voigt_profile.h
 * Voigt profile.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>

#include <Eigen/Dense>

#include "astrea/math/trapezoid.h"


namespace astrea::math::voigt_profile {


/**
 * Voigt profile.
 * 
 * \param H_E Voigt function.
 * \param sigma Standard deviation.
 * \return Distribution.
 */
inline Eigen::VectorXd V_E(
  const Eigen::VectorXd& H_E,
  const double& sigma
) {
  const auto pi = 3.141592653589793;

  const auto V_E = H_E / (std::sqrt(2.0 * pi) * sigma);

  return V_E;
}


}