/**
 * \file astrea/element/n_i/statistical_weights.h
 * N I statistical weights by Mashonkina+2024.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_i/structure.h"


namespace astrea::element::n_i {


/**
 * N I statistical weights by Mashonkina+2024.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 59>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)) = 60.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)) = 90.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)) = 136.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)) = 38.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)) = 218.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)) = 138.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)) = 42.0;
  g(static_cast<int>(STRUCTURE::_k2o)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)) = 270.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)) = 330.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)) = 46.0;
  g(static_cast<int>(STRUCTURE::_k1e)) = 176.0;
  g(static_cast<int>(STRUCTURE::_k3o)) = 164.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)) = 330.0;
  g(static_cast<int>(STRUCTURE::_k4o)) = 214.0;
  g(static_cast<int>(STRUCTURE::_k5o)) = 8.0;
  g(static_cast<int>(STRUCTURE::_k6o)) = 276.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)) = 548.0;
  g(static_cast<int>(STRUCTURE::_k7o)) = 374.0;
  g(static_cast<int>(STRUCTURE::_k8o)) = 280.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)) = 374.0;
  g(static_cast<int>(STRUCTURE::_k9o)) = 450.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)) = 86.0;
  g(static_cast<int>(STRUCTURE::_k10o)) = 252.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)) = 114.0;
  g(static_cast<int>(STRUCTURE::_k11o)) = 266.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)) = 212.0;
  g(static_cast<int>(STRUCTURE::_k12o)) = 76.0;
  return g;
};


}