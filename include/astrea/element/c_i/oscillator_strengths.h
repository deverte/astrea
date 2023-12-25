/**
 * \file astrea/element/c_i/oscillator_strengths.h
 * C I oscillator strengths by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_i/structure.h"


namespace astrea::element::c_i {


/**
 * C I oscillator strengths by Alexeeva+2015.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f = Eigen::Matrix<double, 158, 158>::Zero();
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)
  ) = 1.05E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)
  ) = 1.50E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)
  ) = 3.50E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)
  ) = 8.74E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)
  ) = 1.24E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)
  ) = 2.83E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)
  ) = 2.41E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)
  ) = 7.32E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)
  ) = 8.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)
  ) = 1.66E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 6.93E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo4)
  ) = 3.03E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 5.21E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)
  ) = 1.27E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)
  ) = 1.20E-01;
  f(
    static_cast<int>(STRUCTURE::_10f57),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.946E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 1.31E-01;
  f(
    static_cast<int>(STRUCTURE::_3f579),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 5.94E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 7.46E-02;
  f(
    static_cast<int>(STRUCTURE::_3124f3),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 6.87E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 8.53E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 1.56E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 6.04E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 5.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 9.98E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 8.56E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 9.08E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 4.04E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 3.70E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 1.50E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 5.58E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 7.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 1.55E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 1.12E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 7.71E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 1.39E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 2.84E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 4.47E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 6.71E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 6.00E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 2.27E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 6.05E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 4.58E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 5.03E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 5.01E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 9.32E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 8.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 9.04E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 4.08E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 6.87E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 1.78E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 2.4E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 7.94E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 2.36E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 5.87E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 1.28E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 1.14E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::_3124f3)
  ) = 2.91E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 3.34E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 4.16E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 2.49E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 2.34E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 4.57E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 6.63E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::_10f57)
  ) = 1.24E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 5.922E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 2.253E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 3.344E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 7.072E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.608E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 7.676E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.291E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 2.344E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 9.028E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.628E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.774E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.108E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 7.628E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 3.998E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 6.889E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.465E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 8.941E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 6.883E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.701E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.195E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.195E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.420E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 5.922E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.606E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 1.566E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 3.276E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 5.792E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 2.345E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.142E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 2.631E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 4.112E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.889E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 2.637E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.292E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 1.355E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 2.026E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.597E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.074E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.277E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.276E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.455E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 3.162E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.884E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 3.600E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 2.601E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 3.552E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.292E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 5.259E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 4.404E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 6.636E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 2.405E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 6.983E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 7.821E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 8.098E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.458E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 3.408E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 5.874E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 1.532E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 3.341E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.459E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 6.873E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 5.641E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 1.077E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 5.356E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 6.531E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1),
    static_cast<int>(STRUCTURE::_SL3)
  ) = 3.964E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::_SL3o)
  ) = 5.923E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::_SL1o)
  ) = 1.622E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::_SL1)
  ) = 4.748E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)
  ) = 0.76E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)
  ) = 1.68E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 7.34E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.33E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 3.18E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.77E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 1.54E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 2.90E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.76E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)
  ) = 2.27E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 7.35E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Do2)
  ) = 9.55E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 5.12E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 7.69E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 2.86E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_1Po1)
  ) = 2.25E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 5.74E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.76E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 1.02E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 1.89E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 6.54E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)
  ) = 8.59E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 5.32E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)
  ) = 1.4E-6;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)
  ) = 2.29E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 1.02E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)
  ) = 9.47E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 2.39E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 2.41E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 3.18E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 2.58E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 2.55E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 2.98E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 7.93E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 4.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 1.06E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 9.57E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po1)
  ) = 1.15E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 6.67E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 7.92E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 6.15E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po1)
  ) = 7.5E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 3.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po0)
  ) = 2.38E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 6.63E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 7.34E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 1.82E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po1)
  ) = 1.44E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 5.66E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Do2)
  ) = 2.22E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 1.51E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 5.73E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo4)
  ) = 9.16E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 5.69E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)
  ) = 9.95E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Do2)
  ) = 7.1E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 8.70E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 1.36E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 2.67E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 1.05E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 4.43E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)
  ) = 9.88E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)
  ) = 2.32E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 9.47E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 6.63E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 9.3E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 2.3E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_1Po1)
  ) = 3.42E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 6.65E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 5.65E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 1.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)
  ) = 4.08E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 1.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 1.94E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 1.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 5.12E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 2.85E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 3.16E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 1.96E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)
  ) = 4.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 2.56E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 9.5E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 5.13E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 7.90E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 4.18E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 1.27E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 2.98E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 3.31E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 2.02E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 1.95E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 1.36E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.62E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 2.13;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 1.19E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 5.90E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 4.40E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 5.33E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 9.20E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 1.86E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 9.32E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 2.21E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 4.30E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.70E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 8.38E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 1.06E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 2.46E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 1.43E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 7.67E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)
  ) = 9.35E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 8.83E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 1.50E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 2.91E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 1.67E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 3.67E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.58E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 3.16E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 1.38E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 1.05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 5.93E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.40E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 6.57E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 8.73E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)
  ) = 1.77E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 3.09E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 7.50E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 2.08E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 3.93E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.18E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 2.35E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 7.17E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)
  ) = 3.57E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)
  ) = 1.70E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 3.01E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)
  ) = 2.42E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 9.33E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 8.97E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 4.30E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 4.47E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 6.53E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 2.61E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 9.22E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 2.07E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 1.32E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.22E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 1.69;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 7.77E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 4.77E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 3.77E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 4.20E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 1.32E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 3.71E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 1.49E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 2.48E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 9.77E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 9.90E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 2.56E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 4.92E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 3.91E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 1.55E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)
  ) = 5.37E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_1Po1)
  ) = 2.82E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 1.18E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 1.00E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 4.93E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_1Po1)
  ) = 1.78E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_1Po1)
  ) = 2.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)
  ) = 6.82E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 2.42E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 7.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 1.13E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 1.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 2.17E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 9.30E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 2.88E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 2.29E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)
  ) = 2.18E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 1.38E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 7.19E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 4.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 1.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)
  ) = 2.32E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 4.31E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 5.5E-07;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 2.87E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 2.55E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 2.76E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo3)
  ) = 1.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)
  ) = 9.0E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 6.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 1.02E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 3.77E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 7.63E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 5.58E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo3)
  ) = 8.83E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 1.10E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 5.24E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 1.09E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)
  ) = 1.11E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 9.51E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 6.42E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 1.03E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 2.91E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 1.52E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo3)
  ) = 7.86E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 2.05E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 4.24E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 5.69E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)
  ) = 2.71E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 1.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)
  ) = 2.22E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 3.43E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 8.82E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 3.71E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 1.59E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 1.10E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 1.50E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 2.98E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 1.23E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 1.67E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)
  ) = 8.07E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 3.88E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 2.53E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 2.58E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 1.84E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 3.97E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 3.57E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 4.63E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 3.59E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 9.89E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 2.86E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 6.18E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 7.48E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 1.54E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 1.28E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)
  ) = 2.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 4.88E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo3)
  ) = 1.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)
  ) = 3.80E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 4.52E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.29E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 9.74E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 7.21E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)
  ) = 1.46E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 5.21E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)
  ) = 1.47E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 6.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.79E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 5.52E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 3.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.27E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 3.47E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Do2)
  ) = 1.38E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 2.74E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 8.72E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 2.48E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 2.15E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 2.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 1.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 8.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Fo3)
  ) = 1.17E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 9.50E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 5.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 2.12E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 1.57E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 3.04E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 1.04E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 0.19E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 3.98E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 5.19E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)
  ) = 7.43E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 6.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 5.80E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 1.65E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 7.6E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 6.76E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 5.82E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 1.47E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 1.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.01E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)
  ) = 2.04E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 1.42E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 7.1E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)
  ) = 3.33E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)
  ) = 5.95E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.24E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 5.07E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 4.27E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 3.86E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 3.77E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 4.45E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 1.12E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)
  ) = 4.38E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)
  ) = 3.94E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 3.50E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 2.80E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 4.87E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 2.05E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 1.54E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 5.85E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 3.88E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.81E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 3.90E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 4.09E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Do2)
  ) = 2.26E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 3.32E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)
  ) = 4.39E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 9.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 7.39E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 7.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 2.89E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 8.32E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 9.06E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 8.33E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 3.60E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 6.37E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 7.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 9.88E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 1.46E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 3.14E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 2.03E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)
  ) = 4.37E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 2.27E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 5.47E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 7.33E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.29E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 5.59E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.23E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.25E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 3.94E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)
  ) = 1.40E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 1.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 1.08E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)
  ) = 9.71E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 1.53E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 0.69E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 1.04E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 3.84E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 3.11E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 1.39E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Fo3)
  ) = 5.12E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 3.85E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 5.81E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 1.83E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Fo3)
  ) = 7.68E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.95E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Do2)
  ) = 1.93E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 6.48E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 2.81E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 1.83E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::_3f579)
  ) = 3.63E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 1.83E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 9.23E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 3.83E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 6.92E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)
  ) = 1.10E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 2.26E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 2.02E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)
  ) = 7.79E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 2.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 1.54E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 2.68E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 8.72E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 4.02E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 1.6E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 6.70E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)
  ) = 3.9E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 6.68E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 5.5E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.60E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.40E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 8.45E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 2.61E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 3.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.57E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 5.31E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 4.61E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 3.98E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)
  ) = 7.23E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.35E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 2.00E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)
  ) = 2.03E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 5.34E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)
  ) = 1.00E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 1.44E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.37E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 2.06E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.35E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Fo3)
  ) = 1.22E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 7.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 1.2E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 1.90E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 6.88E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.07E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 1.40E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 3.83E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 7.00E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 3.94E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 1.24E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)
  ) = 3.49E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 4.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3)
  ) = 4.01E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 4.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 2.24E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 3.96E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)
  ) = 1.04E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.07E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)
  ) = 8.03E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 6.07E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 1.06E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 4.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.19E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)
  ) = 6.93E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.2E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)
  ) = 1.14E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 6.66E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 2.37E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)
  ) = 7.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)
  ) = 0.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.5E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 9.69E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)
  ) = 1.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 1.40E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 3.94E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 1.97E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.47E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 5.21E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 1.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 6.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)
  ) = 5.74E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)
  ) = 0.81E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 6.59E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 3.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.85E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 0.84E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)
  ) = 1.10E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.85E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)
  ) = 3.13E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 2.1E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 2.1E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 6.08E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.57E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 2.92E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.52E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)
  ) = 0.115;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 2.1E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 3.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.23E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 1.1E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.23E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.51E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 4.57E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 1.39E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 1.39E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)
  ) = 1.74E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 1.39E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 4.37E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.22E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 4.13E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 2.59E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 2.31E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 2.80E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.49E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 3.64E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 5.23E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)
  ) = 0.33E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 2.30E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 1.74E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 4.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 2.07E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 5.19E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 3.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 1.5E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 1.54E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.01E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 8.04E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 3.57E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 1.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 9.53E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 9.94E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 1.18E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 4.20E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 2.3E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 3.05E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 2.3E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 1.32E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 2.3E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)
  ) = 3.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.06E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 1.66E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 1.32E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 1.24E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 2.0E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 2.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 1.66E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 3.02E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 4.93E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 1.03E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 2.98E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.45E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo4)
  ) = 4.52E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.18E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 2.24E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 2.64E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 2.93E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)
  ) = 9.25E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 5.29E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 3.19E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 5.33E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 2.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 4.80E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 1.83E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 7.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 1.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 1.06E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)
  ) = 1.28E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.91E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 3.92E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 1.43E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.35E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 9.34E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.36E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 8.43E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.02E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 1.40E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 1.09E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 1.86E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)
  ) = 3.74E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 3.37E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 7.79E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 2.52E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 3.84E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.27E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 5.10E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 7.61E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 4.78E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 2.54E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 1.26E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 1.13E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 4.99E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 6.80E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)
  ) = 6.09E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)
  ) = 2.26E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.80E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 1.70E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)
  ) = 1.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 2.83E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 9.68E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 1.70E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 1.61E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 4.12E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 9.65E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 5.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 1.65E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 0.62E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 9.50E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)
  ) = 1.79E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 9.03E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 3.27E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 9.83E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 7.71E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 1.73E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.38E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 2.35E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 1.84E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 5.21E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 4.61E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 8.04E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 6.15E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 1.40E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 4.61E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 7.53E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 2.40E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 1.96E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 1.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 7.35E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 4.79E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 3.16E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 2.73E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 3.05E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 1.70E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 3.82E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 1.93E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 4.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 7.60E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 6.87E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 8.20E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.21E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 1.74E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.16E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)
  ) = 9.68E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 8.22E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 1.63E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 2.70E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)
  ) = 1.21E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 1.78E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 2.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 3.66E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 3.85E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 3.08E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 3.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 2.95E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 1.20E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 5.19E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)
  ) = 2.66E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 2.13E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)
  ) = 2.93E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 1.60E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 3.67E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 3.80E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)
  ) = 2.62E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)
  ) = 1.55E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)
  ) = 7.41E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 1.06E+00;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)
  ) = 3.37E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)
  ) = 1.23E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 3.53E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)
  ) = 4.96E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 3.05E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 1.29E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 4.27E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)
  ) = 2.33E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 2.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 3.11E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 4.01E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 7.79E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 3.11E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)
  ) = 1.04E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 2.94E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)
  ) = 7.76E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 3.50E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Do2)
  ) = 1.24E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 1.46E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 5.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 4.12E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 3.33E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 3.58E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 1.11E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 3.58E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 1.36E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 3.57E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)
  ) = 1.81E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)
  ) = 2.38E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 3.31E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Do2)
  ) = 1.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 3.34E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 2.31E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 2.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 6.83E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)
  ) = 4.47E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 6.33E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 5.95E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 1.01E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 4.78E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)
  ) = 1.98E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 4.78E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)
  ) = 1.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)
  ) = 4.76E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Do2)
  ) = 1.54E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)
  ) = 1.50E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)
  ) = 1.15E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)
  ) = 1.5E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 2.40E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 3.16E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.17E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 3.92E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 7.6E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)
  ) = 2.24E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.82E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3)
  ) = 1.04E+00;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 2.86E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)
  ) = 1.5E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 2.55E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 8.96E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.24E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 4.72E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 8.45E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 6.59E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 5.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 2.28E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.87E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 7.15E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.87E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)
  ) = 8.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 6.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 5.72E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 8.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)
  ) = 2.43E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 2.74E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 3.58E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 2.33E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 2.72E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 1.12E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)
  ) = 1.00E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.77E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 8.41E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.42E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 9.70E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 1.53E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 7.22E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 8.93E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 2.24E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 1.12E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)
  ) = 1.91E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 2.42E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 1.43E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)
  ) = 5.53E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 9.52E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)
  ) = 4.17E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 2.63E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)
  ) = 8.00E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 2.57E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Do2)
  ) = 2.91E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 7.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 3.02E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 3.32E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 8.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 8.55E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 1.41E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 4.23E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)
  ) = 8.86E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 2.48E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.27E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 2.24E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.76E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 2.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.01E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)
  ) = 1.54E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 3.49E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 6.87E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.56E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 3.41E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 5.56E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.37E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 4.77E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)
  ) = 4.10E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 6.19E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 1.60E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 4.16E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 1.23E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 1.42E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)
  ) = 5.53E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)
  ) = 2.30E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 7.39E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)
  ) = 8.53E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)
  ) = 8.76E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 7.53E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)
  ) = 1.10E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 7.41E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 2.04E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 4.30E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 8.26E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 8.08E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo4)
  ) = 3.10E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 2.19E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 2.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 4.39E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)
  ) = 3.37E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 1.06E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)
  ) = 1.47E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.40E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 4.89E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 3.72E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)
  ) = 1.34E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 1.70E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 3.67E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 5.09E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo3)
  ) = 2.99E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 3.71E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)
  ) = 3.75E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)
  ) = 7.73E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.51E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 1.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 1.02E+00;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 1.14E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 1.80E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 3.61E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)
  ) = 1.45E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 1.45E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 8.89E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.85E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)
  ) = 5.09E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 1.92E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 1.10E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 2.15E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 1.93E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 2.06E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)
  ) = 5.68E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)
  ) = 5.21E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 1.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 5.90E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)
  ) = 1.53E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)
  ) = 3.52E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 2.35E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 1.48E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 3.11E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)
  ) = 1.78E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)
  ) = 2.29E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)
  ) = 1.22E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 7.90E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 2.42E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)
  ) = 7.01E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 6.06E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)
  ) = 6.96E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.11E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 6.03E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.18E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)
  ) = 2.63E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)
  ) = 1.13E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 1.80E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.52E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.08E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 9.89E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 4.40E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)
  ) = 9.71E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 4.02E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 7.65E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 6.50E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 2.07E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)
  ) = 8.19E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)
  ) = 1.03E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.06E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)
  ) = 2.23E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.40E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 4.30E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 3.88E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 2.44E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)
  ) = 2.56E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 6.84E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)
  ) = 3.70E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 2.04E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)
  ) = 1.11E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.90E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)
  ) = 1.85E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)
  ) = 2.25E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)
  ) = 4.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 4.07E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)
  ) = 2.54E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)
  ) = 8.07E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)
  ) = 2.51E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3)
  ) = 5.48E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)
  ) = 8.35E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 3.72E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 3.02E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.20E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)
  ) = 9.66E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 2.78E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)
  ) = 2.77E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)
  ) = 9.93E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo3)
  ) = 2.67E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)
  ) = 3.11E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)
  ) = 4.53E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 1.10E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)
  ) = 7.52E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.42E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 1.27E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 5.35E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 2.27E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 1.37E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.13E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 3.10E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.51E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)
  ) = 1.18E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 3.78E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)
  ) = 8.01E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 2.12E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 6.70E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 4.14E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)
  ) = 2.05E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)
  ) = 3.90E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 2.17E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 5.70E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)
  ) = 1.37E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 4.71E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)
  ) = 2.50E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 5.30E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)
  ) = 6.60E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 7.21E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 2.88E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 2.97E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)
  ) = 4.23E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)
  ) = 9.80E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 1.07E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 2.74E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)
  ) = 1.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 3.15E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 1.21E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 1.10E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)
  ) = 2.48E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 1.60E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 9.03E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 1.90E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)
  ) = 1.33E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.69E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 1.23E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 6.83E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 1.11E+00;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 3.70E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)
  ) = 9.68E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 3.90E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)
  ) = 9.61E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 1.09E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)
  ) = 1.65E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 1.87E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 2.15E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)
  ) = 1.62E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)
  ) = 2.39E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 3.28E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)
  ) = 2.05E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 3.04E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)
  ) = 6.25E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)
  ) = 1.85E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)
  ) = 3.99E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 6.53E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)
  ) = 5.34E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 4.85E-05;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)
  ) = 4.42E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)
  ) = 3.38E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)
  ) = 1.29E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)
  ) = 6.52E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)
  ) = 7.60E-02;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)
  ) = 5.94E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)
  ) = 4.95E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 4.06E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)
  ) = 1.60E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)
  ) = 1.76E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)
  ) = 1.25E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.73E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)
  ) = 1.65E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)
  ) = 8.42E-06;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)
  ) = 2.05E-04;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)
  ) = 1.19E-01;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)
  ) = 4.97E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)
  ) = 5.80E-03;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 1.72E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 1.484E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)
  ) = 8.40E-4;
  return f;
}


}