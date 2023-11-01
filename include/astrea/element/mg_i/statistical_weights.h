/**
 * \file astrea/element/mg_i/statistical_weights.h
 * Mg I statistical weights by Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_i/structure.h"


namespace astrea::element::mg_i {


/**
 * Mg I statistical weights by Alexeeva+2018.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g() {
  Eigen::VectorXd g = Eigen::Vector<double, 70>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8i)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8k)) = 60.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko)) = 60.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9l_L)) = 68.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)) = 211.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_16p_Ne_3s_2S_59p)) = 189.0;
  return g;
};


}