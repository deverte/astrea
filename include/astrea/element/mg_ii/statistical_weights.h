/**
 * \file astrea/element/mg_ii/statistical_weights.h
 * Mg II statistical weights by Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_ii/structure.h"


namespace astrea::element::mg_ii {


/**
 * Mg II statistical weights by Alexeeva+2018.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g() {
  Eigen::VectorXd g = Eigen::Vector<double, 43>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ne_3s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_4s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_3d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_5s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_4d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_5d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_5g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_6h_2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_7h_Ne_7i)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_9s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_8h_Ne_8i)) = 48.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_9d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_9g_Ne_9i)) = 66.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_10h_Ne_10i)) = 48.0;
  g(static_cast<int>(STRUCTURE::LS_Ne_11g_2G)) = 18.0;
  return g;
};


}