/**
 * \file astrea/element/n_ii/effective_collision_strengths.h
 * N II effective collision strengths.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::element::n_ii {


/**
 * N II effective collision strengths.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 * - Axis 2: Bivariate data (row).
 *   - Row 0: Temperature in K.
 *   - Row 1: Effective collision strength in 1.
 * - Axis 3: Bivariate pair index (column).
 */
inline const std::vector<std::vector<Eigen::Matrix<double, 2, 0>>> f_vs_T_KK() {
  std::vector<std::vector<Eigen::Matrix<double, 2, 0>>>
  f_vs_T_KK(1, std::vector<Eigen::Matrix<double, 2, 0>>(1));

  return f_vs_T_KK;
}


}