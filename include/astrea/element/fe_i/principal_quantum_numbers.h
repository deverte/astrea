/**
 * \file astrea/element/fe_i/principal_quantum_numbers.h
 * Fe I principal quantum numbers by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_i/structure.h"


namespace astrea::element::fe_i {


/**
 * Fe I principal quantum numbers by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n() {
  Eigen::VectorXd n = Eigen::Vector<double, 239>::Zero();
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)) = 5.0;
  n(static_cast<int>(STRUCTURE::_s6D44f)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D34f)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)) = 5.0;
  n(static_cast<int>(STRUCTURE::_s6D24f)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D14f)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D04f)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)) = 4.0;
  n(static_cast<int>(STRUCTURE::_4F44f)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D46d)) = 6.0;
  n(static_cast<int>(STRUCTURE::_4F34f)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D45f)) = 5.0;
  n(static_cast<int>(STRUCTURE::_s6D45g)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D36d)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D35f)) = 5.0;
  n(static_cast<int>(STRUCTURE::_4F24f)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D35g)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D26d)) = 6.0;
  n(static_cast<int>(STRUCTURE::_4F14f)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D25g)) = 5.0;
  n(static_cast<int>(STRUCTURE::_s6D16d)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D15g)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D05g)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)) = 4.0;
  n(static_cast<int>(STRUCTURE::_s6D16g)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D26g)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D26h)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D36g)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D36h)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D46g)) = 6.0;
  n(static_cast<int>(STRUCTURE::_s6D46h)) = 6.0;
  n(static_cast<int>(STRUCTURE::_58831e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_58906e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_4p27D)) = 4.0;
  n(static_cast<int>(STRUCTURE::_61724e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_62079e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_62192e)) = 6.0;
  n(static_cast<int>(STRUCTURE::_62377e)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)) = 4.0;
  return n;
};


}