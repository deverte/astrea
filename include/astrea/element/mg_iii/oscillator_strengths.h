/**
 * \file astrea/element/mg_iii/oscillator_strengths.h
 * Mg III oscillator strengths.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::element::mg_iii {


/**
 * Mg III oscillator strengths.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 0, 0>::Zero();

  return f_KK;
}


}