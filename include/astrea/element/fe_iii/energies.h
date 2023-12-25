/**
 * \file astrea/element/fe_iii/energies.h
 * Fe III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_iii/structure.h"


namespace astrea::element::fe_iii {


/**
 * Fe III energies from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D)) = 0.0;
  return E;
}


}