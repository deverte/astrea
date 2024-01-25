/**
 * \file astrea/element/o_ii/photoionization_cross_sections.h
 * O II photoionization cross sections.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::element::o_ii {


/**
 * O II photoionization cross sections.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Bivariate data (row)
 *   - Row 0: Frequency in s-1.
 *   - Row 1: Cross section in cm2.
 * - Axis 2: Bivariate pair index (column).
 */
inline const std::vector<Eigen::Matrix<double, 2, 0>> sigma_vs_nu_K() {
  std::vector<Eigen::Matrix<double, 2, 0>> sigma_vs_nu_K(1);

  return sigma_vs_nu_K;
}


}