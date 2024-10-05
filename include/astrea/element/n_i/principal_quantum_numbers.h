/**
 * \file astrea/element/n_i/principal_quantum_numbers.h
 * N I principal quantum numbers by Mashonkina+2024.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_i/structure.h"


namespace astrea::element::n_i {


/**
 * N I principal quantum numbers by Mashonkina+2024.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n_K() {
  Eigen::VectorXd n = Eigen::Vector<double, 59>::Zero();
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)) = 1.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::_k2o)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::_k1e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_k3o)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)) = 6.0;
  n(static_cast<int>(STRUCTURE::_k4o)) = 7.0;
  n(static_cast<int>(STRUCTURE::_k5o)) = 7.0;
  n(static_cast<int>(STRUCTURE::_k6o)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)) = 7.0;
  n(static_cast<int>(STRUCTURE::_k7o)) = 8.0;
  n(static_cast<int>(STRUCTURE::_k8o)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)) = 8.0;
  n(static_cast<int>(STRUCTURE::_k9o)) = 9.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)) = 9.0;
  n(static_cast<int>(STRUCTURE::_k10o)) = 9.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)) = 10.0;
  n(static_cast<int>(STRUCTURE::_k11o)) = 11.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)) = 12.0;
  n(static_cast<int>(STRUCTURE::_k12o)) = 13.0;
  return n;
};


}