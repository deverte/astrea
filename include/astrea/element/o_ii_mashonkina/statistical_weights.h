/**
 * \file astrea/element/statistical_weights/o_ii_mashonkina.h
 * O II statistical weights by Przybilla2000, Sitnova2012, and Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_ii_mashonkina/terms.h"


namespace astrea::element::o_ii_mashonkina {


/**
 * O II statistical weights by Przybilla2000, Sitnova2012, and Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::Vector<double, 1> g() {
  Eigen::Vector<double, 1> g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 4.0;
  return g;
}


}