/**
 * \file astrea/element/mg_i/structure.h
 * Mg I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2018 Mg I model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::mg_i {


/**
 * Mg I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2018 Mg I model.
 */
enum class STRUCTURE {
  LS_Ne_3s2_1S,
  LS_Ne_3s_2S_3p_3Po0,
  LS_Ne_3s_2S_3p_3Po1,
  LS_Ne_3s_2S_3p_3Po2,
  LS_Ne_3s_2S_3p_1Po,
  LS_Ne_3s_2S_4s_3S,
  LS_Ne_3s_2S_4s_1S,
  LS_Ne_3s_2S_3d_1D,
  LS_Ne_3s_2S_4p_3Po,
  LS_Ne_3s_2S_3d_3D,
  LS_Ne_3s_2S_4p_1Po,
  LS_Ne_3s_2S_5s_3S,
  LS_Ne_3s_2S_5s_1S,
  LS_Ne_3s_2S_4d_1D,
  LS_Ne_3s_2S_4d_3D,
  LS_Ne_3s_2S_5p_3Po,
  LS_Ne_3s_2S_4f,
  LS_Ne_3s_2S_5p_1Po,
  LS_Ne_3s_2S_6s_3S,
  LS_Ne_3s_2S_6s_1S,
  LS_Ne_3s_2S_5d_1D,
  LS_Ne_3s_2S_5d_3D,
  LS_Ne_3s_2S_6p_3Po,
  LS_Ne_3s_2S_5f,
  LS_Ne_3s_2S_6p_1Po,
  LS_Ne_3s_2S_5g,
  LS_Ne_3p2_3P,
  LS_Ne_3s_2S_7s_3S,
  LS_Ne_3s_2S_7s_1S,
  LS_Ne_3s_2S_6d_1D,
  LS_Ne_3s_2S_6d_3D,
  LS_Ne_3s_2S_7p_3Po,
  LS_Ne_3s_2S_6f,
  LS_Ne_3s_2S_7p_1Po,
  LS_Ne_3s_2S_6g,
  LS_Ne_3s_2S_6h_Ho,
  LS_Ne_3s_2S_8s_3S,
  LS_Ne_3s_2S_7d_1D,
  LS_Ne_3s_2S_8s_1S,
  LS_Ne_3s_2S_7d_3D,
  LS_Ne_3s_2S_8p_3Po,
  LS_Ne_3s_2S_7f,
  LS_Ne_3s_2S_8p_1Po,
  LS_Ne_3s_2S_7g,
  LS_Ne_3s_2S_7h_Ho,
  LS_Ne_3s_2S_7i_I,
  LS_Ne_3s_2S_9s_3S,
  LS_Ne_3s_2S_8d_1D,
  LS_Ne_3s_2S_9s_1S,
  LS_Ne_3s_2S_8d_3D,
  LS_Ne_3s_2S_9p_3Po,
  LS_Ne_3s_2S_8f,
  LS_Ne_3s_2S_9p_1Po,
  LS_Ne_3s_2S_8g,
  LS_Ne_3s_2S_8h_Ho,
  LS_Ne_3s_2S_8i,
  LS_Ne_3s_2S_8k,
  LS_Ne_3s_2S_10s_3S,
  LS_Ne_3s_2S_9d_1D,
  LS_Ne_3s_2S_10s_1S,
  LS_Ne_3s_2S_9d_3D,
  LS_Ne_3s_2S_9f,
  LS_Ne_3s_2S_10p_1Po,
  LS_Ne_3s_2S_9g,
  LS_Ne_3s_2S_9h_Ho,
  LS_Ne_3s_2S_9i_I,
  LS_Ne_3s_2S_9k_Ko,
  LS_Ne_3s_2S_9l_L,
  LS_Ne_3s_2S_10d_Ne_3s_2S_15f, // [Ne] 3s 2S 10d - [Ne] 3s 2S 15f
  LS_Ne_3s_2S_16p_Ne_3s_2S_59p, // [Ne] 3s 2S 16p - [Ne] 3s 2S 59p
};


}