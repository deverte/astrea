/**
 * \file astrea/element/c_i/effective_collision_strengths.h
 * C I effective collision strengths by Zatsarinny+2013, Reid1994,
 * Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/element/c_i/structure.h"


namespace astrea::element::c_i {


/**
 * C I effective collision strengths by Zatsarinny+2013, Reid1994,
 * Alexeeva+2015.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 * - Axis 2: Bivariate data (row).
 *   - Row 0: Temperature in K.
 *   - Row 1: Effective collision strength in 1.
 * - Axis 3: Bivariate pair index (column).
 */
inline const std::vector<std::vector<Eigen::Matrix2Xd>> f_vs_T_KK() {
  std::vector<std::vector<Eigen::Matrix2Xd>>
  f_vs_T_KK(158, std::vector<Eigen::Matrix2Xd>(158));

  // C I effective collision strengths by Zatsarinny+2013.
  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.57E-02, 1.70E-01, 3.19E-01, 4.24E-01, 4.73E-01, 4.88E-01, 4.95E-01, 5.00E-01, 5.06E-01, 4.88E-01, 4.00E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.15E-02, 1.36E-01, 2.18E-01, 2.57E-01, 2.69E-01, 2.76E-01, 2.83E-01, 2.89E-01, 3.10E-01, 3.29E-01, 3.49E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.65E-02, 6.76E-02, 1.22E-01, 1.96E-01, 2.75E-01, 3.15E-01, 3.36E-01, 3.49E-01, 3.59E-01, 3.27E-01, 2.40E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.95E-03, 7.80E-03, 1.47E-02, 2.45E-02, 3.55E-02, 4.07E-02, 4.31E-02, 4.43E-02, 4.34E-02, 3.72E-02, 2.50E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p2_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_5So2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.09E-02, 3.98E-02, 7.27E-02, 1.34E-01, 2.01E-01, 2.25E-01, 2.32E-01, 2.32E-01, 2.12E-01, 1.78E-01, 1.26E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_5So2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-02, 8.84E-03, 8.91E-03, 9.86E-03, 1.10E-02, 1.15E-02, 1.17E-02, 1.16E-02, 1.07E-02, 9.12E-03, 6.25E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-01, 8.50E-02, 7.53E-02, 7.83E-02, 9.96E-02, 1.26E-01, 1.53E-01, 1.82E-01, 3.30E-01, 6.10E-01, 1.22E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.74E-02, 1.38E-02, 1.36E-02, 1.52E-02, 1.71E-02, 1.78E-02, 1.80E-02, 1.78E-02, 1.65E-02, 1.42E-02, 1.02E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.02E-03, 7.44E-03, 1.14E-02, 1.44E-02, 1.59E-02, 1.62E-02, 1.62E-02, 1.61E-02, 1.52E-02, 1.34E-02, 9.81E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.53E-02, 3.75E-02, 5.12E-02, 7.44E-02, 1.21E-01, 1.67E-01, 2.12E-01, 2.55E-01, 4.37E-01, 6.93E-01, 1.14E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.02E-02, 1.96E-02, 1.73E-02, 1.60E-02, 1.57E-02, 1.57E-02, 1.57E-02, 1.56E-02, 1.49E-02, 1.34E-02, 9.72E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.20E-03, 8.57E-03, 9.72E-03, 1.10E-02, 1.25E-02, 1.36E-02, 1.46E-02, 1.53E-02, 1.77E-02, 1.87E-02, 1.60E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.07E-02, 1.52E-02, 1.86E-02, 2.28E-02, 2.82E-02, 3.22E-02, 3.55E-02, 3.84E-02, 5.09E-02, 6.89E-02, 9.54E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.99E-03, 6.19E-03, 6.63E-03, 7.43E-03, 8.35E-03, 8.84E-03, 9.13E-03, 9.33E-03, 9.68E-03, 9.21E-03, 6.90E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.07E-03, 6.11E-03, 7.93E-03, 9.34E-03, 9.88E-03, 9.95E-03, 9.99E-03, 1.01E-02, 1.04E-02, 1.04E-02, 8.79E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.52E-02, 2.06E-02, 2.44E-02, 2.87E-02, 3.67E-02, 4.52E-02, 5.37E-02, 6.22E-02, 1.01E-01, 1.58E-01, 2.41E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.15E-03, 5.13E-03, 6.21E-03, 8.08E-03, 1.07E-02, 1.23E-02, 1.35E-02, 1.43E-02, 1.64E-02, 1.71E-02, 1.45E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.15E-03, 7.99E-03, 1.09E-02, 1.38E-02, 1.60E-02, 1.70E-02, 1.76E-02, 1.82E-02, 2.03E-02, 2.29E-02, 2.60E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.95E-03, 4.93E-03, 6.47E-03, 7.70E-03, 8.92E-03, 9.65E-03, 1.01E-02, 1.04E-02, 1.10E-02, 1.05E-02, 7.96E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-03, 1.41E-03, 1.40E-03, 1.28E-03, 1.21E-03, 1.20E-03, 1.20E-03, 1.21E-03, 1.26E-03, 1.23E-03, 9.47E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E-03, 2.25E-03, 3.53E-03, 5.55E-03, 8.23E-03, 9.89E-03, 1.10E-02, 1.18E-02, 1.35E-02, 1.35E-02, 1.09E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.07E-03, 1.36E-03, 1.60E-03, 2.01E-03, 2.72E-03, 3.25E-03, 3.62E-03, 3.89E-03, 4.50E-03, 4.54E-03, 3.53E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.78E-04, 7.35E-04, 9.74E-04, 1.41E-03, 2.03E-03, 2.36E-03, 2.54E-03, 2.63E-03, 2.71E-03, 2.47E-03, 1.77E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.54E-03, 6.83E-03, 8.09E-03, 1.02E-02, 1.33E-02, 1.59E-02, 1.83E-02, 2.09E-02, 3.59E-02, 7.08E-02, 1.59E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.13E-03, 2.81E-03, 3.15E-03, 3.55E-03, 4.21E-03, 4.57E-03, 4.75E-03, 4.83E-03, 4.79E-03, 4.34E-03, 3.13E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.32E-03, 1.81E-03, 2.03E-03, 2.34E-03, 2.87E-03, 3.23E-03, 3.48E-03, 3.65E-03, 3.98E-03, 3.78E-03, 2.78E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.92E-03, 4.84E-03, 5.41E-03, 6.02E-03, 6.87E-03, 7.56E-03, 8.18E-03, 8.77E-03, 1.15E-02, 1.52E-02, 2.01E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.68E-03, 5.31E-03, 5.91E-03, 7.64E-03, 1.24E-02, 1.87E-02, 2.61E-02, 3.44E-02, 8.38E-02, 1.88E-01, 4.30E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.93E-04, 1.29E-03, 1.44E-03, 1.56E-03, 1.67E-03, 1.72E-03, 1.74E-03, 1.75E-03, 1.72E-03, 1.53E-03, 1.06E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.64E-03, 1.96E-03, 2.25E-03, 2.64E-03, 3.10E-03, 3.34E-03, 3.47E-03, 3.56E-03, 3.68E-03, 3.44E-03, 2.52E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.65E-04, 1.06E-03, 1.28E-03, 1.63E-03, 2.05E-03, 2.25E-03, 2.35E-03, 2.41E-03, 2.51E-03, 2.44E-03, 2.06E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.30E-03, 1.81E-03, 2.24E-03, 2.64E-03, 3.01E-03, 3.20E-03, 3.30E-03, 3.36E-03, 3.49E-03, 3.60E-03, 3.77E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.26E-04, 1.34E-03, 1.65E-03, 1.93E-03, 2.22E-03, 2.37E-03, 2.45E-03, 2.49E-03, 2.48E-03, 2.25E-03, 1.64E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.20E-03, 1.52E-03, 1.67E-03, 1.81E-03, 1.96E-03, 2.00E-03, 1.99E-03, 1.98E-03, 1.92E-03, 1.98E-03, 2.39E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.36E-03, 3.44E-03, 4.46E-03, 6.09E-03, 8.28E-03, 9.35E-03, 9.87E-03, 1.01E-02, 1.02E-02, 9.31E-03, 6.98E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.74E-03, 7.47E-03, 9.20E-03, 1.27E-02, 2.01E-02, 2.78E-02, 3.61E-02, 4.48E-02, 8.86E-02, 1.62E-01, 3.03E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.64E-04, 5.46E-04, 8.72E-04, 1.55E-03, 2.54E-03, 3.18E-03, 3.60E-03, 3.88E-03, 4.46E-03, 4.41E-03, 3.43E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-01, 5.19E-01, 8.91E-01, 1.11E+00, 1.20E+00, 1.23E+00, 1.26E+00, 1.28E+00, 1.33E+00, 1.35E+00, 1.29E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.95E-02, 2.03E-01, 3.68E-01, 5.89E-01, 8.25E-01, 9.44E-01, 1.01E+00, 1.05E+00, 1.08E+00, 9.82E-01, 7.22E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.76E-03, 2.32E-02, 4.37E-02, 7.25E-02, 1.05E-01, 1.20E-01, 1.27E-01, 1.30E-01, 1.28E-01, 1.10E-01, 7.41E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p2_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_5So2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.31E-02, 1.20E-01, 2.20E-01, 4.06E-01, 6.08E-01, 6.79E-01, 7.00E-01, 7.01E-01, 6.43E-01, 5.39E-01, 3.80E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_5So2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E-01, 9.43E-02, 8.11E-02, 8.20E-02, 1.01E-01, 1.26E-01, 1.54E-01, 1.82E-01, 3.30E-01, 6.09E-01, 1.22E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.31E-01, 1.02E-01, 9.66E-02, 1.04E-01, 1.25E-01, 1.46E-01, 1.66E-01, 1.87E-01, 2.93E-01, 4.95E-01, 9.43E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.03E-01, 1.50E-01, 1.34E-01, 1.41E-01, 1.70E-01, 2.02E-01, 2.36E-01, 2.70E-01, 4.51E-01, 7.94E-01, 1.55E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.20E-02, 2.32E-02, 3.62E-02, 4.61E-02, 5.01E-02, 5.05E-02, 5.03E-02, 4.97E-02, 4.64E-02, 4.04E-02, 2.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.57E-02, 9.25E-02, 1.16E-01, 1.49E-01, 2.01E-01, 2.47E-01, 2.87E-01, 3.24E-01, 4.71E-01, 6.59E-01, 9.29E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.45E-02, 3.67E-02, 3.66E-02, 3.82E-02, 4.13E-02, 4.30E-02, 4.37E-02, 4.40E-02, 4.30E-02, 3.89E-02, 2.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.53E-02, 3.29E-02, 3.88E-02, 4.49E-02, 5.20E-02, 5.72E-02, 6.17E-02, 6.59E-02, 8.35E-02, 1.08E-01, 1.41E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.17E-02, 2.57E-02, 3.02E-02, 3.59E-02, 4.26E-02, 4.71E-02, 5.06E-02, 5.35E-02, 6.29E-02, 6.95E-02, 6.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.99E-02, 3.62E-02, 4.03E-02, 4.61E-02, 5.46E-02, 6.10E-02, 6.64E-02, 7.11E-02, 8.97E-02, 1.14E-01, 1.46E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-02, 1.83E-02, 2.47E-02, 2.94E-02, 3.06E-02, 3.04E-02, 3.01E-02, 3.01E-02, 3.05E-02, 3.05E-02, 2.62E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.59E-03, 5.76E-03, 6.76E-03, 8.42E-03, 1.10E-02, 1.27E-02, 1.38E-02, 1.47E-02, 1.68E-02, 1.76E-02, 1.50E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.24E-02, 7.01E-02, 8.38E-02, 9.97E-02, 1.27E-01, 1.54E-01, 1.81E-01, 2.07E-01, 3.25E-01, 4.97E-01, 7.47E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.84E-02, 2.44E-02, 3.08E-02, 3.88E-02, 4.78E-02, 5.31E-02, 5.66E-02, 5.92E-02, 6.72E-02, 7.44E-02, 7.89E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.25E-03, 1.52E-02, 2.01E-02, 2.45E-02, 2.89E-02, 3.12E-02, 3.26E-02, 3.34E-02, 3.45E-02, 3.25E-02, 2.43E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.96E-03, 3.79E-03, 3.68E-03, 3.38E-03, 3.35E-03, 3.45E-03, 3.55E-03, 3.62E-03, 3.76E-03, 3.63E-03, 2.78E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.21E-03, 8.54E-03, 1.53E-02, 2.95E-02, 5.70E-02, 8.29E-02, 1.08E-01, 1.33E-01, 2.44E-01, 4.09E-01, 7.05E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.59E-03, 4.55E-03, 5.17E-03, 6.22E-03, 8.36E-03, 1.00E-02, 1.12E-02, 1.20E-02, 1.40E-02, 1.44E-02, 1.18E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.29E-03, 7.03E-03, 8.64E-03, 1.08E-02, 1.37E-02, 1.57E-02, 1.74E-02, 1.92E-02, 2.97E-02, 5.50E-02, 1.21E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.52E-03, 1.21E-02, 1.37E-02, 1.59E-02, 1.94E-02, 2.17E-02, 2.32E-02, 2.44E-02, 3.03E-02, 4.34E-02, 7.72E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E-02, 1.53E-02, 1.73E-02, 2.09E-02, 2.71E-02, 3.21E-02, 3.68E-02, 4.16E-02, 6.95E-02, 1.32E-01, 2.88E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.75E-03, 1.19E-02, 1.25E-02, 1.34E-02, 1.56E-02, 1.77E-02, 1.99E-02, 2.21E-02, 3.40E-02, 5.65E-02, 1.05E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-03, 5.95E-03, 7.12E-03, 8.35E-03, 9.98E-03, 1.11E-02, 1.18E-02, 1.24E-02, 1.41E-02, 1.50E-02, 1.44E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.50E-03, 8.36E-03, 8.97E-03, 1.06E-02, 1.46E-02, 1.96E-02, 2.55E-02, 3.21E-02, 7.14E-02, 1.55E-01, 3.50E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.30E-03, 9.20E-03, 1.01E-02, 1.08E-02, 1.14E-02, 1.18E-02, 1.22E-02, 1.26E-02, 1.48E-02, 1.80E-02, 2.22E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E-02, 1.24E-02, 1.44E-02, 1.89E-02, 2.99E-02, 4.32E-02, 5.83E-02, 7.51E-02, 1.74E-01, 3.82E-01, 8.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.36E-03, 5.87E-03, 6.87E-03, 8.29E-03, 1.01E-02, 1.10E-02, 1.16E-02, 1.20E-02, 1.35E-02, 1.46E-02, 1.44E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.91E-03, 6.77E-03, 8.11E-03, 9.21E-03, 1.02E-02, 1.06E-02, 1.09E-02, 1.11E-02, 1.21E-02, 1.40E-02, 1.89E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.28E-03, 3.54E-03, 4.40E-03, 5.19E-03, 6.12E-03, 6.62E-03, 6.88E-03, 7.01E-03, 7.01E-03, 6.33E-03, 4.44E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.78E-03, 3.76E-03, 4.25E-03, 4.70E-03, 5.20E-03, 5.36E-03, 5.35E-03, 5.28E-03, 4.83E-03, 4.19E-03, 3.24E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E-02, 1.59E-02, 2.06E-02, 2.90E-02, 4.32E-02, 5.51E-02, 6.64E-02, 7.76E-02, 1.31E-01, 2.16E-01, 3.79E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.88E-03, 1.20E-02, 1.49E-02, 2.01E-02, 2.92E-02, 3.72E-02, 4.50E-02, 5.27E-02, 8.91E-02, 1.47E-01, 2.56E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.99E-03, 5.91E-03, 7.72E-03, 1.08E-02, 1.68E-02, 2.37E-02, 3.18E-02, 4.06E-02, 8.64E-02, 1.63E-01, 3.12E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p2_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.32E-01, 3.39E-01, 6.14E-01, 9.82E-01, 1.38E+00, 1.58E+00, 1.68E+00, 1.75E+00, 1.80E+00, 1.64E+00, 1.20E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p2_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p2_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.46E-02, 3.87E-02, 7.29E-02, 1.21E-01, 1.75E-01, 2.00E-01, 2.12E-01, 2.18E-01, 2.14E-01, 1.84E-01, 1.24E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p2_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_5So2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E-01, 2.02E-01, 3.70E-01, 6.86E-01, 1.03E+00, 1.15E+00, 1.19E+00, 1.19E+00, 1.09E+00, 9.17E-01, 6.44E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_5So2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.17E-02, 1.66E-02, 1.67E-02, 1.87E-02, 2.05E-02, 2.09E-02, 2.08E-02, 2.04E-02, 1.83E-02, 1.53E-02, 1.08E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.59E-01, 1.82E-01, 1.54E-01, 1.52E-01, 1.76E-01, 2.07E-01, 2.40E-01, 2.74E-01, 4.53E-01, 7.95E-01, 1.55E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.98E-01, 4.43E-01, 3.97E-01, 4.14E-01, 4.92E-01, 5.83E-01, 6.82E-01, 7.84E-01, 1.32E+00, 2.35E+00, 4.63E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.13E-02, 4.43E-02, 7.09E-02, 8.89E-02, 9.40E-02, 9.32E-02, 9.16E-02, 8.99E-02, 8.22E-02, 7.07E-02, 4.95E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.18E-02, 3.66E-02, 5.28E-02, 7.35E-02, 9.98E-02, 1.15E-01, 1.24E-01, 1.30E-01, 1.39E-01, 1.40E-01, 1.35E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.78E-02, 6.48E-02, 6.08E-02, 6.16E-02, 6.63E-02, 6.92E-02, 7.05E-02, 7.10E-02, 6.95E-02, 6.29E-02, 4.62E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.98E-02, 2.23E-02, 2.42E-02, 2.69E-02, 3.05E-02, 3.30E-02, 3.50E-02, 3.66E-02, 4.25E-02, 4.92E-02, 5.63E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.13E-02, 5.11E-02, 5.91E-02, 6.83E-02, 7.94E-02, 8.73E-02, 9.38E-02, 9.96E-02, 1.23E-01, 1.53E-01, 1.92E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.94E-02, 8.81E-02, 1.04E-01, 1.21E-01, 1.43E-01, 1.59E-01, 1.72E-01, 1.84E-01, 2.29E-01, 2.82E-01, 3.43E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.96E-02, 3.23E-02, 4.31E-02, 5.07E-02, 5.22E-02, 5.11E-02, 5.03E-02, 4.99E-02, 4.97E-02, 4.88E-02, 4.09E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.21E-03, 7.58E-03, 1.01E-02, 1.30E-02, 1.57E-02, 1.71E-02, 1.79E-02, 1.86E-02, 2.08E-02, 2.35E-02, 2.68E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.66E-02, 2.36E-02, 3.11E-02, 4.03E-02, 5.03E-02, 5.59E-02, 5.96E-02, 6.22E-02, 7.00E-02, 7.69E-02, 8.13E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.14E-01, 1.50E-01, 1.76E-01, 2.04E-01, 2.52E-01, 2.99E-01, 3.45E-01, 3.90E-01, 5.93E-01, 8.85E-01, 1.30E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.51E-02, 2.54E-02, 3.43E-02, 4.24E-02, 5.00E-02, 5.39E-02, 5.62E-02, 5.76E-02, 5.93E-02, 5.57E-02, 4.16E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.98E-03, 3.95E-03, 4.20E-03, 4.40E-03, 4.88E-03, 5.25E-03, 5.52E-03, 5.71E-03, 6.15E-03, 6.09E-03, 4.72E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.25E-03, 4.45E-03, 6.89E-03, 1.07E-02, 1.58E-02, 1.86E-02, 2.04E-02, 2.16E-02, 2.41E-02, 2.39E-02, 1.90E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.17E-03, 6.54E-03, 7.69E-03, 9.80E-03, 1.36E-02, 1.64E-02, 1.83E-02, 1.97E-02, 2.29E-02, 2.34E-02, 1.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.08E-03, 3.94E-03, 4.28E-03, 4.68E-03, 5.31E-03, 5.62E-03, 5.75E-03, 5.78E-03, 5.54E-03, 4.86E-03, 3.41E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E-02, 1.62E-02, 1.84E-02, 2.14E-02, 2.60E-02, 2.91E-02, 3.16E-02, 3.39E-02, 4.65E-02, 7.62E-02, 1.53E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.99E-02, 3.57E-02, 4.02E-02, 4.81E-02, 6.01E-02, 6.85E-02, 7.55E-02, 8.22E-02, 1.19E-01, 2.03E-01, 4.17E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.87E-03, 6.13E-03, 6.67E-03, 7.51E-03, 8.84E-03, 9.86E-03, 1.08E-02, 1.18E-02, 1.73E-02, 2.89E-02, 5.64E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.23E-02, 1.48E-02, 1.61E-02, 1.81E-02, 2.23E-02, 2.75E-02, 3.34E-02, 4.01E-02, 7.91E-02, 1.61E-01, 3.50E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.63E-03, 5.79E-03, 6.63E-03, 7.93E-03, 9.61E-03, 1.07E-02, 1.16E-02, 1.24E-02, 1.69E-02, 2.52E-02, 4.26E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.71E-02, 2.10E-02, 2.25E-02, 2.39E-02, 2.65E-02, 2.85E-02, 3.01E-02, 3.14E-02, 3.62E-02, 4.10E-02, 4.53E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E-02, 1.56E-02, 1.76E-02, 2.08E-02, 2.67E-02, 3.28E-02, 3.96E-02, 4.71E-02, 9.12E-02, 1.84E-01, 3.98E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.82E-02, 3.39E-02, 3.77E-02, 4.50E-02, 6.29E-02, 8.58E-02, 1.13E-01, 1.44E-01, 3.27E-01, 7.13E-01, 1.61E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.25E-03, 1.25E-02, 1.47E-02, 1.67E-02, 1.85E-02, 1.93E-02, 1.96E-02, 1.97E-02, 1.96E-02, 1.88E-02, 1.66E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.80E-03, 5.74E-03, 7.45E-03, 9.56E-03, 1.19E-02, 1.30E-02, 1.35E-02, 1.39E-02, 1.46E-02, 1.51E-02, 1.63E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.72E-03, 7.45E-03, 8.08E-03, 8.63E-03, 9.18E-03, 9.21E-03, 9.05E-03, 8.83E-03, 7.83E-03, 6.53E-03, 4.43E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.10E-02, 4.32E-02, 5.48E-02, 7.57E-02, 1.14E-01, 1.50E-01, 1.85E-01, 2.21E-01, 3.92E-01, 6.68E-01, 1.20E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.72E-03, 1.40E-02, 1.84E-02, 2.67E-02, 4.14E-02, 5.40E-02, 6.61E-02, 7.80E-02, 1.35E-01, 2.28E-01, 4.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.04E-04, 1.52E-03, 2.37E-03, 4.15E-03, 6.71E-03, 8.04E-03, 8.73E-03, 9.11E-03, 9.51E-03, 8.87E-03, 6.79E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p2_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.47E-02, 1.22E-01, 1.71E-01, 2.40E-01, 3.39E-01, 4.10E-01, 4.64E-01, 5.07E-01, 6.56E-01, 8.34E-01, 1.15E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p2_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_5So2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.52E-06, 5.14E-06, 1.65E-05, 6.19E-05, 2.10E-04, 3.35E-04, 4.13E-04, 4.57E-04, 4.83E-04, 4.14E-04, 2.92E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_5So2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.25E-02, 6.60E-02, 6.24E-02, 6.03E-02, 5.73E-02, 5.47E-02, 5.24E-02, 5.04E-02, 4.29E-02, 3.43E-02, 2.24E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.26E-01, 2.03E-01, 1.90E-01, 1.83E-01, 1.72E-01, 1.64E-01, 1.58E-01, 1.51E-01, 1.29E-01, 1.03E-01, 6.91E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.74E-01, 3.41E-01, 3.20E-01, 3.07E-01, 2.89E-01, 2.75E-01, 2.62E-01, 2.51E-01, 2.13E-01, 1.70E-01, 1.11E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.80E-01, 3.31E-01, 3.78E-01, 4.47E-01, 5.85E-01, 7.32E-01, 8.83E-01, 1.04E+00, 1.81E+00, 3.22E+00, 6.24E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.65E-02, 1.75E-01, 2.73E-01, 3.94E-01, 5.00E-01, 5.42E-01, 5.59E-01, 5.64E-01, 5.43E-01, 4.76E-01, 3.43E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.70E-02, 5.46E-02, 6.73E-02, 8.42E-02, 1.11E-01, 1.34E-01, 1.54E-01, 1.72E-01, 2.45E-01, 3.40E-01, 4.68E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.21E-02, 4.27E-02, 4.90E-02, 5.34E-02, 5.55E-02, 5.55E-02, 5.50E-02, 5.44E-02, 5.20E-02, 4.74E-02, 3.54E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.64E-02, 6.24E-02, 7.27E-02, 8.07E-02, 8.56E-02, 8.65E-02, 8.63E-02, 8.58E-02, 8.30E-02, 7.61E-02, 5.74E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.25E-02, 7.51E-02, 9.09E-02, 1.04E-01, 1.14E-01, 1.17E-01, 1.18E-01, 1.18E-01, 1.16E-01, 1.06E-01, 8.02E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.46E-02, 2.30E-02, 3.25E-02, 4.16E-02, 4.56E-02, 4.57E-02, 4.50E-02, 4.42E-02, 4.07E-02, 3.57E-02, 2.59E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.02E-03, 6.75E-03, 8.67E-03, 1.07E-02, 1.21E-02, 1.23E-02, 1.22E-02, 1.20E-02, 1.12E-02, 1.00E-02, 7.31E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.26E-02, 1.84E-02, 2.47E-02, 3.09E-02, 3.47E-02, 3.53E-02, 3.50E-02, 3.45E-02, 3.23E-02, 2.90E-02, 2.13E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.86E-02, 2.91E-02, 3.94E-02, 4.83E-02, 5.35E-02, 5.44E-02, 5.42E-02, 5.37E-02, 5.12E-02, 4.67E-02, 3.47E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.41E-01, 1.95E-01, 2.34E-01, 2.77E-01, 3.44E-01, 4.07E-01, 4.68E-01, 5.26E-01, 7.84E-01, 1.14E+00, 1.65E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.50E-02, 2.44E-02, 2.97E-02, 3.03E-02, 2.88E-02, 2.88E-02, 2.99E-02, 3.14E-02, 4.05E-02, 5.34E-02, 6.76E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.02E-03, 1.31E-02, 2.59E-02, 4.17E-02, 5.44E-02, 5.85E-02, 5.98E-02, 6.00E-02, 5.70E-02, 4.93E-02, 3.46E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.58E-02, 2.03E-02, 2.49E-02, 3.40E-02, 5.12E-02, 6.65E-02, 7.99E-02, 9.19E-02, 1.42E-01, 2.24E-01, 4.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.24E-02, 1.54E-02, 1.66E-02, 1.70E-02, 1.66E-02, 1.59E-02, 1.52E-02, 1.45E-02, 1.21E-02, 9.41E-03, 5.84E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.28E-02, 4.13E-02, 4.43E-02, 4.55E-02, 4.49E-02, 4.35E-02, 4.20E-02, 4.05E-02, 3.53E-02, 2.98E-02, 2.34E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.95E-02, 7.19E-02, 7.47E-02, 7.39E-02, 7.02E-02, 6.66E-02, 6.35E-02, 6.08E-02, 5.13E-02, 4.07E-02, 2.59E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.65E-03, 1.20E-02, 1.31E-02, 1.52E-02, 1.73E-02, 1.76E-02, 1.74E-02, 1.71E-02, 1.56E-02, 1.34E-02, 9.21E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E-02, 1.58E-02, 1.71E-02, 1.88E-02, 2.06E-02, 2.14E-02, 2.19E-02, 2.23E-02, 2.42E-02, 2.80E-02, 3.71E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.88E-03, 7.02E-03, 8.24E-03, 1.17E-02, 1.52E-02, 1.59E-02, 1.59E-02, 1.58E-02, 1.50E-02, 1.43E-02, 1.35E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.63E-02, 2.10E-02, 2.28E-02, 2.41E-02, 2.51E-02, 2.51E-02, 2.49E-02, 2.46E-02, 2.32E-02, 2.04E-02, 1.40E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.02E-02, 1.18E-02, 1.28E-02, 1.50E-02, 1.77E-02, 1.85E-02, 1.87E-02, 1.87E-02, 1.79E-02, 1.60E-02, 1.15E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E-02, 1.51E-02, 1.71E-02, 2.35E-02, 2.97E-02, 3.08E-02, 3.05E-02, 2.99E-02, 2.71E-02, 2.35E-02, 1.71E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.29E-02, 4.45E-02, 5.13E-02, 5.87E-02, 7.13E-02, 8.36E-02, 9.61E-02, 1.09E-01, 1.74E-01, 2.99E-01, 5.72E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.32E-02, 5.21E-02, 5.98E-02, 7.52E-02, 1.05E-01, 1.38E-01, 1.75E-01, 2.16E-01, 4.58E-01, 9.72E-01, 2.19E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.26E-02, 2.50E-02, 2.50E-02, 2.68E-02, 3.28E-02, 3.90E-02, 4.54E-02, 5.24E-02, 9.19E-02, 1.72E-01, 3.49E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.24E-02, 5.81E-02, 7.11E-02, 8.59E-02, 9.85E-02, 1.03E-01, 1.04E-01, 1.04E-01, 9.79E-02, 8.44E-02, 5.84E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.08E-02, 2.93E-02, 3.52E-02, 4.11E-02, 4.69E-02, 4.95E-02, 5.08E-02, 5.15E-02, 5.10E-02, 4.58E-02, 3.27E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.41E-03, 2.70E-03, 4.66E-03, 7.92E-03, 1.15E-02, 1.30E-02, 1.37E-02, 1.41E-02, 1.45E-02, 1.35E-02, 1.00E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_5So2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.40E-07, 2.06E-06, 8.48E-06, 2.70E-05, 6.25E-05, 8.48E-05, 9.64E-05, 1.02E-04, 9.77E-05, 7.63E-05, 4.65E-05}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_5So2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.25E-02, 1.64E-02, 1.81E-02, 1.87E-02, 1.79E-02, 1.70E-02, 1.61E-02, 1.53E-02, 1.26E-02, 9.59E-03, 5.79E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.00E-02, 5.08E-02, 5.50E-02, 5.68E-02, 5.50E-02, 5.22E-02, 4.95E-02, 4.72E-02, 3.88E-02, 2.96E-02, 1.80E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.15E-02, 7.57E-02, 8.04E-02, 8.55E-02, 8.60E-02, 8.29E-02, 7.94E-02, 7.60E-02, 6.31E-02, 4.82E-02, 2.91E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.01E-01, 1.19E-01, 1.39E-01, 1.67E-01, 2.04E-01, 2.36E-01, 2.66E-01, 2.96E-01, 4.43E-01, 7.05E-01, 1.27E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.95E-03, 1.29E-02, 2.49E-02, 3.61E-02, 4.03E-02, 3.88E-02, 3.63E-02, 3.39E-02, 2.50E-02, 1.67E-02, 8.73E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.48E-03, 1.30E-02, 2.14E-02, 2.93E-02, 3.25E-02, 3.25E-02, 3.21E-02, 3.16E-02, 3.03E-02, 2.83E-02, 2.28E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.15E-03, 6.31E-03, 7.95E-03, 9.31E-03, 1.05E-02, 1.09E-02, 1.10E-02, 1.10E-02, 1.07E-02, 9.74E-03, 7.38E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.03E-02, 1.33E-02, 1.51E-02, 1.67E-02, 1.81E-02, 1.85E-02, 1.85E-02, 1.84E-02, 1.75E-02, 1.59E-02, 1.21E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.64E-02, 2.13E-02, 2.44E-02, 2.65E-02, 2.78E-02, 2.79E-02, 2.77E-02, 2.73E-02, 2.57E-02, 2.31E-02, 1.74E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.29E-03, 1.09E-02, 1.47E-02, 1.68E-02, 1.71E-02, 1.69E-02, 1.69E-02, 1.71E-02, 1.86E-02, 1.95E-02, 1.65E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.58E-03, 2.47E-03, 3.52E-03, 4.52E-03, 4.91E-03, 4.71E-03, 4.41E-03, 4.12E-03, 3.09E-03, 2.19E-03, 1.28E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.78E-03, 9.18E-03, 1.19E-02, 1.45E-02, 1.50E-02, 1.40E-02, 1.29E-02, 1.19E-02, 8.61E-03, 5.95E-03, 3.44E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.64E-03, 8.87E-03, 1.25E-02, 1.63E-02, 1.77E-02, 1.69E-02, 1.58E-02, 1.47E-02, 1.12E-02, 8.17E-03, 5.00E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.39E-02, 2.25E-02, 2.97E-02, 3.49E-02, 3.89E-02, 4.21E-02, 4.54E-02, 4.88E-02, 6.53E-02, 9.05E-02, 1.27E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.44E-02, 4.29E-02, 4.77E-02, 5.57E-02, 7.33E-02, 9.05E-02, 1.06E-01, 1.21E-01, 1.82E-01, 2.63E-01, 3.70E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.82E-03, 6.14E-03, 1.18E-02, 2.03E-02, 2.98E-02, 3.47E-02, 3.75E-02, 3.93E-02, 4.27E-02, 4.20E-02, 3.40E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.53E-03, 5.30E-03, 5.85E-03, 6.65E-03, 8.27E-03, 9.25E-03, 9.76E-03, 9.99E-03, 9.68E-03, 8.20E-03, 5.58E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.50E-03, 4.19E-03, 4.02E-03, 3.48E-03, 2.89E-03, 2.65E-03, 2.53E-03, 2.46E-03, 2.33E-03, 2.13E-03, 1.62E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.52E-02, 1.74E-02, 1.57E-02, 1.27E-02, 1.01E-02, 8.96E-03, 8.34E-03, 7.96E-03, 7.08E-03, 6.30E-03, 4.86E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.40E-02, 2.63E-02, 2.36E-02, 1.89E-02, 1.45E-02, 1.27E-02, 1.17E-02, 1.11E-02, 9.81E-03, 8.67E-03, 6.46E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.43E-03, 3.08E-03, 3.38E-03, 3.74E-03, 4.16E-03, 4.32E-03, 4.35E-03, 4.33E-03, 4.03E-03, 3.38E-03, 2.19E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.92E-03, 7.50E-03, 8.45E-03, 8.37E-03, 7.83E-03, 7.44E-03, 7.15E-03, 6.91E-03, 6.09E-03, 5.05E-03, 3.41E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.96E-03, 2.52E-03, 2.71E-03, 2.89E-03, 3.01E-03, 3.03E-03, 3.01E-03, 2.99E-03, 2.96E-03, 3.32E-03, 4.80E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-03, 4.76E-03, 5.29E-03, 6.11E-03, 7.05E-03, 7.43E-03, 7.55E-03, 7.57E-03, 7.20E-03, 6.14E-03, 4.01E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.33E-03, 4.21E-03, 4.43E-03, 4.35E-03, 4.14E-03, 3.94E-03, 3.75E-03, 3.58E-03, 2.96E-03, 2.28E-03, 1.40E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.40E-03, 6.42E-03, 7.00E-03, 6.97E-03, 6.62E-03, 6.26E-03, 5.92E-03, 5.63E-03, 4.58E-03, 3.44E-03, 2.05E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.86E-02, 1.88E-02, 1.77E-02, 1.64E-02, 1.56E-02, 1.55E-02, 1.56E-02, 1.58E-02, 1.73E-02, 2.06E-02, 3.00E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.10E-03, 8.24E-03, 9.79E-03, 1.15E-02, 1.34E-02, 1.47E-02, 1.58E-02, 1.69E-02, 2.25E-02, 3.10E-02, 4.21E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.07E-02, 2.38E-02, 2.67E-02, 3.25E-02, 4.58E-02, 6.17E-02, 7.91E-02, 9.78E-02, 2.01E-01, 4.11E-01, 8.94E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.90E-02, 3.50E-02, 4.09E-02, 4.88E-02, 5.70E-02, 6.13E-02, 6.39E-02, 6.56E-02, 6.95E-02, 6.88E-02, 5.69E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.70E-03, 1.13E-02, 1.31E-02, 1.68E-02, 2.20E-02, 2.54E-02, 2.77E-02, 2.94E-02, 3.43E-02, 3.64E-02, 3.17E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.03E-04, 1.17E-03, 1.85E-03, 3.19E-03, 4.91E-03, 6.01E-03, 6.86E-03, 7.56E-03, 9.70E-03, 1.10E-02, 9.97E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.90E-02, 1.29E-02, 9.79E-03, 7.81E-03, 6.27E-03, 5.44E-03, 4.89E-03, 4.49E-03, 3.43E-03, 2.68E-03, 1.82E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.33E-02, 4.21E-02, 3.13E-02, 2.45E-02, 1.91E-02, 1.63E-02, 1.44E-02, 1.31E-02, 9.81E-03, 7.65E-03, 5.24E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E-01, 6.98E-02, 5.18E-02, 4.04E-02, 3.14E-02, 2.66E-02, 2.34E-02, 2.12E-02, 1.59E-02, 1.23E-02, 8.35E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.42E-05, 6.95E-05, 1.63E-04, 2.45E-04, 2.57E-04, 2.36E-04, 2.14E-04, 1.96E-04, 1.53E-04, 1.80E-04, 2.06E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.65E-02, 9.25E-02, 1.68E-01, 2.66E-01, 3.68E-01, 4.22E-01, 4.57E-01, 4.81E-01, 5.34E-01, 5.31E-01, 4.17E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.36E-03, 1.42E-03, 1.04E-03, 6.64E-04, 4.23E-04, 3.36E-04, 2.92E-04, 2.63E-04, 2.01E-04, 1.80E-04, 1.50E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.34E-04, 1.13E-03, 1.78E-03, 2.42E-03, 2.71E-03, 2.70E-03, 2.62E-03, 2.52E-03, 2.10E-03, 1.61E-03, 9.80E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.52E-03, 2.18E-03, 3.27E-03, 4.23E-03, 4.56E-03, 4.52E-03, 4.40E-03, 4.26E-03, 3.61E-03, 2.80E-03, 1.74E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.07E-03, 3.76E-03, 5.14E-03, 6.26E-03, 6.52E-03, 6.41E-03, 6.22E-03, 6.01E-03, 5.14E-03, 4.44E-03, 3.31E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.91E-04, 2.85E-04, 3.23E-04, 4.57E-04, 6.30E-04, 7.08E-04, 7.39E-04, 7.43E-04, 6.56E-04, 4.95E-04, 2.91E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.34E-03, 9.18E-03, 1.09E-02, 1.23E-02, 1.24E-02, 1.19E-02, 1.14E-02, 1.08E-02, 8.65E-03, 6.21E-03, 3.44E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.10E-02, 2.66E-02, 3.21E-02, 3.68E-02, 3.77E-02, 3.63E-02, 3.46E-02, 3.30E-02, 2.64E-02, 1.90E-02, 1.05E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.67E-02, 4.62E-02, 5.47E-02, 6.20E-02, 6.32E-02, 6.09E-02, 5.80E-02, 5.51E-02, 4.41E-02, 3.19E-02, 1.79E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.36E-05, 1.24E-04, 1.74E-04, 2.18E-04, 2.39E-04, 2.39E-04, 2.33E-04, 2.25E-04, 1.95E-04, 1.81E-04, 1.49E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.79E-05, 1.39E-04, 1.71E-04, 1.71E-04, 1.44E-04, 1.24E-04, 1.10E-04, 9.96E-05, 7.16E-05, 5.17E-05, 3.18E-05}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.26E-04, 1.12E-03, 3.33E-03, 9.07E-03, 1.79E-02, 2.35E-02, 2.74E-02, 3.02E-02, 3.73E-02, 3.90E-02, 3.08E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.43E-04, 1.79E-04, 1.98E-04, 2.09E-04, 2.24E-04, 2.44E-04, 2.62E-04, 2.76E-04, 3.23E-04, 4.11E-04, 4.17E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.69E-03, 4.28E-03, 4.63E-03, 4.94E-03, 4.85E-03, 4.53E-03, 4.23E-03, 3.97E-03, 3.15E-03, 2.38E-03, 1.45E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.13E-02, 1.26E-02, 1.29E-02, 1.30E-02, 1.23E-02, 1.14E-02, 1.06E-02, 9.91E-03, 7.91E-03, 6.17E-03, 3.98E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.93E-02, 2.18E-02, 2.21E-02, 2.12E-02, 1.90E-02, 1.71E-02, 1.56E-02, 1.45E-02, 1.11E-02, 8.30E-03, 5.08E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.88E-04, 8.25E-04, 1.08E-03, 1.24E-03, 1.42E-03, 1.52E-03, 1.58E-03, 1.63E-03, 1.73E-03, 1.69E-03, 1.30E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.96E-04, 9.76E-04, 1.35E-03, 1.76E-03, 2.32E-03, 2.69E-03, 2.97E-03, 3.19E-03, 3.80E-03, 4.01E-03, 3.27E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.07E-03, 1.62E-03, 2.06E-03, 2.73E-03, 3.79E-03, 4.51E-03, 5.05E-03, 5.50E-03, 6.88E-03, 7.56E-03, 6.37E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.96E-04, 8.31E-04, 1.19E-03, 1.33E-03, 1.30E-03, 1.22E-03, 1.14E-03, 1.07E-03, 8.45E-04, 6.81E-04, 4.84E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.05E-03, 3.16E-03, 4.03E-03, 5.15E-03, 6.68E-03, 7.67E-03, 8.43E-03, 9.06E-03, 1.11E-02, 1.21E-02, 1.01E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.23E-03, 3.40E-03, 4.30E-03, 5.75E-03, 8.11E-03, 9.76E-03, 1.10E-02, 1.20E-02, 1.47E-02, 1.58E-02, 1.30E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.41E-04, 3.32E-04, 3.81E-04, 3.98E-04, 3.88E-04, 3.76E-04, 3.66E-04, 3.58E-04, 3.39E-04, 3.30E-04, 2.69E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.45E-04, 3.46E-04, 3.95E-04, 4.13E-04, 4.13E-04, 4.07E-04, 3.98E-04, 3.88E-04, 3.46E-04, 2.90E-04, 1.96E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.01E-04, 2.24E-04, 2.33E-04, 2.41E-04, 2.49E-04, 2.55E-04, 2.59E-04, 2.61E-04, 2.71E-04, 3.19E-04, 3.07E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.78E-02, 2.60E-02, 3.42E-02, 4.65E-02, 6.13E-02, 7.00E-02, 7.60E-02, 8.02E-02, 8.98E-02, 8.80E-02, 6.56E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.49E-03, 9.82E-03, 1.36E-02, 1.98E-02, 2.79E-02, 3.27E-02, 3.61E-02, 3.87E-02, 4.53E-02, 4.60E-02, 3.53E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.30E-04, 1.91E-03, 3.68E-03, 6.71E-03, 9.78E-03, 1.10E-02, 1.18E-02, 1.24E-02, 1.41E-02, 1.46E-02, 1.15E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s_2p3_5So2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.26E+00, 1.55E+00, 1.75E+00, 1.76E+00, 1.52E+00, 1.31E+00, 1.15E+00, 1.04E+00, 7.17E-01, 4.88E-01, 2.88E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.79E-01, 2.88E-01, 2.19E-01, 1.81E-01, 1.63E-01, 1.58E-01, 1.56E-01, 1.54E-01, 1.55E-01, 1.62E-01, 1.76E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.55E-01, 6.45E-01, 6.91E-01, 6.79E-01, 5.85E-01, 5.10E-01, 4.56E-01, 4.16E-01, 3.10E-01, 2.31E-01, 1.50E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.04E-02, 6.56E-02, 7.98E-02, 7.91E-02, 6.53E-02, 5.45E-02, 4.69E-02, 4.12E-02, 2.63E-02, 1.61E-02, 8.24E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.31E-01, 1.86E-01, 2.17E-01, 2.25E-01, 2.07E-01, 1.86E-01, 1.68E-01, 1.54E-01, 1.13E-01, 8.08E-02, 5.27E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.91E-01, 2.12E+00, 3.56E+00, 5.83E+00, 9.85E+00, 1.36E+01, 1.70E+01, 2.02E+01, 3.32E+01, 5.04E+01, 7.92E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.63E-01, 5.19E-01, 6.14E-01, 6.47E-01, 6.00E-01, 5.42E-01, 4.92E-01, 4.51E-01, 3.24E-01, 2.15E-01, 1.13E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.79E-02, 5.44E-02, 6.30E-02, 6.86E-02, 6.88E-02, 6.59E-02, 6.29E-02, 6.01E-02, 5.06E-02, 4.06E-02, 2.77E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.15E-01, 5.75E-01, 8.20E-01, 1.19E+00, 1.87E+00, 2.53E+00, 3.15E+00, 3.75E+00, 6.26E+00, 9.80E+00, 1.61E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.93E-02, 1.04E-01, 1.28E-01, 1.33E-01, 1.19E-01, 1.05E-01, 9.41E-02, 8.54E-02, 5.95E-02, 3.85E-02, 1.95E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.02E-01, 9.69E-01, 1.47E+00, 2.29E+00, 3.88E+00, 5.46E+00, 6.99E+00, 8.46E+00, 1.48E+01, 2.41E+01, 4.18E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.41E-01, 1.92E-01, 2.21E-01, 2.22E-01, 1.94E-01, 1.70E-01, 1.51E-01, 1.37E-01, 9.69E-02, 6.52E-02, 3.57E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.36E-01, 3.44E-01, 3.92E-01, 3.82E-01, 3.24E-01, 2.79E-01, 2.46E-01, 2.20E-01, 1.51E-01, 9.83E-02, 5.05E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.50E-02, 5.44E-02, 6.31E-02, 6.22E-02, 5.32E-02, 4.61E-02, 4.09E-02, 3.69E-02, 2.58E-02, 1.70E-02, 8.94E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.56E-02, 5.24E-02, 7.19E-02, 1.12E-01, 2.07E-01, 2.99E-01, 3.81E-01, 4.55E-01, 7.22E-01, 1.01E+00, 1.35E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.62E-02, 6.12E-02, 8.18E-02, 9.83E-02, 1.03E-01, 9.74E-02, 9.07E-02, 8.44E-02, 6.29E-02, 4.31E-02, 2.34E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.80E-02, 1.18E-01, 1.72E-01, 2.37E-01, 3.14E-01, 3.77E-01, 4.36E-01, 4.93E-01, 7.46E-01, 1.10E+00, 1.63E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E-01, 1.61E-01, 1.90E-01, 1.90E-01, 1.65E-01, 1.43E-01, 1.27E-01, 1.14E-01, 7.79E-02, 5.03E-02, 2.61E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.09E-01, 1.65E-01, 2.22E-01, 2.99E-01, 4.14E-01, 5.07E-01, 5.87E-01, 6.56E-01, 9.01E-01, 1.15E+00, 1.42E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.68E-01, 8.67E-01, 1.13E+00, 1.58E+00, 2.35E+00, 2.97E+00, 3.49E+00, 3.93E+00, 5.45E+00, 6.92E+00, 8.45E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.18E-01, 1.78E-01, 2.20E-01, 2.48E-01, 2.51E-01, 2.37E-01, 2.23E-01, 2.09E-01, 1.59E-01, 1.11E-01, 5.91E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.66E-02, 6.32E-02, 7.46E-02, 8.04E-02, 7.88E-02, 7.40E-02, 6.91E-02, 6.47E-02, 4.94E-02, 3.42E-02, 1.83E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.17E-02, 3.25E-02, 3.34E-02, 3.16E-02, 2.68E-02, 2.33E-02, 2.07E-02, 1.88E-02, 1.36E-02, 9.75E-03, 6.23E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.19E-01, 1.56E-01, 2.04E-01, 2.84E-01, 4.07E-01, 5.02E-01, 5.80E-01, 6.46E-01, 8.74E-01, 1.10E+00, 1.35E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.15E-02, 3.51E-02, 3.65E-02, 3.54E-02, 3.15E-02, 2.80E-02, 2.53E-02, 2.31E-02, 1.67E-02, 1.16E-02, 6.75E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.04E-02, 7.08E-02, 8.18E-02, 8.12E-02, 7.02E-02, 6.10E-02, 5.40E-02, 4.87E-02, 3.38E-02, 2.25E-02, 1.22E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.81E-02, 7.28E-02, 8.69E-02, 9.23E-02, 8.63E-02, 7.81E-02, 7.10E-02, 6.51E-02, 4.71E-02, 3.16E-02, 1.65E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.60E-02, 4.08E-02, 4.76E-02, 4.87E-02, 4.41E-02, 3.93E-02, 3.54E-02, 3.22E-02, 2.28E-02, 1.50E-02, 7.91E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.68E-02, 1.25E-01, 1.53E-01, 1.98E-01, 2.79E-01, 3.52E-01, 4.17E-01, 4.75E-01, 6.78E-01, 8.82E-01, 1.17E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.53E-02, 3.91E-02, 4.74E-02, 4.97E-02, 4.67E-02, 4.26E-02, 3.89E-02, 3.58E-02, 2.56E-02, 1.68E-02, 8.72E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.17E-02, 2.24E-02, 3.16E-02, 4.03E-02, 4.65E-02, 4.94E-02, 5.17E-02, 5.39E-02, 6.41E-02, 8.12E-02, 1.12E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.40E+00, 2.48E+00, 2.52E+00, 2.43E+00, 2.11E+00, 1.87E+00, 1.68E+00, 1.55E+00, 1.19E+00, 9.43E-01, 7.45E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.73E+00, 2.00E+00, 2.12E+00, 2.07E+00, 1.79E+00, 1.56E+00, 1.39E+00, 1.27E+00, 9.46E-01, 7.03E-01, 4.55E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.14E-02, 1.51E-01, 2.20E-01, 2.54E-01, 2.37E-01, 2.15E-01, 1.99E-01, 1.86E-01, 1.56E-01, 1.42E-01, 1.38E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.91E-01, 5.31E-01, 6.12E-01, 6.43E-01, 6.08E-01, 5.61E-01, 5.23E-01, 4.93E-01, 4.15E-01, 3.73E-01, 3.70E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.14E+00, 2.30E+00, 3.51E+00, 5.25E+00, 8.14E+00, 1.08E+01, 1.32E+01, 1.54E+01, 2.47E+01, 3.70E+01, 5.75E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.11E+00, 4.88E+00, 8.14E+00, 1.33E+01, 2.25E+01, 3.08E+01, 3.85E+01, 4.56E+01, 7.48E+01, 1.14E+02, 1.81E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.28E-01, 7.95E-01, 9.55E-01, 1.02E+00, 9.65E-01, 8.81E-01, 8.06E-01, 7.43E-01, 5.48E-01, 3.77E-01, 2.09E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.25E-01, 1.57E+00, 2.28E+00, 3.35E+00, 5.30E+00, 7.17E+00, 8.95E+00, 1.06E+01, 1.78E+01, 2.77E+01, 4.52E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.13E-01, 1.03E+00, 1.59E+00, 2.48E+00, 4.20E+00, 5.89E+00, 7.52E+00, 9.07E+00, 1.58E+01, 2.54E+01, 4.32E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.12E-01, 1.21E+00, 1.66E+00, 2.29E+00, 3.43E+00, 4.56E+00, 5.66E+00, 6.72E+00, 1.14E+01, 1.81E+01, 3.09E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.83E-01, 1.68E+00, 2.37E+00, 3.43E+00, 5.42E+00, 7.40E+00, 9.33E+00, 1.12E+01, 1.93E+01, 3.12E+01, 5.48E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.42E-01, 1.07E+00, 1.21E+00, 1.19E+00, 1.02E+00, 8.81E-01, 7.77E-01, 6.98E-01, 4.79E-01, 3.11E-01, 1.60E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.14E-01, 1.68E-01, 1.90E-01, 1.85E-01, 1.58E-01, 1.37E-01, 1.21E-01, 1.10E-01, 7.71E-02, 5.15E-02, 2.75E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.04E-01, 1.45E-01, 1.57E-01, 1.45E-01, 1.16E-01, 9.84E-02, 8.63E-02, 7.77E-02, 5.54E-02, 3.91E-02, 2.31E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.25E-01, 1.91E-01, 2.48E-01, 3.04E-01, 3.26E-01, 3.13E-01, 2.95E-01, 2.77E-01, 2.17E-01, 1.64E-01, 1.12E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.29E-02, 1.41E-01, 1.65E-01, 1.66E-01, 1.47E-01, 1.30E-01, 1.16E-01, 1.05E-01, 7.25E-02, 4.71E-02, 2.46E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.80E-01, 5.87E-01, 7.74E-01, 9.85E-01, 1.24E+00, 1.46E+00, 1.67E+00, 1.88E+00, 2.75E+00, 3.94E+00, 5.61E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.87E-01, 4.14E-01, 5.06E-01, 5.93E-01, 6.95E-01, 7.74E-01, 8.42E-01, 9.03E-01, 1.13E+00, 1.38E+00, 1.65E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.80E-01, 7.65E-01, 9.49E-01, 1.22E+00, 1.61E+00, 1.91E+00, 2.16E+00, 2.37E+00, 3.11E+00, 3.83E+00, 4.56E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.55E+00, 1.91E+00, 2.40E+00, 3.28E+00, 4.79E+00, 6.05E+00, 7.11E+00, 8.02E+00, 1.12E+01, 1.43E+01, 1.76E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.14E-01, 6.39E-01, 8.00E-01, 1.09E+00, 1.57E+00, 1.96E+00, 2.29E+00, 2.58E+00, 3.58E+00, 4.58E+00, 5.62E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.54E-01, 2.18E-01, 2.60E-01, 2.82E-01, 2.75E-01, 2.57E-01, 2.39E-01, 2.23E-01, 1.70E-01, 1.20E-01, 6.72E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.19E-01, 3.87E-01, 4.74E-01, 6.23E-01, 8.56E-01, 1.04E+00, 1.19E+00, 1.32E+00, 1.77E+00, 2.21E+00, 2.67E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.63E-01, 2.16E-01, 2.69E-01, 3.49E-01, 4.22E-01, 4.49E-01, 4.66E-01, 4.79E-01, 5.31E-01, 5.95E-01, 7.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.50E-01, 2.25E-01, 2.69E-01, 2.74E-01, 2.45E-01, 2.20E-01, 2.01E-01, 1.87E-01, 1.51E-01, 1.28E-01, 1.12E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.85E-01, 2.72E-01, 3.29E-01, 3.76E-01, 3.85E-01, 3.66E-01, 3.46E-01, 3.29E-01, 2.79E-01, 2.40E-01, 2.08E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.72E-02, 1.25E-01, 1.48E-01, 1.55E-01, 1.44E-01, 1.31E-01, 1.19E-01, 1.09E-01, 7.98E-02, 5.61E-02, 3.47E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.73E-01, 3.71E-01, 4.55E-01, 5.71E-01, 7.55E-01, 9.13E-01, 1.05E+00, 1.18E+00, 1.63E+00, 2.09E+00, 2.74E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.26E-01, 1.96E-01, 2.59E-01, 3.34E-01, 4.27E-01, 4.93E-01, 5.48E-01, 5.95E-01, 7.67E-01, 9.56E-01, 1.18E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.09E-02, 3.71E-02, 4.70E-02, 5.01E-02, 4.76E-02, 4.38E-02, 4.02E-02, 3.70E-02, 2.64E-02, 1.72E-02, 8.87E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.02E+00, 3.50E+00, 3.66E+00, 3.52E+00, 3.03E+00, 2.65E+00, 2.38E+00, 2.17E+00, 1.61E+00, 1.19E+00, 7.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.95E-02, 1.45E-01, 1.98E-01, 2.13E-01, 1.87E-01, 1.62E-01, 1.44E-01, 1.30E-01, 9.48E-02, 7.24E-02, 5.74E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.55E-01, 7.36E-01, 8.44E-01, 8.85E-01, 8.29E-01, 7.50E-01, 6.80E-01, 6.22E-01, 4.48E-01, 3.04E-01, 1.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.69E-01, 5.19E-01, 6.30E-01, 7.67E-01, 9.70E-01, 1.12E+00, 1.25E+00, 1.37E+00, 1.87E+00, 2.56E+00, 3.74E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.24E+00, 2.47E+00, 3.74E+00, 5.51E+00, 8.38E+00, 1.10E+01, 1.33E+01, 1.55E+01, 2.45E+01, 3.65E+01, 5.65E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.62E+00, 1.02E+01, 1.65E+01, 2.62E+01, 4.30E+01, 5.83E+01, 7.24E+01, 8.54E+01, 1.39E+02, 2.12E+02, 3.40E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E+00, 2.19E+00, 3.30E+00, 4.94E+00, 7.88E+00, 1.07E+01, 1.33E+01, 1.58E+01, 2.62E+01, 4.06E+01, 6.54E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.24E-01, 1.68E-01, 1.87E-01, 1.85E-01, 1.63E-01, 1.45E-01, 1.30E-01, 1.19E-01, 8.61E-02, 5.92E-02, 3.31E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.74E-01, 1.79E+00, 2.61E+00, 3.86E+00, 6.16E+00, 8.42E+00, 1.06E+01, 1.27E+01, 2.16E+01, 3.45E+01, 5.82E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.81E+00, 5.00E+00, 7.18E+00, 1.05E+01, 1.69E+01, 2.32E+01, 2.93E+01, 3.51E+01, 6.04E+01, 9.71E+01, 1.67E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E+00, 1.86E+00, 2.11E+00, 2.08E+00, 1.81E+00, 1.58E+00, 1.40E+00, 1.26E+00, 8.61E-01, 5.56E-01, 2.87E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.05E-01, 2.94E-01, 3.28E-01, 3.19E-01, 2.73E-01, 2.37E-01, 2.10E-01, 1.89E-01, 1.32E-01, 8.70E-02, 4.56E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.48E-01, 2.49E-01, 3.23E-01, 3.82E-01, 4.21E-01, 4.36E-01, 4.45E-01, 4.52E-01, 4.82E-01, 5.21E-01, 5.62E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.57E-01, 2.48E-01, 3.33E-01, 4.43E-01, 5.05E-01, 4.87E-01, 4.54E-01, 4.22E-01, 3.08E-01, 2.07E-01, 1.11E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.18E-02, 1.28E-01, 1.55E-01, 1.86E-01, 2.31E-01, 2.68E-01, 3.00E-01, 3.29E-01, 4.34E-01, 5.45E-01, 6.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.89E-01, 3.93E-01, 4.58E-01, 5.07E-01, 5.71E-01, 6.26E-01, 6.76E-01, 7.21E-01, 8.93E-01, 1.08E+00, 1.29E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.02E-01, 1.31E+00, 1.62E+00, 1.91E+00, 2.22E+00, 2.49E+00, 2.77E+00, 3.05E+00, 4.31E+00, 6.12E+00, 8.73E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E-01, 1.42E-01, 1.74E-01, 2.52E-01, 3.10E-01, 3.02E-01, 2.82E-01, 2.62E-01, 1.96E-01, 1.45E-01, 1.07E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.53E-01, 3.40E-01, 4.09E-01, 4.76E-01, 5.31E-01, 5.56E-01, 5.72E-01, 5.84E-01, 6.22E-01, 6.57E-01, 6.87E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.58E-01, 3.28E-01, 4.22E-01, 6.35E-01, 8.93E-01, 1.03E+00, 1.13E+00, 1.21E+00, 1.49E+00, 1.79E+00, 2.12E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.45E+00, 3.03E+00, 3.71E+00, 4.89E+00, 6.90E+00, 8.56E+00, 9.96E+00, 1.12E+01, 1.53E+01, 1.94E+01, 2.49E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.64E-01, 1.12E+00, 1.43E+00, 1.93E+00, 2.72E+00, 3.34E+00, 3.86E+00, 4.31E+00, 5.89E+00, 7.46E+00, 9.11E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.63E+00, 2.14E+00, 2.75E+00, 3.87E+00, 5.53E+00, 6.75E+00, 7.76E+00, 8.61E+00, 1.16E+01, 1.46E+01, 1.79E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.73E-01, 4.34E-01, 5.37E-01, 5.62E-01, 5.10E-01, 4.56E-01, 4.13E-01, 3.81E-01, 2.92E-01, 2.29E-01, 1.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.80E-01, 5.65E-01, 6.95E-01, 8.37E-01, 8.74E-01, 8.10E-01, 7.38E-01, 6.74E-01, 4.73E-01, 3.04E-01, 1.52E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.69E-01, 2.60E-01, 3.03E-01, 3.21E-01, 3.03E-01, 2.73E-01, 2.46E-01, 2.24E-01, 1.57E-01, 1.02E-01, 5.32E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.43E-01, 6.61E-01, 8.27E-01, 1.01E+00, 1.21E+00, 1.34E+00, 1.44E+00, 1.54E+00, 1.91E+00, 2.32E+00, 2.81E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.67E-01, 2.58E-01, 3.48E-01, 4.84E-01, 7.11E-01, 9.05E-01, 1.07E+00, 1.22E+00, 1.72E+00, 2.22E+00, 2.86E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.76E-02, 6.76E-02, 1.03E-01, 1.64E-01, 2.70E-01, 3.60E-01, 4.38E-01, 5.05E-01, 7.39E-01, 9.64E-01, 1.25E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s_2p3_3Do {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.16E-02, 9.91E-02, 1.30E-01, 1.33E-01, 1.11E-01, 9.35E-02, 8.06E-02, 7.09E-02, 4.52E-02, 2.72E-02, 1.31E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s_2p3_3Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.95E+00, 5.34E+00, 1.00E+01, 1.76E+01, 3.00E+01, 4.06E+01, 4.98E+01, 5.81E+01, 8.92E+01, 1.26E+02, 1.80E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.03E-01, 8.26E-01, 9.20E-01, 9.09E-01, 8.20E-01, 7.39E-01, 6.73E-01, 6.22E-01, 4.82E-01, 3.85E-01, 3.24E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.64E-01, 1.21E+00, 1.36E+00, 1.35E+00, 1.20E+00, 1.06E+00, 9.47E-01, 8.59E-01, 6.05E-01, 4.03E-01, 2.18E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 1.78E+00, 1.99E+00, 1.94E+00, 1.69E+00, 1.48E+00, 1.31E+00, 1.19E+00, 8.30E-01, 5.48E-01, 2.86E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.31E-01, 8.11E-01, 8.71E-01, 8.30E-01, 7.03E-01, 6.08E-01, 5.40E-01, 4.89E-01, 3.55E-01, 2.58E-01, 1.76E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E-01, 1.77E-01, 2.21E-01, 2.34E-01, 2.12E-01, 1.87E-01, 1.67E-01, 1.51E-01, 1.06E-01, 7.03E-02, 3.79E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.72E-01, 5.75E-01, 7.13E-01, 7.57E-01, 6.90E-01, 6.11E-01, 5.46E-01, 4.95E-01, 3.47E-01, 2.35E-01, 1.40E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.98E-01, 1.14E+00, 1.36E+00, 1.40E+00, 1.24E+00, 1.08E+00, 9.60E-01, 8.64E-01, 5.91E-01, 3.81E-01, 1.95E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.02E+00, 5.31E+00, 7.79E+00, 1.20E+01, 2.03E+01, 2.89E+01, 3.72E+01, 4.54E+01, 8.14E+01, 1.38E+02, 2.64E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-01, 6.73E-01, 9.25E-01, 1.39E+00, 2.46E+00, 3.63E+00, 4.82E+00, 6.00E+00, 1.15E+01, 2.03E+01, 4.06E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.91E-02, 1.00E-01, 1.14E-01, 1.09E-01, 9.06E-02, 7.68E-02, 6.67E-02, 5.90E-02, 3.84E-02, 2.39E-02, 1.23E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.63E-01, 1.45E+00, 2.08E+00, 3.20E+00, 4.96E+00, 6.29E+00, 7.35E+00, 8.23E+00, 1.11E+01, 1.39E+01, 1.68E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.27E-02, 1.03E-01, 1.13E-01, 1.09E-01, 9.30E-02, 8.06E-02, 7.12E-02, 6.41E-02, 4.41E-02, 2.89E-02, 1.52E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.00E-01, 2.98E-01, 3.35E-01, 3.26E-01, 2.81E-01, 2.46E-01, 2.21E-01, 2.03E-01, 1.55E-01, 1.24E-01, 1.03E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.09E-01, 4.62E-01, 5.35E-01, 5.47E-01, 4.94E-01, 4.36E-01, 3.88E-01, 3.51E-01, 2.45E-01, 1.64E-01, 9.23E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.76E-01, 3.50E-01, 3.93E-01, 4.33E-01, 4.28E-01, 3.93E-01, 3.57E-01, 3.27E-01, 2.36E-01, 1.62E-01, 9.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.20E-01, 5.08E-01, 5.48E-01, 5.57E-01, 5.23E-01, 4.84E-01, 4.52E-01, 4.26E-01, 3.52E-01, 2.95E-01, 2.55E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-01, 1.50E-01, 1.92E-01, 2.81E-01, 3.48E-01, 3.44E-01, 3.28E-01, 3.11E-01, 2.56E-01, 2.20E-01, 2.01E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.18E-01, 7.05E-01, 7.31E-01, 7.19E-01, 6.45E-01, 5.74E-01, 5.17E-01, 4.70E-01, 3.32E-01, 2.17E-01, 1.11E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.94E-01, 2.60E-01, 3.11E-01, 3.58E-01, 3.66E-01, 3.41E-01, 3.14E-01, 2.90E-01, 2.11E-01, 1.44E-01, 8.13E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.89E-01, 3.79E-01, 4.70E-01, 6.44E-01, 7.46E-01, 7.11E-01, 6.52E-01, 5.97E-01, 4.14E-01, 2.63E-01, 1.33E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-01, 6.20E-01, 8.33E-01, 1.12E+00, 1.56E+00, 1.96E+00, 2.34E+00, 2.69E+00, 4.13E+00, 5.97E+00, 8.45E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.21E+00, 1.81E+00, 2.49E+00, 3.61E+00, 5.39E+00, 6.81E+00, 8.01E+00, 9.05E+00, 1.27E+01, 1.63E+01, 2.13E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.06E-01, 6.25E-01, 8.66E-01, 1.23E+00, 1.81E+00, 2.30E+00, 2.74E+00, 3.12E+00, 4.54E+00, 6.10E+00, 7.96E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.38E-01, 3.34E-01, 3.87E-01, 4.14E-01, 3.86E-01, 3.42E-01, 3.04E-01, 2.73E-01, 1.85E-01, 1.17E-01, 5.97E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.01E-01, 1.43E-01, 1.68E-01, 1.78E-01, 1.68E-01, 1.53E-01, 1.39E-01, 1.27E-01, 9.06E-02, 6.03E-02, 3.28E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.90E-02, 3.15E-02, 4.14E-02, 4.81E-02, 4.80E-02, 4.40E-02, 4.01E-02, 3.67E-02, 2.59E-02, 1.70E-02, 8.70E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.47E-02, 1.01E-01, 1.06E-01, 1.02E-01, 8.86E-02, 7.71E-02, 6.83E-02, 6.14E-02, 4.17E-02, 2.69E-02, 1.47E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.75E-02, 1.81E-01, 2.72E-01, 3.72E-01, 4.90E-01, 5.73E-01, 6.40E-01, 6.96E-01, 8.84E-01, 1.07E+00, 1.24E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.50E-02, 1.49E-01, 2.03E-01, 2.48E-01, 2.84E-01, 3.06E-01, 3.22E-01, 3.37E-01, 3.87E-01, 4.36E-01, 4.77E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.23E-02, 8.15E-02, 9.71E-02, 1.05E-01, 9.93E-02, 9.02E-02, 8.22E-02, 7.57E-02, 5.66E-02, 4.22E-02, 3.05E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.08E-02, 4.07E-02, 5.27E-02, 5.59E-02, 5.02E-02, 4.42E-02, 3.94E-02, 3.57E-02, 2.50E-02, 1.69E-02, 9.69E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.04E-01, 2.20E-01, 3.26E-01, 4.62E-01, 6.68E-01, 8.36E-01, 9.79E-01, 1.10E+00, 1.55E+00, 2.04E+00, 2.61E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-01, 2.11E-01, 3.00E-01, 4.04E-01, 5.51E-01, 6.69E-01, 7.69E-01, 8.56E-01, 1.17E+00, 1.52E+00, 1.93E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.60E-02, 8.99E-02, 1.19E-01, 1.41E-01, 1.50E-01, 1.50E-01, 1.49E-01, 1.49E-01, 1.48E-01, 1.52E-01, 1.54E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.42E-02, 6.68E-02, 7.93E-02, 8.11E-02, 7.24E-02, 6.45E-02, 5.83E-02, 5.35E-02, 3.91E-02, 2.72E-02, 1.53E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.55E-03, 7.72E-03, 9.27E-03, 9.16E-03, 7.85E-03, 6.90E-03, 6.21E-03, 5.68E-03, 4.09E-03, 2.80E-03, 1.68E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.01E-03, 9.81E-03, 1.69E-02, 2.78E-02, 3.87E-02, 4.27E-02, 4.42E-02, 4.46E-02, 4.30E-02, 3.75E-02, 2.63E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.12E-02, 2.70E-02, 2.93E-02, 2.96E-02, 2.80E-02, 2.62E-02, 2.47E-02, 2.35E-02, 1.97E-02, 1.64E-02, 1.18E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.90E-03, 1.08E-02, 1.26E-02, 1.38E-02, 1.35E-02, 1.26E-02, 1.17E-02, 1.09E-02, 8.33E-03, 6.05E-03, 3.68E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.83E-02, 4.31E-02, 5.06E-02, 5.41E-02, 5.43E-02, 5.35E-02, 5.29E-02, 5.25E-02, 5.35E-02, 5.94E-02, 7.22E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.69E-02, 3.97E-02, 4.53E-02, 4.55E-02, 4.11E-02, 3.72E-02, 3.43E-02, 3.21E-02, 2.64E-02, 2.34E-02, 2.33E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.55E-02, 4.66E-02, 5.25E-02, 5.64E-02, 5.87E-02, 5.93E-02, 5.95E-02, 5.95E-02, 5.94E-02, 5.81E-02, 5.41E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.11E-02, 6.87E-02, 7.86E-02, 8.28E-02, 8.02E-02, 7.63E-02, 7.29E-02, 7.03E-02, 6.28E-02, 5.70E-02, 5.07E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.81E-01, 2.06E-01, 2.37E-01, 2.97E-01, 3.99E-01, 4.82E-01, 5.49E-01, 6.04E-01, 7.82E-01, 9.36E-01, 1.06E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.09E-02, 3.06E-02, 3.65E-02, 3.87E-02, 3.63E-02, 3.30E-02, 3.02E-02, 2.79E-02, 2.13E-02, 1.61E-02, 1.14E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.17E-02, 6.41E-02, 7.37E-02, 8.41E-02, 9.51E-02, 1.01E-01, 1.05E-01, 1.08E-01, 1.13E-01, 1.10E-01, 9.68E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.59E-02, 3.66E-02, 4.23E-02, 4.51E-02, 4.51E-02, 4.40E-02, 4.29E-02, 4.19E-02, 3.87E-02, 3.50E-02, 2.95E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.32E-02, 1.67E-02, 1.84E-02, 1.93E-02, 1.97E-02, 1.98E-02, 1.99E-02, 1.99E-02, 2.01E-02, 2.04E-02, 2.06E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.91E-02, 2.59E-02, 2.92E-02, 2.99E-02, 2.77E-02, 2.52E-02, 2.31E-02, 2.13E-02, 1.57E-02, 1.11E-02, 6.62E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.35E-02, 1.71E-02, 1.83E-02, 1.75E-02, 1.51E-02, 1.34E-02, 1.22E-02, 1.13E-02, 8.64E-03, 6.57E-03, 4.72E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.32E-02, 3.63E-02, 4.66E-02, 5.66E-02, 6.50E-02, 6.84E-02, 7.05E-02, 7.22E-02, 7.86E-02, 8.80E-02, 1.03E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.05E-02, 4.56E-02, 5.80E-02, 7.40E-02, 9.52E-02, 1.10E-01, 1.21E-01, 1.31E-01, 1.71E-01, 2.19E-01, 2.83E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.14E-03, 4.63E-03, 7.44E-03, 1.15E-02, 1.61E-02, 1.81E-02, 1.91E-02, 1.97E-02, 1.98E-02, 1.77E-02, 1.24E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.74E-01, 6.99E-01, 8.32E-01, 8.81E-01, 8.17E-01, 7.31E-01, 6.58E-01, 5.98E-01, 4.24E-01, 2.92E-01, 1.75E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.71E-01, 8.72E-01, 1.09E+00, 1.21E+00, 1.15E+00, 1.05E+00, 9.52E-01, 8.73E-01, 6.34E-01, 4.48E-01, 2.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.38E-01, 9.18E-01, 1.25E+00, 1.44E+00, 1.40E+00, 1.28E+00, 1.17E+00, 1.07E+00, 7.87E-01, 5.59E-01, 3.46E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.89E-01, 5.84E-01, 7.52E-01, 7.60E-01, 6.30E-01, 5.25E-01, 4.51E-01, 3.96E-01, 2.56E-01, 1.63E-01, 8.84E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.37E-01, 1.92E-01, 2.39E-01, 2.73E-01, 2.75E-01, 2.61E-01, 2.46E-01, 2.33E-01, 1.88E-01, 1.43E-01, 8.99E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.03E-01, 5.89E-01, 7.27E-01, 8.23E-01, 8.28E-01, 7.83E-01, 7.36E-01, 6.94E-01, 5.52E-01, 4.17E-01, 2.61E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.64E-01, 8.71E-01, 1.10E+00, 1.26E+00, 1.28E+00, 1.23E+00, 1.16E+00, 1.10E+00, 8.89E-01, 6.79E-01, 4.31E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.86E+00, 3.12E+00, 4.02E+00, 4.95E+00, 6.36E+00, 7.52E+00, 8.47E+00, 9.28E+00, 1.20E+01, 1.49E+01, 1.92E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.95E-01, 7.20E-01, 7.52E-01, 7.62E-01, 8.98E-01, 1.06E+00, 1.19E+00, 1.29E+00, 1.51E+00, 1.49E+00, 1.15E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.49E-02, 1.23E-01, 1.45E-01, 1.44E-01, 1.22E-01, 1.04E-01, 9.09E-02, 8.09E-02, 5.31E-02, 3.27E-02, 1.60E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.40E+00, 4.47E+00, 7.64E+00, 1.40E+01, 2.62E+01, 3.71E+01, 4.64E+01, 5.43E+01, 8.03E+01, 1.00E+02, 1.04E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.47E-02, 8.92E-02, 1.02E-01, 1.03E-01, 9.11E-02, 7.97E-02, 7.06E-02, 6.33E-02, 4.26E-02, 2.69E-02, 1.35E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.08E-01, 2.87E-01, 3.26E-01, 3.32E-01, 3.11E-01, 2.94E-01, 2.83E-01, 2.75E-01, 2.57E-01, 2.37E-01, 1.88E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.21E-01, 4.41E-01, 5.02E-01, 5.20E-01, 4.77E-01, 4.24E-01, 3.79E-01, 3.44E-01, 2.43E-01, 1.67E-01, 1.00E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.71E-01, 6.29E-01, 7.13E-01, 7.56E-01, 7.09E-01, 6.32E-01, 5.66E-01, 5.11E-01, 3.53E-01, 2.32E-01, 1.33E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.72E-01, 7.70E-01, 8.74E-01, 9.06E-01, 8.31E-01, 7.44E-01, 6.73E-01, 6.16E-01, 4.51E-01, 3.22E-01, 2.09E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.78E-01, 2.49E-01, 3.08E-01, 3.90E-01, 4.37E-01, 4.27E-01, 4.08E-01, 3.90E-01, 3.33E-01, 2.94E-01, 2.61E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.51E-01, 8.50E-01, 9.57E-01, 9.90E-01, 9.05E-01, 8.04E-01, 7.19E-01, 6.51E-01, 4.49E-01, 2.88E-01, 1.45E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.79E-01, 4.02E-01, 4.89E-01, 5.42E-01, 5.31E-01, 4.92E-01, 4.55E-01, 4.23E-01, 3.22E-01, 2.29E-01, 1.33E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.21E-01, 5.74E-01, 7.12E-01, 9.24E-01, 1.03E+00, 9.81E-01, 9.04E-01, 8.31E-01, 5.89E-01, 3.81E-01, 1.93E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.78E-01, 6.02E-01, 7.69E-01, 9.67E-01, 1.30E+00, 1.58E+00, 1.79E+00, 1.96E+00, 2.43E+00, 2.64E+00, 2.38E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.19E+00, 1.60E+00, 1.86E+00, 2.12E+00, 2.40E+00, 2.59E+00, 2.75E+00, 2.90E+00, 3.46E+00, 4.07E+00, 4.79E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.05E+00, 1.88E+00, 2.90E+00, 4.73E+00, 8.35E+00, 1.18E+01, 1.49E+01, 1.76E+01, 2.69E+01, 3.44E+01, 3.56E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.65E-01, 3.68E-01, 4.24E-01, 4.56E-01, 4.32E-01, 3.86E-01, 3.45E-01, 3.12E-01, 2.11E-01, 1.32E-01, 6.47E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.72E-02, 1.36E-01, 1.70E-01, 1.93E-01, 1.91E-01, 1.77E-01, 1.62E-01, 1.49E-01, 1.06E-01, 6.83E-02, 3.44E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.51E-02, 3.34E-02, 4.78E-02, 5.75E-02, 5.83E-02, 5.40E-02, 4.94E-02, 4.53E-02, 3.21E-02, 2.08E-02, 1.06E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.23E+00, 2.16E+00, 2.89E+00, 3.42E+00, 3.74E+00, 3.90E+00, 4.04E+00, 4.15E+00, 4.64E+00, 5.25E+00, 6.04E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.61E-01, 3.25E-01, 4.59E-01, 5.57E-01, 6.03E-01, 6.01E-01, 5.90E-01, 5.80E-01, 5.58E-01, 5.75E-01, 6.38E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.85E-01, 1.19E+00, 1.58E+00, 1.85E+00, 2.04E+00, 2.17E+00, 2.30E+00, 2.43E+00, 3.04E+00, 3.92E+00, 5.23E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.89E-01, 3.72E-01, 4.88E-01, 5.45E-01, 5.84E-01, 6.21E-01, 6.54E-01, 6.81E-01, 7.41E-01, 7.14E-01, 5.49E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.93E-01, 1.39E+00, 1.81E+00, 2.16E+00, 2.59E+00, 2.96E+00, 3.29E+00, 3.58E+00, 4.67E+00, 5.94E+00, 7.89E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.16E-01, 7.69E-01, 1.03E+00, 1.20E+00, 1.29E+00, 1.35E+00, 1.41E+00, 1.47E+00, 1.72E+00, 2.07E+00, 2.68E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.87E-01, 1.27E+00, 1.57E+00, 1.68E+00, 1.55E+00, 1.38E+00, 1.25E+00, 1.14E+00, 8.22E-01, 5.71E-01, 3.39E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.98E-01, 2.81E-01, 3.08E-01, 2.93E-01, 2.44E-01, 2.06E-01, 1.79E-01, 1.59E-01, 1.08E-01, 7.24E-02, 4.21E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.88E-01, 5.20E-01, 7.48E-01, 1.14E+00, 1.77E+00, 2.24E+00, 2.58E+00, 2.84E+00, 3.46E+00, 3.65E+00, 3.14E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.45E-01, 7.11E-01, 8.08E-01, 8.59E-01, 8.08E-01, 7.23E-01, 6.48E-01, 5.86E-01, 4.04E-01, 2.62E-01, 1.38E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.41E-01, 6.43E-01, 9.51E-01, 1.49E+00, 2.60E+00, 3.64E+00, 4.53E+00, 5.28E+00, 7.63E+00, 9.15E+00, 8.72E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.88E-01, 8.36E-01, 1.17E+00, 1.68E+00, 2.66E+00, 3.54E+00, 4.30E+00, 4.94E+00, 6.93E+00, 8.21E+00, 7.78E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.37E-01, 7.15E-01, 8.20E-01, 9.43E-01, 1.17E+00, 1.38E+00, 1.58E+00, 1.75E+00, 2.35E+00, 2.82E+00, 2.84E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.44E+00, 6.38E+00, 1.04E+01, 1.80E+01, 3.24E+01, 4.52E+01, 5.61E+01, 6.55E+01, 9.60E+01, 1.19E+02, 1.22E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.55E+00, 2.00E+00, 2.23E+00, 2.30E+00, 2.19E+00, 2.09E+00, 2.03E+00, 2.00E+00, 1.99E+00, 2.07E+00, 2.22E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.30E-01, 1.03E+00, 1.52E+00, 2.44E+00, 4.11E+00, 5.58E+00, 6.85E+00, 7.93E+00, 1.15E+01, 1.42E+01, 1.46E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.55E-01, 3.25E-01, 3.61E-01, 3.66E-01, 3.34E-01, 3.03E-01, 2.80E-01, 2.64E-01, 2.25E-01, 2.05E-01, 1.98E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.48E-01, 7.16E-01, 8.26E-01, 9.44E-01, 1.12E+00, 1.28E+00, 1.45E+00, 1.61E+00, 2.29E+00, 3.21E+00, 5.17E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.34E-01, 4.00E-01, 4.52E-01, 5.77E-01, 6.54E-01, 6.28E-01, 5.87E-01, 5.49E-01, 4.35E-01, 3.56E-01, 3.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.27E-01, 2.82E-01, 3.11E-01, 3.15E-01, 2.91E-01, 2.66E-01, 2.47E-01, 2.32E-01, 1.94E-01, 1.72E-01, 1.57E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.89E-01, 5.46E-01, 6.55E-01, 7.49E-01, 7.56E-01, 6.99E-01, 6.41E-01, 5.90E-01, 4.33E-01, 3.01E-01, 1.80E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.28E-01, 3.06E-01, 3.47E-01, 3.65E-01, 3.51E-01, 3.31E-01, 3.15E-01, 3.03E-01, 2.74E-01, 2.51E-01, 2.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.80E-01, 5.28E-01, 6.00E-01, 6.31E-01, 6.38E-01, 6.54E-01, 6.82E-01, 7.16E-01, 8.89E-01, 1.12E+00, 1.51E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.20E-01, 2.00E-01, 2.45E-01, 2.68E-01, 2.75E-01, 2.75E-01, 2.73E-01, 2.72E-01, 2.66E-01, 2.58E-01, 2.37E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.86E-02, 8.07E-02, 1.06E-01, 1.25E-01, 1.43E-01, 1.56E-01, 1.66E-01, 1.75E-01, 2.06E-01, 2.37E-01, 2.59E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3D3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.45E+00, 2.46E+00, 3.27E+00, 3.90E+00, 4.32E+00, 4.50E+00, 4.64E+00, 4.75E+00, 5.22E+00, 5.84E+00, 6.69E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.01E+00, 1.80E+00, 2.43E+00, 2.89E+00, 3.21E+00, 3.43E+00, 3.64E+00, 3.84E+00, 4.80E+00, 6.20E+00, 8.27E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.83E-01, 8.47E-01, 1.13E+00, 1.38E+00, 1.71E+00, 1.98E+00, 2.22E+00, 2.44E+00, 3.27E+00, 4.30E+00, 5.94E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.20E-01, 1.30E+00, 1.65E+00, 1.83E+00, 1.98E+00, 2.11E+00, 2.22E+00, 2.31E+00, 2.58E+00, 2.70E+00, 2.62E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.26E+00, 2.19E+00, 2.88E+00, 3.41E+00, 3.94E+00, 4.36E+00, 4.73E+00, 5.07E+00, 6.40E+00, 8.02E+00, 1.06E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.31E+00, 2.14E+00, 2.67E+00, 2.86E+00, 2.65E+00, 2.38E+00, 2.15E+00, 1.96E+00, 1.40E+00, 9.63E-01, 5.56E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.42E-01, 4.99E-01, 5.54E-01, 5.26E-01, 4.34E-01, 3.65E-01, 3.16E-01, 2.79E-01, 1.85E-01, 1.22E-01, 6.99E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.12E-02, 1.65E-01, 1.99E-01, 2.07E-01, 1.88E-01, 1.67E-01, 1.49E-01, 1.35E-01, 9.36E-02, 6.05E-02, 3.14E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.52E-01, 9.94E-01, 1.15E+00, 1.30E+00, 1.31E+00, 1.22E+00, 1.12E+00, 1.03E+00, 7.59E-01, 5.43E-01, 3.38E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.42E-01, 2.01E-01, 2.38E-01, 2.54E-01, 2.44E-01, 2.25E-01, 2.08E-01, 1.93E-01, 1.43E-01, 9.80E-02, 5.34E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.51E-01, 1.63E+00, 2.29E+00, 3.42E+00, 5.74E+00, 7.90E+00, 9.77E+00, 1.14E+01, 1.64E+01, 1.97E+01, 1.89E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.98E-01, 1.35E+00, 1.74E+00, 2.35E+00, 3.43E+00, 4.39E+00, 5.21E+00, 5.91E+00, 8.13E+00, 9.59E+00, 9.18E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.83E+00, 2.45E+00, 2.95E+00, 3.65E+00, 4.76E+00, 5.73E+00, 6.57E+00, 7.31E+00, 9.80E+00, 1.17E+01, 1.18E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.59E+00, 8.65E+00, 1.42E+01, 2.47E+01, 4.46E+01, 6.22E+01, 7.73E+01, 9.01E+01, 1.32E+02, 1.63E+02, 1.66E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.13E-01, 1.21E+00, 1.53E+00, 2.14E+00, 3.10E+00, 3.85E+00, 4.48E+00, 5.04E+00, 6.89E+00, 8.36E+00, 8.51E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.58E+00, 2.01E+00, 2.23E+00, 2.27E+00, 2.13E+00, 2.00E+00, 1.91E+00, 1.86E+00, 1.74E+00, 1.70E+00, 1.70E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.18E+00, 2.02E+00, 3.21E+00, 5.40E+00, 9.44E+00, 1.30E+01, 1.61E+01, 1.87E+01, 2.74E+01, 3.40E+01, 3.49E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.16E+00, 1.63E+00, 2.15E+00, 3.21E+00, 4.78E+00, 5.91E+00, 6.82E+00, 7.59E+00, 1.01E+01, 1.21E+01, 1.22E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.24E-01, 5.58E-01, 6.34E-01, 6.68E-01, 6.65E-01, 6.55E-01, 6.50E-01, 6.48E-01, 6.55E-01, 6.51E-01, 5.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.61E-01, 1.09E+00, 1.34E+00, 1.63E+00, 1.83E+00, 1.86E+00, 1.86E+00, 1.86E+00, 1.88E+00, 1.86E+00, 1.64E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-01, 5.56E-01, 6.22E-01, 6.32E-01, 5.68E-01, 4.98E-01, 4.41E-01, 3.97E-01, 2.70E-01, 1.73E-01, 9.01E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.61E-01, 8.05E-01, 9.43E-01, 1.05E+00, 1.09E+00, 1.10E+00, 1.13E+00, 1.15E+00, 1.33E+00, 1.59E+00, 2.02E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.93E-01, 4.59E-01, 5.47E-01, 6.01E-01, 6.54E-01, 7.01E-01, 7.49E-01, 7.95E-01, 1.00E+00, 1.25E+00, 1.49E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.86E-02, 8.45E-02, 1.07E-01, 1.19E-01, 1.17E-01, 1.11E-01, 1.04E-01, 9.82E-02, 7.82E-02, 5.77E-02, 3.40E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3S1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.30E+00, 2.31E+00, 3.14E+00, 3.74E+00, 4.17E+00, 4.44E+00, 4.70E+00, 4.96E+00, 6.16E+00, 7.95E+00, 1.06E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.14E-02, 1.70E-01, 2.26E-01, 2.59E-01, 2.54E-01, 2.33E-01, 2.14E-01, 1.99E-01, 1.51E-01, 1.12E-01, 7.05E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.93E-01, 1.70E+00, 2.23E+00, 2.71E+00, 3.27E+00, 3.66E+00, 3.97E+00, 4.24E+00, 5.34E+00, 6.75E+00, 9.10E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.43E+00, 4.30E+00, 5.61E+00, 6.62E+00, 7.78E+00, 8.70E+00, 9.48E+00, 1.02E+01, 1.26E+01, 1.53E+01, 1.93E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.68E+00, 2.83E+00, 3.62E+00, 4.11E+00, 4.13E+00, 3.83E+00, 3.50E+00, 3.21E+00, 2.30E+00, 1.55E+00, 8.68E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.02E-01, 7.17E-01, 7.88E-01, 7.45E-01, 6.10E-01, 5.11E-01, 4.41E-01, 3.90E-01, 2.59E-01, 1.72E-01, 9.93E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.10E-01, 2.28E-01, 2.95E-01, 3.40E-01, 3.54E-01, 3.39E-01, 3.23E-01, 3.09E-01, 2.76E-01, 2.66E-01, 2.74E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.07E-01, 1.16E+00, 1.39E+00, 1.92E+00, 2.27E+00, 2.16E+00, 1.97E+00, 1.79E+00, 1.21E+00, 7.46E-01, 3.60E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.13E-01, 2.56E-01, 2.58E-01, 2.37E-01, 2.10E-01, 2.03E-01, 2.04E-01, 2.10E-01, 2.55E-01, 3.21E-01, 4.05E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.36E-01, 6.90E-01, 7.40E-01, 7.35E-01, 6.88E-01, 6.52E-01, 6.31E-01, 6.20E-01, 6.26E-01, 6.78E-01, 7.59E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.76E+00, 3.08E+00, 4.42E+00, 6.77E+00, 1.13E+01, 1.52E+01, 1.86E+01, 2.15E+01, 3.06E+01, 3.66E+01, 3.50E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.57E-01, 4.57E-01, 6.12E-01, 1.14E+00, 1.57E+00, 1.55E+00, 1.45E+00, 1.34E+00, 9.65E-01, 6.68E-01, 4.02E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.08E+00, 1.36E+00, 1.58E+00, 1.84E+00, 2.07E+00, 2.19E+00, 2.28E+00, 2.36E+00, 2.64E+00, 2.84E+00, 2.68E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.59E-01, 6.64E-01, 8.60E-01, 1.69E+00, 2.41E+00, 2.42E+00, 2.29E+00, 2.15E+00, 1.72E+00, 1.46E+00, 1.35E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.69E+00, 1.51E+01, 2.35E+01, 3.90E+01, 6.83E+01, 9.42E+01, 1.16E+02, 1.35E+02, 1.95E+02, 2.40E+02, 2.43E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.46E+00, 1.99E+00, 2.54E+00, 3.53E+00, 5.03E+00, 6.19E+00, 7.17E+00, 8.01E+00, 1.09E+01, 1.32E+01, 1.33E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.86E+00, 5.97E+00, 8.73E+00, 1.45E+01, 2.35E+01, 3.04E+01, 3.60E+01, 4.08E+01, 5.67E+01, 6.88E+01, 6.98E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.64E-01, 8.26E-01, 9.24E-01, 9.81E-01, 9.32E-01, 8.41E-01, 7.58E-01, 6.90E-01, 4.84E-01, 3.23E-01, 1.89E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E+00, 1.64E+00, 2.12E+00, 3.10E+00, 3.72E+00, 3.54E+00, 3.24E+00, 2.95E+00, 2.01E+00, 1.24E+00, 5.91E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.52E-01, 7.50E-01, 8.81E-01, 1.06E+00, 1.10E+00, 1.01E+00, 9.04E-01, 8.15E-01, 5.46E-01, 3.37E-01, 1.63E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.13E-01, 1.14E+00, 1.45E+00, 1.85E+00, 2.09E+00, 2.11E+00, 2.09E+00, 2.09E+00, 2.17E+00, 2.38E+00, 2.50E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.65E-01, 5.57E-01, 6.85E-01, 8.40E-01, 9.49E-01, 9.81E-01, 1.01E+00, 1.04E+00, 1.19E+00, 1.42E+00, 1.83E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.08E-01, 1.72E-01, 2.16E-01, 2.56E-01, 2.89E-01, 3.13E-01, 3.39E-01, 3.65E-01, 4.85E-01, 6.36E-01, 8.69E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.13E-01, 2.41E-01, 3.17E-01, 3.50E-01, 3.87E-01, 4.26E-01, 4.59E-01, 4.85E-01, 5.43E-01, 5.29E-01, 4.10E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.91E-01, 7.98E-01, 1.03E+00, 1.12E+00, 1.20E+00, 1.29E+00, 1.38E+00, 1.44E+00, 1.59E+00, 1.54E+00, 1.19E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.28E-01, 1.29E+00, 1.68E+00, 1.83E+00, 1.94E+00, 2.07E+00, 2.19E+00, 2.29E+00, 2.51E+00, 2.43E+00, 1.88E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.04E-01, 9.03E-01, 1.17E+00, 1.24E+00, 1.10E+00, 9.57E-01, 8.45E-01, 7.58E-01, 5.27E-01, 3.64E-01, 2.20E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.34E-01, 6.98E-01, 8.70E-01, 9.29E-01, 8.55E-01, 7.66E-01, 6.94E-01, 6.35E-01, 4.60E-01, 3.15E-01, 1.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.31E-01, 2.06E-01, 2.70E-01, 3.76E-01, 5.51E-01, 6.82E-01, 7.81E-01, 8.61E-01, 1.11E+00, 1.31E+00, 1.47E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.09E-01, 6.44E-01, 6.81E-01, 6.37E-01, 5.24E-01, 4.42E-01, 3.84E-01, 3.41E-01, 2.28E-01, 1.48E-01, 8.08E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.93E-01, 5.95E-01, 1.04E+00, 1.94E+00, 3.70E+00, 5.22E+00, 6.49E+00, 7.54E+00, 1.08E+01, 1.29E+01, 1.25E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.59E-01, 1.80E+00, 3.15E+00, 5.84E+00, 1.10E+01, 1.55E+01, 1.92E+01, 2.23E+01, 3.17E+01, 3.78E+01, 3.65E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.48E+00, 3.05E+00, 5.33E+00, 9.82E+00, 1.84E+01, 2.57E+01, 3.18E+01, 3.68E+01, 5.19E+01, 6.15E+01, 5.92E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.20E+00, 1.31E+00, 1.27E+00, 1.19E+00, 1.14E+00, 1.16E+00, 1.21E+00, 1.28E+00, 1.60E+00, 2.03E+00, 2.70E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.46E+00, 1.62E+00, 1.59E+00, 1.47E+00, 1.35E+00, 1.33E+00, 1.35E+00, 1.40E+00, 1.67E+00, 2.05E+00, 2.52E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.04E-01, 5.16E-01, 5.58E-01, 5.57E-01, 5.18E-01, 4.85E-01, 4.60E-01, 4.41E-01, 3.79E-01, 3.13E-01, 2.37E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.25E+00, 2.29E+00, 2.13E+00, 1.91E+00, 1.73E+00, 1.70E+00, 1.73E+00, 1.79E+00, 2.19E+00, 2.75E+00, 3.47E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.18E-01, 7.97E-01, 8.68E-01, 8.68E-01, 8.28E-01, 8.06E-01, 7.96E-01, 7.91E-01, 7.73E-01, 7.23E-01, 5.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.69E-01, 1.15E+00, 1.25E+00, 1.26E+00, 1.19E+00, 1.12E+00, 1.08E+00, 1.04E+00, 9.58E-01, 8.85E-01, 7.94E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.55E-01, 6.55E-01, 6.84E-01, 6.82E-01, 6.59E-01, 6.43E-01, 6.34E-01, 6.28E-01, 6.12E-01, 5.79E-01, 4.77E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.74E-01, 9.07E-01, 9.10E-01, 8.63E-01, 7.59E-01, 6.71E-01, 6.03E-01, 5.50E-01, 3.97E-01, 2.74E-01, 1.60E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.16E-01, 3.86E-01, 4.86E-01, 5.30E-01, 5.10E-01, 4.70E-01, 4.34E-01, 4.04E-01, 3.11E-01, 2.28E-01, 1.40E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.89E-01, 1.66E+00, 2.54E+00, 4.04E+00, 7.02E+00, 9.93E+00, 1.26E+01, 1.49E+01, 2.31E+01, 2.97E+01, 3.12E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.82E-01, 8.29E-01, 1.37E+00, 2.28E+00, 4.09E+00, 5.84E+00, 7.42E+00, 8.83E+00, 1.37E+01, 1.77E+01, 1.87E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.13E-01, 2.72E-01, 4.65E-01, 7.82E-01, 1.38E+00, 1.96E+00, 2.48E+00, 2.94E+00, 4.55E+00, 5.88E+00, 6.23E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_3P1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.67E-01, 4.60E-01, 6.39E-01, 7.51E-01, 7.63E-01, 7.42E-01, 7.23E-01, 7.07E-01, 6.47E-01, 5.57E-01, 3.99E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.49E-01, 5.60E-01, 6.84E-01, 7.54E-01, 8.24E-01, 8.91E-01, 9.59E-01, 1.02E+00, 1.32E+00, 1.74E+00, 2.50E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.51E-01, 5.45E-01, 6.32E-01, 6.14E-01, 5.10E-01, 4.30E-01, 3.73E-01, 3.31E-01, 2.21E-01, 1.45E-01, 8.39E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.30E-02, 7.72E-02, 9.62E-02, 9.25E-02, 7.28E-02, 5.94E-02, 5.04E-02, 4.41E-02, 2.85E-02, 1.81E-02, 9.66E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.19E-02, 3.88E-02, 4.54E-02, 4.61E-02, 4.20E-02, 3.76E-02, 3.40E-02, 3.09E-02, 2.16E-02, 1.39E-02, 6.96E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.76E-01, 2.41E-01, 2.77E-01, 2.94E-01, 2.77E-01, 2.51E-01, 2.28E-01, 2.09E-01, 1.50E-01, 9.89E-02, 5.09E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.90E-02, 3.32E-02, 4.43E-02, 4.86E-02, 4.47E-02, 3.99E-02, 3.58E-02, 3.25E-02, 2.26E-02, 1.44E-02, 7.20E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.52E-01, 2.53E-01, 3.08E-01, 3.29E-01, 3.55E-01, 3.88E-01, 4.21E-01, 4.51E-01, 5.59E-01, 6.46E-01, 6.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.17E-02, 1.56E-01, 1.93E-01, 2.02E-01, 1.82E-01, 1.63E-01, 1.48E-01, 1.36E-01, 1.03E-01, 7.38E-02, 4.37E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.60E-01, 5.84E-01, 6.12E-01, 5.82E-01, 5.10E-01, 4.58E-01, 4.20E-01, 3.91E-01, 3.04E-01, 2.24E-01, 1.33E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.70E-01, 7.97E-01, 8.03E-01, 7.74E-01, 7.90E-01, 8.62E-01, 9.54E-01, 1.05E+00, 1.50E+00, 2.07E+00, 2.95E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.41E-01, 1.86E+00, 3.49E+00, 6.72E+00, 1.27E+01, 1.77E+01, 2.18E+01, 2.52E+01, 3.54E+01, 4.20E+01, 4.10E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.02E-01, 2.44E-01, 2.58E-01, 2.50E-01, 2.16E-01, 1.87E-01, 1.65E-01, 1.48E-01, 1.01E-01, 6.51E-02, 3.30E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.72E-01, 3.59E-01, 4.03E-01, 4.09E-01, 3.73E-01, 3.39E-01, 3.11E-01, 2.89E-01, 2.19E-01, 1.56E-01, 8.93E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E-01, 1.78E-01, 2.06E-01, 2.30E-01, 2.32E-01, 2.17E-01, 2.03E-01, 1.92E-01, 1.65E-01, 1.52E-01, 1.48E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.14E-02, 9.60E-02, 1.32E-01, 1.82E-01, 2.64E-01, 3.30E-01, 3.84E-01, 4.28E-01, 5.61E-01, 6.41E-01, 6.04E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.85E-01, 2.65E-01, 3.07E-01, 3.20E-01, 2.90E-01, 2.55E-01, 2.27E-01, 2.05E-01, 1.44E-01, 1.00E-01, 6.66E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.67E-02, 1.04E-01, 1.21E-01, 1.28E-01, 1.24E-01, 1.18E-01, 1.14E-01, 1.11E-01, 1.10E-01, 1.24E-01, 1.84E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-01, 1.66E-01, 2.03E-01, 2.24E-01, 2.23E-01, 2.13E-01, 2.04E-01, 1.95E-01, 1.63E-01, 1.26E-01, 7.86E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.38E-01, 2.59E-01, 4.66E-01, 9.48E-01, 2.04E+00, 3.11E+00, 4.06E+00, 4.89E+00, 7.62E+00, 9.59E+00, 9.53E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-02, 2.19E-02, 3.25E-02, 4.26E-02, 4.73E-02, 4.59E-02, 4.32E-02, 4.03E-02, 2.93E-02, 1.90E-02, 9.47E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_3P2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.83E-01, 1.71E+00, 2.25E+00, 2.60E+00, 2.82E+00, 2.98E+00, 3.13E+00, 3.27E+00, 3.92E+00, 4.80E+00, 6.37E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.94E-01, 1.61E+00, 1.93E+00, 1.91E+00, 1.58E+00, 1.32E+00, 1.14E+00, 1.00E+00, 6.63E-01, 4.35E-01, 2.52E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.51E-01, 2.17E-01, 2.34E-01, 2.14E-01, 1.69E-01, 1.39E-01, 1.20E-01, 1.06E-01, 6.93E-02, 4.44E-02, 2.39E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.17E-01, 1.56E+00, 2.98E+00, 5.50E+00, 9.04E+00, 1.13E+01, 1.27E+01, 1.37E+01, 1.59E+01, 1.63E+01, 1.41E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.04E-01, 7.62E-01, 8.52E-01, 8.69E-01, 7.87E-01, 7.02E-01, 6.34E-01, 5.80E-01, 4.18E-01, 2.82E-01, 1.55E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.77E-01, 2.99E-01, 3.51E-01, 3.61E-01, 3.93E-01, 4.45E-01, 4.97E-01, 5.44E-01, 6.96E-01, 7.87E-01, 7.26E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.96E-01, 4.82E-01, 5.77E-01, 6.08E-01, 6.47E-01, 7.02E-01, 7.57E-01, 8.04E-01, 9.46E-01, 9.97E-01, 8.46E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.71E-01, 8.07E-01, 9.71E-01, 9.96E-01, 9.55E-01, 9.44E-01, 9.52E-01, 9.69E-01, 1.07E+00, 1.20E+00, 1.30E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 1.73E+00, 2.11E+00, 2.74E+00, 3.93E+00, 4.98E+00, 5.87E+00, 6.62E+00, 9.01E+00, 1.07E+01, 1.07E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.18E+00, 1.45E+00, 1.54E+00, 1.50E+00, 1.36E+00, 1.28E+00, 1.22E+00, 1.19E+00, 1.15E+00, 1.18E+00, 1.29E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.48E-01, 1.79E+00, 3.05E+00, 5.44E+00, 9.79E+00, 1.34E+01, 1.64E+01, 1.88E+01, 2.63E+01, 3.12E+01, 3.06E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.00E+00, 1.20E+00, 1.27E+00, 1.26E+00, 1.22E+00, 1.25E+00, 1.31E+00, 1.39E+00, 1.79E+00, 2.34E+00, 3.23E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.70E+00, 3.73E+00, 7.24E+00, 1.42E+01, 2.67E+01, 3.70E+01, 4.54E+01, 5.22E+01, 7.27E+01, 8.59E+01, 8.34E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.81E-01, 1.18E+00, 1.32E+00, 1.35E+00, 1.28E+00, 1.23E+00, 1.21E+00, 1.21E+00, 1.25E+00, 1.35E+00, 1.56E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.77E-01, 2.50E-01, 3.08E-01, 3.58E-01, 4.05E-01, 4.36E-01, 4.61E-01, 4.83E-01, 5.54E-01, 6.01E-01, 5.67E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.10E-01, 1.01E+00, 1.14E+00, 1.11E+00, 9.34E-01, 7.96E-01, 6.95E-01, 6.20E-01, 4.16E-01, 2.68E-01, 1.46E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.35E-01, 3.20E-01, 3.70E-01, 3.80E-01, 3.51E-01, 3.24E-01, 3.05E-01, 2.90E-01, 2.48E-01, 2.11E-01, 1.59E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.76E-01, 7.65E-01, 1.08E+00, 1.60E+00, 2.71E+00, 3.81E+00, 4.79E+00, 5.65E+00, 8.46E+00, 1.04E+01, 1.02E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.98E-01, 3.68E-01, 6.07E-01, 1.09E+00, 2.11E+00, 3.08E+00, 3.95E+00, 4.70E+00, 7.20E+00, 9.00E+00, 8.94E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.36E-02, 2.47E-01, 5.11E-01, 1.08E+00, 2.32E+00, 3.52E+00, 4.59E+00, 5.54E+00, 8.68E+00, 1.10E+01, 1.10E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3p_1D2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.59E+00, 2.61E+00, 3.13E+00, 3.13E+00, 2.66E+00, 2.26E+00, 1.97E+00, 1.75E+00, 1.16E+00, 7.60E-01, 4.36E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.30E-01, 3.48E-01, 3.93E-01, 3.68E-01, 2.94E-01, 2.44E-01, 2.10E-01, 1.85E-01, 1.22E-01, 7.81E-02, 4.21E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.49E-02, 1.78E-01, 2.31E-01, 2.48E-01, 2.35E-01, 2.15E-01, 1.98E-01, 1.84E-01, 1.40E-01, 9.92E-02, 5.74E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.04E+00, 1.33E+00, 1.47E+00, 1.53E+00, 1.43E+00, 1.29E+00, 1.17E+00, 1.07E+00, 7.61E-01, 5.01E-01, 2.61E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.13E-01, 1.74E-01, 2.00E-01, 1.94E-01, 1.66E-01, 1.46E-01, 1.33E-01, 1.22E-01, 9.31E-02, 6.73E-02, 3.93E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.33E-01, 7.25E-01, 8.60E-01, 8.86E-01, 9.16E-01, 9.80E-01, 1.05E+00, 1.11E+00, 1.31E+00, 1.39E+00, 1.21E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.48E-01, 1.65E+00, 2.02E+00, 2.25E+00, 2.70E+00, 3.16E+00, 3.57E+00, 3.91E+00, 4.90E+00, 5.33E+00, 4.60E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.82E-01, 1.09E+00, 1.23E+00, 1.44E+00, 1.75E+00, 2.03E+00, 2.30E+00, 2.57E+00, 3.68E+00, 5.32E+00, 9.75E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.08E+00, 3.07E+00, 4.27E+00, 6.43E+00, 1.04E+01, 1.36E+01, 1.64E+01, 1.86E+01, 2.53E+01, 2.97E+01, 2.88E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.96E-01, 1.01E+00, 1.15E+00, 1.39E+00, 1.75E+00, 2.03E+00, 2.30E+00, 2.55E+00, 3.56E+00, 4.81E+00, 7.21E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.40E+00, 4.08E+00, 4.19E+00, 3.95E+00, 3.58E+00, 3.45E+00, 3.44E+00, 3.48E+00, 3.85E+00, 4.47E+00, 5.57E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.78E+00, 2.80E+00, 4.06E+00, 6.27E+00, 1.01E+01, 1.34E+01, 1.60E+01, 1.83E+01, 2.51E+01, 2.99E+01, 2.96E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.18E+00, 8.06E+00, 1.40E+01, 2.56E+01, 4.62E+01, 6.32E+01, 7.69E+01, 8.81E+01, 1.22E+02, 1.44E+02, 1.40E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.37E-01, 4.73E-01, 5.52E-01, 5.75E-01, 5.30E-01, 4.79E-01, 4.38E-01, 4.05E-01, 3.20E-01, 2.66E-01, 2.41E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.19E+00, 1.66E+00, 1.91E+00, 2.02E+00, 1.90E+00, 1.73E+00, 1.59E+00, 1.48E+00, 1.18E+00, 9.46E-01, 6.81E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.18E-01, 5.62E-01, 6.48E-01, 6.75E-01, 6.19E-01, 5.52E-01, 4.96E-01, 4.50E-01, 3.15E-01, 2.06E-01, 1.08E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.25E+00, 2.06E+00, 3.09E+00, 5.08E+00, 9.39E+00, 1.36E+01, 1.74E+01, 2.08E+01, 3.18E+01, 3.99E+01, 3.96E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.39E-01, 7.68E-01, 1.17E+00, 1.88E+00, 3.35E+00, 4.77E+00, 6.06E+00, 7.18E+00, 1.09E+01, 1.37E+01, 1.37E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.80E-02, 1.03E-01, 1.46E-01, 1.77E-01, 1.91E-01, 1.91E-01, 1.87E-01, 1.83E-01, 1.59E-01, 1.26E-01, 7.99E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3p_1S0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.94E-01, 1.16E+00, 1.52E+00, 1.92E+00, 2.53E+00, 3.06E+00, 3.55E+00, 4.00E+00, 5.82E+00, 8.28E+00, 1.32E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.30E-01, 2.17E-01, 2.47E-01, 2.41E-01, 2.09E-01, 1.80E-01, 1.57E-01, 1.39E-01, 8.99E-02, 5.39E-02, 2.52E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.63E+00, 6.04E+00, 9.41E+00, 1.56E+01, 2.55E+01, 3.27E+01, 3.80E+01, 4.22E+01, 5.34E+01, 5.94E+01, 5.55E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.55E-01, 2.13E-01, 2.40E-01, 2.45E-01, 2.23E-01, 1.98E-01, 1.77E-01, 1.60E-01, 1.09E-01, 6.91E-02, 3.43E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.13E-01, 7.14E-01, 8.18E-01, 8.72E-01, 8.89E-01, 8.91E-01, 8.90E-01, 8.88E-01, 8.68E-01, 8.05E-01, 6.30E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.30E-01, 1.25E+00, 1.39E+00, 1.43E+00, 1.31E+00, 1.17E+00, 1.05E+00, 9.48E-01, 6.61E-01, 4.44E-01, 2.90E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.02E+00, 1.34E+00, 1.56E+00, 1.77E+00, 1.77E+00, 1.62E+00, 1.46E+00, 1.34E+00, 9.45E-01, 6.29E-01, 3.47E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.62E+00, 2.17E+00, 2.55E+00, 2.81E+00, 2.96E+00, 3.03E+00, 3.08E+00, 3.12E+00, 3.22E+00, 3.15E+00, 2.67E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.83E-01, 1.12E+00, 1.26E+00, 1.57E+00, 1.83E+00, 1.88E+00, 1.87E+00, 1.85E+00, 1.76E+00, 1.61E+00, 1.26E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.78E+00, 2.37E+00, 2.68E+00, 2.69E+00, 2.39E+00, 2.12E+00, 1.90E+00, 1.73E+00, 1.22E+00, 7.89E-01, 3.98E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.37E+00, 1.77E+00, 1.92E+00, 1.88E+00, 1.62E+00, 1.40E+00, 1.22E+00, 1.09E+00, 7.21E-01, 4.53E-01, 2.31E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.59E+00, 2.08E+00, 2.41E+00, 2.87E+00, 2.99E+00, 2.74E+00, 2.46E+00, 2.22E+00, 1.50E+00, 9.40E-01, 4.81E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.29E+00, 4.30E+00, 7.33E+00, 1.38E+01, 2.59E+01, 3.57E+01, 4.32E+01, 4.91E+01, 6.49E+01, 7.19E+01, 6.38E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.18E+00, 1.39E+01, 2.75E+01, 5.35E+01, 9.68E+01, 1.30E+02, 1.56E+02, 1.76E+02, 2.34E+02, 2.67E+02, 2.51E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.40E+00, 1.86E+00, 2.05E+00, 2.23E+00, 2.65E+00, 3.11E+00, 3.55E+00, 3.94E+00, 5.29E+00, 6.33E+00, 6.31E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.65E-01, 1.14E+00, 1.29E+00, 1.36E+00, 1.23E+00, 1.07E+00, 9.35E-01, 8.32E-01, 5.49E-01, 3.42E-01, 1.73E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.58E-01, 4.92E-01, 5.68E-01, 5.87E-01, 5.32E-01, 4.69E-01, 4.17E-01, 3.77E-01, 2.61E-01, 1.73E-01, 9.47E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.56E-02, 1.16E-01, 1.57E-01, 1.79E-01, 1.68E-01, 1.49E-01, 1.32E-01, 1.18E-01, 7.88E-02, 4.92E-02, 2.43E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s_2p3_3Po {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.37E-02, 5.31E-02, 5.02E-02, 4.42E-02, 3.69E-02, 3.18E-02, 2.79E-02, 2.50E-02, 1.67E-02, 1.05E-02, 5.22E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s_2p3_3Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.94E-01, 1.02E+00, 1.08E+00, 1.03E+00, 9.27E-01, 8.61E-01, 8.16E-01, 7.81E-01, 6.62E-01, 5.22E-01, 3.36E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.82E-02, 6.16E-02, 7.30E-02, 8.08E-02, 7.84E-02, 7.18E-02, 6.56E-02, 6.02E-02, 4.29E-02, 2.78E-02, 1.40E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.58E-01, 2.00E-01, 2.47E-01, 2.98E-01, 3.37E-01, 3.51E-01, 3.56E-01, 3.57E-01, 3.45E-01, 3.10E-01, 2.34E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.59E-01, 3.11E-01, 3.66E-01, 4.15E-01, 4.11E-01, 3.78E-01, 3.46E-01, 3.18E-01, 2.26E-01, 1.47E-01, 7.35E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.24E-01, 4.16E-01, 4.37E-01, 4.24E-01, 3.68E-01, 3.16E-01, 2.76E-01, 2.44E-01, 1.59E-01, 9.70E-02, 4.70E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.65E-01, 6.02E-01, 6.20E-01, 5.65E-01, 4.58E-01, 3.85E-01, 3.35E-01, 2.99E-01, 2.06E-01, 1.44E-01, 1.00E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.71E-01, 2.77E-01, 4.11E-01, 6.37E-01, 9.44E-01, 1.13E+00, 1.26E+00, 1.35E+00, 1.56E+00, 1.61E+00, 1.38E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.68E-01, 7.49E-01, 7.99E-01, 7.45E-01, 6.05E-01, 5.05E-01, 4.36E-01, 3.84E-01, 2.50E-01, 1.55E-01, 7.64E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.19E-01, 2.69E-01, 2.88E-01, 2.77E-01, 2.32E-01, 1.94E-01, 1.67E-01, 1.47E-01, 9.25E-02, 5.53E-02, 2.64E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.24E-01, 4.33E-01, 4.85E-01, 5.27E-01, 5.04E-01, 4.44E-01, 3.89E-01, 3.44E-01, 2.18E-01, 1.29E-01, 6.07E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.06E+00, 3.11E+00, 6.99E+00, 1.43E+01, 2.55E+01, 3.33E+01, 3.87E+01, 4.27E+01, 5.23E+01, 5.53E+01, 4.78E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-01, 5.84E-01, 7.06E-01, 8.80E-01, 1.14E+00, 1.36E+00, 1.56E+00, 1.75E+00, 2.48E+00, 3.33E+00, 4.67E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.89E-01, 2.25E+00, 4.89E+00, 9.66E+00, 1.70E+01, 2.24E+01, 2.63E+01, 2.94E+01, 3.77E+01, 4.19E+01, 3.89E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.32E-01, 4.41E-01, 4.91E-01, 4.98E-01, 4.42E-01, 3.84E-01, 3.37E-01, 3.01E-01, 1.98E-01, 1.22E-01, 5.94E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.65E-02, 1.49E-01, 1.88E-01, 2.12E-01, 2.09E-01, 1.95E-01, 1.81E-01, 1.69E-01, 1.30E-01, 9.59E-02, 6.01E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.40E-02, 2.78E-02, 4.00E-02, 4.95E-02, 5.13E-02, 4.80E-02, 4.42E-02, 4.08E-02, 2.93E-02, 1.92E-02, 9.76E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.45E-01, 2.00E-01, 2.22E-01, 2.11E-01, 1.73E-01, 1.45E-01, 1.26E-01, 1.12E-01, 7.34E-02, 4.56E-02, 2.27E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.82E-01, 9.77E-01, 1.49E+00, 2.05E+00, 2.66E+00, 3.07E+00, 3.37E+00, 3.60E+00, 4.28E+00, 4.74E+00, 4.92E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.65E-01, 2.19E-01, 2.26E-01, 2.06E-01, 1.76E-01, 1.60E-01, 1.51E-01, 1.45E-01, 1.30E-01, 1.14E-01, 8.56E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.14E-01, 2.56E-01, 2.67E-01, 2.55E-01, 2.25E-01, 2.03E-01, 1.87E-01, 1.74E-01, 1.38E-01, 1.06E-01, 7.07E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.73E-01, 7.77E-01, 1.04E+00, 1.25E+00, 1.44E+00, 1.58E+00, 1.70E+00, 1.82E+00, 2.22E+00, 2.54E+00, 2.47E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.97E-01, 3.41E-01, 3.33E-01, 2.91E-01, 2.29E-01, 1.90E-01, 1.64E-01, 1.45E-01, 9.54E-02, 5.93E-02, 2.96E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-01, 1.44E-01, 1.65E-01, 1.90E-01, 2.27E-01, 2.52E-01, 2.69E-01, 2.80E-01, 2.94E-01, 2.70E-01, 1.99E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.46E-02, 1.51E-01, 1.98E-01, 2.17E-01, 2.03E-01, 1.87E-01, 1.75E-01, 1.68E-01, 1.55E-01, 1.57E-01, 1.68E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.44E-01, 7.60E-01, 1.04E+00, 1.26E+00, 1.41E+00, 1.50E+00, 1.58E+00, 1.65E+00, 1.92E+00, 2.16E+00, 2.14E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.80E-02, 1.27E-01, 1.57E-01, 1.64E-01, 1.49E-01, 1.33E-01, 1.21E-01, 1.11E-01, 8.13E-02, 5.64E-02, 3.27E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.98E-02, 8.48E-02, 8.76E-02, 8.13E-02, 6.84E-02, 6.05E-02, 5.53E-02, 5.16E-02, 4.11E-02, 3.17E-02, 2.08E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.12E-01, 2.53E-01, 2.50E-01, 2.23E-01, 1.80E-01, 1.52E-01, 1.33E-01, 1.18E-01, 7.85E-02, 4.97E-02, 2.60E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.75E-02, 1.08E-01, 1.11E-01, 1.01E-01, 8.42E-02, 7.44E-02, 6.78E-02, 6.29E-02, 4.81E-02, 3.45E-02, 2.03E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.51E-01, 1.85E-01, 2.02E-01, 2.06E-01, 2.09E-01, 2.16E-01, 2.25E-01, 2.34E-01, 2.68E-01, 2.85E-01, 2.54E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.91E-02, 7.02E-02, 1.04E-01, 1.59E-01, 2.59E-01, 3.31E-01, 3.76E-01, 4.04E-01, 4.41E-01, 4.08E-01, 3.02E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.04E-01, 4.04E-01, 1.03E+00, 2.29E+00, 4.37E+00, 5.97E+00, 7.22E+00, 8.23E+00, 1.13E+01, 1.37E+01, 1.53E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.99E-01, 3.15E-01, 3.51E-01, 3.25E-01, 2.58E-01, 2.13E-01, 1.81E-01, 1.58E-01, 9.94E-02, 5.99E-02, 2.97E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.44E-01, 1.05E+00, 1.21E+00, 1.15E+00, 9.69E-01, 8.51E-01, 7.76E-01, 7.26E-01, 6.12E-01, 5.36E-01, 4.28E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.74E-01, 1.56E+00, 1.76E+00, 1.65E+00, 1.34E+00, 1.11E+00, 9.57E-01, 8.42E-01, 5.45E-01, 3.45E-01, 1.89E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.73E-01, 1.54E+00, 1.92E+00, 2.09E+00, 1.94E+00, 1.72E+00, 1.54E+00, 1.39E+00, 9.53E-01, 6.24E-01, 3.44E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.16E+00, 1.94E+00, 2.45E+00, 2.62E+00, 2.40E+00, 2.16E+00, 1.97E+00, 1.83E+00, 1.44E+00, 1.14E+00, 8.17E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.61E-01, 6.90E-01, 9.93E-01, 1.30E+00, 1.41E+00, 1.34E+00, 1.24E+00, 1.16E+00, 8.78E-01, 6.31E-01, 3.80E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 1.97E+00, 2.49E+00, 2.67E+00, 2.39E+00, 2.09E+00, 1.85E+00, 1.67E+00, 1.16E+00, 7.81E-01, 4.58E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.74E-01, 1.21E+00, 1.61E+00, 1.83E+00, 1.77E+00, 1.62E+00, 1.48E+00, 1.37E+00, 1.03E+00, 7.37E-01, 4.48E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.21E-01, 1.52E+00, 2.12E+00, 2.69E+00, 2.83E+00, 2.64E+00, 2.42E+00, 2.23E+00, 1.62E+00, 1.12E+00, 6.58E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.48E+00, 2.93E+00, 4.22E+00, 5.39E+00, 6.43E+00, 7.04E+00, 7.49E+00, 7.84E+00, 8.77E+00, 8.95E+00, 7.56E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.68E+00, 4.93E+00, 6.96E+00, 8.80E+00, 1.05E+01, 1.17E+01, 1.26E+01, 1.35E+01, 1.61E+01, 1.79E+01, 1.70E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.04E+00, 4.26E+00, 6.39E+00, 8.62E+00, 1.08E+01, 1.23E+01, 1.36E+01, 1.47E+01, 1.87E+01, 2.20E+01, 2.20E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.16E-01, 1.26E+00, 1.49E+00, 1.51E+00, 1.30E+00, 1.11E+00, 9.73E-01, 8.65E-01, 5.72E-01, 3.60E-01, 1.86E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.52E-01, 4.64E-01, 6.06E-01, 6.52E-01, 5.90E-01, 5.20E-01, 4.64E-01, 4.19E-01, 2.88E-01, 1.85E-01, 9.57E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.89E-02, 1.11E-01, 1.61E-01, 1.83E-01, 1.72E-01, 1.53E-01, 1.37E-01, 1.24E-01, 8.57E-02, 5.53E-02, 2.91E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.01E-01, 5.32E-01, 5.89E-01, 5.81E-01, 5.34E-01, 5.07E-01, 4.87E-01, 4.72E-01, 4.11E-01, 3.31E-01, 2.19E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.30E-01, 1.47E+00, 1.90E+00, 2.37E+00, 2.92E+00, 3.33E+00, 3.68E+00, 4.00E+00, 5.11E+00, 5.99E+00, 5.94E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.61E+00, 2.74E+00, 3.67E+00, 4.54E+00, 5.34E+00, 5.90E+00, 6.39E+00, 6.84E+00, 8.41E+00, 9.58E+00, 9.21E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.98E-01, 8.67E-01, 9.18E-01, 8.27E-01, 6.57E-01, 5.48E-01, 4.72E-01, 4.17E-01, 2.69E-01, 1.62E-01, 7.76E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.15E-01, 3.35E-01, 3.95E-01, 4.11E-01, 3.84E-01, 3.53E-01, 3.29E-01, 3.10E-01, 2.54E-01, 2.00E-01, 1.30E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.65E-01, 2.94E-01, 3.79E-01, 3.98E-01, 3.56E-01, 3.25E-01, 3.08E-01, 3.01E-01, 3.07E-01, 3.44E-01, 4.22E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.23E-01, 3.35E-01, 3.83E-01, 3.83E-01, 3.44E-01, 3.12E-01, 2.90E-01, 2.75E-01, 2.43E-01, 2.26E-01, 2.13E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.70E-02, 1.58E-01, 2.19E-01, 2.74E-01, 2.81E-01, 2.56E-01, 2.29E-01, 2.07E-01, 1.41E-01, 9.12E-02, 5.16E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.82E-01, 2.24E-01, 2.38E-01, 2.33E-01, 2.12E-01, 1.93E-01, 1.79E-01, 1.67E-01, 1.31E-01, 1.02E-01, 7.15E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.92E-01, 3.25E-01, 4.00E-01, 4.20E-01, 3.76E-01, 3.27E-01, 2.88E-01, 2.57E-01, 1.70E-01, 1.05E-01, 5.30E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.80E-01, 2.39E-01, 2.58E-01, 2.43E-01, 2.00E-01, 1.69E-01, 1.47E-01, 1.31E-01, 8.76E-02, 5.66E-02, 3.06E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.85E-01, 8.98E-01, 1.16E+00, 1.41E+00, 1.65E+00, 1.83E+00, 2.00E+00, 2.15E+00, 2.72E+00, 3.18E+00, 3.13E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.15E-01, 2.32E-01, 3.47E-01, 4.26E-01, 4.52E-01, 4.53E-01, 4.51E-01, 4.48E-01, 4.24E-01, 3.65E-01, 2.46E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.86E-01, 7.82E-01, 1.26E+00, 1.60E+00, 1.71E+00, 1.67E+00, 1.62E+00, 1.56E+00, 1.34E+00, 1.11E+00, 8.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_4s_3Po0__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_4s_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.14E+00, 3.20E+00, 3.95E+00, 4.70E+00, 5.55E+00, 6.18E+00, 6.73E+00, 7.22E+00, 8.96E+00, 1.03E+01, 1.02E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_4s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.07E+00, 3.41E+00, 4.34E+00, 5.15E+00, 5.82E+00, 6.24E+00, 6.61E+00, 6.96E+00, 8.27E+00, 9.31E+00, 9.01E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.98E+00, 6.42E+00, 8.30E+00, 9.99E+00, 1.15E+01, 1.26E+01, 1.35E+01, 1.44E+01, 1.76E+01, 2.00E+01, 1.91E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.80E-01, 1.53E+00, 1.91E+00, 2.26E+00, 2.44E+00, 2.45E+00, 2.44E+00, 2.45E+00, 2.48E+00, 2.43E+00, 2.04E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.22E-01, 1.21E+00, 1.44E+00, 1.44E+00, 1.24E+00, 1.09E+00, 9.92E-01, 9.26E-01, 7.88E-01, 7.39E-01, 7.74E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.04E-01, 1.31E+00, 1.68E+00, 1.94E+00, 2.05E+00, 2.06E+00, 2.07E+00, 2.09E+00, 2.21E+00, 2.26E+00, 1.99E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.76E-01, 8.90E-01, 1.11E+00, 1.47E+00, 1.64E+00, 1.54E+00, 1.41E+00, 1.29E+00, 9.60E-01, 7.50E-01, 6.39E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.94E-01, 7.71E-01, 8.27E-01, 8.09E-01, 7.36E-01, 6.73E-01, 6.22E-01, 5.81E-01, 4.63E-01, 3.71E-01, 2.78E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.37E-01, 1.18E+00, 1.39E+00, 1.54E+00, 1.50E+00, 1.34E+00, 1.19E+00, 1.07E+00, 7.01E-01, 4.29E-01, 2.14E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.16E-01, 7.56E-01, 8.67E-01, 8.89E-01, 8.05E-01, 7.14E-01, 6.41E-01, 5.84E-01, 4.22E-01, 2.99E-01, 1.87E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.73E+00, 2.66E+00, 3.46E+00, 4.20E+00, 4.81E+00, 5.22E+00, 5.61E+00, 5.96E+00, 7.28E+00, 8.27E+00, 7.98E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.56E+00, 3.40E+00, 5.11E+00, 6.37E+00, 7.04E+00, 7.26E+00, 7.37E+00, 7.42E+00, 7.48E+00, 7.52E+00, 7.44E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.68E-02, 2.10E-01, 3.11E-01, 3.81E-01, 4.04E-01, 4.04E-01, 4.01E-01, 3.98E-01, 3.73E-01, 3.18E-01, 2.13E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_4s_3Po1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.78E-01, 1.30E+00, 1.80E+00, 2.29E+00, 2.52E+00, 2.49E+00, 2.45E+00, 2.42E+00, 2.43E+00, 2.62E+00, 3.19E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.45E+00, 2.42E+00, 3.10E+00, 3.55E+00, 3.71E+00, 3.76E+00, 3.82E+00, 3.91E+00, 4.33E+00, 4.75E+00, 4.61E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.19E-01, 1.00E+00, 1.31E+00, 1.83E+00, 2.16E+00, 2.11E+00, 1.99E+00, 1.89E+00, 1.56E+00, 1.30E+00, 9.60E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.20E+00, 1.10E+01, 1.38E+01, 1.64E+01, 1.88E+01, 2.05E+01, 2.21E+01, 2.35E+01, 2.87E+01, 3.27E+01, 3.17E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.29E+00, 3.51E+00, 4.26E+00, 4.73E+00, 4.90E+00, 4.92E+00, 4.96E+00, 5.01E+00, 5.27E+00, 5.35E+00, 4.65E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.00E+00, 6.12E+00, 7.63E+00, 9.38E+00, 1.07E+01, 1.11E+01, 1.13E+01, 1.15E+01, 1.25E+01, 1.30E+01, 1.16E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 1.52E+00, 1.58E+00, 1.54E+00, 1.41E+00, 1.30E+00, 1.22E+00, 1.15E+00, 9.41E-01, 7.71E-01, 5.74E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.55E+00, 2.38E+00, 2.79E+00, 3.17E+00, 3.17E+00, 2.86E+00, 2.55E+00, 2.29E+00, 1.51E+00, 9.45E-01, 5.30E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.60E-01, 1.24E+00, 1.41E+00, 1.49E+00, 1.39E+00, 1.22E+00, 1.08E+00, 9.65E-01, 6.43E-01, 4.08E-01, 2.18E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.12E+00, 7.79E+00, 1.11E+01, 1.38E+01, 1.55E+01, 1.64E+01, 1.69E+01, 1.74E+01, 1.89E+01, 2.18E+01, 2.84E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.20E+00, 2.14E+00, 2.95E+00, 3.61E+00, 4.12E+00, 4.47E+00, 4.80E+00, 5.11E+00, 6.23E+00, 7.09E+00, 6.83E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.14E-01, 7.43E-01, 9.86E-01, 1.16E+00, 1.29E+00, 1.40E+00, 1.50E+00, 1.60E+00, 1.97E+00, 2.28E+00, 2.23E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_4s_3Po2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.21E+00, 3.90E+00, 5.33E+00, 6.20E+00, 6.34E+00, 6.29E+00, 6.31E+00, 6.37E+00, 6.80E+00, 7.27E+00, 6.99E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.51E-01, 1.47E+00, 2.07E+00, 2.43E+00, 2.50E+00, 2.49E+00, 2.49E+00, 2.50E+00, 2.63E+00, 2.72E+00, 2.50E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.79E-01, 6.90E-01, 9.34E-01, 1.03E+00, 9.42E-01, 8.42E-01, 7.66E-01, 7.07E-01, 5.50E-01, 4.33E-01, 3.09E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E+00, 1.61E+00, 1.97E+00, 2.12E+00, 2.07E+00, 2.03E+00, 2.02E+00, 2.03E+00, 2.19E+00, 2.57E+00, 3.98E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.57E-01, 8.69E-01, 1.10E+00, 1.21E+00, 1.14E+00, 1.02E+00, 9.22E-01, 8.44E-01, 6.27E-01, 4.70E-01, 3.47E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.13E-01, 6.82E-01, 7.89E-01, 7.60E-01, 6.40E-01, 5.52E-01, 4.88E-01, 4.41E-01, 3.10E-01, 2.12E-01, 1.24E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.26E-01, 1.39E+00, 1.88E+00, 2.13E+00, 2.00E+00, 1.81E+00, 1.65E+00, 1.53E+00, 1.17E+00, 8.90E-01, 6.07E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.64E-01, 9.03E-01, 1.09E+00, 1.11E+00, 9.72E-01, 8.46E-01, 7.53E-01, 6.82E-01, 4.97E-01, 3.65E-01, 2.45E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.07E+00, 1.93E+00, 2.41E+00, 2.48E+00, 2.22E+00, 2.04E+00, 1.94E+00, 1.89E+00, 1.91E+00, 2.16E+00, 3.06E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.00E-01, 7.47E-01, 9.55E-01, 1.01E+00, 9.27E-01, 8.50E-01, 7.92E-01, 7.47E-01, 6.22E-01, 5.21E-01, 4.28E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.95E-01, 6.58E-01, 9.77E-01, 1.26E+00, 1.50E+00, 1.65E+00, 1.77E+00, 1.87E+00, 2.18E+00, 2.32E+00, 2.06E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.17E-01, 1.73E+00, 2.53E+00, 3.05E+00, 3.21E+00, 3.25E+00, 3.32E+00, 3.42E+00, 3.94E+00, 4.48E+00, 4.46E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.59E+00, 2.18E+00, 2.61E+00, 2.74E+00, 2.56E+00, 2.39E+00, 2.28E+00, 2.20E+00, 2.08E+00, 2.19E+00, 2.82E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 2.31E+00, 3.19E+00, 3.78E+00, 4.05E+00, 4.18E+00, 4.33E+00, 4.48E+00, 5.10E+00, 5.60E+00, 5.38E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.90E-01, 1.65E+00, 2.27E+00, 2.64E+00, 2.62E+00, 2.47E+00, 2.33E+00, 2.22E+00, 1.91E+00, 1.66E+00, 1.39E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.46E-01, 9.22E-01, 1.07E+00, 1.03E+00, 8.58E-01, 7.32E-01, 6.41E-01, 5.71E-01, 3.79E-01, 2.37E-01, 1.19E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.36E+00, 2.18E+00, 2.83E+00, 3.14E+00, 2.92E+00, 2.61E+00, 2.35E+00, 2.15E+00, 1.55E+00, 1.08E+00, 6.41E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.67E-01, 1.12E+00, 1.40E+00, 1.46E+00, 1.27E+00, 1.10E+00, 9.65E-01, 8.63E-01, 5.86E-01, 3.87E-01, 2.25E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.27E+00, 2.37E+00, 3.03E+00, 3.23E+00, 3.08E+00, 2.98E+00, 2.95E+00, 2.97E+00, 3.26E+00, 3.91E+00, 5.99E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.26E-01, 1.83E+00, 2.64E+00, 3.23E+00, 3.63E+00, 3.87E+00, 4.07E+00, 4.25E+00, 4.84E+00, 5.14E+00, 4.59E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.26E-01, 2.47E-01, 3.09E-01, 3.17E-01, 2.78E-01, 2.42E-01, 2.14E-01, 1.92E-01, 1.30E-01, 8.36E-02, 4.43E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Fo4 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.92E-01, 1.00E+00, 1.36E+00, 1.50E+00, 1.37E+00, 1.23E+00, 1.13E+00, 1.07E+00, 9.45E-01, 9.33E-01, 1.07E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.12E+00, 1.76E+00, 2.37E+00, 3.05E+00, 3.90E+00, 4.53E+00, 5.04E+00, 5.46E+00, 6.70E+00, 7.37E+00, 6.81E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.09E-01, 1.01E+00, 1.47E+00, 2.06E+00, 2.41E+00, 2.41E+00, 2.36E+00, 2.32E+00, 2.24E+00, 2.23E+00, 2.04E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.92E-01, 5.89E-01, 6.94E-01, 7.27E-01, 7.11E-01, 6.95E-01, 6.87E-01, 6.83E-01, 6.88E-01, 7.04E-01, 6.92E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.69E-01, 9.36E-01, 1.31E+00, 1.61E+00, 1.65E+00, 1.53E+00, 1.40E+00, 1.30E+00, 1.02E+00, 8.05E-01, 5.85E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.74E-01, 5.28E-01, 7.06E-01, 7.88E-01, 7.61E-01, 7.14E-01, 6.75E-01, 6.45E-01, 5.60E-01, 4.82E-01, 3.71E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.27E-01, 1.28E+00, 1.75E+00, 2.03E+00, 2.10E+00, 2.11E+00, 2.14E+00, 2.18E+00, 2.40E+00, 2.58E+00, 2.43E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.42E-01, 1.74E+00, 2.61E+00, 3.49E+00, 4.41E+00, 5.08E+00, 5.66E+00, 6.18E+00, 7.97E+00, 9.34E+00, 9.20E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.60E-02, 1.16E-01, 1.79E-01, 2.37E-01, 3.05E-01, 3.55E-01, 3.93E-01, 4.20E-01, 4.80E-01, 4.75E-01, 3.77E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Do2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.76E+00, 3.36E+00, 4.75E+00, 5.68E+00, 5.97E+00, 6.05E+00, 6.17E+00, 6.33E+00, 7.16E+00, 7.98E+00, 7.83E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.12E+00, 8.70E+00, 1.19E+01, 1.45E+01, 1.63E+01, 1.74E+01, 1.84E+01, 1.94E+01, 2.30E+01, 2.58E+01, 2.51E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.97E-01, 1.49E+00, 1.79E+00, 1.76E+00, 1.50E+00, 1.29E+00, 1.13E+00, 1.01E+00, 6.86E-01, 4.40E-01, 2.44E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.05E+00, 3.30E+00, 4.32E+00, 4.87E+00, 4.64E+00, 4.19E+00, 3.79E+00, 3.46E+00, 2.48E+00, 1.67E+00, 9.38E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.11E+00, 1.83E+00, 2.22E+00, 2.29E+00, 1.99E+00, 1.71E+00, 1.49E+00, 1.33E+00, 8.86E-01, 5.70E-01, 3.13E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.64E+00, 3.21E+00, 4.22E+00, 4.67E+00, 4.58E+00, 4.40E+00, 4.27E+00, 4.18E+00, 3.97E+00, 3.71E+00, 3.05E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.09E-01, 1.66E+00, 2.21E+00, 2.38E+00, 2.17E+00, 1.97E+00, 1.84E+00, 1.77E+00, 1.67E+00, 1.77E+00, 2.35E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.22E-01, 5.13E-01, 7.00E-01, 7.55E-01, 6.94E-01, 6.49E-01, 6.29E-01, 6.24E-01, 6.66E-01, 7.30E-01, 7.07E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Do3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.64E+00, 2.86E+00, 4.03E+00, 5.10E+00, 6.12E+00, 6.85E+00, 7.49E+00, 8.05E+00, 1.00E+01, 1.23E+01, 1.78E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.99E-01, 8.88E-01, 9.78E-01, 9.07E-01, 7.44E-01, 6.39E-01, 5.68E-01, 5.16E-01, 3.81E-01, 2.80E-01, 1.88E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.74E-01, 1.74E+00, 2.36E+00, 2.57E+00, 2.29E+00, 1.99E+00, 1.77E+00, 1.59E+00, 1.13E+00, 7.83E-01, 4.79E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.57E-01, 7.49E-01, 1.01E+00, 1.09E+00, 9.56E-01, 8.32E-01, 7.38E-01, 6.67E-01, 4.75E-01, 3.33E-01, 2.06E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.43E+00, 2.79E+00, 3.92E+00, 4.85E+00, 5.61E+00, 6.15E+00, 6.63E+00, 7.07E+00, 8.64E+00, 9.83E+00, 9.51E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.68E-01, 1.16E+00, 1.69E+00, 2.14E+00, 2.53E+00, 2.79E+00, 3.01E+00, 3.20E+00, 3.74E+00, 3.98E+00, 3.54E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.82E-01, 8.97E-01, 1.41E+00, 1.96E+00, 2.54E+00, 2.98E+00, 3.37E+00, 3.71E+00, 4.95E+00, 5.97E+00, 6.08E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Do2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_4s_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.49E-01, 1.38E+00, 1.49E+00, 1.36E+00, 1.09E+00, 9.24E-01, 8.10E-01, 7.28E-01, 5.20E-01, 3.80E-01, 2.57E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_4s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.12E+00, 2.19E+00, 3.08E+00, 3.51E+00, 3.27E+00, 2.90E+00, 2.59E+00, 2.34E+00, 1.62E+00, 1.07E+00, 6.00E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.08E-01, 1.02E+00, 1.37E+00, 1.47E+00, 1.30E+00, 1.12E+00, 9.87E-01, 8.83E-01, 5.95E-01, 3.80E-01, 2.00E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.35E+00, 4.56E+00, 6.50E+00, 8.34E+00, 1.02E+01, 1.16E+01, 1.28E+01, 1.38E+01, 1.72E+01, 1.96E+01, 1.87E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.56E-01, 1.57E+00, 2.39E+00, 3.01E+00, 3.45E+00, 3.75E+00, 4.03E+00, 4.30E+00, 5.35E+00, 6.30E+00, 6.41E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {9.42E-02, 2.71E-01, 4.24E-01, 4.91E-01, 4.53E-01, 4.01E-01, 3.58E-01, 3.24E-01, 2.26E-01, 1.50E-01, 8.31E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Do3__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_1Fo3 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {6.69E+00, 1.02E+01, 1.29E+01, 1.69E+01, 2.05E+01, 2.22E+01, 2.35E+01, 2.47E+01, 2.88E+01, 3.20E+01, 3.05E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)] = f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_1Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {4.40E+00, 8.85E+00, 1.28E+01, 1.63E+01, 1.91E+01, 2.05E+01, 2.14E+01, 2.20E+01, 2.36E+01, 2.37E+01, 2.07E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {8.54E-01, 1.03E+00, 1.18E+00, 1.61E+00, 1.82E+00, 1.68E+00, 1.50E+00, 1.35E+00, 8.74E-01, 5.26E-01, 2.57E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.79E-01, 5.50E-01, 6.96E-01, 9.27E-01, 1.05E+00, 1.01E+00, 9.55E-01, 9.05E-01, 7.61E-01, 6.51E-01, 5.16E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.44E-02, 1.19E-01, 1.51E-01, 1.78E-01, 1.79E-01, 1.65E-01, 1.51E-01, 1.39E-01, 1.04E-01, 7.48E-02, 4.58E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_4s_1Po1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_1Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.29E+00, 2.25E+00, 2.89E+00, 3.13E+00, 3.07E+00, 3.07E+00, 3.14E+00, 3.26E+00, 3.95E+00, 5.11E+00, 7.99E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.21E+00, 2.02E+00, 2.42E+00, 2.41E+00, 2.04E+00, 1.73E+00, 1.51E+00, 1.34E+00, 9.10E-01, 6.11E-01, 3.65E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {3.50E-01, 7.16E-01, 9.58E-01, 1.05E+00, 9.67E-01, 8.68E-01, 7.88E-01, 7.26E-01, 5.50E-01, 4.15E-01, 2.80E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.94E-02, 1.94E-01, 2.80E-01, 3.16E-01, 2.91E-01, 2.57E-01, 2.29E-01, 2.07E-01, 1.43E-01, 9.49E-02, 5.39E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po2 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.19E-01, 1.07E+00, 1.37E+00, 1.83E+00, 2.00E+00, 1.86E+00, 1.69E+00, 1.53E+00, 1.05E+00, 6.80E-01, 3.72E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.73E-01, 4.74E-01, 6.57E-01, 8.41E-01, 8.92E-01, 8.31E-01, 7.62E-01, 7.00E-01, 5.03E-01, 3.42E-01, 1.98E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {5.31E-02, 1.09E-01, 1.63E-01, 2.17E-01, 2.36E-01, 2.22E-01, 2.04E-01, 1.88E-01, 1.36E-01, 9.09E-02, 5.08E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_3d_3Po1 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {7.74E-01, 1.62E+00, 2.24E+00, 2.53E+00, 2.48E+00, 2.38E+00, 2.30E+00, 2.24E+00, 2.04E+00, 1.77E+00, 1.28E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_3d_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {1.98E-01, 4.02E-01, 5.49E-01, 6.05E-01, 5.78E-01, 5.44E-01, 5.19E-01, 5.00E-01, 4.45E-01, 3.85E-01, 2.94E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_3d_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_3d_3Po0 {
    {1000.0, 2500.0, 5000.0, 10000.0, 20000.0, 30000.0, 40000.0, 50000.0, 100000.0, 200000.0, 500000.0},
    {2.87E-01, 7.58E-01, 1.20E+00, 1.48E+00, 1.56E+00, 1.53E+00, 1.48E+00, 1.42E+00, 1.21E+00, 9.76E-01, 6.92E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_3d_3Po0;

  // C I effective collision strengths by Reid1994.
  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.168E-13, 0.624E-08, 0.637E-05, 0.248E-03, 0.154E-02, 0.394E-02, 0.772E-02, 0.127E-01, 0.175E-01, 0.189E-01, 0.155E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.172E-13, 0.633E-08, 0.643E-05, 0.249E-03, 0.154E-02, 0.395E-02, 0.772E-02, 0.128E-01, 0.175E-01, 0.189E-01, 0.155E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.181E-13, 0.650E-08, 0.653E-05, 0.251E-03, 0.155E-02, 0.396E-02, 0.774E-02, 0.128E-01, 0.175E-01, 0.189E-01, 0.155E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.823E-14, 0.249E-08, 0.228E-05, 0.830E-04, 0.491E-03, 0.112E-02, 0.173E-02, 0.228E-02, 0.272E-02, 0.274E-02, 0.221E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.291E-12, 0.776E-07, 0.658E-04, 0.230E-02, 0.135E-01, 0.343E-01, 0.699E-01, 0.125E+00, 0.191E+00, 0.222E+00, 0.184E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.298E-12, 0.785E-07, 0.663E-04, 0.231E-02, 0.135E-01, 0.343E-01, 0.699E-01, 0.125E+00, 0.191E+00, 0.222E+00, 0.184E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.306E-12, 0.797E-07, 0.668E-04, 0.232E-02, 0.135E-01, 0.343E-01, 0.700E-01, 0.126E+00, 0.191E+00, 0.222E+00, 0.184E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.258E-11, 0.149E-06, 0.535E-04, 0.115E-02, 0.513E-02, 0.109E-01, 0.191E-01, 0.295E-01, 0.390E-01, 0.411E-01, 0.326E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.263E-11, 0.150E-06, 0.538E-04, 0.116E-02, 0.514E-02, 0.109E-01, 0.191E-01, 0.295E-01, 0.390E-01, 0.411E-01, 0.326E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.261E-11, 0.149E-06, 0.536E-04, 0.116E-02, 0.513E-02, 0.109E-01, 0.191E-01, 0.295E-01, 0.390E-01, 0.411E-01, 0.326E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.691E-12, 0.385E-07, 0.136E-04, 0.291E-03, 0.129E-02, 0.281E-02, 0.514E-02, 0.803E-02, 0.103E-01, 0.106E-01, 0.857E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.883E-11, 0.483E-06, 0.169E-03, 0.359E-02, 0.159E-01, 0.361E-01, 0.731E-01, 0.132E+00, 0.201E+00, 0.230E+00, 0.183E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P0__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.503E-13, 0.187E-07, 0.191E-04, 0.744E-03, 0.461E-02, 0.118E-01, 0.232E-01, 0.382E-01, 0.525E-01, 0.568E-01, 0.464E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.517E-13, 0.190E-07, 0.193E-04, 0.747E-03, 0.462E-02, 0.118E-01, 0.232E-01, 0.383E-01, 0.525E-01, 0.568E-01, 0.464E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.543E-13, 0.195E-07, 0.196E-04, 0.754E-03, 0.464E-02, 0.119E-01, 0.232E-01, 0.383E-01, 0.526E-01, 0.568E-01, 0.464E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.247E-13, 0.748E-08, 0.682E-05, 0.249E-03, 0.147E-02, 0.336E-02, 0.518E-02, 0.685E-02, 0.816E-02, 0.823E-02, 0.664E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.874E-12, 0.233E-06, 0.197E-03, 0.691E-02, 0.404E-01, 0.103E+00, 0.210E+00, 0.376E+00, 0.574E+00, 0.665E+00, 0.552E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.893E-12, 0.236E-06, 0.199E-03, 0.694E-02, 0.405E-01, 0.103E+00, 0.210E+00, 0.376E+00, 0.574E+00, 0.665E+00, 0.552E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.917E-12, 0.239E-06, 0.200E-03, 0.697E-02, 0.406E-01, 0.103E+00, 0.210E+00, 0.377E+00, 0.574E+00, 0.665E+00, 0.552E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.774E-11, 0.446E-06, 0.160E-03, 0.346E-02, 0.154E-01, 0.327E-01, 0.572E-01, 0.884E-01, 0.117E+00, 0.123E+00, 0.979E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.788E-11, 0.450E-06, 0.161E-03, 0.347E-02, 0.154E-01, 0.327E-01, 0.572E-01, 0.884E-01, 0.117E+00, 0.123E+00, 0.979E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.782E-11, 0.448E-06, 0.161E-03, 0.347E-02, 0.154E-01, 0.327E-01, 0.572E-01, 0.884E-01, 0.117E+00, 0.123E+00, 0.979E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.207E-11, 0.116E-06, 0.409E-04, 0.873E-03, 0.387E-02, 0.842E-02, 0.154E-01, 0.241E-01, 0.310E-01, 0.319E-01, 0.257E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.265E-10, 0.145E-05, 0.507E-03, 0.108E-01, 0.478E-01, 0.108E+00, 0.219E+00, 0.396E+00, 0.604E+00, 0.689E+00, 0.550E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.839E-13, 0.312E-07, 0.319E-04, 0.124E-02, 0.768E-02, 0.197E-01, 0.386E-01, 0.637E-01, 0.875E-01, 0.946E-01, 0.773E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.862E-13, 0.316E-07, 0.321E-04, 0.125E-02, 0.770E-02, 0.197E-01, 0.386E-01, 0.637E-01, 0.876E-01, 0.946E-01, 0.773E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.904E-13, 0.325E-07, 0.326E-04, 0.126E-02, 0.773E-02, 0.198E-01, 0.387E-01, 0.638E-01, 0.876E-01, 0.946E-01, 0.773E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.411E-13, 0.125E-07, 0.114E-04, 0.415E-03, 0.245E-02, 0.560E-02, 0.863E-02, 0.114E-01, 0.136E-01, 0.137E-01, 0.111E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.146E-11, 0.388E-06, 0.329E-03, 0.115E-01, 0.674E-01, 0.171E+00, 0.349E+00, 0.627E+00, 0.957E+00, 0.111E+01, 0.919E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.149E-11, 0.393E-06, 0.331E-03, 0.116E-01, 0.675E-01, 0.171E+00, 0.349E+00, 0.627E+00, 0.957E+00, 0.111E+01, 0.919E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.153E-11, 0.398E-06, 0.334E-03, 0.116E-01, 0.677E-01, 0.172E+00, 0.350E+00, 0.628E+00, 0.957E+00, 0.111E+01, 0.919E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.129E-10, 0.743E-06, 0.267E-03, 0.577E-02, 0.256E-01, 0.544E-01, 0.953E-01, 0.147E+00, 0.195E+00, 0.205E+00, 0.163E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.131E-10, 0.750E-06, 0.269E-03, 0.578E-02, 0.257E-01, 0.545E-01, 0.953E-01, 0.147E+00, 0.195E+00, 0.206E+00, 0.163E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.130E-10, 0.747E-06, 0.268E-03, 0.578E-02, 0.257E-01, 0.544E-01, 0.953E-01, 0.147E+00, 0.195E+00, 0.205E+00, 0.163E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.346E-11, 0.193E-06, 0.681E-04, 0.145E-02, 0.644E-02, 0.140E-01, 0.257E-01, 0.402E-01, 0.517E-01, 0.531E-01, 0.428E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.441E-10, 0.242E-05, 0.845E-03, 0.179E-01, 0.796E-01, 0.181E+00, 0.366E+00, 0.660E+00, 0.101E+01, 0.115E+01, 0.917E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p2_3P2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.713E-13, 0.305E-07, 0.337E-04, 0.137E-02, 0.868E-02, 0.222E-01, 0.423E-01, 0.673E-01, 0.893E-01, 0.975E-01, 0.867E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.298E-12, 0.594E-07, 0.429E-04, 0.137E-02, 0.754E-02, 0.166E-01, 0.252E-01, 0.325E-01, 0.369E-01, 0.357E-01, 0.280E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.393E-12, 0.578E-07, 0.352E-04, 0.102E-02, 0.544E-02, 0.144E-01, 0.335E-01, 0.642E-01, 0.101E+00, 0.120E+00, 0.102E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.906E-11, 0.608E-06, 0.239E-03, 0.541E-02, 0.248E-01, 0.561E-01, 0.108E+00, 0.176E+00, 0.235E+00, 0.248E+00, 0.204E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.148E-10, 0.784E-06, 0.269E-03, 0.565E-02, 0.247E-01, 0.504E-01, 0.827E-01, 0.122E+00, 0.157E+00, 0.164E+00, 0.132E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1D2__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.118E-13, 0.507E-08, 0.561E-05, 0.228E-03, 0.144E-02, 0.343E-02, 0.558E-02, 0.789E-02, 0.998E-02, 0.105E-01, 0.862E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.468E-12, 0.935E-07, 0.676E-04, 0.216E-02, 0.118E-01, 0.251E-01, 0.343E-01, 0.381E-01, 0.370E-01, 0.317E-01, 0.235E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.232E-11, 0.342E-06, 0.208E-03, 0.605E-02, 0.321E-01, 0.821E-01, 0.183E+00, 0.354E+00, 0.569E+00, 0.677E+00, 0.565E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.812E-12, 0.546E-07, 0.214E-04, 0.486E-03, 0.222E-02, 0.472E-02, 0.805E-02, 0.116E-01, 0.137E-01, 0.133E-01, 0.106E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.230E-11, 0.122E-06, 0.419E-04, 0.880E-03, 0.385E-02, 0.814E-02, 0.144E-01, 0.232E-01, 0.328E-01, 0.363E-01, 0.288E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p2_1S0__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.872E-12, 0.327E-06, 0.335E-03, 0.131E-01, 0.803E-01, 0.186E+00, 0.284E+00, 0.368E+00, 0.432E+00, 0.436E+00, 0.346E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.896E-12, 0.332E-06, 0.338E-03, 0.131E-01, 0.806E-01, 0.186E+00, 0.284E+00, 0.368E+00, 0.433E+00, 0.436E+00, 0.346E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.940E-12, 0.341E-06, 0.343E-03, 0.133E-01, 0.809E-01, 0.187E+00, 0.285E+00, 0.368E+00, 0.433E+00, 0.436E+00, 0.346E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.247E-13, 0.754E-08, 0.691E-05, 0.253E-03, 0.150E-02, 0.346E-02, 0.545E-02, 0.717E-02, 0.810E-02, 0.773E-02, 0.615E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.621E-11, 0.167E-05, 0.142E-02, 0.499E-01, 0.290E+00, 0.673E+00, 0.111E+01, 0.153E+01, 0.179E+01, 0.175E+01, 0.140E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.635E-11, 0.169E-05, 0.143E-02, 0.500E-01, 0.290E+00, 0.674E+00, 0.111E+01, 0.153E+01, 0.179E+01, 0.175E+01, 0.140E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.651E-11, 0.171E-05, 0.144E-02, 0.503E-01, 0.291E+00, 0.675E+00, 0.111E+01, 0.153E+01, 0.179E+01, 0.175E+01, 0.140E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.405E-10, 0.235E-05, 0.850E-03, 0.184E-01, 0.816E-01, 0.169E+00, 0.285E+00, 0.447E+00, 0.634E+00, 0.711E+00, 0.583E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.412E-10, 0.237E-05, 0.854E-03, 0.184E-01, 0.817E-01, 0.169E+00, 0.285E+00, 0.447E+00, 0.634E+00, 0.712E+00, 0.583E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.409E-10, 0.236E-05, 0.852E-03, 0.184E-01, 0.817E-01, 0.169E+00, 0.285E+00, 0.447E+00, 0.634E+00, 0.711E+00, 0.583E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.806E-10, 0.453E-05, 0.161E-02, 0.344E-01, 0.152E+00, 0.305E+00, 0.474E+00, 0.652E+00, 0.789E+00, 0.793E+00, 0.632E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.555E-09, 0.306E-04, 0.108E-01, 0.229E+00, 0.101E+01, 0.211E+01, 0.361E+01, 0.552E+01, 0.732E+01, 0.786E+01, 0.650E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s_2p3_3Do__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.144E-10, 0.539E-05, 0.554E-02, 0.216E+00, 0.134E+01, 0.336E+01, 0.640E+01, 0.112E+02, 0.176E+02, 0.212E+02, 0.181E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.148E-10, 0.547E-05, 0.558E-02, 0.217E+00, 0.134E+01, 0.336E+01, 0.641E+01, 0.112E+02, 0.176E+02, 0.212E+02, 0.181E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.155E-10, 0.562E-05, 0.567E-02, 0.219E+00, 0.135E+01, 0.337E+01, 0.642E+01, 0.112E+02, 0.176E+02, 0.212E+02, 0.181E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.174E-11, 0.533E-06, 0.489E-03, 0.179E-01, 0.106E+00, 0.234E+00, 0.328E+00, 0.373E+00, 0.379E+00, 0.341E+00, 0.262E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.217E-10, 0.584E-05, 0.498E-02, 0.175E+00, 0.102E+01, 0.236E+01, 0.393E+01, 0.580E+01, 0.778E+01, 0.857E+01, 0.710E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.222E-10, 0.591E-05, 0.502E-02, 0.176E+00, 0.102E+01, 0.236E+01, 0.394E+01, 0.580E+01, 0.779E+01, 0.857E+01, 0.710E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.228E-10, 0.600E-05, 0.506E-02, 0.176E+00, 0.102E+01, 0.237E+01, 0.394E+01, 0.581E+01, 0.779E+01, 0.858E+01, 0.710E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.725E-09, 0.422E-04, 0.153E-01, 0.330E+00, 0.146E+01, 0.288E+01, 0.424E+01, 0.559E+01, 0.667E+01, 0.675E+01, 0.547E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.738E-09, 0.426E-04, 0.153E-01, 0.331E+00, 0.146E+01, 0.288E+01, 0.425E+01, 0.559E+01, 0.667E+01, 0.675E+01, 0.547E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.733E-09, 0.424E-04, 0.153E-01, 0.331E+00, 0.146E+01, 0.288E+01, 0.424E+01, 0.559E+01, 0.667E+01, 0.675E+01, 0.547E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.307E-09, 0.173E-04, 0.614E-02, 0.131E+00, 0.579E+00, 0.116E+01, 0.178E+01, 0.238E+01, 0.273E+01, 0.264E+01, 0.210E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.946E-11, 0.523E-06, 0.184E-03, 0.395E-02, 0.313E-01, 0.360E+00, 0.162E+01, 0.348E+01, 0.495E+01, 0.528E+01, 0.440E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s_2p3_3Po__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.776E-12, 0.291E-06, 0.298E-03, 0.116E-01, 0.721E-01, 0.182E+00, 0.346E+00, 0.553E+00, 0.739E+00, 0.791E+00, 0.660E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.798E-12, 0.295E-06, 0.301E-03, 0.117E-01, 0.723E-01, 0.183E+00, 0.346E+00, 0.553E+00, 0.739E+00, 0.792E+00, 0.660E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.837E-12, 0.303E-06, 0.306E-03, 0.118E-01, 0.726E-01, 0.183E+00, 0.347E+00, 0.553E+00, 0.739E+00, 0.792E+00, 0.660E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.271E-12, 0.827E-07, 0.758E-04, 0.277E-02, 0.166E-01, 0.416E-01, 0.806E-01, 0.133E+00, 0.185E+00, 0.204E+00, 0.172E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.435E-11, 0.117E-05, 0.994E-03, 0.349E-01, 0.204E+00, 0.512E+00, 0.101E+01, 0.176E+01, 0.264E+01, 0.307E+01, 0.259E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.445E-11, 0.118E-05, 0.100E-02, 0.350E-01, 0.205E+00, 0.512E+00, 0.101E+01, 0.176E+01, 0.264E+01, 0.307E+01, 0.259E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.456E-11, 0.120E-05, 0.101E-02, 0.352E-01, 0.205E+00, 0.513E+00, 0.101E+01, 0.177E+01, 0.264E+01, 0.307E+01, 0.259E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.431E-10, 0.250E-05, 0.904E-03, 0.196E-01, 0.870E-01, 0.184E+00, 0.316E+00, 0.476E+00, 0.605E+00, 0.627E+00, 0.515E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.439E-10, 0.253E-05, 0.909E-03, 0.196E-01, 0.871E-01, 0.184E+00, 0.317E+00, 0.476E+00, 0.605E+00, 0.627E+00, 0.515E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.436E-10, 0.252E-05, 0.907E-03, 0.196E-01, 0.871E-01, 0.184E+00, 0.316E+00, 0.476E+00, 0.605E+00, 0.627E+00, 0.515E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.108E-09, 0.605E-05, 0.215E-02, 0.460E-01, 0.202E+00, 0.401E+00, 0.604E+00, 0.806E+00, 0.956E+00, 0.956E+00, 0.771E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.640E-10, 0.353E-05, 0.124E-02, 0.264E-01, 0.116E+00, 0.235E+00, 0.374E+00, 0.534E+00, 0.673E+00, 0.702E+00, 0.576E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po0__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.233E-11, 0.872E-06, 0.895E-03, 0.349E-01, 0.216E+00, 0.547E+00, 0.104E+01, 0.166E+01, 0.222E+01, 0.237E+01, 0.198E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.239E-11, 0.885E-06, 0.902E-03, 0.351E-01, 0.217E+00, 0.548E+00, 0.104E+01, 0.166E+01, 0.222E+01, 0.237E+01, 0.198E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.251E-11, 0.909E-06, 0.916E-03, 0.354E-01, 0.218E+00, 0.549E+00, 0.104E+01, 0.166E+01, 0.222E+01, 0.237E+01, 0.198E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.812E-12, 0.248E-06, 0.227E-03, 0.831E-02, 0.497E-01, 0.125E+00, 0.242E+00, 0.400E+00, 0.556E+00, 0.613E+00, 0.516E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.130E-10, 0.350E-05, 0.298E-02, 0.105E+00, 0.612E+00, 0.153E+01, 0.304E+01, 0.529E+01, 0.793E+01, 0.919E+01, 0.776E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.133E-10, 0.354E-05, 0.300E-02, 0.105E+00, 0.614E+00, 0.154E+01, 0.304E+01, 0.529E+01, 0.793E+01, 0.920E+01, 0.776E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.137E-10, 0.360E-05, 0.303E-02, 0.106E+00, 0.615E+00, 0.154E+01, 0.304E+01, 0.530E+01, 0.793E+01, 0.920E+01, 0.776E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.129E-09, 0.750E-05, 0.271E-02, 0.586E-01, 0.261E+00, 0.551E+00, 0.949E+00, 0.143E+01, 0.182E+01, 0.188E+01, 0.154E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.132E-09, 0.758E-05, 0.273E-02, 0.588E-01, 0.261E+00, 0.551E+00, 0.949E+00, 0.143E+01, 0.182E+01, 0.188E+01, 0.154E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.131E-09, 0.755E-05, 0.272E-02, 0.588E-01, 0.261E+00, 0.551E+00, 0.949E+00, 0.143E+01, 0.182E+01, 0.188E+01, 0.154E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.323E-09, 0.181E-04, 0.644E-02, 0.138E+00, 0.606E+00, 0.120E+01, 0.181E+01, 0.242E+01, 0.287E+01, 0.287E+01, 0.231E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.192E-09, 0.106E-04, 0.371E-02, 0.791E-01, 0.347E+00, 0.703E+00, 0.112E+01, 0.160E+01, 0.202E+01, 0.210E+01, 0.173E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.388E-11, 0.145E-05, 0.149E-02, 0.581E-01, 0.360E+00, 0.910E+00, 0.173E+01, 0.276E+01, 0.369E+01, 0.395E+01, 0.330E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.398E-11, 0.147E-05, 0.150E-02, 0.584E-01, 0.361E+00, 0.912E+00, 0.173E+01, 0.276E+01, 0.369E+01, 0.396E+01, 0.330E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.418E-11, 0.151E-05, 0.153E-02, 0.589E-01, 0.362E+00, 0.914E+00, 0.173E+01, 0.276E+01, 0.369E+01, 0.396E+01, 0.330E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.135E-11, 0.413E-06, 0.378E-03, 0.138E-01, 0.827E-01, 0.208E+00, 0.402E+00, 0.666E+00, 0.926E+00, 0.102E+01, 0.859E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.217E-10, 0.583E-05, 0.497E-02, 0.174E+00, 0.102E+01, 0.255E+01, 0.506E+01, 0.881E+01, 0.132E+02, 0.153E+02, 0.129E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.222E-10, 0.590E-05, 0.500E-02, 0.175E+00, 0.102E+01, 0.256E+01, 0.506E+01, 0.882E+01, 0.132E+02, 0.153E+02, 0.129E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.228E-10, 0.599E-05, 0.504E-02, 0.176E+00, 0.102E+01, 0.256E+01, 0.506E+01, 0.882E+01, 0.132E+02, 0.153E+02, 0.129E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.215E-09, 0.125E-04, 0.452E-02, 0.976E-01, 0.434E+00, 0.917E+00, 0.158E+01, 0.238E+01, 0.302E+01, 0.313E+01, 0.257E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.219E-09, 0.126E-04, 0.454E-02, 0.980E-01, 0.435E+00, 0.918E+00, 0.158E+01, 0.238E+01, 0.303E+01, 0.313E+01, 0.257E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.218E-09, 0.126E-04, 0.453E-02, 0.978E-01, 0.435E+00, 0.918E+00, 0.158E+01, 0.238E+01, 0.302E+01, 0.313E+01, 0.257E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.538E-09, 0.302E-04, 0.107E-01, 0.229E+00, 0.101E+01, 0.200E+01, 0.302E+01, 0.403E+01, 0.478E+01, 0.478E+01, 0.385E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.319E-09, 0.176E-04, 0.619E-02, 0.132E+00, 0.578E+00, 0.117E+01, 0.187E+01, 0.267E+01, 0.336E+01, 0.351E+01, 0.288E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3s_3Po2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.144E-11, 0.619E-06, 0.686E-03, 0.280E-01, 0.177E+00, 0.440E+00, 0.787E+00, 0.121E+01, 0.163E+01, 0.177E+01, 0.144E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.177E-10, 0.356E-05, 0.258E-02, 0.826E-01, 0.454E+00, 0.986E+00, 0.144E+01, 0.177E+01, 0.192E+01, 0.179E+01, 0.140E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.193E-10, 0.286E-05, 0.175E-02, 0.509E-01, 0.269E+00, 0.666E+00, 0.140E+01, 0.262E+01, 0.420E+01, 0.506E+01, 0.428E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.185E-09, 0.125E-04, 0.493E-02, 0.112E+00, 0.508E+00, 0.102E+01, 0.152E+01, 0.199E+01, 0.230E+01, 0.225E+01, 0.180E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.277E-09, 0.147E-04, 0.507E-02, 0.107E+00, 0.467E+00, 0.978E+00, 0.168E+01, 0.254E+01, 0.328E+01, 0.343E+01, 0.283E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3s_1Po1__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.516E-11, 0.222E-05, 0.247E-02, 0.100E+00, 0.638E+00, 0.164E+01, 0.320E+01, 0.541E+01, 0.781E+01, 0.889E+01, 0.758E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.365E-10, 0.734E-05, 0.532E-02, 0.170E+00, 0.938E+00, 0.205E+01, 0.307E+01, 0.392E+01, 0.447E+01, 0.437E+01, 0.351E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.111E-10, 0.165E-05, 0.101E-02, 0.293E-01, 0.153E+00, 0.324E+00, 0.470E+00, 0.570E+00, 0.597E+00, 0.539E+00, 0.416E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.844E-09, 0.571E-04, 0.225E-01, 0.511E+00, 0.232E+01, 0.468E+01, 0.709E+01, 0.954E+01, 0.115E+02, 0.117E+02, 0.953E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.157E-09, 0.838E-05, 0.289E-02, 0.608E-01, 0.265E+00, 0.524E+00, 0.789E+00, 0.105E+01, 0.123E+01, 0.122E+01, 0.977E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1P1__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.103E-10, 0.388E-05, 0.398E-02, 0.155E+00, 0.962E+00, 0.242E+01, 0.458E+01, 0.754E+01, 0.107E+02, 0.120E+02, 0.102E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.106E-10, 0.394E-05, 0.402E-02, 0.156E+00, 0.965E+00, 0.243E+01, 0.459E+01, 0.754E+01, 0.107E+02, 0.120E+02, 0.102E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.112E-10, 0.405E-05, 0.408E-02, 0.157E+00, 0.969E+00, 0.243E+01, 0.460E+01, 0.755E+01, 0.107E+02, 0.120E+02, 0.102E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.294E-11, 0.899E-06, 0.824E-03, 0.301E-01, 0.179E+00, 0.411E+00, 0.642E+00, 0.848E+00, 0.984E+00, 0.971E+00, 0.784E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.839E-11, 0.225E-05, 0.192E-02, 0.674E-01, 0.391E+00, 0.890E+00, 0.139E+01, 0.184E+01, 0.211E+01, 0.206E+01, 0.165E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.857E-11, 0.228E-05, 0.193E-02, 0.677E-01, 0.392E+00, 0.891E+00, 0.140E+01, 0.184E+01, 0.211E+01, 0.206E+01, 0.165E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.880E-11, 0.231E-05, 0.195E-02, 0.680E-01, 0.393E+00, 0.893E+00, 0.140E+01, 0.184E+01, 0.211E+01, 0.206E+01, 0.165E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.238E-09, 0.138E-04, 0.501E-02, 0.108E+00, 0.480E+00, 0.969E+00, 0.153E+01, 0.220E+01, 0.288E+01, 0.311E+01, 0.256E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.243E-09, 0.140E-04, 0.503E-02, 0.109E+00, 0.480E+00, 0.970E+00, 0.153E+01, 0.220E+01, 0.288E+01, 0.311E+01, 0.256E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.241E-09, 0.139E-04, 0.502E-02, 0.108E+00, 0.480E+00, 0.970E+00, 0.153E+01, 0.220E+01, 0.288E+01, 0.311E+01, 0.256E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.146E-08, 0.818E-04, 0.291E-01, 0.622E+00, 0.274E+01, 0.549E+01, 0.849E+01, 0.118E+02, 0.148E+02, 0.154E+02, 0.126E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.402E-09, 0.222E-04, 0.780E-02, 0.166E+00, 0.729E+00, 0.147E+01, 0.230E+01, 0.323E+01, 0.404E+01, 0.420E+01, 0.343E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.172E-10, 0.646E-05, 0.663E-02, 0.259E+00, 0.160E+01, 0.404E+01, 0.764E+01, 0.126E+02, 0.178E+02, 0.200E+02, 0.170E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.177E-10, 0.656E-05, 0.669E-02, 0.260E+00, 0.161E+01, 0.404E+01, 0.764E+01, 0.126E+02, 0.178E+02, 0.200E+02, 0.170E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.186E-10, 0.674E-05, 0.679E-02, 0.262E+00, 0.161E+01, 0.405E+01, 0.766E+01, 0.126E+02, 0.178E+02, 0.200E+02, 0.170E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.490E-11, 0.150E-05, 0.137E-02, 0.502E-01, 0.298E+00, 0.684E+00, 0.107E+01, 0.141E+01, 0.164E+01, 0.162E+01, 0.131E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.140E-10, 0.375E-05, 0.320E-02, 0.112E+00, 0.651E+00, 0.148E+01, 0.232E+01, 0.307E+01, 0.352E+01, 0.342E+01, 0.275E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.143E-10, 0.380E-05, 0.322E-02, 0.113E+00, 0.652E+00, 0.148E+01, 0.232E+01, 0.307E+01, 0.352E+01, 0.343E+01, 0.275E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.147E-10, 0.385E-05, 0.325E-02, 0.113E+00, 0.654E+00, 0.149E+01, 0.233E+01, 0.307E+01, 0.352E+01, 0.343E+01, 0.275E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.397E-09, 0.231E-04, 0.834E-02, 0.180E+00, 0.799E+00, 0.161E+01, 0.255E+01, 0.367E+01, 0.480E+01, 0.518E+01, 0.427E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.404E-09, 0.233E-04, 0.838E-02, 0.181E+00, 0.800E+00, 0.162E+01, 0.255E+01, 0.367E+01, 0.481E+01, 0.518E+01, 0.427E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.401E-09, 0.232E-04, 0.836E-02, 0.181E+00, 0.800E+00, 0.162E+01, 0.255E+01, 0.367E+01, 0.480E+01, 0.518E+01, 0.427E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.242E-08, 0.136E-03, 0.484E-01, 0.104E+01, 0.456E+01, 0.914E+01, 0.141E+02, 0.197E+02, 0.246E+02, 0.257E+02, 0.210E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.669E-09, 0.369E-04, 0.130E-01, 0.276E+00, 0.121E+01, 0.244E+01, 0.383E+01, 0.538E+01, 0.673E+01, 0.699E+01, 0.572E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.241E-10, 0.903E-05, 0.928E-02, 0.362E+00, 0.224E+01, 0.564E+01, 0.107E+02, 0.176E+02, 0.249E+02, 0.280E+02, 0.238E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.248E-10, 0.917E-05, 0.936E-02, 0.364E+00, 0.225E+01, 0.565E+01, 0.107E+02, 0.176E+02, 0.249E+02, 0.280E+02, 0.238E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.260E-10, 0.942E-05, 0.950E-02, 0.367E+00, 0.226E+01, 0.567E+01, 0.107E+02, 0.176E+02, 0.249E+02, 0.280E+02, 0.238E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.685E-11, 0.209E-05, 0.192E-02, 0.702E-01, 0.416E+00, 0.957E+00, 0.150E+01, 0.198E+01, 0.229E+01, 0.226E+01, 0.183E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.195E-10, 0.525E-05, 0.447E-02, 0.157E+00, 0.911E+00, 0.207E+01, 0.325E+01, 0.429E+01, 0.492E+01, 0.479E+01, 0.385E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.200E-10, 0.531E-05, 0.450E-02, 0.158E+00, 0.912E+00, 0.208E+01, 0.325E+01, 0.429E+01, 0.492E+01, 0.479E+01, 0.385E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.205E-10, 0.539E-05, 0.454E-02, 0.158E+00, 0.915E+00, 0.208E+01, 0.325E+01, 0.429E+01, 0.493E+01, 0.479E+01, 0.385E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.555E-09, 0.322E-04, 0.117E-01, 0.252E+00, 0.112E+01, 0.226E+01, 0.356E+01, 0.513E+01, 0.672E+01, 0.726E+01, 0.598E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.565E-09, 0.326E-04, 0.117E-01, 0.253E+00, 0.112E+01, 0.226E+01, 0.356E+01, 0.513E+01, 0.672E+01, 0.726E+01, 0.598E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.561E-09, 0.324E-04, 0.117E-01, 0.253E+00, 0.112E+01, 0.226E+01, 0.356E+01, 0.513E+01, 0.672E+01, 0.726E+01, 0.598E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.339E-08, 0.191E-03, 0.677E-01, 0.145E+01, 0.638E+01, 0.128E+02, 0.198E+02, 0.276E+02, 0.344E+02, 0.359E+02, 0.294E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.325E-08, 0.186E-03, 0.668E-01, 0.144E+01, 0.635E+01, 0.128E+02, 0.198E+02, 0.275E+02, 0.344E+02, 0.359E+02, 0.294E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo4 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.343E-08, 0.192E-03, 0.679E-01, 0.145E+01, 0.639E+01, 0.128E+02, 0.198E+02, 0.276E+02, 0.345E+02, 0.359E+02, 0.294E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.936E-09, 0.517E-04, 0.182E-01, 0.387E+00, 0.170E+01, 0.342E+01, 0.536E+01, 0.752E+01, 0.941E+01, 0.979E+01, 0.800E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3D3__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.145E-10, 0.543E-05, 0.558E-02, 0.218E+00, 0.134E+01, 0.314E+01, 0.495E+01, 0.660E+01, 0.778E+01, 0.777E+01, 0.630E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.149E-10, 0.552E-05, 0.563E-02, 0.219E+00, 0.134E+01, 0.314E+01, 0.496E+01, 0.661E+01, 0.778E+01, 0.777E+01, 0.630E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.156E-10, 0.567E-05, 0.571E-02, 0.221E+00, 0.135E+01, 0.315E+01, 0.497E+01, 0.661E+01, 0.778E+01, 0.777E+01, 0.630E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.133E-10, 0.407E-05, 0.373E-02, 0.136E+00, 0.818E+00, 0.212E+01, 0.437E+01, 0.781E+01, 0.118E+02, 0.137E+02, 0.118E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.379E-11, 0.102E-05, 0.868E-03, 0.305E-01, 0.177E+00, 0.408E+00, 0.656E+00, 0.869E+00, 0.967E+00, 0.905E+00, 0.712E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.387E-11, 0.103E-05, 0.874E-03, 0.306E-01, 0.177E+00, 0.408E+00, 0.656E+00, 0.869E+00, 0.967E+00, 0.905E+00, 0.712E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.397E-11, 0.105E-05, 0.881E-03, 0.307E-01, 0.178E+00, 0.409E+00, 0.657E+00, 0.870E+00, 0.967E+00, 0.905E+00, 0.712E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.636E-09, 0.369E-04, 0.134E-01, 0.289E+00, 0.128E+01, 0.253E+01, 0.377E+01, 0.502E+01, 0.607E+01, 0.621E+01, 0.505E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.647E-09, 0.373E-04, 0.134E-01, 0.290E+00, 0.128E+01, 0.253E+01, 0.377E+01, 0.503E+01, 0.607E+01, 0.621E+01, 0.505E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.643E-09, 0.372E-04, 0.134E-01, 0.290E+00, 0.128E+01, 0.253E+01, 0.377E+01, 0.502E+01, 0.607E+01, 0.621E+01, 0.505E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.245E-09, 0.138E-04, 0.490E-02, 0.105E+00, 0.463E+00, 0.953E+00, 0.155E+01, 0.215E+01, 0.249E+01, 0.239E+01, 0.189E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.135E-09, 0.745E-05, 0.262E-02, 0.557E-01, 0.243E+00, 0.461E+00, 0.610E+00, 0.681E+00, 0.664E+00, 0.567E+00, 0.423E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3S1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.685E-11, 0.257E-05, 0.264E-02, 0.103E+00, 0.635E+00, 0.155E+01, 0.271E+01, 0.411E+01, 0.545E+01, 0.589E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.704E-11, 0.261E-05, 0.266E-02, 0.103E+00, 0.637E+00, 0.155E+01, 0.271E+01, 0.411E+01, 0.545E+01, 0.589E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.738E-11, 0.268E-05, 0.270E-02, 0.104E+00, 0.640E+00, 0.155E+01, 0.272E+01, 0.411E+01, 0.545E+01, 0.589E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.148E-12, 0.454E-07, 0.416E-04, 0.152E-02, 0.902E-02, 0.207E-01, 0.318E-01, 0.400E-01, 0.426E-01, 0.387E-01, 0.299E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.191E-10, 0.513E-05, 0.437E-02, 0.153E+00, 0.899E+00, 0.227E+01, 0.456E+01, 0.802E+01, 0.120E+02, 0.139E+02, 0.119E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.195E-10, 0.519E-05, 0.440E-02, 0.154E+00, 0.901E+00, 0.227E+01, 0.457E+01, 0.803E+01, 0.120E+02, 0.139E+02, 0.119E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.200E-10, 0.527E-05, 0.444E-02, 0.155E+00, 0.903E+00, 0.228E+01, 0.457E+01, 0.803E+01, 0.120E+02, 0.139E+02, 0.119E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.783E-10, 0.455E-05, 0.165E-02, 0.356E-01, 0.157E+00, 0.302E+00, 0.418E+00, 0.505E+00, 0.558E+00, 0.536E+00, 0.413E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.797E-10, 0.460E-05, 0.165E-02, 0.357E-01, 0.157E+00, 0.303E+00, 0.418E+00, 0.505E+00, 0.558E+00, 0.536E+00, 0.413E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.792E-10, 0.458E-05, 0.165E-02, 0.357E-01, 0.157E+00, 0.303E+00, 0.418E+00, 0.505E+00, 0.558E+00, 0.536E+00, 0.413E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.136E-09, 0.765E-05, 0.272E-02, 0.582E-01, 0.256E+00, 0.514E+00, 0.792E+00, 0.107E+01, 0.127E+01, 0.127E+01, 0.102E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.346E-09, 0.191E-04, 0.672E-02, 0.143E+00, 0.627E+00, 0.123E+01, 0.181E+01, 0.249E+01, 0.328E+01, 0.359E+01, 0.286E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P0__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.205E-10, 0.770E-05, 0.791E-02, 0.309E+00, 0.190E+01, 0.464E+01, 0.813E+01, 0.123E+02, 0.163E+02, 0.177E+02, 0.148E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.211E-10, 0.782E-05, 0.798E-02, 0.310E+00, 0.191E+01, 0.465E+01, 0.814E+01, 0.123E+02, 0.163E+02, 0.177E+02, 0.148E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.221E-10, 0.803E-05, 0.810E-02, 0.313E+00, 0.192E+01, 0.466E+01, 0.815E+01, 0.123E+02, 0.163E+02, 0.177E+02, 0.148E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.445E-12, 0.136E-06, 0.125E-03, 0.456E-02, 0.271E-01, 0.620E-01, 0.955E-01, 0.120E+00, 0.128E+00, 0.116E+00, 0.898E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.572E-10, 0.154E-04, 0.131E-01, 0.460E+00, 0.270E+01, 0.681E+01, 0.137E+02, 0.241E+02, 0.360E+02, 0.418E+02, 0.358E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.585E-10, 0.156E-04, 0.132E-01, 0.462E+00, 0.270E+01, 0.682E+01, 0.137E+02, 0.241E+02, 0.360E+02, 0.418E+02, 0.358E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.600E-10, 0.158E-04, 0.133E-01, 0.464E+00, 0.271E+01, 0.683E+01, 0.137E+02, 0.241E+02, 0.360E+02, 0.418E+02, 0.358E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.235E-09, 0.136E-04, 0.493E-02, 0.107E+00, 0.471E+00, 0.907E+00, 0.125E+01, 0.151E+01, 0.167E+01, 0.161E+01, 0.124E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.239E-09, 0.138E-04, 0.496E-02, 0.107E+00, 0.472E+00, 0.908E+00, 0.125E+01, 0.152E+01, 0.167E+01, 0.161E+01, 0.124E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.237E-09, 0.137E-04, 0.495E-02, 0.107E+00, 0.471E+00, 0.907E+00, 0.125E+01, 0.152E+01, 0.167E+01, 0.161E+01, 0.124E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.408E-09, 0.230E-04, 0.815E-02, 0.175E+00, 0.769E+00, 0.154E+01, 0.237E+01, 0.322E+01, 0.382E+01, 0.380E+01, 0.305E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.104E-08, 0.573E-04, 0.202E-01, 0.429E+00, 0.188E+01, 0.368E+01, 0.542E+01, 0.746E+01, 0.985E+01, 0.108E+02, 0.858E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.342E-10, 0.128E-04, 0.132E-01, 0.514E+00, 0.317E+01, 0.773E+01, 0.135E+02, 0.205E+02, 0.272E+02, 0.294E+02, 0.247E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.351E-10, 0.130E-04, 0.133E-01, 0.516E+00, 0.318E+01, 0.774E+01, 0.136E+02, 0.205E+02, 0.272E+02, 0.294E+02, 0.247E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.369E-10, 0.134E-04, 0.135E-01, 0.521E+00, 0.320E+01, 0.776E+01, 0.136E+02, 0.206E+02, 0.272E+02, 0.294E+02, 0.247E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.741E-12, 0.227E-06, 0.208E-03, 0.760E-02, 0.451E-01, 0.103E+00, 0.159E+00, 0.200E+00, 0.213E+00, 0.194E+00, 0.150E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.953E-10, 0.256E-04, 0.218E-01, 0.766E+00, 0.449E+01, 0.113E+02, 0.228E+02, 0.401E+02, 0.600E+02, 0.696E+02, 0.596E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.974E-10, 0.259E-04, 0.220E-01, 0.769E+00, 0.450E+01, 0.114E+02, 0.228E+02, 0.401E+02, 0.600E+02, 0.696E+02, 0.596E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.100E-09, 0.263E-04, 0.222E-01, 0.773E+00, 0.451E+01, 0.114E+02, 0.228E+02, 0.401E+02, 0.600E+02, 0.696E+02, 0.596E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.391E-09, 0.227E-04, 0.822E-02, 0.178E+00, 0.784E+00, 0.151E+01, 0.209E+01, 0.252E+01, 0.279E+01, 0.268E+01, 0.206E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.398E-09, 0.230E-04, 0.826E-02, 0.178E+00, 0.786E+00, 0.151E+01, 0.209E+01, 0.252E+01, 0.279E+01, 0.268E+01, 0.206E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.395E-09, 0.229E-04, 0.825E-02, 0.178E+00, 0.785E+00, 0.151E+01, 0.209E+01, 0.252E+01, 0.279E+01, 0.268E+01, 0.206E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.680E-09, 0.382E-04, 0.136E-01, 0.291E+00, 0.128E+01, 0.257E+01, 0.396E+01, 0.536E+01, 0.636E+01, 0.633E+01, 0.508E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.173E-08, 0.955E-04, 0.336E-01, 0.715E+00, 0.313E+01, 0.612E+01, 0.903E+01, 0.124E+02, 0.164E+02, 0.179E+02, 0.143E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3p_3P2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.212E-10, 0.913E-05, 0.101E-01, 0.413E+00, 0.262E+01, 0.658E+01, 0.121E+02, 0.192E+02, 0.263E+02, 0.291E+02, 0.246E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.565E-10, 0.114E-04, 0.825E-02, 0.264E+00, 0.146E+01, 0.327E+01, 0.524E+01, 0.727E+01, 0.892E+01, 0.917E+01, 0.749E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.275E-10, 0.408E-05, 0.250E-02, 0.727E-01, 0.381E+00, 0.865E+00, 0.151E+01, 0.232E+01, 0.310E+01, 0.335E+01, 0.281E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.605E-09, 0.409E-04, 0.161E-01, 0.366E+00, 0.167E+01, 0.357E+01, 0.633E+01, 0.107E+02, 0.167E+02, 0.200E+02, 0.166E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.793E-09, 0.423E-04, 0.146E-01, 0.307E+00, 0.133E+01, 0.255E+01, 0.360E+01, 0.482E+01, 0.650E+01, 0.727E+01, 0.571E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1D2__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.676E-12, 0.291E-06, 0.323E-03, 0.132E-01, 0.827E-01, 0.186E+00, 0.251E+00, 0.269E+00, 0.260E+00, 0.228E+00, 0.175E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.150E-09, 0.301E-04, 0.219E-01, 0.700E+00, 0.387E+01, 0.887E+01, 0.151E+02, 0.227E+02, 0.303E+02, 0.330E+02, 0.277E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.507E-10, 0.753E-05, 0.461E-02, 0.134E+00, 0.710E+00, 0.177E+01, 0.372E+01, 0.686E+01, 0.106E+02, 0.125E+02, 0.107E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.843E-10, 0.571E-05, 0.225E-02, 0.511E-01, 0.231E+00, 0.445E+00, 0.586E+00, 0.637E+00, 0.591E+00, 0.477E+00, 0.341E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.250E-09, 0.133E-04, 0.460E-02, 0.967E-01, 0.426E+00, 0.952E+00, 0.201E+01, 0.454E+01, 0.913E+01, 0.123E+02, 0.102E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3p_1S0__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.130E-09, 0.561E-04, 0.623E-01, 0.254E+01, 0.161E+02, 0.407E+02, 0.761E+02, 0.127E+03, 0.186E+03, 0.215E+03, 0.181E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.199E-09, 0.401E-04, 0.291E-01, 0.931E+00, 0.516E+01, 0.120E+02, 0.213E+02, 0.340E+02, 0.483E+02, 0.551E+02, 0.469E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.165E-10, 0.245E-05, 0.150E-02, 0.436E-01, 0.227E+00, 0.467E+00, 0.625E+00, 0.675E+00, 0.628E+00, 0.514E+00, 0.372E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.610E-08, 0.413E-03, 0.163E+00, 0.370E+01, 0.168E+02, 0.338E+02, 0.509E+02, 0.681E+02, 0.815E+02, 0.825E+02, 0.673E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.507E-09, 0.270E-04, 0.932E-02, 0.196E+00, 0.851E+00, 0.161E+01, 0.213E+01, 0.246E+01, 0.259E+01, 0.240E+01, 0.187E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Do2__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.299E-09, 0.112E-03, 0.115E+00, 0.449E+01, 0.278E+02, 0.695E+02, 0.130E+03, 0.215E+03, 0.313E+03, 0.362E+03, 0.309E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.307E-09, 0.114E-03, 0.116E+00, 0.452E+01, 0.279E+02, 0.696E+02, 0.130E+03, 0.215E+03, 0.314E+03, 0.362E+03, 0.309E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.322E-09, 0.117E-03, 0.118E+00, 0.455E+01, 0.280E+02, 0.697E+02, 0.130E+03, 0.215E+03, 0.314E+03, 0.362E+03, 0.309E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.716E-11, 0.219E-05, 0.201E-02, 0.736E-01, 0.437E+00, 0.101E+01, 0.162E+01, 0.221E+01, 0.263E+01, 0.265E+01, 0.215E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.172E-12, 0.462E-07, 0.394E-04, 0.139E-02, 0.136E-01, 0.167E+00, 0.818E+00, 0.186E+01, 0.279E+01, 0.309E+01, 0.261E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.176E-12, 0.468E-07, 0.397E-04, 0.140E-02, 0.136E-01, 0.168E+00, 0.818E+00, 0.186E+01, 0.279E+01, 0.309E+01, 0.261E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.180E-12, 0.475E-07, 0.400E-04, 0.141E-02, 0.136E-01, 0.168E+00, 0.819E+00, 0.186E+01, 0.279E+01, 0.309E+01, 0.261E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.709E-09, 0.412E-04, 0.149E-01, 0.323E+00, 0.143E+01, 0.284E+01, 0.428E+01, 0.561E+01, 0.641E+01, 0.619E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.721E-09, 0.416E-04, 0.150E-01, 0.324E+00, 0.143E+01, 0.285E+01, 0.428E+01, 0.561E+01, 0.641E+01, 0.619E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.716E-09, 0.414E-04, 0.150E-01, 0.323E+00, 0.143E+01, 0.284E+01, 0.428E+01, 0.561E+01, 0.641E+01, 0.619E+01, 0.493E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.108E-07, 0.610E-03, 0.217E+00, 0.464E+01, 0.204E+02, 0.408E+02, 0.625E+02, 0.856E+02, 0.105E+03, 0.107E+03, 0.880E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.136E-08, 0.751E-04, 0.264E-01, 0.562E+00, 0.246E+01, 0.479E+01, 0.687E+01, 0.854E+01, 0.935E+01, 0.880E+01, 0.693E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.418E-09, 0.157E-03, 0.161E+00, 0.629E+01, 0.389E+02, 0.972E+02, 0.181E+03, 0.300E+03, 0.439E+03, 0.507E+03, 0.432E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.429E-09, 0.159E-03, 0.163E+00, 0.632E+01, 0.390E+02, 0.973E+02, 0.182E+03, 0.300E+03, 0.439E+03, 0.507E+03, 0.432E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.450E-09, 0.164E-03, 0.165E+00, 0.637E+01, 0.392E+02, 0.976E+02, 0.182E+03, 0.301E+03, 0.439E+03, 0.507E+03, 0.432E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.100E-10, 0.307E-05, 0.281E-02, 0.103E+00, 0.611E+00, 0.142E+01, 0.227E+01, 0.309E+01, 0.368E+01, 0.371E+01, 0.301E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.241E-12, 0.647E-07, 0.552E-04, 0.195E-02, 0.190E-01, 0.234E+00, 0.114E+01, 0.261E+01, 0.391E+01, 0.433E+01, 0.366E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.246E-12, 0.654E-07, 0.555E-04, 0.196E-02, 0.190E-01, 0.235E+00, 0.115E+01, 0.261E+01, 0.391E+01, 0.433E+01, 0.366E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.252E-12, 0.664E-07, 0.560E-04, 0.197E-02, 0.191E-01, 0.235E+00, 0.115E+01, 0.261E+01, 0.391E+01, 0.433E+01, 0.366E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.991E-09, 0.576E-04, 0.209E-01, 0.451E+00, 0.200E+01, 0.398E+01, 0.599E+01, 0.785E+01, 0.897E+01, 0.866E+01, 0.690E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.101E-08, 0.582E-04, 0.210E-01, 0.453E+00, 0.200E+01, 0.398E+01, 0.599E+01, 0.786E+01, 0.897E+01, 0.866E+01, 0.690E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.100E-08, 0.580E-04, 0.209E-01, 0.452E+00, 0.200E+01, 0.398E+01, 0.599E+01, 0.786E+01, 0.897E+01, 0.866E+01, 0.690E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.152E-07, 0.853E-03, 0.303E+00, 0.650E+01, 0.286E+02, 0.571E+02, 0.874E+02, 0.120E+03, 0.146E+03, 0.150E+03, 0.123E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.190E-08, 0.105E-03, 0.370E-01, 0.787E+00, 0.345E+01, 0.670E+01, 0.961E+01, 0.119E+02, 0.131E+02, 0.123E+02, 0.969E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo3__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.536E-09, 0.201E-03, 0.207E+00, 0.807E+01, 0.500E+02, 0.125E+03, 0.233E+03, 0.386E+03, 0.564E+03, 0.652E+03, 0.555E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.551E-09, 0.204E-03, 0.209E+00, 0.811E+01, 0.501E+02, 0.125E+03, 0.233E+03, 0.386E+03, 0.564E+03, 0.652E+03, 0.555E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.578E-09, 0.210E-03, 0.212E+00, 0.818E+01, 0.503E+02, 0.125E+03, 0.234E+03, 0.386E+03, 0.564E+03, 0.652E+03, 0.555E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.129E-10, 0.394E-05, 0.361E-02, 0.132E+00, 0.785E+00, 0.182E+01, 0.292E+01, 0.397E+01, 0.473E+01, 0.476E+01, 0.387E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.309E-12, 0.830E-07, 0.708E-04, 0.250E-02, 0.244E-01, 0.301E+00, 0.147E+01, 0.335E+01, 0.502E+01, 0.556E+01, 0.470E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.315E-12, 0.840E-07, 0.713E-04, 0.251E-02, 0.244E-01, 0.301E+00, 0.147E+01, 0.335E+01, 0.502E+01, 0.556E+01, 0.470E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.324E-12, 0.853E-07, 0.719E-04, 0.253E-02, 0.245E-01, 0.302E+00, 0.147E+01, 0.335E+01, 0.502E+01, 0.556E+01, 0.470E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.127E-08, 0.740E-04, 0.268E-01, 0.579E+00, 0.256E+01, 0.511E+01, 0.769E+01, 0.101E+02, 0.115E+02, 0.111E+02, 0.887E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.130E-08, 0.747E-04, 0.269E-01, 0.581E+00, 0.257E+01, 0.511E+01, 0.770E+01, 0.101E+02, 0.115E+02, 0.111E+02, 0.887E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.129E-08, 0.744E-04, 0.269E-01, 0.580E+00, 0.257E+01, 0.511E+01, 0.769E+01, 0.101E+02, 0.115E+02, 0.111E+02, 0.887E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.195E-07, 0.110E-02, 0.389E+00, 0.834E+01, 0.367E+02, 0.733E+02, 0.112E+03, 0.154E+03, 0.188E+03, 0.193E+03, 0.158E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.244E-08, 0.135E-03, 0.474E-01, 0.101E+01, 0.442E+01, 0.861E+01, 0.123E+02, 0.153E+02, 0.168E+02, 0.158E+02, 0.125E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Fo4__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.625E-10, 0.235E-04, 0.241E-01, 0.941E+00, 0.582E+01, 0.145E+02, 0.270E+02, 0.444E+02, 0.640E+02, 0.732E+02, 0.620E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.643E-10, 0.238E-04, 0.243E-01, 0.946E+00, 0.584E+01, 0.145E+02, 0.270E+02, 0.444E+02, 0.640E+02, 0.732E+02, 0.620E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.674E-10, 0.245E-04, 0.247E-01, 0.954E+00, 0.587E+01, 0.146E+02, 0.271E+02, 0.444E+02, 0.641E+02, 0.732E+02, 0.620E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.860E-12, 0.263E-06, 0.242E-03, 0.884E-02, 0.522E-01, 0.114E+00, 0.154E+00, 0.166E+00, 0.157E+00, 0.133E+00, 0.989E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.149E-09, 0.401E-04, 0.342E-01, 0.120E+01, 0.700E+01, 0.168E+02, 0.307E+02, 0.499E+02, 0.723E+02, 0.838E+02, 0.727E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.152E-09, 0.406E-04, 0.344E-01, 0.120E+01, 0.701E+01, 0.169E+02, 0.307E+02, 0.499E+02, 0.723E+02, 0.838E+02, 0.727E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.156E-09, 0.412E-04, 0.347E-01, 0.121E+01, 0.703E+01, 0.169E+02, 0.307E+02, 0.500E+02, 0.723E+02, 0.838E+02, 0.727E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.216E-09, 0.126E-04, 0.455E-02, 0.984E-01, 0.435E+00, 0.864E+00, 0.129E+01, 0.171E+01, 0.201E+01, 0.200E+01, 0.160E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.220E-09, 0.127E-04, 0.457E-02, 0.988E-01, 0.436E+00, 0.865E+00, 0.130E+01, 0.171E+01, 0.201E+01, 0.200E+01, 0.160E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.219E-09, 0.126E-04, 0.456E-02, 0.986E-01, 0.436E+00, 0.865E+00, 0.129E+01, 0.171E+01, 0.201E+01, 0.200E+01, 0.160E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.129E-08, 0.727E-04, 0.258E-01, 0.553E+00, 0.243E+01, 0.478E+01, 0.703E+01, 0.901E+01, 0.102E+02, 0.982E+01, 0.781E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.614E-08, 0.339E-03, 0.119E+00, 0.254E+01, 0.112E+02, 0.225E+02, 0.356E+02, 0.507E+02, 0.647E+02, 0.684E+02, 0.567E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.630E-08, 0.344E-03, 0.120E+00, 0.255E+01, 0.112E+02, 0.226E+02, 0.356E+02, 0.508E+02, 0.647E+02, 0.684E+02, 0.567E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.640E-08, 0.347E-03, 0.121E+00, 0.256E+01, 0.112E+02, 0.226E+02, 0.356E+02, 0.508E+02, 0.647E+02, 0.684E+02, 0.567E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Do1__LS_He_2s2_2p_4d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.107E-10, 0.459E-05, 0.510E-02, 0.208E+00, 0.131E+01, 0.320E+01, 0.544E+01, 0.784E+01, 0.986E+01, 0.103E+02, 0.847E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.808E-10, 0.163E-04, 0.118E-01, 0.378E+00, 0.209E+01, 0.480E+01, 0.816E+01, 0.123E+02, 0.165E+02, 0.181E+02, 0.152E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.196E-10, 0.292E-05, 0.178E-02, 0.520E-01, 0.272E+00, 0.604E+00, 0.998E+00, 0.142E+01, 0.173E+01, 0.176E+01, 0.143E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.137E-08, 0.931E-04, 0.367E-01, 0.834E+00, 0.379E+01, 0.760E+01, 0.113E+02, 0.149E+02, 0.174E+02, 0.173E+02, 0.139E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.992E-09, 0.529E-04, 0.182E-01, 0.384E+00, 0.167E+01, 0.337E+01, 0.533E+01, 0.757E+01, 0.957E+01, 0.102E+02, 0.865E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Fo3__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.246E-09, 0.106E-03, 0.118E+00, 0.479E+01, 0.304E+02, 0.778E+02, 0.150E+03, 0.254E+03, 0.374E+03, 0.430E+03, 0.363E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.173E-08, 0.349E-03, 0.253E+00, 0.811E+01, 0.450E+02, 0.107E+03, 0.198E+03, 0.329E+03, 0.485E+03, 0.562E+03, 0.478E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1S0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.877E-10, 0.130E-04, 0.797E-02, 0.232E+00, 0.121E+01, 0.261E+01, 0.403E+01, 0.539E+01, 0.645E+01, 0.653E+01, 0.533E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4p_1S0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4d_1Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.241E-08, 0.163E-03, 0.643E-01, 0.146E+01, 0.666E+01, 0.139E+02, 0.229E+02, 0.331E+02, 0.416E+02, 0.430E+02, 0.352E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_4d_1Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_5s_1Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.875E-09, 0.466E-04, 0.161E-01, 0.339E+00, 0.148E+01, 0.299E+01, 0.478E+01, 0.675E+01, 0.830E+01, 0.847E+01, 0.689E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)] = f_vs_T__LS_He_2s2_2p_3d_1Po1__LS_He_2s2_2p_5s_1Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.684E-10, 0.257E-04, 0.264E-01, 0.103E+01, 0.637E+01, 0.158E+02, 0.288E+02, 0.460E+02, 0.643E+02, 0.723E+02, 0.615E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.703E-10, 0.261E-04, 0.266E-01, 0.103E+01, 0.638E+01, 0.158E+02, 0.288E+02, 0.460E+02, 0.644E+02, 0.723E+02, 0.615E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.737E-10, 0.268E-04, 0.270E-01, 0.104E+01, 0.642E+01, 0.158E+02, 0.289E+02, 0.461E+02, 0.644E+02, 0.723E+02, 0.615E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.262E-09, 0.803E-04, 0.737E-01, 0.270E+01, 0.161E+02, 0.389E+02, 0.698E+02, 0.110E+03, 0.156E+03, 0.177E+03, 0.151E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.580E-09, 0.156E-03, 0.133E+00, 0.467E+01, 0.273E+02, 0.668E+02, 0.126E+03, 0.210E+03, 0.304E+03, 0.346E+03, 0.290E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.593E-09, 0.158E-03, 0.134E+00, 0.469E+01, 0.274E+02, 0.668E+02, 0.126E+03, 0.210E+03, 0.304E+03, 0.346E+03, 0.290E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.609E-09, 0.160E-03, 0.135E+00, 0.471E+01, 0.274E+02, 0.669E+02, 0.126E+03, 0.210E+03, 0.305E+03, 0.346E+03, 0.290E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.161E-08, 0.937E-04, 0.339E-01, 0.734E+00, 0.325E+01, 0.648E+01, 0.981E+01, 0.132E+02, 0.157E+02, 0.157E+02, 0.126E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.164E-08, 0.947E-04, 0.341E-01, 0.736E+00, 0.325E+01, 0.648E+01, 0.982E+01, 0.132E+02, 0.157E+02, 0.157E+02, 0.126E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.163E-08, 0.943E-04, 0.340E-01, 0.735E+00, 0.325E+01, 0.648E+01, 0.982E+01, 0.132E+02, 0.157E+02, 0.157E+02, 0.126E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.173E-08, 0.975E-04, 0.347E-01, 0.742E+00, 0.326E+01, 0.640E+01, 0.935E+01, 0.119E+02, 0.134E+02, 0.129E+02, 0.102E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.525E-08, 0.290E-03, 0.102E+00, 0.218E+01, 0.955E+01, 0.191E+02, 0.296E+02, 0.407E+02, 0.497E+02, 0.508E+02, 0.413E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.539E-08, 0.295E-03, 0.103E+00, 0.219E+01, 0.957E+01, 0.191E+02, 0.296E+02, 0.407E+02, 0.498E+02, 0.508E+02, 0.413E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.547E-08, 0.297E-03, 0.103E+00, 0.219E+01, 0.959E+01, 0.192E+02, 0.296E+02, 0.408E+02, 0.498E+02, 0.508E+02, 0.413E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Po2__LS_He_2s2_2p_4d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.410E-10, 0.154E-04, 0.158E-01, 0.618E+00, 0.382E+01, 0.946E+01, 0.173E+02, 0.276E+02, 0.386E+02, 0.434E+02, 0.369E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.422E-10, 0.156E-04, 0.160E-01, 0.621E+00, 0.383E+01, 0.948E+01, 0.173E+02, 0.276E+02, 0.386E+02, 0.434E+02, 0.369E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.442E-10, 0.161E-04, 0.162E-01, 0.626E+00, 0.385E+01, 0.950E+01, 0.173E+02, 0.276E+02, 0.386E+02, 0.434E+02, 0.369E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.157E-09, 0.482E-04, 0.442E-01, 0.162E+01, 0.964E+01, 0.233E+02, 0.418E+02, 0.663E+02, 0.933E+02, 0.106E+03, 0.908E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.348E-09, 0.936E-04, 0.798E-01, 0.280E+01, 0.164E+02, 0.400E+02, 0.754E+02, 0.126E+03, 0.183E+03, 0.208E+03, 0.174E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.356E-09, 0.947E-04, 0.804E-01, 0.281E+01, 0.164E+02, 0.401E+02, 0.754E+02, 0.126E+03, 0.183E+03, 0.208E+03, 0.174E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.365E-09, 0.961E-04, 0.810E-01, 0.283E+01, 0.164E+02, 0.402E+02, 0.755E+02, 0.126E+03, 0.183E+03, 0.208E+03, 0.174E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.967E-09, 0.562E-04, 0.203E-01, 0.440E+00, 0.195E+01, 0.389E+01, 0.589E+01, 0.789E+01, 0.939E+01, 0.941E+01, 0.758E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.984E-09, 0.568E-04, 0.205E-01, 0.442E+00, 0.195E+01, 0.389E+01, 0.589E+01, 0.789E+01, 0.939E+01, 0.941E+01, 0.758E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.977E-09, 0.566E-04, 0.204E-01, 0.441E+00, 0.195E+01, 0.389E+01, 0.589E+01, 0.789E+01, 0.939E+01, 0.941E+01, 0.758E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.104E-08, 0.585E-04, 0.208E-01, 0.445E+00, 0.196E+01, 0.384E+01, 0.561E+01, 0.715E+01, 0.805E+01, 0.773E+01, 0.611E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.995E-09, 0.571E-04, 0.205E-01, 0.442E+00, 0.195E+01, 0.383E+01, 0.560E+01, 0.715E+01, 0.805E+01, 0.773E+01, 0.611E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo4 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.105E-08, 0.588E-04, 0.209E-01, 0.446E+00, 0.196E+01, 0.384E+01, 0.561E+01, 0.715E+01, 0.805E+01, 0.773E+01, 0.611E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.315E-08, 0.174E-03, 0.613E-01, 0.130E+01, 0.573E+01, 0.115E+02, 0.177E+02, 0.244E+02, 0.298E+02, 0.305E+02, 0.248E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.323E-08, 0.177E-03, 0.618E-01, 0.131E+01, 0.574E+01, 0.115E+02, 0.178E+02, 0.244E+02, 0.298E+02, 0.305E+02, 0.248E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.328E-08, 0.178E-03, 0.621E-01, 0.131E+01, 0.575E+01, 0.115E+02, 0.178E+02, 0.245E+02, 0.299E+02, 0.305E+02, 0.248E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Po1__LS_He_2s2_2p_4d_3Do3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.137E-10, 0.513E-05, 0.528E-02, 0.206E+00, 0.127E+01, 0.315E+01, 0.576E+01, 0.920E+01, 0.129E+02, 0.145E+02, 0.123E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.141E-10, 0.521E-05, 0.532E-02, 0.207E+00, 0.128E+01, 0.316E+01, 0.577E+01, 0.920E+01, 0.129E+02, 0.145E+02, 0.123E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.147E-10, 0.535E-05, 0.540E-02, 0.209E+00, 0.128E+01, 0.317E+01, 0.577E+01, 0.921E+01, 0.129E+02, 0.145E+02, 0.123E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3D3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3S1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.524E-10, 0.161E-04, 0.147E-01, 0.539E+00, 0.321E+01, 0.778E+01, 0.139E+02, 0.221E+02, 0.311E+02, 0.354E+02, 0.303E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3S1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.116E-09, 0.312E-04, 0.266E-01, 0.934E+00, 0.546E+01, 0.133E+02, 0.251E+02, 0.419E+02, 0.609E+02, 0.692E+02, 0.580E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.118E-09, 0.316E-04, 0.268E-01, 0.938E+00, 0.547E+01, 0.134E+02, 0.251E+02, 0.420E+02, 0.609E+02, 0.692E+02, 0.580E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.122E-09, 0.320E-04, 0.270E-01, 0.942E+00, 0.548E+01, 0.134E+02, 0.252E+02, 0.420E+02, 0.609E+02, 0.692E+02, 0.581E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4p_3P2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po0 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.322E-09, 0.187E-04, 0.678E-02, 0.147E+00, 0.649E+00, 0.129E+01, 0.196E+01, 0.263E+01, 0.313E+01, 0.314E+01, 0.253E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po0;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.328E-09, 0.189E-04, 0.682E-02, 0.147E+00, 0.650E+00, 0.130E+01, 0.196E+01, 0.263E+01, 0.313E+01, 0.314E+01, 0.253E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.326E-09, 0.189E-04, 0.680E-02, 0.147E+00, 0.650E+00, 0.130E+01, 0.196E+01, 0.263E+01, 0.313E+01, 0.314E+01, 0.253E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_5s_3Po2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.346E-09, 0.195E-04, 0.693E-02, 0.148E+00, 0.652E+00, 0.128E+01, 0.187E+01, 0.238E+01, 0.268E+01, 0.258E+01, 0.204E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.332E-09, 0.190E-04, 0.683E-02, 0.147E+00, 0.649E+00, 0.128E+01, 0.187E+01, 0.238E+01, 0.268E+01, 0.258E+01, 0.204E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo3;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo4 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.350E-09, 0.196E-04, 0.695E-02, 0.149E+00, 0.653E+00, 0.128E+01, 0.187E+01, 0.238E+01, 0.268E+01, 0.258E+01, 0.204E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Fo4;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do1 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.105E-08, 0.581E-04, 0.204E-01, 0.435E+00, 0.191E+01, 0.382E+01, 0.591E+01, 0.814E+01, 0.995E+01, 0.102E+02, 0.826E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do1;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do2 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.108E-08, 0.589E-04, 0.206E-01, 0.437E+00, 0.191E+01, 0.383E+01, 0.592E+01, 0.815E+01, 0.995E+01, 0.102E+02, 0.826E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do3 {
    {1000.0, 1780.0, 3160.0, 5620.0, 10000.0, 17780.0, 31622.0, 56230.0, 100000.0, 177830.0, 316230.0},
    {0.109E-08, 0.594E-04, 0.207E-01, 0.438E+00, 0.192E+01, 0.383E+01, 0.592E+01, 0.815E+01, 0.995E+01, 0.102E+02, 0.826E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)][static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)] = f_vs_T__LS_He_2s2_2p_3d_3Po0__LS_He_2s2_2p_4d_3Do3;

  return f_vs_T_KK;
}


}