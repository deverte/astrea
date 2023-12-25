/**
 * \file astrea/element/fe_iii/principal_quantum_numbers.h
 * Fe III principal quantum numbers from NIST
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
 * Fe III principal quantum numbers from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D)) = 3.0;
  return n;
};


}