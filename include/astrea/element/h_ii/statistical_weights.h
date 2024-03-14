/**
 * \file astrea/element/h_ii/statistical_weights.h
 * H II statistical weights by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_ii/structure.h"


namespace astrea::element::h_ii {


/**
 * H II statistical weights by Mashonkina+2008.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(STRUCTURE::LS_1)) = 1.0;
  return g;
};


}