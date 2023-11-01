/**
 * \file astrea/element/c_i/structure.h
 * C I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2015 C I model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::c_i {


/**
 * C I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Alexeeva+2015 C I model.
 */
enum class STRUCTURE {
  LS_He_2s2_2p2_3P0,
  LS_He_2s2_2p2_3P1,
  LS_He_2s2_2p2_3P2,
  LS_He_2s2_2p2_1D2,
  LS_He_2s2_2p2_1S0,
  LS_He_2s_2p3_5So2,
  LS_He_2s2_2p_3s_3Po0,
  LS_He_2s2_2p_3s_3Po1,
  LS_He_2s2_2p_3s_3Po2,
  LS_He_2s2_2p_3s_1Po1,
  LS_He_2s_2p3_3Do,
  LS_He_2s2_2p_3p_1P1,
  LS_He_2s2_2p_3p_3D1,
  LS_He_2s2_2p_3p_3D2,
  LS_He_2s2_2p_3p_3D3,
  LS_He_2s2_2p_3p_3S1,
  LS_He_2s2_2p_3p_3P0,
  LS_He_2s2_2p_3p_3P1,
  LS_He_2s2_2p_3p_3P2,
  LS_He_2s2_2p_3p_1D2,
  LS_He_2s2_2p_3p_1S0,
  LS_He_2s_2p3_3Po,
  LS_He_2s2_2p_3d_1Do2,
  LS_He_2s2_2p_4s_3Po0,
  LS_He_2s2_2p_4s_3Po1,
  LS_He_2s2_2p_4s_3Po2,
  LS_He_2s2_2p_3d_3Fo2,
  LS_He_2s2_2p_3d_3Fo3,
  LS_He_2s2_2p_3d_3Fo4,
  LS_He_2s2_2p_3d_3Do1,
  LS_He_2s2_2p_3d_3Do2,
  LS_He_2s2_2p_3d_3Do3,
  LS_He_2s2_2p_4s_1Po1,
  LS_He_2s2_2p_3d_1Fo3,
  LS_He_2s2_2p_3d_1Po1,
  LS_He_2s2_2p_3d_3Po2,
  LS_He_2s2_2p_3d_3Po1,
  LS_He_2s2_2p_3d_3Po0,
  LS_He_2s2_2p_4p_1P1,
  LS_He_2s2_2p_4p_3D1,
  LS_He_2s2_2p_4p_3D2,
  LS_He_2s2_2p_4p_3D3,
  LS_He_2s2_2p_4p_3S1,
  LS_He_2s2_2p_4p_3P0,
  LS_He_2s2_2p_4p_3P1,
  LS_He_2s2_2p_4p_3P2,
  LS_He_2s2_2p_4p_1D2,
  LS_He_2s2_2p_4p_1S0,
  LS_He_2s2_2p_4d_1Do2,
  LS_He_2s2_2p_5s_3Po0,
  LS_He_2s2_2p_5s_3Po2,
  LS_He_2s2_2p_5s_3Po1,
  LS_He_2s2_2p_4d_3Fo3,
  LS_He_2s2_2p_4d_3Fo2,
  LS_He_2s2_2p_4d_3Fo4,
  LS_He_2s2_2p_4d_3Do1,
  LS_He_2s2_2p_4d_3Do2,
  LS_He_2s2_2p_4d_3Do3,
  LS_He_2s2_2p_5s_1Po1,
  _10f57, // ?
  LS_He_2s2_2p_4d_1Fo3,
  _3f579, // ?
  LS_He_2s2_2p_4d_1Po1,
  _3124f3, // ?
  LS_He_2s2_2p_4d_3Po2,
  LS_He_2s2_2p_4d_3Po1,
  LS_He_2s2_2p_4d_3Po0,
  LS_He_2s2_2p_5p_1P1,
  LS_He_2s2_2p_5p_3D1,
  LS_He_2s2_2p_5p_3D2,
  LS_He_2s2_2p_5p_3S1,
  LS_He_2s2_2p_5p_3D3,
  LS_He_2s2_2p_5p_3P,
  LS_He_2s2_2p_5p_1D2,
  LS_He_2s2_2p_5p_1S0,
  LS_He_2s2_2p_5d_1Do2,
  LS_He_2s2_2p_5d_3Fo2,
  LS_He_2s2_2p_6s_3Po0,
  LS_He_2s2_2p_5d_3Fo3,
  LS_He_2s2_2p_6s_3Po1,
  LS_He_2s2_2p_5d_3Do1,
  LS_He_2s2_2p_5d_3Fo4,
  LS_He_2s2_2p_6s_3Po2,
  LS_He_2s2_2p_5d_3Do2,
  LS_He_2s2_2p_5d_3Do3,
  LS_He_2s2_2p_6s_1Po1,
  _335f7, // ?
  LS_He_2s2_2p_5d_1Po1,
  _315f3, // ?
  LS_He_2s2_2p_5d_3Po,
  LS_He_2s2_2p_6p_1P1,
  LS_He_2s2_2p_6p_3D1,
  LS_He_2s2_2p_6p_3S1,
  LS_He_2s2_2p_6p_3D2,
  LS_He_2s2_2p_6p_3D3,
  LS_He_2s2_2p_6p_3P,
  LS_He_2s2_2p_6p_1D2,
  LS_He_2s2_2p_6p_1S0,
  LS_He_2s2_2p_6d_1Do2,
  LS_He_2s2_2p_6d_3Fo2,
  LS_He_2s2_2p_7s_3Po0,
  LS_He_2s2_2p_6d_3Fo3,
  LS_He_2s2_2p_7s_3Po1,
  LS_He_2s2_2p_6d_3Do1,
  LS_He_2s2_2p_7s_3Po2,
  LS_He_2s2_2p_6d_3Fo4,
  LS_He_2s2_2p_6d_3Do2,
  LS_He_2s2_2p_6d_3Do3,
  LS_He_2s2_2p_7s_1Po1,
  LS_He_2s2_2p_6d_1Fo3,
  _336f7, // ?
  LS_He_2s2_2p_6d_1Po1,
  LS_He_2s2_2p_6d_3Po,
  LS_He_2s2_2p_7p_1P1,
  LS_He_2s2_2p_7p_3S1,
  LS_He_2s2_2p_7p_3D,
  LS_He_2s2_2p_7p_3P,
  LS_He_2s2_2p_7p_1D2,
  LS_He_2s2_2p_7p_1S0,
  LS_He_2s2_2p_7d_1Do2,
  LS_He_2s2_2p_7d_3Fo2,
  LS_He_2s2_2p_8s_3Po0,
  LS_He_2s2_2p_7d_3Fo3,
  LS_He_2s2_2p_8s_3Po1,
  LS_He_2s2_2p_7d_3Do1,
  _127f5, // ?
  LS_He_2s2_2p_8s_3Po2,
  LS_He_2s2_2p_7d_3Fo4,
  LS_He_2s2_2p_7d_3Do2,
  LS_He_2s2_2p_7d_3Do3,
  LS_He_2s2_2p_8s_1Po1,
  LS_He_2s2_2p_7d_1Fo3,
  _337f7, // ?
  _37f5, // ?
  LS_He_2s2_2p_7d_3Po2,
  LS_He_2s2_2p_7d_1Po1,
  _227f3, // ?
  LS_He_2s2_2p_7d_3Po1,
  LS_He_2s2_2p_7d_3Po0,
  LS_He_2s2_2p_8p_1P1,
  LS_He_2s2_2p_8p_3S1,
  LS_He_2s2_2p_8p_3D,
  LS_He_2s2_2p_8p_3P2,
  LS_He_2s2_2p_8p_1D2,
  LS_He_2s2_2p_8p_1S0,
  LS_He_2s2_2p_8d_1Do2,
  LS_He_2s2_2p_9s_3Po0,
  LS_He_2s2_2p_9s_3Po1,
  LS_He_2s2_2p_8d_3Fo,
  LS_He_2s2_2p_8d_3Do,
  LS_He_2s2_2p_9s_1Po1,
  LS_He_2s2_2p_8d_1Fo3,
  LS_He_2s2_2p_8d_1Po1,
  LS_He_2s2_2p_8d_3Po,
  _SL3, // ?
  _SL1, // ?
  _SL3o, // ?
  _SL1o, // ?
};


}