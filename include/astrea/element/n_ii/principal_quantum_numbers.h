/**
 * \file astrea/element/n_ii/principal_quantum_numbers.h
 * N II principal quantum numbers from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database)
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_ii/structure.h"


namespace astrea::element::n_ii {


/**
 * N II principal quantum numbers from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database)
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P)) = 2.0;
  return n;
}


}