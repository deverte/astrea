/**
 * \file astrea/element/energies/o_ii_mashonkina.h
 * O II energies by Przybilla2000, Sitnova2012, and Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii_mashonkina/terms.h"


namespace astrea::element::o_ii_mashonkina {


/**
 * O II energies by Przybilla2000, Sitnova2012, and Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::Vector<double, 1> E() {
  Eigen::Vector<double, 1> E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 0.0;
  return E;
}


}