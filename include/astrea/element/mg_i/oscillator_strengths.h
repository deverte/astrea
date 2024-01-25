/**
 * \file astrea/element/mg_i/oscillator_strengths.h
 * Mg I oscillator strengths by Alexeeva+2018, Lemke+1987, Osorio2015,
 * Green1957, TOPBASE (https://cdsweb.u-strasbg.fr/topbase/xsections.html).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_i/structure.h"


namespace astrea::element::mg_i {


/**
 * Mg I oscillator strengths by Alexeeva+2018, Lemke+1987, Osorio2015,
 * Green1957, TOPBASE (https://cdsweb.u-strasbg.fr/topbase/xsections.html).
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 70, 70>::Zero();
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 0.632;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 0.622;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 0.622;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)
  ) = 0.133;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)
  ) = 0.133;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)
  ) = 0.133;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)
  ) = 0.123;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho)
  ) = 1.46;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I)
  ) = 2.006;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho)
  ) = 2.51;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g)
  ) = 1.774;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g)
  ) = 0.660;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)
  ) = 0.950;
  // These transitions were taken from Lemke & Holweger 1987, A&A, 173  and Osorio 2015
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)
  ) = 6.27E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)
  ) = 0.0537;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)
  ) = 6.27E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)
  ) = 0.0537;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)
  ) = 6.27E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)
  ) = 0.0537;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)
  ) = 0.014;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 0.056;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)
  ) = 0.014;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 0.056;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)
  ) = 0.014;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 0.056;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 0.0029;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 0.0029;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 0.0029;
  // These transitions for Mg I were taken from Lyudmila's model atom
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho)
  ) = 0.0059;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 0.0008;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)
  ) = 0.30;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 0.0358;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho)
  ) = 0.0163;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)
  ) = 1.6749;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 0.0269;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 0.095;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho)
  ) = 0.0413;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)
  ) = 0.0073;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 0.2907;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 0.0010;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 0.0003;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 1.2911;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)
  ) = 0.0523;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)
  ) = 0.0614;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)
  ) = 0.0112;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho)
  ) = 0.0002;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko)
  ) = 0.0029;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 0.0031;
  // these f_ij were calculated according to Green 1957
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9l_L)
  ) = 2.442;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho)
  ) = 0.085;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8i)
  ) = 1.805;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 0.0190;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko)
  ) = 0.2308;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8i),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko)
  ) = 2.12;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8k)
  ) = 2.337;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8k),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9l_L)
  ) = 2.67;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9l_L),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.000;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.402;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.609;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 0.0058;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 0.0132;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 0.014;
  // These transitions for Mg I were taken from TOPBASE
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.344E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 1.378E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.344E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 1.378E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.344E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 1.378E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 8.479E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 8.544E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 8.479E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 8.544E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 8.479E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 8.544E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 5.700E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 5.689E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 5.700E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 5.689E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 5.700E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 5.689E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.033E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.033E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.033E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)
  ) = 1.540E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)
  ) = 1.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)
  ) = 1.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)
  ) = 5.330E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 4.856E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)
  ) = 5.330E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 4.856E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)
  ) = 5.320E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 4.856E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)
  ) = 2.478E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 2.367E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)
  ) = 2.478E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 2.367E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 2.367E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)
  ) = 1.280E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)
  ) = 1.523E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)
  ) = 2.850E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)
  ) = 5.400E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)
  ) = 3.231E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)
  ) = 2.470E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)
  ) = 1.690E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 1.320E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 1.030E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 7.833E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 1.770E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)
  ) = 3.050E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 4.941E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)
  ) = 1.790E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 2.220E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)
  ) = 5.400E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 4.881E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)
  ) = 2.530E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 1.020E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 1.427E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 8.460E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 8.933E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 7.761E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)
  ) = 4.267E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 2.650E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)
  ) = 2.677E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 2.720E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)
  ) = 8.200E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 2.240E-9;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 3.800E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 2.460E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 2.143E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 1.610E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)
  ) = 5.667E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 9.309E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)
  ) = 3.833E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 3.069E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 1.197E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 1.680E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 5.600E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 1.400E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)
  ) = 7.000E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 9.501E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 4.800E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 5.691E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 1.490E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 2.050E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)
  ) = 8.300E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 1.090E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 5.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 3.489E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)
  ) = 9.633E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 1.120E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)
  ) = 1.448E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 2.600E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)
  ) = 9.360E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 4.389E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 2.860E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 2.620E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 1.434E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 7.650E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 8.580E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 2.480E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 5.600E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 1.260E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 3.880E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 3.900E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)
  ) = 2.680E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s2_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 7.809E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 1.552E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.000E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 5.020E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.310E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 2.380E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.410E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 1.354E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.690E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 8.540E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 9.549E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)
  ) = 4.320E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.920E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 2.760E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.420E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 8.580E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)
  ) = 9.067E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 4.020E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 2.380E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 2.280E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 1.323E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)
  ) = 5.840E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 8.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 3.900E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 8.333E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 1.208E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 9.100E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 5.660E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 1.687E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)
  ) = 7.380E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 5.867E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 5.140E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 8.800E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 1.596E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 1.120E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)
  ) = 8.900E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 2.440E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 6.400E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 2.000E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)
  ) = 1.044E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 0.125;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)
  ) = 1.343E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 7.200E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 1.097E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 1.123E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 3.371E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 1.143E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 1.529E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 3.667E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 8.429E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 2.300E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)
  ) = 3.200E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 2.877E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 2.400E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 5.567E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 7.186E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 1.440E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 3.229E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 4.600E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)
  ) = 5.114E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 3.500E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 3.457E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 4.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 1.021E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 2.590E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)
  ) = 7.057E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.103E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 4.429E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.267E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)
  ) = 8.986E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.377E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.090E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.163E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 1.011E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.233E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 2.089E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 5.933E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 7.156E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 5.667E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 3.378E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.880E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.900E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)
  ) = 4.860E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 3.267E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)
  ) = 6.700E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 5.456E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 1.436E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.889E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 9.760E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 8.944E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 1.248E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 5.711E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 6.160E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.002E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 5.540E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.556E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 6.300E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 8.500E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 1.670E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.544E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 3.280E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.156E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 3.180E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)
  ) = 2.778E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 1.240E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)
  ) = 2.133E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 3.940E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)
  ) = 6.956E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 2.020E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 3.344E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 1.984E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 1.911E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 1.994E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 1.211E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 9.880E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)
  ) = 4.144E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 5.860E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)
  ) = 2.911E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 2.480E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 9.244E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 2.320E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 4.367E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.302E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 2.478E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.332E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)
  ) = 5.600E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 7.240E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 3.922E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.508E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 1.244E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.296E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 5.878E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 5.080E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)
  ) = 6.944E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 2.600E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 4.711E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 9.060E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 1.467E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 9.360E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)
  ) = 8.300E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 5.340E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 5.467E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.583E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)
  ) = 9.656E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.716E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 3.589E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 6.440E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 4.167E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 7.720E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)
  ) = 4.600E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)
  ) = 1.827E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g)
  ) = 7.043E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)
  ) = 8.067E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g)
  ) = 1.943E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 2.267E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 8.867E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g)
  ) = 1.261E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 4.347E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)
  ) = 6.571E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 2.473E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)
  ) = 0.200E00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 2.207E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 4.533E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)
  ) = 1.743E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 1.767E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 9.000E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 3.057E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 4.567E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 9.057E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 3.380E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 2.371E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 7.400E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 6.74E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 2.920E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)
  ) = 2.186E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 1.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 7.467E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 9.886E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 4.920E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)
  ) = 2.629E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 1.100E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.120E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 1.000E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.686E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 6.613E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 5.214E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 1.233E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.029E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 2.829E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.386E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 4.300E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)
  ) = 1.343E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.490E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)
  ) = 3.249E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 7.143E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)
  ) = 1.700E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 4.043E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 4.733E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 7.143E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 5.900E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.195E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)
  ) = 2.227E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 4.324E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 1.557E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 2.124E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 1.297E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.186E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 8.767E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 2.033E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 2.630E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 7.381E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 7.233E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 1.700E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 4.767E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 2.962E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 2.077E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 2.233E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 1.043E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)
  ) = 7.800E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 3.039E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)
  ) = 2.073E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 4.000E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 1.653E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 2.263E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 5.880E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 8.200E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)
  ) = 3.633E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 2.537E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 6.047E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 1.237E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 1.600E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 3.467E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 4.933E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.083E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)
  ) = 5.047E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.260E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 2.940E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 6.533E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 6.867E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.023E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 1.540E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.054E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 4.420E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.437E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)
  ) = 6.293E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.867E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 1.680E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.889E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 3.686E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)
  ) = 2.033E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 4.167E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)
  ) = 3.022E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 7.467E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3p2_3P),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)
  ) = 2.789E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.060E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 7.133E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 2.240E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)
  ) = 1.446E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 3.993E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)
  ) = 6.088E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 6.867E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)
  ) = 5.000E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 1.393E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 1.356E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 4.041E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)
  ) = 6.311E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)
  ) = 8.600E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 5.312E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 7.133E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 1.478E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.480E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)
  ) = 6.889E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.506E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 2.700E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 3.947E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 6.100E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 6.733E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 1.644E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.367E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)
  ) = 7.378E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 5.993E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 1.589E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 7.033E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 3.211E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 1.267E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 6.956E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.279E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 1.779E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 4.088E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)
  ) = 7.888E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 8.121E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 1.024E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)
  ) = 2.022E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 1.933E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 7.556E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 3.721E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 1.900E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po),
    static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)
  ) = 8.421E-1;
  return f_KK;
}


}