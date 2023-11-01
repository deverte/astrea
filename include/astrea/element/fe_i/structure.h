/**
 * \file astrea/element/fe_i/structure.h
 * Fe I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina+2011 Fe I model.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::fe_i {


/**
 * Fe I structure from NIST (https://www.nist.gov/pml/atomic-spectra-database).
 * Based on Mashonkina+2011 Fe I model.
 */
enum class STRUCTURE {
  LS_Ar_3d6_4s2_a5D,
  LS_Ar_3d7_4F_4s_a5F,
  LS_Ar_3d7_4F_4s_a3F,
  LS_Ar_3d7_4P_4s_a5P,
  LS_Ar_3d6_4s2_a3P,
  LS_Ar_3d6_4s2_a3H,
  LS_Ar_3d6_5D_4s_4p_3Po_z7Do,
  LS_Ar_3d6_4s2_b3F,
  LS_Ar_3d7_2G_4s_a3G,
  LS_Ar_3d7_4P_4s_b3P,
  LS_Ar_3d6_5D_4s_4p_3Po_z7Fo,
  LS_Ar_3d6_4s2_b3G,
  LS_Ar_3d6_5D_4s_4p_3Po_z7Po,
  LS_Ar_3d7_2P_4s_c3P,
  LS_Ar_3d7_2G_4s_a1G,
  LS_Ar_3d6_5D_4s_4p_3Po_z5Do,
  LS_Ar_3d7_2H_4s_b3H,
  LS_Ar_3d7_2D2_4s_a3D,
  LS_Ar_3d6_5D_4s_4p_3Po_z5Fo,
  LS_Ar_3d7_2P_4s_a1P,
  LS_Ar_3d7_2D2_4s_a1D,
  LS_Ar_3d7_2H_4s_a1H,
  LS_Ar_3d6_4s2_a1I,
  LS_Ar_3d6_5D_4s_4p_3Po_z5Po,
  LS_Ar_3d6_4s2_b3D,
  LS_Ar_3d6_4s2_b1G,
  LS_Ar_3d6_5D_4s_4p_3Po_z3Do,
  LS_Ar_3d6_5D_4s_4p_3Po_z3Fo,
  LS_Ar_3d8_c3F,
  LS_Ar_3d7_4F_4p_y5Do,
  LS_Ar_3d7_4F_4p_y5Fo,
  LS_Ar_3d6_5D_4s_4p_3Po_z3Po,
  LS_Ar_3d6_4s2_b1D,
  LS_Ar_3d7_4F_4p_z5Go,
  LS_Ar_3d7_4F_4p_z3Go,
  LS_Ar_3d7_2F_4s_d3F,
  LS_Ar_3d6_5D_4s_4p_1Po_y5Po,
  LS_Ar_3d7_4F_4p_y3Fo,
  LS_Ar_3d7_4F_4p_y3Do,
  LS_Ar_3d6_5D_4s_4p_1Po_x5Do,
  LS_Ar_3d5_6S_4s2_4p_y7Po,
  LS_Ar_3d6_5D_4s_4p_1Po_x5Fo,
  LS_Ar_3d6_3P2_4s_4p_3Po_z5So,
  LS_Ar_3d8_3P,
  LS_Ar_3d6_3P2_4s_4p_3Po_x5Po,
  LS_Ar_3d6_3H_4s_4p_3Po_y5Go,
  LS_Ar_3d6_3H_4s_4p_3Po_z5Ho,
  LS_Ar_3d6_5D_4s_6D_5s_e7D,
  LS_Ar_3d6_3H_4s_4p_3Po_z5Io,
  LS_Ar_3d6_3P2_4s_4p_3Po_w5Do,
  LS_Ar_3d6_3F2_4s_4p_3Po_v5Do,
  LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo,
  LS_Ar_3d7_4P_4p_y5So,
  LS_Ar_3d6_5D_4s_6D_5s_e5D,
  LS_Ar_3d6_3P2_4s_4p_3Po_x3Do,
  LS_Ar_3d6_3H_4s_4p_3Po_y3Go,
  LS_Ar_3d6_3F2_4s_4p_3Po_x5Go,
  LS_Ar_3d6_3H_4s_4p_3Po_z3Io,
  LS_Ar_3d7_4P_4p_w5Po,
  LS_Ar_3d6_3P2_4s_4p_3Po_z3So,
  LS_Ar_3d6_3P2_4s_4p_3Po_y3Po,
  LS_Ar_3d7_4P_4p_u5Do,
  LS_Ar_3d6_3H_4s_4p_3Po_z3Ho,
  LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo,
  LS_Ar_3d7_4P_4p_w3Do,
  LS_Ar_3d6_3P2_4s_4p_3Po_1Do,
  LS_Ar_3d7_2G_4p_z1Go,
  LS_Ar_3d7_4F_5s_e5F,
  LS_Ar_3d6_3G_4s_4p_3Po_w5Go,
  LS_Ar_3d7_4P_4p_y3So,
  LS_Ar_3d6_3F2_4s_4p_3Po_x3Go,
  LS_Ar_3d6_3G_4s_4p_3Po_v5Fo,
  LS_Ar_3d5_6S_4s2_4p_v5Po,
  LS_Ar_3d6_3H_4s_4p_3Po_1Io,
  LS_Ar_3d6_3G_4s_4p_3Po_y5Ho,
  LS_Ar_3d7_4F_5s_e3F,
  LS_Ar_3d7_2G_4p_z1Ho,
  LS_Ar_3d7_4P_4p_x3Po,
  LS_Ar_3d6_3H_4s_4p_3Po_y1Go,
  LS_Ar_3d6_3F2_4s_4p_3Po_v3Do,
  LS_Ar_3d7_2G_4p_w3Fo,
  LS_Ar_3d6_3F2_4s_4p_3Po_1Fo,
  LS_Ar_3d7_2G_4p_y3Ho,
  LS_Ar_3d7_2G_4p_v3Go,
  LS_Ar_3d6_5D_4s_6D_5p_n7Do,
  LS_Ar_3d7_2P_4p_w3Po,
  LS_Ar_3d6_5D_4s_6D_5p_n7Fo,
  LS_Ar_3d6_5D_4s_6D_5p_n7Po,
  LS_Ar_3d6_5D_4s_6D_4d_f5D,
  LS_Ar_3d7_2G_4p_z1Fo,
  LS_Ar_3d6_5D_4s_6D_4d_e7P,
  LS_Ar_3d6_3F2_4s_4p_3Po_x1Go,
  LS_Ar_3d6_5D_4s_6D_4d_f7D,
  LS_Ar_3d6_5D_4s_6D_4d_e5G,
  LS_Ar_3d6_5D_4s_6D_4d_e7F,
  LS_Ar_3d6_5D_4s_6D_4d_e7G,
  LS_Ar_3d6_3G_4s_4p_3Po_x3Ho,
  LS_Ar_3d6_5D_4s_6D_4d_e5S,
  LS_Ar_3d7_2D2_4p_v3Fo,
  LS_Ar_3d6_5D_4s_6D_5p_t5Do,
  LS_Ar_3d6_5D_4s_6D_5p_u5Fo,
  LS_Ar_3d6_5D_4s_6D_4d_f5F,
  LS_Ar_3d6_5D_4s_6D_4d_e7S,
  LS_Ar_3d7_2H_4p_u3Go,
  LS_Ar_3d6_5D_4s_4D_5s_e3D,
  LS_Ar_3d6_3H_4s_4p_3Po_1Ho,
  LS_Ar_3d7_2P_4p_y1Do,
  LS_Ar_3d6_5D_4s_4D_5s_g5D,
  LS_Ar_3d6_3H_4s_4p_3Po_x1Do,
  LS_Ar_3d6_5D_4s_6D_5p_u5Po,
  LS_Ar_3d6_5D_4s_6D_4d_e5P,
  LS_Ar_3d7_2P_4p_1Po,
  LS_Ar_3d7_2P_4p_u3Do,
  LS_Ar_3d7_2D2_4p_t3Do,
  LS_Ar_3d7_2H_4p_w3Ho,
  LS_Ar_3d7_2H_4p_y3Io,
  LS_Ar_3d7_2D2_4p_v3Po,
  LS_Ar_3d7_2H_4p_1Io,
  LS_Ar_3d7_4F_5p_3Fo, // Gsp33F ?
  LS_Ar_3d6_3G_4s_4p_3Po_y1Ho,
  LS_Ar_3d7_4F_4d_f5P,
  LS_Ar_3d7_4F_5p_5Fo,
  LS_Ar_3d7_4F_4d_h5D,
  LS_Ar_3d7_4F_4d_g5F,
  LS_Ar_3d7_4F_4d_f5G,
  LS_Ar_3d7_4F_5p_3Go,
  LS_Ar_3d7_4F_5p_5Go,
  LS_Ar_3d7_4F_4d_e5H,
  LS_Ar_3d7_2D2_4p_x1Fo,
  LS_Ar_3d7_2P_4p_x3So,
  LS_Ar_3d6_3D_4s_4p_3Po_5Fo,
  LS_Ar_3d7_4F_5p_3F,
  LS_Ar_3d7_4F_5p_5Do,
  LS_Ar_3d7_4F_4d_f3D,
  LS_Ar_3d7_4F_4d_e3G,
  LS_Ar_3d6_3D_4s_4p_3Po_5Do,
  LS_Ar_3d6_3D_4s_4p_3Po_t5Po,
  LS_Ar_3d7_4F_4d_e3H,
  LS_Ar_3d7_4F_5p_3Do,
  LS_Ar_3d6_5D_4s_6D_6s_g7D,
  LS_Ar_3d6_3G_4s_4p_3Po_t3Go,
  LS_Ar_3d6_3G_4s_4p_3Po_w1Go,
  LS_Ar_3d6_4s_6D_6s_5D,
  LS_Ar_3d7_4F_4d_f3F,
  LS_Ar_3d7_4F_4d_e3P,
  LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho,
  LS_Ar_3d6_1G2_4s_4p_3Po_s3Go,
  LS_Ar_3d7_2D2_4p_w1Do,
  LS_Ar_3d7_2H_4p_1Ho,
  LS_Ar_3d6_3G_4s_4p_3Po_1Fo,
  LS_Ar_3d6_4s_6D_5d_5D,
  LS_Ar_3d6_1I_4s_4p_3Po_u3Ho,
  LS_Ar_3d6_4s_6D_6p_7Do,
  LS_Ar_3d6_4s_6D_4d_5G,
  LS_Ar_3d6_4s_6D_5d_7D,
  LS_Ar_3d6_4s_6D_6p_7Fo,
  LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo,
  LS_Ar_3d6_4s_6D_5d_5S,
  _s6D44f, // ?
  LS_Ar_3d6_4s_6D_6p_7Po,
  LS_Ar_3d6_4s_6D_5d_7P,
  LS_Ar_3d7_4F_6s_5F,
  LS_Ar_3d6_4s_6D_5d_7F,
  LS_Ar_3d6_4s_6D_5d_5F,
  LS_Ar_3d7_2H_4p_v1Go,
  LS_Ar_3d6_4s_6D_5d_7G,
  LS_Ar_3d6_1I_4s_4p_3Po_x3Io,
  LS_Ar_3d6_4s_6D_6p_5Do,
  LS_Ar_3d6_4s_6D_6p_5Fo,
  _s6D34f, // ?
  LS_Ar_3d7_4F_6s_3F,
  LS_Ar_3d6_3D_4s_4p_1Po_3Do,
  LS_Ar_3d6_4s_6D_6p_5Po,
  LS_Ar_3d6_4s_6D_5d_5P,
  _s6D24f, // ?
  LS_Ar_3d6_4s_6D_5d_7S,
  LS_Ar_3d6_3P2_4s_4p_1Po_3Do,
  LS_Ar_3d6_3D_4s_4p_3Po_t3Fo,
  _s6D14f, // ?
  _s6D04f, // ?
  LS_Ar_3d6_5D_4s_4D_4d_i5D,
  LS_Ar_3d6_4s_4D_4d_5F,
  LS_Ar_3d6_4s_4D_5p_5Do,
  LS_Ar_3d6_4s_4D_5p_3Do,
  LS_Ar_3d6_3H_4s_4p_1Po_3Go,
  LS_Ar_3d6_5D_4s_6D_7s_7D,
  LS_Ar_3d6_4s_4D_4d_5P,
  LS_Ar_3d6_5D_4s_4D_4d_g5G,
  LS_Ar_3d6_4s_4D_5p_3Po,
  LS_Ar_3d6_4s_4D_5p_5Fo,
  LS_Ar_3d6_4s_4D_5p_3Fo,
  LS_Ar_3d7_4F_5d_5F,
  LS_Ar_3d6_4s_6D_7s_5D,
  LS_Ar_3d6_4s_4D_4d_3G,
  _4F44f, // ?
  LS_Ar_3d7_4F_5d_5H,
  LS_Ar_3d6_4s_4D_4d_3D,
  LS_Ar_3d6_4s_4D_4d_5S,
  LS_Ar_3d6_3H_4s_4p_1Po_3Io,
  LS_Ar_3d6_4s_4D_5p_5Po,
  LS_Ar_3d7_4F_5d_3G,
  LS_Ar_3d6_4s_4D_4d_3S,
  _s6D46d, // ?
  _4F34f, // ?
  _s6D45f, // ?
  _s6D45g, // ?
  LS_Ar_3d6_4s_4D_4d_3F,
  LS_Ar_3d6_3P2_4s_4p_1Po_3So,
  _s6D36d, // ?
  _s6D35f, // ?
  _4F24f, // ?
  _s6D35g, // ?
  LS_Ar_3d6_5D_4p2_3P_7F,
  _s6D26d, // ?
  _4F14f, // ?
  _s6D25g, // ?
  _s6D16d, // ?
  LS_Ar_3d6_3F2_4s_4p_1Po_3Fo,
  _s6D15g, // ?
  LS_Ar_3d6_4s_4D_4d_3P,
  _s6D05g, // ?
  LS_Ar_3d6_3F2_4s_4p_1Po_r3Go,
  LS_Ar_3d6_3H_4s_4p_1Po_t3Ho,
  _s6D16g, // ?
  LS_Ar_3d6_3F2_4s_4p_1Po_3Do,
  _s6D26g, // ?
  _s6D26h, // ?
  _s6D36g, // ?
  _s6D36h, // ?
  _s6D46g, // ?
  _s6D46h, // ?
  _58831e, // c4 ?
  _58906e, // c1 ?
  _4p27D, // ?
  _61724e, // c2 ?
  _62079e, // c5 ?
  _62192e, // c3 ?
  _62377e, // c6 ?
  LS_Ar_3d6_3G_4s_4p_1Po_3Ho,
};


}