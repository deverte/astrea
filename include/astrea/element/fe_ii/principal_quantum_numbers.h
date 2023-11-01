/**
 * \file astrea/element/fe_ii/principal_quantum_numbers.h
 * Fe II principal quantum numbers by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_ii/structure.h"


namespace astrea::element::fe_ii {


/**
 * Fe II principal quantum numbers by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n() {
  Eigen::VectorXd n = Eigen::Vector<double, 89>::Zero();
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_z8Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_z2Ko)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)) = 5.0;
  return n;
};


}