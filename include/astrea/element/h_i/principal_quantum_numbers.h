/**
 * \file astrea/element/h_i/principal_quantum_numbers.h
 * H I principal quantum numbers by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i {


/**
 * H I principal quantum numbers by Mashonkina+2008.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 19>::Zero();
  n(static_cast<int>(STRUCTURE::LS_1)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_2)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_3)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_4)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_5)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_6)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_7)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_8)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_9)) = 9.0;
  n(static_cast<int>(STRUCTURE::LS_10)) = 10.0;
  n(static_cast<int>(STRUCTURE::LS_11)) = 11.0;
  n(static_cast<int>(STRUCTURE::LS_12)) = 12.0;
  n(static_cast<int>(STRUCTURE::LS_13)) = 13.0;
  n(static_cast<int>(STRUCTURE::LS_14)) = 14.0;
  n(static_cast<int>(STRUCTURE::LS_15)) = 15.0;
  n(static_cast<int>(STRUCTURE::LS_16)) = 16.0;
  n(static_cast<int>(STRUCTURE::LS_17)) = 17.0;
  n(static_cast<int>(STRUCTURE::LS_18)) = 18.0;
  n(static_cast<int>(STRUCTURE::LS_19)) = 19.0;
  return n;
};


}