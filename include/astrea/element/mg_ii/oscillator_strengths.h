/**
 * \file astrea/element/mg_ii/oscillator_strengths.h
 * Mg II oscillator strengths by Alexeeva+2018, TOPBASE
 * (https://cdsweb.u-strasbg.fr/topbase/xsections.html).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_ii/structure.h"


namespace astrea::element::mg_ii {


/**
 * Mg II oscillator strengths by Alexeeva+2018, TOPBASE
 * (https://cdsweb.u-strasbg.fr/topbase/xsections.html).
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 43, 43>::Zero();
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S)
  ) = 1.817E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 1.070E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S)
  ) = 6.267E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 2.665E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S)
  ) = 3.000E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 4.440E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 1.700E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 2.170E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 1.063E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 1.215E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 7.150E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 5.700E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 8.800E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 1.615E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 5.550E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 3.075E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 2.250E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 3.115E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 6.550E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 1.770E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 2.260E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 4.615E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 8.800E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 3.150E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S)
  ) = 3.900E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 1.275E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S)
  ) = 4.300E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 2.170E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 1.467E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 3.480E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 7.100E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.395E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 4.083E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 5.600E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S)
  ) = 5.083E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.725E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 5.500E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.735E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 1.867E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 2.105E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 9.017E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 2.735E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 6.267E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 3.890E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 6.667E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D)
  ) = 3.050E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 2.250E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D)
  ) = 4.683E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 7.433E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D)
  ) = 1.520E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 7.817E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 1.317E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 8.600E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 1.072E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 2.260E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 1.767E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)
  ) = 5.320E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 5.133E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 1.550E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 2.817E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 7.020E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 1.382E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 3.890E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 2.017E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 2.410E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 2.450E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.610E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 1.152E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)
  ) = 3.590E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 3.867E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 1.040E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 1.665E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 2.970E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 2.250E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 1.350E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.340E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 7.530E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 5.900E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 4.720E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.650E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 5.330E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 4.833E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 1.460E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.933E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 4.080E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 2.483E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 1.850E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 8.100E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.040E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)
  ) = 1.385E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)
  ) = 7.040E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)
  ) = 1.345E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 1.810E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)
  ) = 1.835E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 4.970E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)
  ) = 9.850E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 2.250E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 3.467E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)
  ) = 8.720E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 8.717E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 2.120E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 2.117E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 5.710E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 5.750E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)
  ) = 1.040E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 2.183E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 2.400E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 2.717E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)
  ) = 1.200E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D)
  ) = 1.514E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)
  ) = 6.830E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 2.629E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo)
  ) = 1.630E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 9.429E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo)
  ) = 7.820E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 4.550E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo)
  ) = 1.290E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 2.593E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)
  ) = 5.840E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 1.643E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)
  ) = 1.830E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 3.814E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)
  ) = 7.070E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 6.964E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)
  ) = 1.840E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 2.543E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)
  ) = 2.830E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.250E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)
  ) = 7.400E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 7.214E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)
  ) = 1.840E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 6.607E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)
  ) = 6.750E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 1.243E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)
  ) = 2.340E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 4.636E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 1.620E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 2.300E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 3.840E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 9.714E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 7.900E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.879E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 1.840E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 7.071E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 6.640E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.307E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)
  ) = 2.820E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 2.564E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 1.650E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 6.920E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 1.490E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 2.600E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 4.470E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 8.330E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 1.880E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 6.730E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)
  ) = 3.740E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 1.020E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 2.290E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 4.250E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 8.140E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 1.850E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 6.650E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)
  ) = 3.290E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 5.083E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_8s_2S)
  ) = 5.083E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S)
  ) = 3.083E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_6s_2S)
  ) = 3.083E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S)
  ) = 2.717E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_5s_2S)
  ) = 2.717E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)
  ) = 1.82e-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3d_2D),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)
  ) = 1.51e-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D)
  ) = 1.252e+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_4d_2D)
  ) = 1.23e+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)
  ) = 6.21e-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)
  ) = 3.51e-04;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)
  ) = 9.27e-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4s_2S),
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)
  ) = 4.62e-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S)
  ) = 1.055E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_7s_2S)
  ) = 1.055E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 2.917E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_9s_2S)
  ) = 2.917E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 1.850E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_10s_2S)
  ) = 1.850E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D)
  ) = 7.167E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_5d_2D)
  ) = 7.167E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 1.650E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_6d_2D)
  ) = 1.650E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 1.043E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_10d_2D)
  ) = 1.043E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 6.183E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_7d_2D)
  ) = 6.183E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 2.983E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_8d_2D)
  ) = 2.983E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.683E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_Ne_9d_2D)
  ) = 1.683E-3;
  return f_KK;
}


}