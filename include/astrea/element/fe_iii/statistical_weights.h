/**
 * \file astrea/element/fe_iii/statistical_weights.h
 * Fe III statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_iii/structure.h"


namespace astrea::element::fe_iii {


/**
 * Fe III statistical weights from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D)) = 25.0;
  return g;
};


}