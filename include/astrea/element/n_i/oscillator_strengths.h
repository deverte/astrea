/**
 * \file astrea/element/n_i/oscillator_strengths.h
 * N I oscillator strengths by Mashonkina+2024.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_i/structure.h"


namespace astrea::element::n_i {


/**
 * N I oscillator strengths by Mashonkina+2024.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 59, 59>::Zero();

  // Transitions 1
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.124E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)
  ) = 0.369E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)
  ) = 0.263E+00;

  // Transitions 2
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)
  ) = 0.994E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)
  ) = 0.102E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.183E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.594E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.361E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)
  ) = 0.898E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)
  ) = 0.366E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.595E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.644E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)
  ) = 0.343E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)
  ) = 0.527E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.267E-01;

  // Transitions 3
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.114E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.695E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.783E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.102E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.120E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.171E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.260E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.355E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.723E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.665E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.200E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.110E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.305E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.803E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.635E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.130E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.536E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.549E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.744E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.783E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.105E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.153E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.183E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.592E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.657E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.890E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.203E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.733E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.850E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.987E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.128E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)
  ) = 0.246E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.937E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.733E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.179E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.541E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.473E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.201E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.738E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.457E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.140E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.167E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.283E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.712E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.287E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)
  ) = 0.327E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)
  ) = 0.805E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)
  ) = 0.185E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)
  ) = 0.459E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.110E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.159E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.227E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.161E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.175E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.134E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.117E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.882E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.223E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.142E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.293E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.166E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.184E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.404E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.821E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.212E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.174E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.291E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.122E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.113E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.183E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.209E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.635E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.852E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.275E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.538E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.170E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.116E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.131E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.296E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.969E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.547E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.101E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.405E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.137E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.383E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.252E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.101E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.153E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.176E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.140E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.752E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.167E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.169E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.149E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.503E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.217E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.103E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.204E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.234E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.190E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.239E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.248E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.119E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.363E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.212E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.547E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.150E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.589E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.440E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.322E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.430E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.142E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.516E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.364E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.957E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.356E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.557E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.502E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.897E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.247E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.680E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.488E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.260E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.192E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.102E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.713E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.147E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.371E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.211E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.200E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.123E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.138E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.176E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.770E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.567E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.522E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.330E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.122E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.361E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.477E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.243E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.117E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.434E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.978E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.425E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.545E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.224E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.229E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.115E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.546E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.211E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.167E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.457E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.309E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.169E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.986E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.909E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.521E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.398E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.363E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.180E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.233E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.226E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.514E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.299E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.175E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.286E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.498E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.350E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.137E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.770E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.341E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.442E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.900E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.437E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.686E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.260E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.453E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.248E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.239E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.110E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.158E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.564E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.637E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.442E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.669E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.146E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.682E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.540E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.813E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.659E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.219E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.519E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.155E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.626E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.622E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.485E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.230E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.157E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)
  ) = 0.916E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.185E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.367E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.431E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.189E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.123E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)
  ) = 0.316E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)
  ) = 0.105E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.524E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.176E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.526E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.189E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.221E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.191E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.292E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.582E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.536E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.242E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.104E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.968E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.355E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.140E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.863E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.117E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.289E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.152E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.229E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.727E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.868E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.444E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.301E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.116E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.145E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)
  ) = 0.384E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.696E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.523E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.524E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.967E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.941E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.511E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.308E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.809E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.380E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.174E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.912E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.565E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.122E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.987E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.129E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.145E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.769E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.528E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.403E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.139E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.739E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.508E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.758E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.186E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.225E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.131E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.813E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.849E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.239E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.195E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.116E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.973E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.460E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)
  ) = 0.626E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.133E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.471E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)
  ) = 0.412E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.114E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.125E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.369E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.170E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.547E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So)
  ) = 0.344E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.784E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.296E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.153E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.449E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.129E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.254E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.311E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.205E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.778E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.154E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.386E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.184E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.238E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.629E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.584E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.102E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.112E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.235E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.316E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)
  ) = 0.295E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.568E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.111E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.922E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.112E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.430E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.640E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.718E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.590E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.592E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.210E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.560E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.134E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)
  ) = 0.134E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.264E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.399E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.249E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.561E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.410E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.232E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.605E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.252E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.124E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.694E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.305E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.464E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.101E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.168E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.190E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.113E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.125E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.101E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.200E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.438E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.591E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.426E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.301E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)
  ) = 0.275E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.203E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.374E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.478E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)
  ) = 0.126E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.980E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)
  ) = 0.388E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.202E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.710E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.877E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.733E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.289E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.160E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.163E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.163E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.162E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.172E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.233E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.364E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.951E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.169E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.974E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.132E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.207E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.464E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.125E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.168E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.927E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.324E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.161E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.193E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.130E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.105E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.158E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.462E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.839E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.859E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.395E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.165E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.368E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.445E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.404E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.687E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.682E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So)
  ) = 0.935E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.205E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)
  ) = 0.199E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.323E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)
  ) = 0.817E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.954E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.396E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.413E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)
  ) = 0.200E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.243E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.902E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.214E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)
  ) = 0.172E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.301E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.197E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.146E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.344E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.358E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.149E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.125E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.152E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.764E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.489E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.407E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)
  ) = 0.607E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.450E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.140E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.166E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.311E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.471E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.435E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.152E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)
  ) = 0.355E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.200E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.100E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.978E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.779E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.747E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.156E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.113E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.127E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.174E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.342E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.214E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.242E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.233E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.998E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.173E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.112E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.193E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.105E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.327E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.631E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.933E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.285E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)
  ) = 0.439E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.101E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.794E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.138E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.404E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.142E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.759E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.944E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.209E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.885E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.166E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.275E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.119E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.518E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.118E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.102E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.456E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.102E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.223E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.163E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.211E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.174E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.203E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.106E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.258E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.172E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.281E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.399E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.459E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.811E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.989E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.175E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.295E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.768E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.891E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.456E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.407E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.853E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.428E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.157E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.399E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.583E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.467E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.113E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.233E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.216E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.417E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.335E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.665E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.586E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.342E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.301E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::_k1e)
  ) = 0.232E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.607E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.352E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.266E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.268E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.112E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.178E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.645E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.614E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.789E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.862E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.138E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.255E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.509E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.186E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.409E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.114E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.584E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.185E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.375E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.129E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.530E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.232E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.174E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.201E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.879E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.132E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.418E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.693E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.768E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.383E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.114E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.886E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.251E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.519E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.264E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.182E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.219E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.859E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.648E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.674E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.503E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.104E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.144E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.896E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.553E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.567E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.163E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.215E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.672E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.372E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.135E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.102E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.503E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.191E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.198E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.201E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.181E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.100E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.811E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.222E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.118E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.174E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.319E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.490E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.195E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.128E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.620E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.191E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.153E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::_k1e)
  ) = 0.110E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.121E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.319E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.810E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.151E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.336E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)
  ) = 0.175E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.785E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)
  ) = 0.988E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.954E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.377E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.777E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.408E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.194E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.101E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.801E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)
  ) = 0.832E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.712E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.698E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.201E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.445E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.819E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.322E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.153E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.394E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.464E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.198E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.129E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.266E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.222E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.390E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)
  ) = 0.444E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.165E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)
  ) = 0.115E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.676E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.294E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.644E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.181E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.111E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.145E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.106E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.601E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.936E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)
  ) = 0.712E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.998E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.118E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.110E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.110E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)
  ) = 0.152E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.177E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.113E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.301E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.234E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.243E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.946E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.200E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.370E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.788E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)
  ) = 0.361E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)
  ) = 0.566E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.821E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.171E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.138E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::_k1e)
  ) = 0.853E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.489E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.399E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.228E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.226E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.680E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)
  ) = 0.447E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.612E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)
  ) = 0.758E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.244E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.660E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.253E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k3o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.801E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.134E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.401E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.170E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.356E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.613E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.392E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.137E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.525E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)
  ) = 0.543E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)
  ) = 0.523E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)
  ) = 0.205E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.143E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.943E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.127E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.222E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.443E-03;
  f_KK(
    static_cast<int>(STRUCTURE::_k4o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.166E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k3o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.395E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.215E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.504E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.205E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)
  ) = 0.133E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.720E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.181E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.973E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.438E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.230E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.340E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.109E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.125E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)
  ) = 0.918E-04;
  f_KK(
    static_cast<int>(STRUCTURE::_k5o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.611E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k4o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.149E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.171E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.271E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.641E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)
  ) = 0.268E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.404E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k3o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.962E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k6o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.990E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.562E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.708E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k3o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.181E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k5o)
  ) = 0.669E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.219E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.268E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::_k2o)
  ) = 0.446E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)
  ) = 0.236E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.236E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.162E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k7o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.490E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.207E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.848E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k5o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.865E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k4o)
  ) = 0.640E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k4o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.455E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.617E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.163E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k6o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.971E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k4o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.244E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::_k1e)
  ) = 0.133E-04;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.269E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.980E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.158E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.507E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k3o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.122E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P),
    static_cast<int>(STRUCTURE::_k3o)
  ) = 0.604E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k8o)
  ) = 0.231E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k8o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.346E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)
  ) = 0.182E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.178E-05;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P),
    static_cast<int>(STRUCTURE::_k10o)
  ) = 0.159E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k7o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.572E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.560E-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.796E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f),
    static_cast<int>(STRUCTURE::_k1e)
  ) = 0.657E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P),
    static_cast<int>(STRUCTURE::_k7o)
  ) = 0.142E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k9o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.249E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k5o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.450E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.548E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k4o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)
  ) = 0.183E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k5o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.273E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)
  ) = 0.684E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P),
    static_cast<int>(STRUCTURE::_k12o)
  ) = 0.746E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)
  ) = 0.116E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k6o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.444E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)
  ) = 0.857E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P),
    static_cast<int>(STRUCTURE::_k9o)
  ) = 0.389E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P),
    static_cast<int>(STRUCTURE::_k11o)
  ) = 0.237E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k6o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)
  ) = 0.146E-02;
  f_KK(
    static_cast<int>(STRUCTURE::_k2o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)
  ) = 0.621E+00;
  f_KK(
    static_cast<int>(STRUCTURE::_k1e),
    static_cast<int>(STRUCTURE::_k6o)
  ) = 0.212E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)
  ) = 0.573E-05;
  f_KK(
    static_cast<int>(STRUCTURE::_k8o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.122E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)
  ) = 0.158E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k10o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)
  ) = 0.154E+01;
  f_KK(
    static_cast<int>(STRUCTURE::_k9o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)
  ) = 0.456E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)
  ) = 0.187E-01;
  f_KK(
    static_cast<int>(STRUCTURE::_k7o),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)
  ) = 0.330E-03;

  return f_KK;
}


}