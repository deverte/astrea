/**
 * \file astrea/element/h_ii/principal_quantum_numbers.h
 * H II principal quantum numbers by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_ii/structure.h"


namespace astrea::element::h_ii {


/**
 * H II principal quantum numbers by Mashonkina+2008.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(STRUCTURE::LS_1)) = 1.0;
  return n;
};


}