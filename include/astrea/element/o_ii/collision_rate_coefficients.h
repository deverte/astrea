/**
 * \file astrea/element/o_ii/collision_rate_coefficients.h
 * O II collision rate coefficients.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::element::o_ii {


/**
 * O II collision rate coefficients.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 * - Axis 2: Bivariate data (row).
 *   - Row 0: Temperature in K.
 *   - Row 1: Collision rate coefficient in cm3 s-1.
 * - Axis 3: Bivariate pair index (column).
 */
inline const std::vector<std::vector<Eigen::Matrix<double, 2, 0>>> C_vs_T_KK() {
  std::vector<std::vector<Eigen::Matrix<double, 2, 0>>>
  C_vs_T_KK(1, std::vector<Eigen::Matrix<double, 2, 0>>(1));

  return C_vs_T_KK;
}


}