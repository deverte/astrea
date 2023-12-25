/**
 * \file astrea/element/o_ii/energies.h
 * O II energies from NIST
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
 * O II energies from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4S)) = 0.0;
  return E;
}


}