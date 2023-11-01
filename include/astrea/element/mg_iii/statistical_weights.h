/**
 * \file astrea/element/mg_iii/statistical_weights.h
 * Mg III statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_iii/structure.h"


namespace astrea::element::mg_iii {


/**
 * Mg III statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ne_1S)) = 1.0;
  return g;
};


}