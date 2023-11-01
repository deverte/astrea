/**
 * \file astrea/element/fe_i/oscillator_strengths.h
 * Fe I oscillator strengths by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_i/structure.h"


namespace astrea::element::fe_i {


/**
 * Fe I oscillator strengths by Mashonkina+2011.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f() {
  Eigen::MatrixXd f = Eigen::Matrix<double, 239, 239>::Zero();
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.149;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.152;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.132;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.112;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.297;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.506;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.103;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.107;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.174;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.163;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.147;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.196;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.145;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.124;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.113;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.659;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.180;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.187;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.128;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.103;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.263;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.227;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.371;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.201;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)
  ) = 0.252;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.104;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.521;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.193;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.120;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.134;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.265;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.161;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.121;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.109;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.198;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.104;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.205;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.145;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.117;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.235;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.137;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.149;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.118;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.109;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.348;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.169;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.133;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)
  ) = 0.147;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.123;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.106;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.135;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.104;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.215;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.159;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.187;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.113;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.164;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1066E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.5267E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.7495E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.1251E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1428E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.2107E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.2150E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.5166E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1183E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.3150E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.4070E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.1651E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.8310E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.3403E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1136E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.8069E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.1914E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1320E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.7613E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1259E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.2851E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.9676E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.2335E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.1285E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.2045E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.2230E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1680E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.1012E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.1210E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)
  ) = 0.1744E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)
  ) = 0.2126E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2248E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.2612E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.4527E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.3450E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.1929E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.5597E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.2212E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.7719E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.2345E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.1517E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.1796E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.3321E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.2052E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.6576E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.1841E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.7684E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.5736E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.3565E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.3056E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)
  ) = 0.2500E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)
  ) = 0.4836E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)
  ) = 0.5539E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)
  ) = 0.3520E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.9309E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.5369E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.1688E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)
  ) = 0.1580E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)
  ) = 0.5852E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.4752E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)
  ) = 0.6480E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.3533E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)
  ) = 0.2675E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)
  ) = 0.4545E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)
  ) = 0.2288E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)
  ) = 0.1315E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1291E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1821E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.7551E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.6795E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.5947E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.7143E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.4363E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.2698E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.6028E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.4951E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_s6D34f)
  ) = 0.2729E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.1079E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.1573E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.5614E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1732E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.1448E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1648E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.3430E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.2699E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1240E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.4073E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.8206E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.6280E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D34f)
  ) = 0.1255E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.4318E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D14f)
  ) = 0.2853E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.8753E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.2052E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.6223E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D04f)
  ) = 0.2930E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.2187E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1986E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.4560E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.3100E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.5014E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.2694E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.7262E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.2032E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.3775E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1482E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.2266E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.1243E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1852E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.6660E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1182E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.1591E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)
  ) = 0.1934E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.5709E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.7236E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.3878E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.6381E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.5696E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2613E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.6338E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.5431E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.6836E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1357E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1935E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.3759E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.1550E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.3423E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)
  ) = 0.4074E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.7677E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.4626E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.1023E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.7916E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.1282E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.3415E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.1916E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.1377E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.1400E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.5639E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io)
  ) = 0.1276E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho)
  ) = 0.1166E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)
  ) = 0.7217E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)
  ) = 0.4342E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)
  ) = 0.2856E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)
  ) = 0.4747E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)
  ) = 0.1413E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)
  ) = 0.4709E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.8121E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)
  ) = 0.5288E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.7555E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.3889E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)
  ) = 0.3444E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)
  ) = 0.4912E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.2542E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1501E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1965E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.2050E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.3585E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D45f)
  ) = 0.3069E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.1514E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.5630E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.4415E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.3885E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.8141E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.4290E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.2502E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2766E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1600E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.2190E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.4199E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.9856E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.5551E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1201E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.7571E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1620E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.2725E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.3611E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.7450E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1099E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.3864E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.4076E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.1268E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.2317E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.1273E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.1962E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1033E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.2014E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1511E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.1883E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1016E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1493E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1081E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.7928E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.7375E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1705E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.1975E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.4215E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.1939E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.1334E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.5416E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.3543E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.1489E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.2233E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.2036E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.2284E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.1756E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.2237E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.7039E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1054E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.2982E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.3151E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.1669E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.8980E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.2841E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1198E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1326E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.9611E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.7117E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.2065E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.1296E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.3891E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.7986E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.8761E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.9473E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.3337E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.2975E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.1722E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.1249E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho)
  ) = 0.1011E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)
  ) = 0.5173E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)
  ) = 0.4199E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)
  ) = 0.2212E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)
  ) = 0.9792E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)
  ) = 0.1139E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)
  ) = 0.2094E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.9710E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.3741E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.5399E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1089E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.1088E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.3984E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.1880E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.7381E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1238E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1207E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.2831E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.4846E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1225E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.2668E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.3835E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.1010E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.2205E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.2304E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.3551E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1267E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.2732E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.8535E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.6395E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D04f)
  ) = 0.5632E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D14f)
  ) = 0.1281E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.1932E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1789E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.6238E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1509E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.1400E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D34f)
  ) = 0.3249E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.9014E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.1976E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.1817E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.8333E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.9002E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1387E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.3499E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.4679E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.5828E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1594E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.2710E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.3680E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.2219E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.2732E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.1116E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.5722E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.2252E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.1269E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.2287E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.2547E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.3242E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.3872E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)
  ) = 0.1447E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.8441E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.1087E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1345E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1642E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.5002E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.1636E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.2697E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.8697E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.7868E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.8202E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.2531E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.7337E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.2355E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.1457E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.5119E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.1071E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.4517E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.2973E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)
  ) = 0.1417E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)
  ) = 0.2156E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)
  ) = 0.3485E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)
  ) = 0.2959E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)
  ) = 0.3080E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.2298E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)
  ) = 0.3373E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)
  ) = 0.2087E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)
  ) = 0.1309E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)
  ) = 0.6308E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.3048E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.4778E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4355E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.3719E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.3320E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.5583E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1079E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.4048E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.2045E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.6171E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.4200E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.2172E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2443E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.1770E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.1303E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1321E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.5543E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.5841E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.3327E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1114E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.4857E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.4529E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.2410E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.7421E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1291E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.5551E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.3564E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.5131E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.6244E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.6524E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.7776E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.2098E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.3597E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.1072E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.6032E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.3970E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.3739E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.8140E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.2088E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.3571E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1159E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.4176E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.6861E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.2402E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.3047E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.8055E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.4554E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.5535E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.3444E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.4084E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.9376E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.3857E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.4268E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.5770E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.1818E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.8705E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.1765E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2631E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.3813E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1949E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.4353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.6740E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.1060E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.8598E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.2072E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.7914E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.5225E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.2750E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.1313E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.3525E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.3852E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.1277E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.3709E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.1317E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)
  ) = 0.5033E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)
  ) = 0.1083E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)
  ) = 0.4760E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1046E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.2357E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)
  ) = 0.1316E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.2774E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)
  ) = 0.1723E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.2299E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)
  ) = 0.1592E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4278E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.4065E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.6646E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1182E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.3491E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.5122E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1439E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1242E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.7319E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.2208E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.1841E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.1316E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.4601E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.2306E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.3132E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.1144E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.4049E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.4404E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.4332E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1369E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.7454E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1722E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.8006E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.9567E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)
  ) = 0.4407E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1229E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1372E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.7372E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.4713E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.1944E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.5873E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.3266E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.1760E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.1680E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.3383E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.4418E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.1519E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.4134E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.1272E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1413E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.6858E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1406E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.5712E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1392E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.3763E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.5275E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.1809E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1639E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)
  ) = 0.9452E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.3621E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.5808E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.8251E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.1609E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.1527E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.9891E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.1370E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.5214E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.4006E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.1711E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.2893E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.2313E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.4603E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.3531E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.1341E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.4687E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2804E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1409E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.2253E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)
  ) = 0.1100E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.9391E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.1361E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.3093E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)
  ) = 0.2769E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.8766E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.2672E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2005E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.2435E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1243E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.6130E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.1961E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.1006E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2627E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.1085E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)
  ) = 0.1117E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1185E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.3350E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2056E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.4845E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1437E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.6445E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.5548E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.8224E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.3094E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1343E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.2338E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.6349E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2975E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.8366E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1250E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.5595E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.3429E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.3092E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.8397E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.8645E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.2120E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.3682E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1367E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.1294E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1465E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6861E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.2682E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.3180E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.5583E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.1035E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1880E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.3213E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.6172E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1398E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.5937E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2726E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.7919E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.7011E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.5809E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.2913E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.3939E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.5587E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2941E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.5365E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.2524E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1855E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.5243E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1342E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1002E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.6827E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.3529E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.7858E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.8645E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.3547E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.2549E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.4866E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1571E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.7207E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.1345E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.1509E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1014E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.2152E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.8145E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.2635E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.1313E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.2914E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.1253E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.1414E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.3450E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1422E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.2184E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.6413E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.2459E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.3809E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.6034E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1128E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.3059E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1207E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.5627E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1179E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.3284E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1712E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.4109E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.5719E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.8718E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.6551E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.8215E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.4651E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.8847E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.5343E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.4006E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.5055E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.4982E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.5257E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.1711E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.2806E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.5975E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.6165E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.9651E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.1025E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.3709E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.4654E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.4932E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.2427E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1939E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.1059E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.5273E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.2118E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.3912E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1289E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1336E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.7030E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.5833E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.3786E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.1843E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.5499E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.1928E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.4695E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.7183E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.6183E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.2563E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)
  ) = 0.2476E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.1282E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.2948E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2942E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.1705E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1497E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.1598E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.9200E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.1670E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.5577E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.1350E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.1572E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1933E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.2372E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2758E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1208E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.8127E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.3668E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)
  ) = 0.6662E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.2225E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.6222E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.2943E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.1787E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.3640E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.1191E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.6037E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.2293E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.2031E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.1665E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.4232E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.7536E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.2336E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.1616E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.7394E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.1232E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.7047E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.7025E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.2550E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1351E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.6650E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.7045E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.5986E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1254E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.2072E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.6107E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.5778E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1454E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.1944E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.1504E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.7872E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.4115E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.2444E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.4420E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.2268E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.3999E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.2262E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.9900E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.1425E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.6606E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.5886E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.6849E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2699E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.1111E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.2060E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.4926E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.4627E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.6398E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1711E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.4248E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.3989E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.9881E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.1425E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.4565E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.2354E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.1915E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1578E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.3727E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1174E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.6519E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.3669E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.5870E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.3812E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.3093E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.4371E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.3362E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.1138E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.1304E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.9433E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.4725E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)
  ) = 0.1415E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1276E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.7789E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2562E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.9982E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1369E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.4864E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.3704E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.6880E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.7724E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1135E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.4038E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.6976E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.1169E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.6027E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.4890E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.1342E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.3838E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1815E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.5696E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.5089E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.2690E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1587E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.4215E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.6888E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1624E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1847E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.6557E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1042E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.4293E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.1942E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1197E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.1835E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1721E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.4157E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.4535E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.3348E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.3501E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.7517E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.5528E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.1402E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.2246E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.3192E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.2688E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.1942E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.6721E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.8485E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.5999E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.1474E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.3398E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.6987E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.8035E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.9096E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.3385E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)
  ) = 0.1291E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1610E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.1552E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)
  ) = 0.1405E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)
  ) = 0.1069E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.6820E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.8571E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.4449E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.4521E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1094E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1645E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.2289E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.9772E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1529E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.4181E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.1075E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.5589E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.5253E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.2207E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1030E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1176E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.8455E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1887E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.6884E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.1253E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1471E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.8704E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.2092E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1702E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.4306E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.8514E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.1405E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2225E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.4763E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1047E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.5660E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.5759E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.3769E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6718E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.4505E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.1597E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.3860E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.2189E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.3032E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.2576E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.1189E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.8122E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.4204E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1371E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.6376E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.2988E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1099E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3312E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.6848E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2615E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.5188E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.2539E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.8635E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.1137E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.1444E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.1307E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1625E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2683E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.6519E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1883E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1001E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.1000E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.4762E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.8144E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1757E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.2274E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1098E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.3420E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.5612E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.3805E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1529E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.3498E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.2252E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.6010E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.3722E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.7072E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.1198E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.3648E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.2550E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.7705E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1016E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.3568E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.1091E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.2544E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.6547E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.2617E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1707E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1666E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1478E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.9529E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.3591E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1281E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.1393E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.3103E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.5103E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.3575E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.2010E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.1696E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.9676E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.7025E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.5495E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.2112E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.1514E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.2387E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.3534E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1259E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.1120E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.2043E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.2008E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.2046E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.5241E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2608E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1734E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.6084E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1823E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.9263E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.2170E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.2314E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.4081E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)
  ) = 0.2388E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.1884E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.8505E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)
  ) = 0.1118E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1521E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1253E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.1003E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.2140E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.2088E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1229E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.1531E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1088E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.2924E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1658E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.2595E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1506E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.1286E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.1357E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.3378E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.2190E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.4459E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.3572E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.5347E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1799E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.3463E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1048E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.6254E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.4125E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.4931E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.3332E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.3860E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.4666E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.6354E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.2811E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.2887E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.2026E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.1020E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.7997E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1524E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.1047E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.1479E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.1371E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.6041E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1490E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1090E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.5083E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.3027E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.7532E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.7770E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.4701E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.7365E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.4476E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1207E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.7679E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.3228E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.5442E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.1407E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.3531E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2664E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.6154E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.2482E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.8632E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1683E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.1896E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.4024E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1829E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.6899E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.6226E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.2149E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.3203E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.2254E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.6628E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.2104E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.2500E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.2461E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.5224E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.3426E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.1121E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.5115E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.1786E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.3324E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.3930E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.1922E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.1584E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.4251E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.3592E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.4632E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.3135E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1018E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.7791E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.1897E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.1477E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.1276E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.7831E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.7341E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.5271E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1932E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.3635E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.1655E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1155E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.9623E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.2800E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.2607E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.3713E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.5299E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.3079E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.5766E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.3651E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)
  ) = 0.1826E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1773E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.8717E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)
  ) = 0.2819E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.2510E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1285E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1958E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1996E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.6748E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.1153E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1727E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.5335E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.2448E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.1776E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.1773E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.7757E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.3429E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.9112E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1751E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.8585E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1588E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.3162E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.3196E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.4849E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.6595E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.8880E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)
  ) = 0.1108E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.2232E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.5807E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.5371E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1933E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.4890E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.3041E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.6014E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.1491E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1830E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1347E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.5079E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.2833E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.6695E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.9505E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.4276E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.2166E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.1061E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1583E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.4100E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.9457E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1538E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.5821E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.4736E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.5138E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.3660E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.3514E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1021E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1755E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.1116E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.1870E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.2184E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1238E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.4589E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.3940E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.2580E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.5949E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.5197E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.6394E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.1378E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.7510E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.2856E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.8752E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.7011E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.5015E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.6246E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2536E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1761E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1575E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1471E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.1019E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.4119E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.2366E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.3040E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.6439E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1101E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.5230E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.5535E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.1083E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.1118E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1261E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.1078E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.1748E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.3332E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1732E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1724E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.4385E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.1870E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1623E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1200E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.7080E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.2813E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2232E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1713E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.3879E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1070E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1976E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.2966E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.1427E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1994E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.3684E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.9133E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.4468E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.4900E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.2004E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1556E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.2418E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.5314E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.8710E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.4937E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.7660E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.9576E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.6966E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.1929E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.3753E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1345E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1886E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.9597E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1248E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1530E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2423E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1858E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.7136E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1029E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1886E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.2028E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.1496E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2368E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.3337E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.1755E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.4454E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1221E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.2149E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.8620E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.5337E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1451E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1073E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.2403E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1809E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.1020E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1826E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.5935E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.1689E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2274E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.1467E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1533E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.1369E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.1618E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1662E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1291E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1326E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.3772E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)
  ) = 0.5864E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1211E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.2438E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.2053E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.4508E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1392E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.8128E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.3922E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.2532E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.2614E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.5419E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.3717E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.5388E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1500E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1924E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.3946E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1048E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1491E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.1595E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.2635E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.3995E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)
  ) = 0.2842E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.3208E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.1000E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.7561E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.3466E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.1890E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.3469E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.4824E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.1628E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.5416E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1679E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.6162E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.1109E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.3350E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.2096E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1324E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1735E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1543E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1134E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)
  ) = 0.1429E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.5883E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1846E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2047E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.7589E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.2216E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.1235E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.2468E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.9089E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.8119E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.1554E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.1654E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1134E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.1247E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.6359E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1483E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2361E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.2324E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.6749E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.5178E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1274E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.4755E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4823E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1591E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.9800E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.8743E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.3429E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.5625E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.3528E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.4527E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.5037E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.1986E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.4899E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.1527E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.6080E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.2005E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1898E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1810E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.2214E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1745E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.2465E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.8337E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.4408E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.9687E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1113E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1438E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.5071E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.7263E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.3689E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.3894E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.2452E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.3676E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.4086E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.6946E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.3749E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.2857E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.5550E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.1409E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.1371E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.3118E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2148E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.7867E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1927E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.5203E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.6402E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.1690E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.5586E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.1133E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.1272E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.1944E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1767E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.3394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.9070E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.9171E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.1456E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.5394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.4318E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1096E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.1649E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.8486E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.5640E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.1321E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.3853E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.4168E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.5810E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1370E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.1541E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.5296E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.2227E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.3040E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.4458E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.1153E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.3657E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1945E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.2644E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.5335E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1605E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.4298E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.8857E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.8604E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.8207E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.9864E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.8273E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.9052E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.4075E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1296E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.2006E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.2000E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.9366E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.4315E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1209E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.8660E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1023E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1809E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.5741E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.8268E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1573E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.6925E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.6744E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.4050E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1073E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.7545E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.2678E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.8217E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.4642E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.4031E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2829E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.2828E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.3298E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.4637E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.2622E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.2111E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.3987E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.2633E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.6872E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1227E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.8225E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.1761E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.4074E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.3320E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.7846E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1824E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2181E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1114E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1624E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.4500E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.3158E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.4960E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1107E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.9206E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.1232E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.5816E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.4921E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.7975E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.1645E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.6587E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1246E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.7043E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.1037E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1066E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.5661E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.5937E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.9351E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1832E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1152E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.5045E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.3372E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.8572E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.6361E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.5640E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.2546E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.5507E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.9399E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.2044E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.2773E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.3781E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.2971E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.5362E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.1492E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.5611E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)
  ) = 0.1583E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1139E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.8529E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.2887E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.8822E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.4640E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.1862E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.3047E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.4409E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.1059E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.2377E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.9283E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.8665E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.5418E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.2531E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.5283E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.4358E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.2084E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.2677E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1498E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2120E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.2303E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.3036E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.5956E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.7811E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1256E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.4518E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.4634E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1086E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.7288E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.6040E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1824E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1710E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1753E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.3436E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.1910E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.6286E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1709E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.8799E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.9116E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1188E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.1074E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.1702E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.1352E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.3170E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.2395E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.2043E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.2897E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.1954E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.7733E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.9796E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.2193E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.1008E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1827E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.4018E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.3546E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1480E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.6643E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.5596E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1096E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.1274E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1052E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.2663E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.4336E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.1126E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.4244E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.7301E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.3703E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.2984E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.1288E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.3489E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.4332E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.5655E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.4810E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1112E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.2028E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.2422E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1422E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.2242E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1739E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.5269E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1511E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.1765E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.6008E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1329E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2690E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1915E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1108E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.5847E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.3703E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.2118E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.6146E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.5176E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.3080E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.7244E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.2563E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.8714E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.2558E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.4453E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.7610E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.1654E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.3590E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.9610E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.7738E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.6896E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.3878E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.5093E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)
  ) = 0.5490E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1019E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.8194E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1800E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.8682E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.6030E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.6436E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.4351E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1942E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.1502E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.3082E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.4641E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.5292E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1403E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.8242E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.1230E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.4887E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)
  ) = 0.7871E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.5648E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.1143E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.6253E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.2586E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.3945E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.8242E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.2952E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)
  ) = 0.2461E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.2547E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.1304E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1306E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.7724E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.2265E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.2686E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.2119E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.5281E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.1510E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.6011E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.3276E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.8354E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3572E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.5139E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.9723E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1251E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.7385E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1500E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.3129E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.6437E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.2909E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.2709E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.4870E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.9618E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.1452E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.8456E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1144E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1102E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1624E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.4299E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1167E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1328E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.6320E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1812E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2596E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1350E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1617E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.3537E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2633E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1022E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3164E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1239E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1321E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.1835E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.1144E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.2346E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.1776E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.2427E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.2817E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.5388E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.2140E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.2626E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1084E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1640E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1400E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7380E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.8980E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.5709E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.4420E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1656E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.6385E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.2020E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1552E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.2864E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.5125E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.7467E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.5844E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.2729E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.6268E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.3846E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.6371E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.9820E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.2718E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.8610E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.2336E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1204E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.3344E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.9526E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.2584E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1639E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.6231E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.4648E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.1106E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.4647E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.1315E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.7905E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.3728E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.9590E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.8321E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.4214E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1241E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.3282E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.6690E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.3028E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1603E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.6438E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.6991E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.4695E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.9255E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.3433E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.2927E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4301E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.7920E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.4816E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.3519E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1906E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.6057E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.1695E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.6607E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.8635E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.4967E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.3106E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.5899E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.5683E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.1842E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.2640E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.1745E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.3456E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.1503E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1078E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.2296E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.1205E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1509E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.8000E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.2211E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.2899E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.5190E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.3047E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.2468E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.5951E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1107E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.3286E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1892E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)
  ) = 0.2363E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)
  ) = 0.1887E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.9346E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.9404E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.4034E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.5136E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.7806E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.1252E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.1044E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.6573E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.7027E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.4420E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.3434E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)
  ) = 0.3434E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.2392E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.1595E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1191E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1279E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.1144E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.2391E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1257E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.1051E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)
  ) = 0.2923E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.7157E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.5125E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.3852E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)
  ) = 0.1273E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)
  ) = 0.3817E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.4153E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.2022E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.8807E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.3382E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.8665E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)
  ) = 0.4313E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.2050E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1823E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.3986E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.4224E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.1298E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1435E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.3897E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1248E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.1563E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.6949E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.2250E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.6946E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1508E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.4805E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.5291E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.6410E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.4667E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1288E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.6916E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.4538E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.8097E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.1342E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.6403E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1166E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1643E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.6515E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.8908E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1255E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)
  ) = 0.8881E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.1050E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.3838E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.2740E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1183E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1783E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1490E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.3074E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.4766E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1166E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.5601E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1638E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.2457E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.6227E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.1089E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1149E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1275E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.2654E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6907E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.2413E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.2405E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.8215E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.4086E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.6818E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.2677E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.6213E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.3692E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.4456E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.2826E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.6640E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.8806E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.3353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.3005E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.2753E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.9581E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.7638E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.4930E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.1696E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.8875E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1003E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.4007E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.1876E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.1170E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.2011E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)
  ) = 0.9352E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.5990E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2195E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1431E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1627E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1231E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2417E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.6952E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1941E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.4082E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.2167E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1958E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.6032E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1132E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.4856E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.9229E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3129E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.2642E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.4673E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1970E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.1422E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.3099E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.9114E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.5013E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1519E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.3156E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.4256E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.2922E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.4232E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2393E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.1257E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.3285E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1249E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1013E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1444E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.1409E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1270E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1395E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)
  ) = 0.3826E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.2948E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.1068E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1453E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)
  ) = 0.4491E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.6256E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.4061E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.6553E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.1380E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.2869E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.1886E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.1697E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.7362E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1734E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.6795E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)
  ) = 0.2018E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)
  ) = 0.4283E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.1875E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.7943E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.9285E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.3922E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.9880E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.5380E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.4505E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.6519E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.2154E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.5633E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.2145E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.3650E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.3324E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.5396E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.3973E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.6257E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.1926E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.1212E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.3180E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)
  ) = 0.1823E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.2849E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1171E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.6393E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.2881E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.9231E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1233E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2609E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.1629E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.2720E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)
  ) = 0.1499E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.3291E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.2210E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.2023E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.5435E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.3857E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.2746E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.1717E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.5666E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)
  ) = 0.1055E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.2402E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)
  ) = 0.5113E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1191E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.1255E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.1542E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.3227E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.4429E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1538E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)
  ) = 0.6356E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.3917E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1777E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.1164E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1174E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.9347E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1313E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.5497E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.8796E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.2072E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.8906E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.1835E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1132E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.5610E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.4609E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.4378E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1791E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.3007E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.8354E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.7050E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1024E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.5300E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1059E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.2494E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.6720E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.5082E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.4142E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.1119E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.1017E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.5245E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.2326E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.8943E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.8571E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.1837E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.7113E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.7282E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1602E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.9550E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.2845E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.3242E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.1628E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2206E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.2044E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.3018E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.3696E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.6892E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.4395E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.1073E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.7569E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.2991E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.1428E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.2031E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.1991E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.2325E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.5598E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.2598E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.6076E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.6443E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.6433E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.3981E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.2251E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.6764E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.4966E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.6916E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.2523E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.7805E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.2053E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.5341E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.1393E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.5911E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.2926E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1774E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.7227E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1609E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.2387E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1342E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.2806E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.8561E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.5168E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.2744E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.6457E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.3962E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.6810E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1245E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.6152E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.8524E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.3025E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7274E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1683E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.5762E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.7733E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2096E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.9722E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1795E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.9602E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.1418E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.2290E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.5312E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1770E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.8512E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.6214E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.4155E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.5001E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.5402E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.2112E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.9690E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.4064E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1029E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.3900E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.1816E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.4371E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.2669E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.4939E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.4840E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.6824E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.9564E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.2099E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.1185E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.4061E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.1195E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1253E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.5166E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.2879E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.9642E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.3970E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2326E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1464E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.5583E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.4808E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.9725E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.4943E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.8117E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7880E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.5689E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.2688E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.9888E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1302E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.9596E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.2018E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.1732E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.4326E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1055E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1234E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.2349E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.8281E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.7195E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2971E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.9130E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.9751E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.5012E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2381E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1009E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1950E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.3928E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.9426E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.4189E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1910E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.2020E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.4635E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.3226E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.1093E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.3132E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.2974E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1322E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.5222E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.5988E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.5648E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1120E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.2325E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.5261E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1923E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.1151E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.5411E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.9883E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.1416E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.2144E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.1002E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.9142E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.9355E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.6899E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.2094E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.4582E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.1315E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4259E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.4745E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1505E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.2667E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.4515E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.4500E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.2061E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1465E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.1816E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.3101E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.5082E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.7932E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.8771E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.8415E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.1775E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1160E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1206E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2156E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1031E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.2031E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)
  ) = 0.2274E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.1428E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.6006E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.5623E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.3185E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.6009E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.4325E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.1379E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.1294E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.8836E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.3531E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.2211E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1184E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.2473E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7218E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1257E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3024E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1121E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.3693E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1585E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.1194E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.6128E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.7075E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1681E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.9242E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1579E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1065E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.3074E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2156E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.3063E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.1657E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.9599E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.2744E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2295E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1882E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.8515E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1161E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1970E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.7379E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1233E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6441E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.7680E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.1004E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1054E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.3611E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.4181E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.4734E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.7215E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.3358E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.4503E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.5975E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1551E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.1255E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.3865E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1318E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.2951E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.9267E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.3586E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1281E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.4665E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.2837E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1648E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1784E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.1133E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1288E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1310E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.4124E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1746E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.3437E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.4780E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2339E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.4508E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.6827E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.4081E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.1606E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.3533E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.3611E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.8453E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.3917E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1125E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3598E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.5116E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1141E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.1064E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.7363E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.2246E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.6157E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.7340E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.7518E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.5131E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.4777E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1750E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.4735E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.8311E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.9880E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.5748E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1256E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.3404E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.3301E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.8526E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.1810E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.3569E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.4308E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.2804E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.4986E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.6942E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.1715E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.2745E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.1313E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.2713E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)
  ) = 0.1601E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.6476E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.3406E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)
  ) = 0.1220E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.4712E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.3157E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.1108E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.2330E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)
  ) = 0.2683E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.2521E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.1415E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.4217E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.1671E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.7810E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.1544E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.8289E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.3169E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.1042E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.1586E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.2993E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.3093E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1919E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.1939E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.2951E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)
  ) = 0.2517E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.2149E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1197E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.4638E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.2681E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.8203E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.5819E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.4700E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.1727E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.1294E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.4777E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)
  ) = 0.1330E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)
  ) = 0.2882E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)
  ) = 0.1132E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1341E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1054E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.2535E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1291E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.4812E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.7497E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1186E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1936E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.3266E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.7363E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.5800E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1198E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.9065E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1126E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1265E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.3134E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1205E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.3704E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1668E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.3677E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.9451E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1025E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1341E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1208E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.3543E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.5324E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.3569E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1596E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1051E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1413E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.1344E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.2184E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.1084E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.2170E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.2045E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.2776E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.1214E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.3890E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2116E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.9712E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1347E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.3965E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1473E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.5136E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.2530E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.2392E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1636E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.4564E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.4187E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1606E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.8228E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1271E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.5848E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.2192E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1158E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.7321E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.3716E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.1203E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.1213E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.7590E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.4896E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2988E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.9118E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.6712E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1307E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.4009E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2017E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1274E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2700E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.4986E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1217E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.2671E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1670E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.2895E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.9338E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.2899E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.7831E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1590E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.7931E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1147E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.2480E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.5255E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1043E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.2046E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3115E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1322E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1678E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1048E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.2192E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.2003E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1211E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.9406E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.9014E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.7609E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1862E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.8719E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.4026E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.3333E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.5558E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.1103E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3127E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1007E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.1478E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.3621E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1166E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.6689E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.2440E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.3069E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1055E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.3308E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1188E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.4391E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.3372E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1100E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.1294E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.7752E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.1983E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.2408E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.5057E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1001E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.3976E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.8876E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.6561E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.5081E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.9177E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3994E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.3231E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1660E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1296E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.1430E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)
  ) = 0.1375E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.2537E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1265E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.9837E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2827E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.3266E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.2954E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.4507E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.4155E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.2501E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2173E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.1374E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.3085E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1077E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.3341E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1757E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3322E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.3565E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.7324E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.2371E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1875E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.7598E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.2120E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.3881E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1478E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1165E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2544E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2000E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1182E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2134E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.3098E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.1576E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.6394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.1775E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.7631E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.2018E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6139E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1350E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.2458E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.1384E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.2474E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.4512E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1589E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.8342E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.7118E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.1053E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.3288E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.6244E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.6614E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.3530E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.4029E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1083E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.3340E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1743E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2172E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.6096E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1526E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1150E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1230E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.2951E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.7061E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1045E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.7729E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.2552E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.6357E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1730E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.2639E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.3568E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.6654E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.3001E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1833E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1959E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.5331E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1282E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1301E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.2534E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1561E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2460E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.2382E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1125E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1798E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1273E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.1350E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.6025E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.4537E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)
  ) = 0.1198E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.4237E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.1814E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.6491E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1174E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.5351E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.3095E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2023E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.2455E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.3125E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.8116E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.4338E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.5455E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.3699E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.6600E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.2803E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.2142E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)
  ) = 0.3153E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.9100E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.7065E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1709E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1145E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1335E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.4690E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.4279E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.3876E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.1839E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1181E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.2097E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.8506E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1417E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1338E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.3557E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.5158E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.5865E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1436E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.3538E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.2385E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.1884E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.4272E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.8634E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.5876E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.2722E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.3741E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.7440E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.7927E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)
  ) = 0.5228E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.8951E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1515E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1414E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.7806E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1203E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.3448E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.2300E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1238E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.6769E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.4356E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.6568E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.5644E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1865E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.3897E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.4837E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1370E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.1333E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.1339E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.1549E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.6754E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.4890E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.9212E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.3967E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.9148E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2923E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2618E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.4372E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1287E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.1390E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.3640E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.6720E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.5957E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.7500E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.9452E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.6695E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1986E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)
  ) = 0.5423E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3874E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.4439E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.3975E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1406E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.3718E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.3222E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.1128E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.4445E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.1280E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.3737E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1041E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2954E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.6615E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1559E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.3236E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.8143E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.3577E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.3659E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.2294E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1509E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.6392E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1756E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.8489E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.2165E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2571E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3133E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1844E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1760E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.7252E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.8140E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1584E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)
  ) = 0.1023E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.4629E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1011E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.3032E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)
  ) = 0.1963E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.2100E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1029E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.2837E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.3016E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1271E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.7152E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.2130E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.3252E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.4891E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.4997E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.1455E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1069E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1637E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_4F34f)
  ) = 0.9965E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_4F44f)
  ) = 0.1471E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)
  ) = 0.6448E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.2556E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)
  ) = 0.1018E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)
  ) = 0.7437E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1257E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.9808E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.4017E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.1767E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.2283E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.1844E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.2130E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.6657E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.2551E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)
  ) = 0.7495E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.5957E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.6431E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.7531E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.3330E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)
  ) = 0.3480E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)
  ) = 0.1037E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.3913E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.6574E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.7447E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)
  ) = 0.4335E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)
  ) = 0.1187E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.8943E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.8187E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.1538E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_4F24f)
  ) = 0.9152E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)
  ) = 0.1534E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.9056E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.4297E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.1766E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.4396E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1188E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.5234E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.1630E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.5746E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)
  ) = 0.1916E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)
  ) = 0.1422E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.8936E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.3404E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.1509E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.1086E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.4951E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.1869E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.2277E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.8620E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.2130E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.1942E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.2017E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)
  ) = 0.1084E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.1011E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)
  ) = 0.1273E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.1083E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.6468E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1596E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.3958E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1099E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.4837E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1214E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.2595E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d8_3P),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.1422E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.3716E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1115E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.9834E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.8183E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1387E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.3052E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.2547E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1967E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.9675E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.4889E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2166E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.1393E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.4050E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1408E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.6339E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.1508E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.2894E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.3783E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.5714E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1100E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.3974E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.1489E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.9062E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1293E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.9054E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.3575E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.2266E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.6139E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.1750E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1228E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.3133E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.2360E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.2394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.6772E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.4024E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.5292E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1287E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.3441E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.4307E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2337E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1258E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1412E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1639E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.2276E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)
  ) = 0.2958E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1494E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.6095E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.2519E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.3166E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.3810E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.6110E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7753E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.1391E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.3457E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.5535E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.3282E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2141E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2472E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1718E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1152E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1394E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.5777E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1404E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.1073E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)
  ) = 0.1936E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.2442E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1138E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1161E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.2392E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.2216E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1076E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.1555E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2092E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.3025E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.1184E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.5442E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1180E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.2977E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.5772E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.4071E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1210E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.2150E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.2400E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.6603E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.1368E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.6265E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)
  ) = 0.7105E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)
  ) = 0.3017E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)
  ) = 0.4823E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.2548E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.3339E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.7964E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.7034E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1773E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.2484E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.2180E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)
  ) = 0.3069E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.3152E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.1720E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.1372E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.1748E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.1553E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.1297E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.1285E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.1714E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.1481E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.1823E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.2084E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.4277E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1683E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.3491E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1106E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.6732E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1204E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.4637E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.6820E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.2767E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.7553E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.3117E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1940E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.5504E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1160E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1335E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1938E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1567E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1727E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.1085E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1746E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.5620E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.4405E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.2070E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.8330E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.2544E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.6774E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.1237E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.6441E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.2175E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.1380E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.7173E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.5480E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.6638E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.5575E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.2952E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.6289E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1005E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.2504E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.8077E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.2766E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.1414E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.5592E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.4045E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.2016E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.5152E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.3293E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.2549E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.3235E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.1700E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1096E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1238E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1944E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.1602E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1486E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.2093E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.3256E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.4051E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do),
    static_cast<int>(STRUCTURE::_58831e)
  ) = 0.1123E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.2862E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1761E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.1566E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.3656E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.1366E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.2462E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.2702E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.9217E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.8160E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.1191E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.3126E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.6281E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.4331E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.3086E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1332E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.3398E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2445E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1108E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.2779E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2163E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.1106E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1739E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.2051E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.1575E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1540E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.5339E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.4090E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.3061E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.2807E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3899E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.3305E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.3837E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.4275E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.4847E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)
  ) = 0.1167E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.3189E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.4450E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.2685E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.4919E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.3779E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.1894E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.4736E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.2104E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.2224E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1977E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.9681E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2113E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.1702E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.2000E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.8463E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.4680E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.1567E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.3119E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.6783E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.2488E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.5177E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.5911E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.6795E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)
  ) = 0.4881E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.2192E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.1736E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.1034E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1751E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.4218E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.2250E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.2137E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.2190E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1303E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.2515E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.1647E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.4035E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.3561E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.4867E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1159E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.7806E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.3047E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.1389E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1973E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.1978E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.1564E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.1203E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.1159E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)
  ) = 0.1438E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.6510E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)
  ) = 0.6579E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)
  ) = 0.5654E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.9507E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.1008E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.4302E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.2180E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.1480E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.2961E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)
  ) = 0.5759E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)
  ) = 0.5520E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.8509E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.1928E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)
  ) = 0.9987E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1053E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)
  ) = 0.1337E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.3559E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.6928E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.4687E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.4331E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.1489E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.3661E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.4656E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.2511E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.6320E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.5746E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.1570E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1105E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.2217E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.2841E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.1086E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.4037E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)
  ) = 0.5436E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.7514E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.9416E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)
  ) = 0.5510E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.3001E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)
  ) = 0.6331E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)
  ) = 0.1135E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)
  ) = 0.3958E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)
  ) = 0.7915E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)
  ) = 0.1615E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)
  ) = 0.1212E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1817E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.4020E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)
  ) = 0.4754E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.1150E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.4390E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)
  ) = 0.4613E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1403E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.7778E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.8609E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.3982E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)
  ) = 0.9755E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.3235E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.6005E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.2466E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.4255E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.3945E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)
  ) = 0.1879E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)
  ) = 0.8664E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)
  ) = 0.5890E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)
  ) = 0.1467E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)
  ) = 0.4605E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)
  ) = 0.2485E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)
  ) = 0.5948E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)
  ) = 0.6384E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)
  ) = 0.1343E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)
  ) = 0.1021E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)
  ) = 0.1718E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)
  ) = 0.4676E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)
  ) = 0.1253E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)
  ) = 0.3922E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)
  ) = 0.2331E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)
  ) = 0.3657E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)
  ) = 0.8500E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)
  ) = 0.6692E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)
  ) = 0.2211E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)
  ) = 0.6043E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)
  ) = 0.1027E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)
  ) = 0.5582E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)
  ) = 0.3672E+00;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)
  ) = 0.6543E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)
  ) = 0.6172E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)
  ) = 0.4624E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)
  ) = 0.4863E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)
  ) = 0.4742E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)
  ) = 0.1868E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)
  ) = 0.3442E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)
  ) = 0.3248E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)
  ) = 0.8364E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)
  ) = 0.1503E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)
  ) = 0.3495E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)
  ) = 0.1161E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)
  ) = 0.1873E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)
  ) = 0.2573E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)
  ) = 0.8209E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)
  ) = 0.6352E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)
  ) = 0.1262E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)
  ) = 0.6088E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)
  ) = 0.1828E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)
  ) = 0.4137E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_4F14f)
  ) = 0.4080E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D35f)
  ) = 0.4275E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)
  ) = 0.9334E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)
  ) = 0.3533E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)
  ) = 0.1047E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)
  ) = 0.4041E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)
  ) = 0.7944E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D24f)
  ) = 0.4245E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)
  ) = 0.6766E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D34f)
  ) = 0.1611E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D44f)
  ) = 0.1043E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)
  ) = 0.8690E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)
  ) = 0.7843E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)
  ) = 0.6393E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)
  ) = 0.3713E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)
  ) = 0.1202E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)
  ) = 0.1745E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)
  ) = 0.1598E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)
  ) = 0.1542E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)
  ) = 0.4376E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)
  ) = 0.4373E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)
  ) = 0.3016E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_62192e)
  ) = 0.2813E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_61724e)
  ) = 0.8945E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_58906e)
  ) = 0.8095E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D46h)
  ) = 0.9584E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D36h)
  ) = 0.3353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D),
    static_cast<int>(STRUCTURE::_s6D26h)
  ) = 0.1915E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)
  ) = 0.7525E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)
  ) = 0.5078E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)
  ) = 0.2644E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)
  ) = 0.1023E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)
  ) = 0.3669E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)
  ) = 0.1672E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)
  ) = 0.1910E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)
  ) = 0.1348E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)
  ) = 0.4390E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)
  ) = 0.9600E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)
  ) = 0.1299E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)
  ) = 0.2993E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_4p27D)
  ) = 0.4353E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D46g)
  ) = 0.6968E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D26g)
  ) = 0.4828E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)
  ) = 0.1073E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)
  ) = 0.6748E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D15g)
  ) = 0.1558E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D16d)
  ) = 0.7526E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D26d)
  ) = 0.1892E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)
  ) = 0.8201E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D36d)
  ) = 0.2862E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D45g)
  ) = 0.2165E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D46d)
  ) = 0.1935E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)
  ) = 0.3121E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)
  ) = 0.2062E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)
  ) = 0.1410E-01;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)
  ) = 0.4265E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)
  ) = 0.8354E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)
  ) = 0.2532E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)
  ) = 0.1082E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)
  ) = 0.7080E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)
  ) = 0.1433E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)
  ) = 0.1087E-02;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)
  ) = 0.7871E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)
  ) = 0.4243E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)
  ) = 0.7874E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)
  ) = 0.1998E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_62079e)
  ) = 0.7289E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D36g)
  ) = 0.8653E-03;
  f(
    static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do),
    static_cast<int>(STRUCTURE::_s6D16g)
  ) = 0.1712E-03;
  return f;
}


}