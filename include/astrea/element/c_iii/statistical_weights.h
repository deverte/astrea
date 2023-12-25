/**
 * \file astrea/element/c_iii/statistical_weights.h
 * C III statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_iii/structure.h"


namespace astrea::element::c_iii {


/**
 * C III statistical weights by ?.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_1S)) = 1.0;
  return g;
};


}