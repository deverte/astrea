/**
 * \file astrea/element/c_ii/oscillator_strengths.h
 * C II oscillator strengths by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_ii/structure.h"


namespace astrea::element::c_ii {


/**
 * C II oscillator strengths by Alexeeva+2015.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 77, 77>::Zero();
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)
  ) = 1.71E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)
  ) = 2.39E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)
  ) = 2.40E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S)
  ) = 3.28E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)
  ) = 1.19E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S)
  ) = 2.92E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 1.65;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)
  ) = 3.91E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8)
  ) = 5.60E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 3.07E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)
  ) = 1.26E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 1.66E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 1.39E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 5.00E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 4.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)
  ) = 7.14E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 1.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 6.14E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 9.39E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 4.07E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 7.16E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 2.04E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 6.50E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 3.96E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 2.53E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 3.32E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 4.05E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 9.18E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)
  ) = 2.72E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)
  ) = 6.49E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 5.65E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 2.88E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 1.65;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 1.54E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)
  ) = 6.63E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 5.08E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 3.35E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 4.50E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 5.23E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 4.98E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 1.23E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.32E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 3.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.10E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 9.43E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 4.05E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)
  ) = 4.38E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 8.68E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 1.32E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 6.45E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 5.07E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 1.29E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 3.94E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 6.89E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 1.30E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 6.87E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 5.15E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 8.69E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.59E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 3.08E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 1.65;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 4.18E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 1.05E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 2.88E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 3.07E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 1.48E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 1.24E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 3.78E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 9.44E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 3.66E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 1.57E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 6.28E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 5.04E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 4.07E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 7.16E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 1.02E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 1.61E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 9.95E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 2.07E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.56E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 4.03E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.51E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 8.04E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 8.67E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 2.02E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 5.16E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 6.41E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 6.90E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 7.11E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 6.89E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 2.44E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 2.59E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 3.28E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 6.15E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 4.63E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 8.35E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.36E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 5.80E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 5.56E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 1.08E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.64E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 7.00E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 1.49E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.90E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 5.85E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 8.20E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 4.50E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 1.39E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 9.14E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 1.25E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.54E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 8.98E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 1.34E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 4.48E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 2.48E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 4.50E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 1.62E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 1.88E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.58E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 2.25E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 3.23E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 8.91E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 2.03E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 8.67E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 7.11E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)
  ) = 1.89E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 5.87E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 1.90E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 9.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P6),
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4)
  ) = 1.73E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 9.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P4),
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4)
  ) = 1.73E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.72E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P2),
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4)
  ) = 1.73E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)
  ) = 2.60E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 2.34E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 6.45E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.14E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)
  ) = 2.25E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 1.11E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 4.56E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 4.39E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 2.40E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 2.33E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 2.05E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do)
  ) = 1.80E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 3.57E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 3.31E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 3.358E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 1.63E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 8.17E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 3.93E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 4.08E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.04E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 1.84E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 6.22E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 9.20E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.62E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 3.54E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 1.61E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 1.26E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 2.00E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 5.55E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)
  ) = 7.38E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 4.44E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.22E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)
  ) = 3.57E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo10)
  ) = 3.98E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 1.03E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)
  ) = 4.53E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 2.06E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)
  ) = 3.65E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2p3_4So4)
  ) = 1.23E-07;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 7.77E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 4.24E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.564E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)
  ) = 1.63E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 3.140E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.00E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 1.60E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 1.98E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 3.20E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 2.29E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 1.92E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.15E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 3.82E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 3.59E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 5.38E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 8.90E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 1.08E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 4.56E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do)
  ) = 8.27E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 4.73E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 6.210E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 4.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.11E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 4.46E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.50E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 1.31E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 2.15E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 3.44E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)
  ) = 1.47E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 2.45E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 2.15E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 9.29E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 4.31E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 9.37E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do)
  ) = 8.90E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 4.73E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 6.37E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 1.12E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 2.377E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.53E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2)
  ) = 1.08E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 3.48E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 4.85E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 4.14E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 1.22E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 8.28E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 1.78E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 6.40E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 1.02E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 1.28E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.80E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 7.68E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 5.05E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 1.54E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 6.95E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.23E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 9.70E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 3.00E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.53E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 4.30E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)
  ) = 1.00E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)
  ) = 1.06E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.58E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)
  ) = 1.19E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2)
  ) = 0.69E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 3.92E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do)
  ) = 0.0512;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.60E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 2.00E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 5.79E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 5.77E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 8.13E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 3.92E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 9.33E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 5.00E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.03E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 8.00E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.03E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 2.45E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 1.19E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)
  ) = 3.66E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 5.88E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 0.98E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 2.48E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 0.49E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 8.75E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 6.20E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 1.22E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 4.76E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.40E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 2.97E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 3.05E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.10E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)
  ) = 1.63E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 1.43E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 4.36E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 1.30E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 1.60E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 1.35E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 1.15E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.25E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 7.29E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 1.25E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 1.67E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.05E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 1.01E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 3.32E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 1.69E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 2.27E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 1.87E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 1.45E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 3.44E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 7.69E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 2.95E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.42E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 1.58E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 7.85E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 3.15E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.13E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 2.95E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 2.31E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)
  ) = 8.25E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 2.94E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 9.18E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 7.47E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 1.98E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 1.87E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 3.60E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 6.85E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 1.88E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 0.013;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 2.60E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 0.9705;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 8.93E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 1.01E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 1.21E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 2.29E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 8.69E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 1.98E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 6.65E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 8.63E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 1.34E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 2.05E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 2.01E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 6.73E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 3.73E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 7.36E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 1.70E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 2.60E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 2.95E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.74E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 6.32E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.68E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 1.26E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 8.70E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 2.94E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 2.57E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 3.44E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 1.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 9.19E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 5.78E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 1.98E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 5.83E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 7.20E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 7.22E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 3.75E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.93E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 5.15E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 2.65E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 3.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 0.002;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 1.17E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 0.012;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 1.90E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 0.0009;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 1.37E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 0.006;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 6.02E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 2.45E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 5.50E-7;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 1.01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 2.41E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 7.86E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)
  ) = 1.02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 5.57E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.67E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 3.04E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 6.00E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 1.50E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 2.72E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 6.33E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 1.45E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 0.0735;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 4.76E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 0.5209;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)
  ) = 1.86E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 6.85E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho)
  ) = 1.95E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 2.43E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 8.07E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 3.84E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)
  ) = 1.05E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 5.71E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.15E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.05E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)
  ) = 1.84E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 3.22E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 8.76E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 2.16E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 2.95E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.70E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 1.64E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 2.22E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 3.86E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.19E+0;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 7.27E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.30E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 1.17E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)
  ) = 0.54E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 6.55E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 4.42E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 1.64E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 4.98E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 2.47E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)
  ) = 3.22E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 3.33E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 1.15;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.93E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 1.52E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.25E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 1.09E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)
  ) = 1.98E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 5.88E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 7.26E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 2.07E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 1.71E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 2.98E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 1.75E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 4.83E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 6.55E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 9.26E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 2.47E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 6.47E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 3.86E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 2.86E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 7.56E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 2.44E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.00E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 4.18E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)
  ) = 1.01E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.36E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 1.46E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 0.81;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 7.09E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 9.61E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 4.92E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 9.65E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 2.45E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 0.53E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 2.74E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 2.43E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 1.37E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 1.06;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 5.00E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.52E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 2.90E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 4.11E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.88E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 3.69E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 8.98E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 2.05E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 6.75E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 1.07E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 3.61E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 4.09E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 8.51E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 6.28E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 4.26E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 1.33E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 1.03E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 3.16E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 5.23E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 3.03E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 3.28E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 4.27E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 1.64E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 4.97E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 6.04E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.77E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D)
  ) = 1.15E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 8.69E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.02E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.46E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 2.78E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 6.41E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 3.95E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 3.23E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 6.85E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 2.04E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 1.18E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 2.55E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)
  ) = 3.90E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.53E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.41E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 2.65E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 2.40E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 2.73E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 1.66E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 2.58E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 3.20E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 4.08E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 1.87E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 2.67E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 4.00E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 3.01E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 1.52E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 5.94E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 2.92E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 4.48E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 3.88E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 1.80E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 3.06E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 8.91E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 3.77E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 8.22E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 7.53E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 1.22E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S)
  ) = 1.47E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 2.45E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 8.06E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 2.75E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 5.11E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 2.45E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D)
  ) = 5.47E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 3.80E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 4.94E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 1.92E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 0.73E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 9.55E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Do)
  ) = 1.95E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 4.53E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)
  ) = 1.03E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)
  ) = 4.08E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 4.36E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)
  ) = 1.01E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 2.98E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 2.42E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 2.80E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 1.25E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.31E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)
  ) = 1.81E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 1.67E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 8.17E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 3.41E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 2.44E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 2.19E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 5.45E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 1.75E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 2.46E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 3.64E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)
  ) = 7.60E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 1.83E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 8.79E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)
  ) = 1.77E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 3.85E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 6.05E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 1.91E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 3.30E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 7.55E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 6.54E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 9.40E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 3.83E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 1.43E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 1.30E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 2.04E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 5.00E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 4.67E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 3.50E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho)
  ) = 1.68;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 2.40E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S)
  ) = 6.12E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)
  ) = 2.33E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)
  ) = 1.12E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)
  ) = 3.45E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)
  ) = 1.98E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)
  ) = 6.03E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2)
  ) = 4.63E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4)
  ) = 4.67E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)
  ) = 1.65E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)
  ) = 1.67E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 3.33E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 3.40E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 5.77E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 3.62E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S)
  ) = 1.18E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)
  ) = 1.70E-06;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)
  ) = 3.0E-06;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)
  ) = 3.0E-06;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)
  ) = 5.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)
  ) = 5.83E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D)
  ) = 3.37E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D)
  ) = 1.28E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 2.98E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 3.48E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)
  ) = 5.70E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 1.90E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 8.93E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)
  ) = 4.26E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)
  ) = 4.14E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)
  ) = 8.57E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)
  ) = 0.85E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)
  ) = 2.63E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)
  ) = 1.29E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho)
  ) = 1.26E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)
  ) = 1.16;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)
  ) = 7.62E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)
  ) = 7.93E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)
  ) = 9.79E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo),
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)
  ) = 6.34E-4;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)
  ) = 3.96E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)
  ) = 7.08E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 2.54E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)
  ) = 1.49E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)
  ) = 5.08E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)
  ) = 0.93E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 2.16E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)
  ) = 1.94E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 2.54E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 1.30E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 6.37E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 3.69E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)
  ) = 1.50E-5;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2)
  ) = 3.01E-6;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)
  ) = 7.13E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)
  ) = 1.66E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)
  ) = 8.28E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)
  ) = 1.61E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)
  ) = 8.05E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)
  ) = 7.45E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)
  ) = 3.72E-1;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)
  ) = 9.39E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)
  ) = 4.69E-2;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)
  ) = 1.44E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)
  ) = 1.94E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)
  ) = 2.65E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S),
    static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)
  ) = 3.19E-3;
  f_KK(
    static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D),
    static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)
  ) = 1.41E-1;
  return f_KK;
}


}