/**
 * \file astrea/element/c_iii/energies.h
 * C III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_iii/structure.h"


namespace astrea::element::c_iii {


/**
 * C III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E() {
  Eigen::VectorXd E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_1S)) = 0.0;
  return E;
}


}