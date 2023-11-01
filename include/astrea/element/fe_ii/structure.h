/**
 * \file astrea/element/fe_ii/structure.h
 * Fe II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina+2011 Fe II model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::fe_ii {


/**
 * Fe II structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina+2011 Fe II model.
 */
enum class STRUCTURE {
  LS_Ar_3d6_5D_4s_a6D,
  LS_Ar_3d7_a4F,
  LS_Ar_3d6_5D_4s_a4D,
  LS_Ar_3d7_a4P,
  LS_Ar_3d7_a2G,
  LS_Ar_3d7_a2P,
  LS_Ar_3d7_a2H,
  LS_Ar_3d7_a2D2,
  LS_Ar_3d6_3P2_4s_b4P,
  LS_Ar_3d6_3H_4s_a4H,
  LS_Ar_3d6_3F2_4s_b4F,
  LS_Ar_3d5_4s2_a6S,
  LS_Ar_3d6_3G_4s_a4G,
  LS_Ar_3d6_3P2_4s_b2P,
  LS_Ar_3d6_3H_4s_b2H,
  LS_Ar_3d6_3F2_4s_a2F,
  LS_Ar_3d6_3G_4s_b2G,
  LS_Ar_3d6_3D_4s_b4D,
  LS_Ar_3d7_b2F,
  LS_Ar_3d6_1I_4s_a2I,
  LS_Ar_3d6_1G2_4s_c2G,
  LS_Ar_3d6_3D_4s_b2D,
  LS_Ar_3d6_1S2_4s_a2S,
  LS_Ar_3d6_1D2_4s_c2D,
  LS_Ar_3d6_5D_4p_z6Do,
  LS_Ar_3d6_5D_4p_z6Fo,
  LS_Ar_3d6_5D_4p_z6Po,
  LS_Ar_3d6_5D_4p_z4Fo,
  LS_Ar_3d6_5D_4p_z4Do,
  LS_Ar_3d6_1F_4s_c2F,
  LS_Ar_3d6_5D_4p_z4Po,
  LS_Ar_3d7_d2D1,
  LS_Ar_3d6_3P1_4s_c4P,
  LS_Ar_3d6_3F1_4s_c4F,
  LS_Ar_3d5_6S_4s_4p_3Po_z8Po,
  LS_Ar_3d5_4s2_b4G,
  LS_Ar_3d6_3P1_4s_c2P,
  LS_Ar_3d6_3F1_4s_d2F,
  LS_Ar_3d5_4s2_d4P,
  LS_Ar_3d6_1G1_4s_d2G,
  LS_Ar_3d6_3P2_4p_z4So,
  LS_Ar_3d5_4s2_c4D,
  LS_Ar_3d6_3P2_4p_y4Po,
  LS_Ar_3d6_3H_4p_z4Go,
  LS_Ar_3d6_3H_4p_z4Ho,
  LS_Ar_3d6_3H_4p_z4Io,
  LS_Ar_3d6_3P2_4p_z2Do,
  LS_Ar_3d5_6S_4s_4p_3Po_y6Po,
  LS_Ar_3d6_3F2_4p_y4Fo,
  LS_Ar_3d6_3H_4p_z2Go,
  LS_Ar_3d6_3P2_4p_y4Do,
  LS_Ar_3d6_3H_4p_z2Io,
  LS_Ar_3d6_3F2_4p_x4Do,
  LS_Ar_3d6_3F2_4p_y4Go,
  LS_Ar_3d6_3F2_4p_z2Fo,
  LS_Ar_3d6_3P2_4p_z2Po,
  LS_Ar_3d6_3F2_4p_y2Go,
  LS_Ar_3d6_3H_4p_z2Ho,
  LS_Ar_3d6_3G_4p_x4Go,
  LS_Ar_3d6_3P2_4p_z2So,
  LS_Ar_3d6_3G_4p_x4Fo,
  LS_Ar_3d6_3G_4p_y4Ho,
  LS_Ar_3d6_3F2_4p_y2Do,
  LS_Ar_3d6_3G_4p_y2Ho,
  LS_Ar_3d5_6S_4s_4p_3Po_x4Po,
  LS_Ar_3d6_3G_4p_y2Fo,
  LS_Ar_3d6_3G_4p_x2Go,
  LS_Ar_3d6_1I_4p_z2Ko,
  LS_Ar_3d6_3D_4p_w4Po,
  LS_Ar_3d6_1G2_4p_x2Ho,
  LS_Ar_3d6_3D_4p_w4Fo,
  LS_Ar_3d6_3D_4p_w4Do,
  LS_Ar_3d6_1G2_4p_x2Fo,
  LS_Ar_3d6_1G2_4p_w2Go,
  LS_Ar_3d6_3D_4p_y2Po,
  LS_Ar_3d5_4s2_4F,
  LS_Ar_3d6_1I_4p_w2Ho,
  LS_Ar_3d6_1I_4p_y2Io,
  LS_Ar_3d6_3D_4p_x2Do,
  LS_Ar_3d6_3D_4p_w2Fo,
  LS_Ar_3d6_1S2_4p_x2Po,
  LS_Ar_3d5_4s2_2H,
  LS_Ar_3d6_1D2_4p_v2Fo,
  LS_Ar_3d6_5D_5s_e6D,
  LS_Ar_3d6_3G_5s_e2G,
  LS_Ar_3d6_1D2_4p_w2Do,
  LS_Ar_3d6_1D2_4p_w2Po,
  LS_Ar_3d5_6S_4s_4p_1Po_x6Po,
  LS_Ar_3d6_5D_5s_e4D,
};


}