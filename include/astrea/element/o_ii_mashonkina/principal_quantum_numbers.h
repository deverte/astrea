/**
 * \file astrea/element/principal_quantum_numbers/o_ii_mashonkina.h
 * O II principal quantum numbers by Przybilla2000, Sitnova2012, and
 * Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii_mashonkina/terms.h"


namespace astrea::element::o_ii_mashonkina {


/**
 * O II principal quantum numbers by Przybilla2000, Sitnova2012, and
 * Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::Vector<double, 1> n() {
  Eigen::Vector<double, 1> n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 2.0;
  return n;
}


}