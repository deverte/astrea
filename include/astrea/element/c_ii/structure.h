/**
 * \file astrea/element/c_ii/structure.h
 * C II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2015 C II model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::c_ii {


/**
 * C II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2015 C II model.
 */
enum class STRUCTURE {
  LS_He_2s2_2p_2Po,
  LS_He_2s_2p2_4P2,
  LS_He_2s_2p2_4P4,
  LS_He_2s_2p2_4P6,
  LS_He_2s_2p2_2D,
  LS_He_2s_2p2_2S,
  LS_He_2s_2p2_2P2,
  LS_He_2s_2p2_2P4,
  LS_He_2s2_3s_2S,
  LS_He_2s2_3p_2Po,
  LS_He_2p3_4So4,
  LS_He_2s2_3d_2D,
  LS_He_2p3_2Do,
  LS_He_2s2_4s_2S,
  LS_He_2s2_4p_2Po2,
  LS_He_2s2_4p_2Po4,
  LS_He_2s_2p_3Po_3s_4Po2,
  LS_He_2s_2p_3Po_3s_4Po4,
  LS_He_2s_2p_3Po_3s_4Po6,
  LS_He_2s2_4d_2D4,
  LS_He_2s2_4d_2D6,
  LS_He_2p3_2Po2,
  LS_He_2p3_2Po4,
  LS_He_2s2_4f_2Fo,
  LS_He_2s2_5s_2S,
  LS_He_2s2_5p_2Po2,
  LS_He_2s2_5p_2Po4,
  LS_He_2s_2p_3Po_3s_2Po2,
  LS_He_2s_2p_3Po_3s_2Po4,
  LS_He_2s2_5d_2D,
  LS_He_2s2_5f_2Fo,
  LS_He_2s2_5g_2G,
  LS_He_2s2_6s_2S,
  LS_He_2s_2p_3Po_3p_4D2,
  LS_He_2s_2p_3Po_3p_4D4,
  LS_He_2s_2p_3Po_3p_4D6,
  LS_He_2s_2p_3Po_3p_4D8,
  LS_He_2s_2p_3Po_3p_2P2,
  LS_He_2s_2p_3Po_3p_2P4,
  LS_He_2s2_6p_2Po,
  LS_He_2s2_6d_2D,
  LS_He_2s2_6f_2Fo,
  LS_He_2s2_6g_2G,
  LS_He_2s2_6h_2Ho,
  LS_He_2s_2p_3Po_3p_4S,
  LS_He_2s2_7s_2S,
  LS_He_2s_2p_3Po_3p_4P2,
  LS_He_2s_2p_3Po_3p_4P4,
  LS_He_2s_2p_3Po_3p_4P6,
  LS_He_2s2_7p_2Po,
  LS_He_2s2_7d_2D,
  LS_He_2s2_7f_2Fo,
  LS_He_2s2_7g_He_2s2_7i, // [He] 2s2 7g - [He] 2s2 7i
  LS_He_2s2_8s_2S,
  LS_He_2s_2p_3Po_3p_2D4,
  LS_He_2s_2p_3Po_3p_2D6,
  LS_He_2s2_8p_2Po,
  LS_He_2s2_8d_2D,
  LS_He_2s2_8f_2Fo,
  LS_He_2s2_8g_He_2s2_8k, // [He] 2s2 8g - [He] 2s2 8k
  LS_He_2s2_11d_He_2s2_11k, // [He] 2s2 11d - [He] 2s2 11k
  LS_He_2s2_9s_2S,
  LS_He_2s2_9p_2Po,
  LS_He_2s2_9d_2D,
  LS_He_2s2_9f_2Fo,
  LS_He_2s2_9g_He_2s2_9l, // [He] 2s2 9g - [He] 2s2 9l
  LS_He_2s2_10p_2Po,
  LS_He_2s2_10d_2D,
  LS_He_2s2_10f_2Fo,
  LS_He_2s2_12d_He_2s2_12k, // [He] 2s2 12d - [He] 2s2 12k
  LS_He_2s2_13f_He_2s2_13k, // [He] 2s2 13d - [He] 2s2 13k
  LS_He_2s_2p_3Po_3d_4Fo4,
  LS_He_2s_2p_3Po_3d_4Fo6,
  LS_He_2s_2p_3Po_3d_4Fo8,
  LS_He_2s_2p_3Po_3d_4Fo10,
  LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6, // [He] 2s 2p 3Po 3d 4Do2 4Do4 4Do6
  LS_He_2s_2p_3Po_3d_4Do8,
};


}