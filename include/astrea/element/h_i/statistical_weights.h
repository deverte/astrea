/**
 * \file astrea/element/h_i/statistical_weights.h
 * H I statistical weights by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i {


/**
 * H I statistical weights by Mashonkina+2008.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 19>::Zero();
  g(static_cast<int>(STRUCTURE::LS_1)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_2)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_3)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_4)) = 32.0;
  g(static_cast<int>(STRUCTURE::LS_5)) = 50.0;
  g(static_cast<int>(STRUCTURE::LS_6)) = 72.0;
  g(static_cast<int>(STRUCTURE::LS_7)) = 98.0;
  g(static_cast<int>(STRUCTURE::LS_8)) = 128.0;
  g(static_cast<int>(STRUCTURE::LS_9)) = 162.0;
  g(static_cast<int>(STRUCTURE::LS_10)) = 200.0;
  g(static_cast<int>(STRUCTURE::LS_11)) = 242.0;
  g(static_cast<int>(STRUCTURE::LS_12)) = 288.0;
  g(static_cast<int>(STRUCTURE::LS_13)) = 338.0;
  g(static_cast<int>(STRUCTURE::LS_14)) = 392.0;
  g(static_cast<int>(STRUCTURE::LS_15)) = 450.0;
  g(static_cast<int>(STRUCTURE::LS_16)) = 512.0;
  g(static_cast<int>(STRUCTURE::LS_17)) = 578.0;
  g(static_cast<int>(STRUCTURE::LS_18)) = 648.0;
  g(static_cast<int>(STRUCTURE::LS_19)) = 722.0;
  return g;
};


}