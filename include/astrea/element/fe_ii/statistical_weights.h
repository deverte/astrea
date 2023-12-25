/**
 * \file astrea/element/fe_ii/statistical_weights.h
 * Fe II statistical weights by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_ii/structure.h"


namespace astrea::element::fe_ii {


/**
 * Fe II statistical weights by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 89>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I)) = 26.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)) = 42.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_z8Po)) = 24.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)) = 4.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)) = 26.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)) = 36.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)) = 2.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_z2Ko)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)) = 20.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)) = 26.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)) = 6.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)) = 20.0;
  return g;
};


}