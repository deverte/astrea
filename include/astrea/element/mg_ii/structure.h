/**
 * \file astrea/element/mg_ii/structure.h
 * Mg II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2018 Mg II model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::mg_ii {


/**
 * Mg II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2018 Mg II model.
 */
enum class STRUCTURE {
  LS_Ne_3s_2S,
  LS_Ne_3p_2Po,
  LS_Ne_4s_2S,
  LS_Ne_3d_2D,
  LS_Ne_4p_2Po2,
  LS_Ne_4p_2Po4,
  LS_Ne_5s_2S,
  LS_Ne_4d_2D,
  LS_Ne_4f_2Fo,
  LS_Ne_5p_2Po,
  LS_Ne_6s_2S,
  LS_Ne_5d_2D,
  LS_Ne_5f_2Fo,
  LS_Ne_5g_2G,
  LS_Ne_6p_2Po,
  LS_Ne_7s_2S,
  LS_Ne_6d_2D,
  LS_Ne_6f_2Fo,
  LS_Ne_6g_2G,
  LS_Ne_6h_2Ho,
  LS_Ne_7p_2Po,
  LS_Ne_8s_2S,
  LS_Ne_7d_2D,
  LS_Ne_7f_2Fo,
  LS_Ne_7g_2G,
  LS_Ne_7h_Ne_7i, // [Ne] 7h - [Ne] 7i
  LS_Ne_8p_2Po,
  LS_Ne_9s_2S,
  LS_Ne_8d_2D,
  LS_Ne_8f_2Fo,
  LS_Ne_8g_2G,
  LS_Ne_8h_Ne_8i, // [Ne] 8h - [Ne] 8i
  LS_Ne_9p_2Po,
  LS_Ne_10s_2S,
  LS_Ne_9d_2D,
  LS_Ne_9f_2Fo,
  LS_Ne_9g_Ne_9i, // [Ne] 9g - [Ne] 9i
  LS_Ne_10p_2Po,
  LS_Ne_10d_2D,
  LS_Ne_10f_2Fo,
  LS_Ne_10g_2G,
  LS_Ne_10h_Ne_10i, // [Ne] 10h - [Ne] 10i
  LS_Ne_11g_2G,
};


}