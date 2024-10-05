/**
 * \file astrea/element/n_i/structure.h
 * N I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina2024 N I model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::n_i {


/**
 * N I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina2024 N I model.
 */
enum class STRUCTURE {
  LS_He_2s2_2p3_4So,
  LS_He_2s2_2p3_2Do,
  LS_He_2s2_2p3_2Po,
  LS_He_2s2_2p2_3P_3s_4P,
  LS_He_2s2_2p2_3P_3s_2P,
  LS_He_2s_2p4_4P,
  LS_He_2s2_2p2_3P_3p_2So,
  LS_He_2s2_2p2_3P_3p_4Do,
  LS_He_2s2_2p2_3P_3p_4Po,
  LS_He_2s2_2p2_3P_3p_4So,
  LS_He_2s2_2p2_3P_3p_2Do,
  LS_He_2s2_2p2_3P_3p_2Po,
  LS_He_2s2_2p2_1D_3s_2D,
  LS_He_2s2_2p2_3P_4s_4P,
  LS_He_2s2_2p2_3P_4s_2P,
  LS_He_2s2_2p2_3P_3d_2P,
  LS_He_2s2_2p2_3P_3d_4D,
  LS_He_2s2_2p2_3P_3d_2D,
  LS_He_2s2_2p2_3P_4p_2So,
  LS_He_2s2_2p2_3P_4p_4Do,
  LS_He_2s2_2p2_3P_4p_4Po,
  LS_He_2s2_2p2_3P_4p_2Do,
  LS_He_2s2_2p2_3P_4p_4So,
  LS_He_2s2_2p2_3P_4p_2Po,
  LS_He_2s2_2p2_3P_5s_4P,
  LS_He_2s2_2p2_3P_5s_2P,
  LS_He_2s2_2p2_3P_4d_4F,
  LS_He_2s2_2p2_3P_4f_D, // 4fDo1
  LS_He_2s2_2p2_1D_3p_2Fo,
  LS_He_2s2_2p2_3P_5p_2So,
  LS_He_2s2_2p2_3P_5p_4Do,
  LS_He_2s2_2p2_3P_5p_4So,
  LS_He_2s2_2p2_3P_5p_2Do,
  LS_He_2s2_2p2_1D_3p_2Po,
  LS_He_2s2_2p2_3P_6s_4P,
  LS_He_2s2_2p2_3P_5d_2F,
  LS_He_2s2_2p2_3P2_5f, // 5fo1
  LS_He_2s2_2p2_3P_6p_4Do,
  _k2o, // ?
  LS_He_2s2_2p2_3P_7s_4P,
  LS_He_2s2_2p2_3Po_6f, // 6fo1
  LS_He_2s2_2p2_3P_7p_4Do,
  _k1e, // ?
  _k3o, // ?
  LS_He_2s2_2p2_3P_8s_4P,
  _k4o, // ?
  _k5o, // ?
  _k6o, // ?
  LS_He_2s2_2p2_3P_9s_4P,
  _k7o, // ?
  _k8o, // ?
  LS_He_2s2_2p2_3P_10s_4P,
  _k9o, // ?
  LS_He_2s2_2p2_3P_10s_2P,
  _k10o, // ?
  LS_He_2s2_2p2_3P_11s_2P,
  _k11o, // ?
  LS_He_2s2_2p2_3P_12s_2P,
  _k12o // ?
};


}