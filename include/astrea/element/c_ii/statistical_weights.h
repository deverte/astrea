/**
 * \file astrea/element/c_ii/statistical_weights.h
 * C II statistical weights by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_ii/structure.h"


namespace astrea::element::c_ii {


/**
 * C II statistical weights by Alexeeva+2015.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 77>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2p3_4So4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2p3_2Do)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)) = 66.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)) = 96.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_11d_He_2s2_11k)) = 242.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)) = 130.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_12d_He_2s2_12k)) = 288.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_13f_He_2s2_13k)) = 338.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo10)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)) = 8.0;
  return g;
};


}