/**
 * \file astrea/element/fe_ii/oscillator_strengths.h
 * Fe II oscillator strengths by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_ii/structure.h"


namespace astrea::element::fe_ii {


/**
 * Fe II oscillator strengths by Mashonkina+2011.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 89, 89>::Zero();
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)
  ) = 0.1980E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.6350E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1164E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1445E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)
  ) = 0.1915E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1764E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.3353E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.3750E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.5291E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.1277E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.4154E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.4078E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.2741E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.7214E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.1398E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.9690E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2840E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.1346E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.1267E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1378E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1118E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.2600E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.3459E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1757E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.4345E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)
  ) = 0.2396E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)
  ) = 0.6742E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.9056E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1125E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.3611E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)
  ) = 0.9268E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.2512E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.8795E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1147E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1920E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.7874E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.3185E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.2692E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)
  ) = 0.5970E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.5187E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.2995E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1015E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.1103E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1922E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.6456E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.9927E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.1811E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.2548E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2318E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1984E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.4133E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.4679E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2234E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1129E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.2731E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)
  ) = 0.8136E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.5233E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1211E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.5584E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.2227E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.2843E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.3895E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.3923E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.7904E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.1163E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1576E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.4234E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.3640E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.3303E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.1857E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.1406E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1116E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.1385E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.9372E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1063E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.7512E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.5544E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.3622E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.5510E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.4495E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.2971E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.1882E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.8868E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2766E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.6084E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.1173E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.6253E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.2658E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.1276E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.1611E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.5914E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)
  ) = 0.5161E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)
  ) = 0.1553E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.2658E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.3405E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.5968E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.8090E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1011E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.1586E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1818E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_z2Ko)
  ) = 0.2268E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.4736E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.1882E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.2116E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.1044E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.4852E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.2601E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4582E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.5004E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1176E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.2131E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.2186E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.7634E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.8326E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.1565E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1303E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1104E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.1576E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.1527E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.3946E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.3359E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.1086E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1908E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.1178E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.4560E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.1069E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.5403E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1020E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.1401E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.3936E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.3599E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.2368E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.5104E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.5464E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.4875E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4426E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2204E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1102E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2207E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.6708E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.7796E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.2979E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1347E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1639E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.5162E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.2179E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)
  ) = 0.3298E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.1083E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.2318E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.5538E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.1624E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.4446E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.3319E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1780E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1561E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.3845E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.3633E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1511E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1975E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.2832E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2285E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.4970E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1178E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.1856E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.4238E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.7496E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1035E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.6491E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.6169E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.2754E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1294E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.9611E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)
  ) = 0.8948E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)
  ) = 0.3346E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)
  ) = 0.1801E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)
  ) = 0.2870E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.9093E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.2797E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.5165E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.7014E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.1355E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.2090E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.4566E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.7911E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.1066E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.2938E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1109E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.8529E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.3412E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2756E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.5352E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1473E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.3353E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.2220E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.7878E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.5006E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.1399E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.1117E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.1593E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1731E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.4389E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1031E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.1731E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.2384E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4787E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2121E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1829E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2316E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.1886E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.4964E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.6788E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1960E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.2636E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.2414E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.8737E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.5093E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2182E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1307E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)
  ) = 0.6566E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)
  ) = 0.1619E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)
  ) = 0.1885E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)
  ) = 0.8224E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.6169E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)
  ) = 0.2195E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)
  ) = 0.2187E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)
  ) = 0.1035E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.7051E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.6139E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1610E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.1868E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.3400E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.1769E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.1864E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.2643E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.5585E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.7803E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.4616E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.2971E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1884E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.2027E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.6137E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.1414E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2622E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1075E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.1662E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.2377E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.3211E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.4112E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1609E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.2173E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1059E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1326E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1292E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)
  ) = 0.1045E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.2854E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.2598E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.7374E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.1502E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1725E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.3208E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.1995E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.5954E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1573E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.8749E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.3125E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2773E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.2683E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.9865E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.2478E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.2299E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)
  ) = 0.1103E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.1280E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.4654E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)
  ) = 0.6242E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.1077E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.1336E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.8038E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.1985E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.1637E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.2443E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.4442E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.8236E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.5317E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1271E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.8685E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.1322E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4762E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.2777E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.3613E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.3409E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.2847E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1161E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1154E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.8866E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2756E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1892E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.2189E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1176E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.8595E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1724E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.7983E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.6105E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1560E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2984E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.2998E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.1185E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.2582E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1727E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.2944E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.2106E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.2724E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.3061E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.2996E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.6164E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1485E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.3594E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.4628E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.6223E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1998E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1356E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1294E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.8354E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2567E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.3656E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.4988E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.5672E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.9891E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.6253E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1317E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.1137E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.1371E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.4098E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.6882E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.9339E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2941E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.1738E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.2321E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.1596E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.2341E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.5555E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.2037E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.3219E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.5974E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4097E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.3062E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.5521E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.2289E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.3339E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.3312E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.1656E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2439E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.1937E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.7337E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1501E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.7818E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1126E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.2527E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.2415E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.3458E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.1642E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.3947E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.9039E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)
  ) = 0.1248E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.2449E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.2946E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.5119E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1092E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1130E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.2093E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.6084E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1575E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.1850E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1857E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.1225E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.1063E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1530E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)
  ) = 0.1137E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)
  ) = 0.4820E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.4360E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.2214E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.8047E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.9699E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.1761E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1171E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.4943E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1111E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2940E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.7636E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.4450E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.3289E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.5080E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.3450E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.2095E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.5781E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.9997E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.6162E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.7007E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1513E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.4657E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.5159E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.3214E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.4550E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1778E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.1545E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.2561E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.3865E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.2913E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.1458E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.2535E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.8375E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_z2Ko)
  ) = 0.3575E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.5715E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.4292E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.1499E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.4375E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)
  ) = 0.6012E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.7059E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1779E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.6934E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.2171E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.1304E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.2592E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.4828E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1772E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.6841E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.2354E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.2879E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.2430E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)
  ) = 0.2006E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)
  ) = 0.2814E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.3069E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.3977E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.3906E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.8834E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.7201E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1726E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.4891E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.6707E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.6304E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.4796E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.6904E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.1836E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.1619E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.3090E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.4808E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.2548E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.2763E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.1307E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.5283E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1050E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.2239E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.1017E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.8282E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.4150E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.4023E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.3188E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.2355E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.6772E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1980E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.4724E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.1369E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.3065E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.2952E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.1981E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.4511E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.6668E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.9591E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.3216E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.2685E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.1175E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.1826E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.1289E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.1675E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.9782E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.2602E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.3605E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.8086E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.1260E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1404E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.3910E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1040E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.1345E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1947E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.4132E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.4579E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.3776E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.2498E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.3800E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.3776E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.4693E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1408E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2059E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.8903E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.1532E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1273E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.1681E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.3808E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.1649E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1648E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.8148E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.1069E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)
  ) = 0.1302E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G)
  ) = 0.1567E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1805E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.4502E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.2823E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)
  ) = 0.1580E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.1370E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.1745E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.2133E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.3318E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.3850E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.5825E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.1179E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.3091E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.1003E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1280E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)
  ) = 0.2597E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.5481E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.1324E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.1692E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)
  ) = 0.3339E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1054E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1619E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.2036E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)
  ) = 0.8322E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P)
  ) = 0.3462E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.5110E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.9809E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.2336E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.6712E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.4639E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.1038E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)
  ) = 0.2359E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.9376E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.4802E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.4644E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.2307E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.5491E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.3279E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.6660E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.1094E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.2478E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.4061E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.4974E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2670E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1047E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.6062E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)
  ) = 0.1376E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.1027E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)
  ) = 0.5643E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1022E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.3190E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.1546E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.1777E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.2950E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1287E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.6751E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.2087E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.3917E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.1044E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1021E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.2068E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1188E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.3677E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.3528E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.1104E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.1646E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.1410E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)
  ) = 0.3728E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)
  ) = 0.3602E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)
  ) = 0.5329E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)
  ) = 0.1344E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)
  ) = 0.5036E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.1599E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)
  ) = 0.1989E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.5462E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)
  ) = 0.5115E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.2737E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.3077E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.2163E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)
  ) = 0.2495E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)
  ) = 0.1714E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)
  ) = 0.2431E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1766E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)
  ) = 0.1413E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)
  ) = 0.7636E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.2698E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)
  ) = 0.1194E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.2382E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)
  ) = 0.9756E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)
  ) = 0.2041E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)
  ) = 0.2529E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1293E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.8912E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)
  ) = 0.1309E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)
  ) = 0.8507E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)
  ) = 0.2220E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)
  ) = 0.1087E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)
  ) = 0.1046E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)
  ) = 0.9946E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)
  ) = 0.1705E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)
  ) = 0.2578E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)
  ) = 0.1989E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)
  ) = 0.6451E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)
  ) = 0.2336E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)
  ) = 0.3249E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)
  ) = 0.1320E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)
  ) = 0.4087E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)
  ) = 0.3358E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)
  ) = 0.3729E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)
  ) = 0.6765E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)
  ) = 0.2188E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.5247E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.4822E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.5948E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.1945E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)
  ) = 0.2528E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.2906E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.3118E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.4549E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.1075E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.4573E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.5058E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1615E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.8789E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.2269E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.6270E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.4757E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.2912E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.5295E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.1016E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1866E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)
  ) = 0.1496E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.4850E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.1735E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.1209E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.7259E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.1516E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.3087E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)
  ) = 0.1208E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)
  ) = 0.5187E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.1068E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)
  ) = 0.1667E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)
  ) = 0.6261E-03;
  return f_KK;
}


}