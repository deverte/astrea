/**
 * \file astrea/element/mg_iii/energies.h
 * Mg III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_iii/structure.h"


namespace astrea::element::mg_iii {


/**
 * Mg III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ne_1S)) = 0.0;
  return E;
}


}