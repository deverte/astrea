/**
 * \file astrea/element/spontaneous_emission_rates/o_ii_mashonkina.h
 * O II spontaneous emission rates from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii_mashonkina/terms.h"


namespace astrea::element::o_ii_mashonkina {


/**
 * O II spontaneous emission rates from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Spontaneous emission rate in s-1.
 */
inline const Eigen::Matrix<double, 1, 1> A() {
  Eigen::Matrix<double, 1, 1> A = Eigen::Matrix<double, 1, 1>::Zero();
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4S),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)
  ) = 0.0;
  return A;
}


}