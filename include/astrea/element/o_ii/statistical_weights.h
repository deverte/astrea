/**
 * \file astrea/element/o_ii/statistical_weights.h
 * O II statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii/structure.h"


namespace astrea::element::o_ii {


/**
 * O II statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4S)) = 4.0;
  return g;
}


}