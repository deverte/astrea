/**
 * \file astrea/element/n_ii/oscillator_strengths.h
 * N II oscillator strengths.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::element::n_ii {


/**
 * N II oscillator strengths.
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