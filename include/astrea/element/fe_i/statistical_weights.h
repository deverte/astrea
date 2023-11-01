/**
 * \file astrea/element/fe_i/statistical_weights.h
 * Fe I statistical weights by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_i/structure.h"


namespace astrea::element::fe_i {


/**
 * Fe I statistical weights by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g() {
  Eigen::VectorXd g = Eigen::Vector<double, 239>::Zero();
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)) = 49.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)) = 11.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)) = 13.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho)) = 55.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io)) = 65.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)) = 39.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)) = 44.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)) = 13.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)) = 55.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)) = 42.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)) = 11.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)) = 10.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)) = 49.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)) = 49.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)) = 63.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)) = 11.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)) = 39.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)) = 13.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)) = 11.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)) = 46.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)) = 55.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)) = 72.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)) = 30.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)) = 27.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)) = 11.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)) = 33.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)) = 46.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)) = 54.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)) = 5.0;
  g(static_cast<int>(STRUCTURE::_s6D44f)) = 140.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)) = 49.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)) = 63.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)) = 39.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)) = 40.0;
  g(static_cast<int>(STRUCTURE::_s6D34f)) = 112.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)) = 18.0;
  g(static_cast<int>(STRUCTURE::_s6D24f)) = 84.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)) = 18.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::_s6D14f)) = 56.0;
  g(static_cast<int>(STRUCTURE::_s6D04f)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)) = 26.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)) = 34.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)) = 23.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)) = 45.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)) = 52.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)) = 40.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)) = 32.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)) = 78.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)) = 34.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)) = 27.0;
  g(static_cast<int>(STRUCTURE::_4F44f)) = 162.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)) = 55.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)) = 22.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)) = 14.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)) = 82.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)) = 31.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)) = 32.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)) = 61.0;
  g(static_cast<int>(STRUCTURE::_s6D46d)) = 95.0;
  g(static_cast<int>(STRUCTURE::_4F34f)) = 261.0;
  g(static_cast<int>(STRUCTURE::_s6D45f)) = 73.0;
  g(static_cast<int>(STRUCTURE::_s6D45g)) = 210.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)) = 58.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)) = 50.0;
  g(static_cast<int>(STRUCTURE::_s6D36d)) = 97.0;
  g(static_cast<int>(STRUCTURE::_s6D35f)) = 172.0;
  g(static_cast<int>(STRUCTURE::_4F24f)) = 64.0;
  g(static_cast<int>(STRUCTURE::_s6D35g)) = 194.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)) = 74.0;
  g(static_cast<int>(STRUCTURE::_s6D26d)) = 62.0;
  g(static_cast<int>(STRUCTURE::_4F14f)) = 181.0;
  g(static_cast<int>(STRUCTURE::_s6D25g)) = 163.0;
  g(static_cast<int>(STRUCTURE::_s6D16d)) = 76.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)) = 158.0;
  g(static_cast<int>(STRUCTURE::_s6D15g)) = 135.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)) = 16.0;
  g(static_cast<int>(STRUCTURE::_s6D05g)) = 71.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)) = 200.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)) = 60.0;
  g(static_cast<int>(STRUCTURE::_s6D16g)) = 437.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)) = 394.0;
  g(static_cast<int>(STRUCTURE::_s6D26g)) = 1008.0;
  g(static_cast<int>(STRUCTURE::_s6D26h)) = 964.0;
  g(static_cast<int>(STRUCTURE::_s6D36g)) = 805.0;
  g(static_cast<int>(STRUCTURE::_s6D36h)) = 243.0;
  g(static_cast<int>(STRUCTURE::_s6D46g)) = 809.0;
  g(static_cast<int>(STRUCTURE::_s6D46h)) = 1226.0;
  g(static_cast<int>(STRUCTURE::_58831e)) = 2160.0;
  g(static_cast<int>(STRUCTURE::_58906e)) = 1903.0;
  g(static_cast<int>(STRUCTURE::_4p27D)) = 1416.0;
  g(static_cast<int>(STRUCTURE::_61724e)) = 1311.0;
  g(static_cast<int>(STRUCTURE::_62079e)) = 940.0;
  g(static_cast<int>(STRUCTURE::_62192e)) = 1102.0;
  g(static_cast<int>(STRUCTURE::_62377e)) = 1266.0;
  g(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)) = 441.0;
  return g;
};


}