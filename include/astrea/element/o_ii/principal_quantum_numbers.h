/**
 * \file astrea/element/o_ii/principal_quantum_numbers.h
 * O II principal quantum numbers from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database)
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii/structure.h"


namespace astrea::element::o_ii {


/**
 * O II principal quantum numbers from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database)
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4S)) = 2.0;
  return n;
}


}