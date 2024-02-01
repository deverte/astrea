/**
 * \file astrea/element/o_i/effective_collision_strengths.h
 * O I effective collision strengths by Barklem2007, Sitnova+2013 (transformed
 * from collision rate coefficients).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/element/o_i/structure.h"


namespace astrea::element::o_i {


/**
 * O I effective collision strengths by Barklem2007, Sitnova+2013 (transformed
 * from collision rate coefficients).
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
  f_vs_T_KK(51, std::vector<Eigen::Matrix2Xd>(51));

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p4_1S {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.973e-02, 2.573e-02, 3.700e-02, 5.374e-02, 7.158e-02, 9.740e-02, 1.446e-01, 1.800e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p4_1S;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.773e-02, 1.189e-01, 1.552e-01, 1.818e-01, 1.987e-01, 2.180e-01, 2.566e-01, 2.619e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.696e-02, 1.883e-01, 2.147e-01, 2.428e-01, 2.777e-01, 3.472e-01, 5.896e-01, 8.404e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.528e-02, 5.492e-02, 7.393e-02, 9.238e-02, 1.097e-01, 1.425e-01, 2.499e-01, 3.139e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.887e-02, 7.800e-02, 1.083e-01, 1.447e-01, 1.838e-01, 2.551e-01, 5.038e-01, 8.160e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.546e-02, 2.732e-02, 3.575e-02, 4.773e-02, 6.085e-02, 7.869e-02, 9.984e-02, 9.747e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.270e-02, 2.147e-02, 3.149e-02, 4.857e-02, 7.167e-02, 1.103e-01, 1.881e-01, 2.289e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.111e-02, 3.163e-02, 3.526e-02, 3.815e-02, 4.122e-02, 4.704e-02, 6.028e-02, 6.075e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.620e-02, 4.746e-02, 5.102e-02, 5.604e-02, 6.598e-02, 9.046e-02, 1.646e-01, 2.157e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.980e-03, 1.606e-02, 2.496e-02, 4.028e-02, 6.102e-02, 9.842e-02, 1.744e-01, 1.960e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.777e-02, 3.881e-02, 6.199e-02, 1.028e-01, 1.618e-01, 2.786e-01, 6.064e-01, 8.903e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.849e-02, 9.237e-02, 1.237e-01, 1.578e-01, 2.018e-01, 2.862e-01, 4.872e-01, 5.732e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.176e-03, 9.948e-03, 1.369e-02, 1.992e-02, 2.854e-02, 4.559e-02, 8.218e-02, 9.074e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.142e-02, 3.784e-02, 4.373e-02, 6.001e-02, 8.942e-02, 1.550e-01, 3.516e-01, 4.953e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.134e-03, 1.104e-02, 1.612e-02, 2.283e-02, 2.993e-02, 3.916e-02, 4.729e-02, 3.986e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.232e-02, 4.371e-02, 5.428e-02, 7.101e-02, 8.824e-02, 1.081e-01, 1.162e-01, 9.639e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p4_1S {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.551e-02, 7.164e-02, 8.830e-02, 1.068e-01, 1.247e-01, 1.494e-01, 2.135e-01, 2.798e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p4_1S;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.198e-04, 1.067e-03, 1.029e-03, 1.115e-03, 1.417e-03, 2.126e-03, 4.376e-03, 6.340e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.393e-03, 4.385e-03, 5.043e-03, 6.573e-03, 8.509e-03, 1.233e-02, 2.702e-02, 3.988e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.022e-05, 4.695e-04, 6.729e-04, 8.639e-04, 1.135e-03, 1.625e-03, 2.303e-03, 2.312e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.048e-03, 2.880e-03, 3.209e-03, 3.405e-03, 3.759e-03, 4.536e-03, 5.698e-03, 5.645e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.576e-04, 1.482e-03, 2.698e-03, 5.069e-03, 8.928e-03, 1.743e-02, 3.887e-02, 4.926e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.066e-02, 6.122e-02, 9.373e-02, 1.255e-01, 1.601e-01, 2.137e-01, 2.924e-01, 2.981e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.149e-02, 2.107e-02, 2.401e-02, 2.805e-02, 3.438e-02, 4.552e-02, 6.327e-02, 6.410e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.341e-02, 2.445e-02, 2.496e-02, 2.414e-02, 2.352e-02, 2.273e-02, 1.843e-02, 1.309e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p4_1D__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.983e-04, 7.597e-04, 8.240e-04, 1.588e-03, 3.004e-03, 5.124e-03, 8.149e-03, 8.793e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.274e-05, 1.725e-04, 4.792e-04, 9.758e-04, 1.390e-03, 1.794e-03, 2.074e-03, 1.787e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.428e-05, 8.329e-04, 3.091e-03, 5.676e-03, 7.258e-03, 8.364e-03, 1.016e-02, 1.031e-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.219e-05, 1.117e-03, 3.231e-03, 5.175e-03, 6.202e-03, 7.188e-03, 9.233e-03, 9.117e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.540e-05, 6.647e-04, 1.447e-03, 2.013e-03, 2.319e-03, 2.697e-03, 3.333e-03, 3.061e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00, 0.000e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.248e-05, 9.798e-04, 2.098e-03, 2.780e-03, 2.930e-03, 2.756e-03, 2.030e-03, 1.378e-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p4_1S__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.424e+00, 3.198e+00, 3.808e+00, 4.082e+00, 4.088e+00, 3.800e+00, 2.841e+00, 2.048e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.191e+00, 8.845e+00, 1.469e+01, 2.053e+01, 2.498e+01, 2.894e+01, 3.170e+01, 3.021e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.026e-01, 1.752e+00, 2.458e+00, 2.958e+00, 3.142e+00, 3.055e+00, 2.365e+00, 1.657e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.176e-01, 7.984e-01, 1.073e+00, 1.427e+00, 1.817e+00, 2.387e+00, 3.436e+00, 3.981e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.644e-01, 4.681e-01, 6.245e-01, 7.619e-01, 8.428e-01, 8.574e-01, 6.676e-01, 4.556e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.451e+00, 4.180e+00, 4.553e+00, 4.887e+00, 5.161e+00, 5.571e+00, 6.167e+00, 6.129e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.038e-01, 5.618e-01, 6.982e-01, 8.048e-01, 8.726e-01, 9.029e-01, 7.615e-01, 5.542e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.861e-01, 4.997e-01, 8.087e-01, 1.316e+00, 1.957e+00, 2.939e+00, 4.565e+00, 4.959e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.826e-01, 4.341e-01, 6.235e-01, 8.270e-01, 1.003e+00, 1.163e+00, 1.128e+00, 8.672e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.114e-01, 4.648e-01, 5.996e-01, 6.875e-01, 7.540e-01, 8.397e-01, 1.020e+00, 1.163e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.439e+00, 1.744e+00, 1.915e+00, 2.030e+00, 2.120e+00, 2.213e+00, 2.469e+00, 2.632e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.297e-01, 3.508e-01, 4.237e-01, 4.981e-01, 5.453e-01, 5.720e-01, 5.065e-01, 4.096e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.726e+00, 2.020e+00, 2.375e+00, 2.799e+00, 3.156e+00, 3.489e+00, 3.362e+00, 2.680e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.527e-01, 3.350e-01, 3.562e-01, 3.640e-01, 3.661e-01, 3.522e-01, 2.726e-01, 1.863e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3s_5So__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.521e+00, 3.511e+00, 4.540e+00, 5.214e+00, 5.411e+00, 5.197e+00, 4.003e+00, 2.824e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.243e-01, 4.625e+00, 7.854e+00, 1.084e+01, 1.285e+01, 1.428e+01, 1.443e+01, 1.330e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.835e-01, 5.705e-01, 7.119e-01, 8.101e-01, 8.406e-01, 7.974e-01, 5.603e-01, 3.654e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.449e-01, 4.477e-01, 6.523e-01, 9.646e-01, 1.346e+00, 1.958e+00, 3.195e+00, 3.911e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.281e-01, 1.208e+00, 1.441e+00, 1.625e+00, 1.743e+00, 1.776e+00, 1.450e+00, 1.027e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.957e+00, 2.524e+00, 2.777e+00, 2.943e+00, 3.050e+00, 3.203e+00, 3.596e+00, 3.746e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.851e-02, 2.419e-01, 3.761e-01, 5.232e-01, 6.458e-01, 7.483e-01, 7.310e-01, 5.697e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.294e-01, 5.410e-01, 7.481e-01, 1.165e+00, 1.765e+00, 2.806e+00, 4.731e+00, 5.333e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.925e-01, 5.679e-01, 6.240e-01, 6.597e-01, 6.838e-01, 7.056e-01, 7.018e-01, 6.695e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.775e-01, 5.434e-01, 6.814e-01, 8.079e-01, 8.848e-01, 9.110e-01, 7.440e-01, 5.343e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.871e-01, 9.000e-01, 9.423e-01, 9.471e-01, 9.243e-01, 8.945e-01, 1.017e+00, 1.205e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.874e-01, 6.085e-01, 6.559e-01, 6.646e-01, 6.446e-01, 5.849e-01, 4.144e-01, 2.740e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.226e-01, 1.088e+00, 1.317e+00, 1.639e+00, 1.985e+00, 2.404e+00, 2.641e+00, 2.227e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3s_3So__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.508e+00, 8.729e+00, 1.273e+01, 1.547e+01, 1.649e+01, 1.604e+01, 1.235e+01, 8.713e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.436e+00, 8.950e+00, 1.123e+01, 1.313e+01, 1.447e+01, 1.542e+01, 1.474e+01, 1.230e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.626e-01, 1.414e+00, 1.892e+00, 2.306e+00, 2.533e+00, 2.545e+00, 1.942e+00, 1.313e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.348e+01, 1.735e+01, 1.904e+01, 2.090e+01, 2.326e+01, 2.730e+01, 3.425e+01, 3.538e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.468e+00, 7.569e+00, 8.335e+00, 8.769e+00, 8.822e+00, 8.430e+00, 6.269e+00, 4.254e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.788e+00, 5.524e+00, 8.480e+00, 1.178e+01, 1.494e+01, 1.923e+01, 2.676e+01, 3.038e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.172e+00, 2.141e+00, 2.781e+00, 3.431e+00, 3.943e+00, 4.306e+00, 3.938e+00, 3.018e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.899e-01, 1.135e+00, 1.217e+00, 1.273e+00, 1.302e+00, 1.299e+00, 1.121e+00, 9.009e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.472e+00, 6.101e+00, 7.583e+00, 9.399e+00, 1.110e+01, 1.296e+01, 1.464e+01, 1.403e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.487e+00, 1.978e+00, 2.355e+00, 2.740e+00, 3.017e+00, 3.156e+00, 2.670e+00, 1.938e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.237e+00, 6.625e+00, 7.703e+00, 8.722e+00, 9.521e+00, 1.043e+01, 1.145e+01, 1.099e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.817e+00, 2.390e+00, 2.613e+00, 2.652e+00, 2.539e+00, 2.230e+00, 1.499e+00, 9.735e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3p_5P__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.562e-01, 1.486e+00, 1.766e+00, 1.959e+00, 2.017e+00, 1.907e+00, 1.343e+00, 8.735e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.770e+00, 6.062e+00, 8.198e+00, 1.013e+01, 1.167e+01, 1.312e+01, 1.349e+01, 1.181e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.755e+00, 1.300e+01, 1.351e+01, 1.346e+01, 1.304e+01, 1.194e+01, 8.379e+00, 5.502e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.209e+01, 1.982e+01, 2.245e+01, 2.404e+01, 2.528e+01, 2.709e+01, 2.979e+01, 2.922e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.021e+00, 2.374e+00, 3.070e+00, 3.509e+00, 3.653e+00, 3.475e+00, 2.581e+00, 1.802e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.946e+00, 7.195e+00, 9.450e+00, 1.252e+01, 1.629e+01, 2.234e+01, 3.462e+01, 4.099e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.758e+00, 3.091e+00, 3.187e+00, 3.285e+00, 3.365e+00, 3.378e+00, 3.119e+00, 2.748e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.596e+00, 4.125e+00, 4.353e+00, 4.465e+00, 4.445e+00, 4.189e+00, 3.144e+00, 2.141e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.017e+00, 5.346e+00, 6.417e+00, 7.504e+00, 8.354e+00, 9.063e+00, 8.722e+00, 7.534e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.438e+00, 4.854e+00, 4.976e+00, 4.868e+00, 4.500e+00, 3.794e+00, 2.339e+00, 1.439e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.159e+00, 6.974e+00, 8.036e+00, 8.949e+00, 9.689e+00, 1.076e+01, 1.258e+01, 1.265e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3p_3P__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.469e+00, 3.249e+00, 2.958e+00, 2.597e+00, 2.250e+00, 1.807e+00, 1.115e+00, 7.168e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.872e+01, 2.201e+01, 2.272e+01, 2.264e+01, 2.220e+01, 2.120e+01, 1.946e+01, 1.807e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.017e+01, 1.183e+01, 1.148e+01, 1.049e+01, 9.210e+00, 7.302e+00, 4.146e+00, 2.433e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.348e+00, 5.702e+00, 9.038e+00, 1.232e+01, 1.479e+01, 1.669e+01, 1.653e+01, 1.507e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.601e-01, 1.502e+00, 1.758e+00, 1.855e+00, 1.839e+00, 1.663e+00, 1.119e+00, 7.222e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.528e+00, 1.505e+00, 1.339e+00, 1.147e+00, 9.780e-01, 7.711e-01, 4.621e-01, 3.042e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.419e+00, 8.091e+00, 7.590e+00, 7.203e+00, 7.019e+00, 7.041e+00, 7.212e+00, 6.766e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.283e+00, 2.947e+00, 2.650e+00, 2.308e+00, 2.027e+00, 1.650e+00, 1.022e+00, 6.382e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.046e+01, 9.814e+00, 9.870e+00, 1.003e+01, 1.016e+01, 1.023e+01, 9.596e+00, 8.265e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.080e+00, 4.152e+00, 4.033e+00, 3.709e+00, 3.273e+00, 2.613e+00, 1.469e+00, 8.592e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4s_5So__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.449e+00, 8.413e+00, 8.427e+00, 7.788e+00, 6.901e+00, 5.519e+00, 3.138e+00, 1.857e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.433e+00, 6.038e+00, 7.567e+00, 8.664e+00, 9.217e+00, 9.477e+00, 9.432e+00, 9.001e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.150e-01, 1.206e+00, 1.493e+00, 1.672e+00, 1.730e+00, 1.656e+00, 1.207e+00, 8.043e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.698e-01, 2.637e+00, 3.562e+00, 4.342e+00, 4.847e+00, 5.214e+00, 5.401e+00, 5.454e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.770e+00, 1.702e+00, 1.599e+00, 1.559e+00, 1.559e+00, 1.541e+00, 1.343e+00, 1.099e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {4.295e+00, 3.796e+00, 3.306e+00, 2.792e+00, 2.347e+00, 1.847e+00, 1.110e+00, 6.871e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.408e+00, 2.400e+00, 2.338e+00, 2.348e+00, 2.453e+00, 2.728e+00, 3.260e+00, 3.244e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.303e+00, 4.978e+00, 4.638e+00, 4.130e+00, 3.547e+00, 2.747e+00, 1.491e+00, 8.528e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.020e+00, 3.103e+00, 3.423e+00, 3.827e+00, 4.180e+00, 4.488e+00, 4.455e+00, 3.937e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4s_3So__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.979e+00, 1.885e+01, 2.444e+01, 2.728e+01, 2.784e+01, 2.598e+01, 1.824e+01, 1.201e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.931e+01, 5.736e+01, 6.565e+01, 6.827e+01, 6.671e+01, 6.100e+01, 4.568e+01, 3.379e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.623e+00, 6.146e+00, 7.223e+00, 7.821e+00, 7.907e+00, 7.327e+00, 5.047e+00, 3.256e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.922e+00, 4.550e+00, 4.479e+00, 4.156e+00, 3.734e+00, 3.106e+00, 1.976e+00, 1.276e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.917e+01, 2.723e+01, 3.308e+01, 3.877e+01, 4.359e+01, 4.959e+01, 5.956e+01, 6.272e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.709e+00, 1.068e+01, 1.163e+01, 1.161e+01, 1.097e+01, 9.425e+00, 6.236e+00, 4.095e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.660e+01, 3.700e+01, 4.570e+01, 5.594e+01, 6.481e+01, 7.450e+01, 7.676e+01, 6.837e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.287e+01, 1.505e+01, 1.557e+01, 1.525e+01, 1.426e+01, 1.215e+01, 7.569e+00, 4.694e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3d_5Do__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.966e+00, 4.277e+00, 5.463e+00, 6.247e+00, 6.510e+00, 6.181e+00, 4.315e+00, 2.796e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.418e+01, 3.243e+01, 3.904e+01, 4.221e+01, 4.235e+01, 3.972e+01, 2.977e+01, 2.127e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.013e+00, 7.968e+00, 8.902e+00, 9.991e+00, 1.092e+01, 1.180e+01, 1.196e+01, 1.095e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.561e+00, 1.170e+01, 1.299e+01, 1.321e+01, 1.248e+01, 1.082e+01, 7.169e+00, 4.722e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {9.038e+00, 1.384e+01, 1.748e+01, 2.159e+01, 2.549e+01, 3.071e+01, 3.966e+01, 4.255e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.251e+01, 1.608e+01, 1.689e+01, 1.662e+01, 1.546e+01, 1.309e+01, 8.009e+00, 4.889e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.359e+01, 2.347e+01, 3.064e+01, 3.874e+01, 4.592e+01, 5.360e+01, 5.689e+01, 5.056e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_3d_3Do__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.919e+00, 6.195e+00, 7.990e+00, 8.881e+00, 8.928e+00, 8.155e+00, 5.653e+00, 3.831e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.671e+00, 3.587e+00, 3.192e+00, 2.765e+00, 2.383e+00, 1.920e+00, 1.200e+00, 7.813e-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.203e+01, 1.511e+01, 1.652e+01, 1.743e+01, 1.805e+01, 1.906e+01, 2.218e+01, 2.350e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {6.034e+00, 5.475e+00, 5.010e+00, 4.569e+00, 4.182e+00, 3.687e+00, 2.663e+00, 1.858e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.443e+01, 1.611e+01, 1.750e+01, 1.897e+01, 2.012e+01, 2.124e+01, 2.312e+01, 2.441e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.446e+00, 9.095e+00, 9.669e+00, 9.550e+00, 8.878e+00, 7.439e+00, 4.432e+00, 2.685e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4p_5P__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.212e+01, 1.198e+01, 1.095e+01, 9.999e+00, 9.108e+00, 7.947e+00, 6.105e+00, 5.154e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.345e+00, 7.735e+00, 7.099e+00, 6.500e+00, 5.975e+00, 5.249e+00, 3.732e+00, 2.569e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {7.094e+00, 8.970e+00, 1.025e+01, 1.130e+01, 1.208e+01, 1.308e+01, 1.538e+01, 1.627e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.020e+01, 1.141e+01, 1.162e+01, 1.110e+01, 1.005e+01, 8.184e+00, 4.717e+00, 2.797e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {8.517e+00, 1.092e+01, 1.214e+01, 1.311e+01, 1.362e+01, 1.368e+01, 1.277e+01, 1.217e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4p_3P__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.958e+00, 2.653e+00, 2.865e+00, 2.988e+00, 3.043e+00, 2.949e+00, 2.353e+00, 1.690e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)] = f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.916e+01, 2.331e+01, 2.574e+01, 2.798e+01, 3.012e+01, 3.266e+01, 3.926e+01, 4.449e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.545e+00, 4.637e+00, 4.863e+00, 4.728e+00, 4.361e+00, 3.672e+00, 2.261e+00, 1.383e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {2.597e+01, 2.764e+01, 2.785e+01, 2.720e+01, 2.631e+01, 2.436e+01, 1.995e+01, 1.620e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_2Do_3s_3Do__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.732e+00, 8.779e+00, 1.153e+01, 1.387e+01, 1.538e+01, 1.628e+01, 1.414e+01, 1.036e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)] = f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.540e+02, 1.647e+02, 1.606e+02, 1.534e+02, 1.452e+02, 1.329e+02, 1.079e+02, 8.918e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.311e+00, 1.139e+01, 1.391e+01, 1.515e+01, 1.520e+01, 1.403e+01, 9.746e+00, 6.313e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4d_5Do__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4d_3Do__LS_He_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {3.990e+00, 9.005e+00, 1.123e+01, 1.249e+01, 1.275e+01, 1.200e+01, 8.488e+00, 5.557e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)] = f_vs_T__LS_He_2s2_2p3_4So_4d_3Do__LS_He_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4d_3Do__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.049e+02, 1.146e+02, 1.108e+02, 1.044e+02, 9.762e+01, 8.839e+01, 7.048e+01, 5.722e+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4d_3Do__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p3_4So_4f_5F__LS_He_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {5.490e+00, 1.093e+01, 1.385e+01, 1.596e+01, 1.680e+01, 1.618e+01, 1.179e+01, 7.952e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)][static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)] = f_vs_T__LS_He_2s2_2p3_4So_4f_5F__LS_He_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p4_1D {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {1.387e-03, 3.310e-02, 9.570e-02, 1.979e-01, 3.270e-01, 5.420e-01, 9.955e-01, 1.308e+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)][static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)] = f_vs_T__LS_He_2s2_2p4_3P__LS_He_2s2_2p4_1D;

  return f_vs_T_KK;
}


}