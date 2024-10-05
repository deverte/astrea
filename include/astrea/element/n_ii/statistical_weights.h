/**
 * \file astrea/element/n_ii/statistical_weights.h
 * N II statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_ii/structure.h"


namespace astrea::element::n_ii {


/**
 * N II statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P)) = 9.0;
  return g;
}


}