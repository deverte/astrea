/**
 * \file astrea/element/mg_ii/effective_collision_strengths.h
 * Mg II effective collision strengths by Sigutts+1995, Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_ii/structure.h"


namespace astrea::element::mg_ii {


/**
 * Mg II effective collision strengths by Sigutts+1995, Alexeeva+2018.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 * - Axis 2: Bivariate data (row).
 *   - Row 0: Temperature in K.
 *   - Row 1: Effective collision strength in 1.
 * - Axis 3: Bivariate pair index (column).
 */
inline const std::vector<std::vector<Eigen::Matrix2Xd>> f_vs_T() {
  std::vector<std::vector<Eigen::Matrix2Xd>>
  f_vs_T(43, std::vector<Eigen::Matrix2Xd>(43));

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_3p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.51E+1, 1.55E+1, 1.59E+1, 1.69E+1, 1.86E+1, 2.02E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_3p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_4s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.92E+0, 1.60E+0, 1.45E+0, 1.30E+0, 1.17E+0, 1.11E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4s_2S)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_4s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_3d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.70E+0, 2.82E+0, 2.89E+0, 2.99E+0, 3.07E+0, 3.10E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_3d_2D)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_3d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_4p_2Po2 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.97E-1, 7.05E-1, 7.63E-1, 7.90E-1, 7.51E-1, 7.15E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_4p_2Po2;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_4p_2Po4 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.97E-1, 7.05E-1, 7.63E-1, 7.90E-1, 7.51E-1, 7.15E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_4p_2Po4;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {4.63E-1, 4.30E-1, 4.25E-1, 4.19E-1, 4.13E-1, 4.09E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {7.19E-1, 7.33E-1, 7.33E-1, 7.18E-1, 6.98E-1, 6.87E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.90E-1, 6.13E-1, 6.18E-1, 6.19E-1, 6.14E-1, 6.10E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3s_2S__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.11E-1, 3.30E-1, 3.40E-1, 3.45E-1, 3.46E-1, 3.45E-1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_3s_2S__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_4s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {8.78E+0, 7.18E+0, 6.48E+0, 5.82E+0, 5.50E+0, 5.62E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_4s_2S)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_4s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_3d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.08E+1, 3.22E+1, 3.31E+1, 3.49E+1, 3.81E+1, 4.15E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_3d_2D)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_3d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_4p_2Po2 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.49E+0, 7.39E+0, 7.72E+0, 7.75E+0, 7.31E+0, 6.99E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_4p_2Po2;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_4p_2Po4 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.49E+0, 7.39E+0, 7.72E+0, 7.75E+0, 7.31E+0, 6.99E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_4p_2Po4;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.95E+0, 1.62E+0, 1.53E+0, 1.45E+0, 1.40E+0, 1.39E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.00E+0, 5.74E+0, 5.62E+0, 5.41E+0, 5.20E+0, 5.12E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.18E+0, 5.50E+0, 5.67E+0, 5.90E+0, 6.06E+0, 6.13E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3p_2Po__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.67E+0, 2.76E+0, 2.78E+0, 2.75E+0, 2.71E+0, 2.68E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_3p_2Po__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_3d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.63E+1, 1.50E+1, 1.51E+1, 1.47E+1, 1.35E+1, 1.26E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_3d_2D)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_3d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_4p_2Po2 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.25E+1, 3.84E+1, 4.36E+1, 5.46E+1, 7.48E+1, 9.34E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_4p_2Po2;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_4p_2Po4 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.25E+1, 3.84E+1, 4.36E+1, 5.46E+1, 7.48E+1, 9.34E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_4p_2Po4;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.80E+0, 5.31E+0, 5.24E+0, 5.16E+0, 5.05E+0, 4.99E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {9.92E+0, 9.50E+0, 9.54E+0, 9.59E+0, 9.58E+0, 9.54E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {9.36E+0, 9.51E+0, 9.61E+0, 9.83E+0, 1.01E+1, 1.02E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4s_2S__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.49E+0, 2.61E+0, 2.70E+0, 2.75E+0, 2.81E+0, 2.81E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4s_2S)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_4s_2S__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_4p_2Po2 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.13E+1, 6.81E+1, 7.31E+1, 8.25E+1, 9.70E+1, 1.09E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_4p_2Po2;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_4p_2Po4 {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.13E+1, 6.81E+1, 7.31E+1, 8.25E+1, 9.70E+1, 1.09E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_4p_2Po4;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.04E+1, 8.34E+0, 7.70E+0, 7.01E+0, 6.48E+0, 6.26E+0}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.12E+1, 4.52E+1, 4.27E+1, 3.98E+1, 3.77E+1, 3.69E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {6.47E+1, 7.08E+1, 7.62E+1, 8.77E+1, 1.04E+2, 1.18E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_3d_2D__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.23E+1, 1.24E+1, 1.23E+1, 1.19E+1, 1.15E+1, 1.14E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3d_2D)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_3d_2D__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po2__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.48E+1, 1.37E+1, 1.40E+1, 1.59E+1, 2.14E+1, 2.71E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_4p_2Po2__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po2__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.20E+1, 5.34E+1, 5.79E+1, 7.19E+1, 1.01E+2, 1.28E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_4p_2Po2__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po2__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.67E+1, 3.62E+1, 3.63E+1, 3.67E+1, 3.71E+1, 3.73E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_4p_2Po2__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po2__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.13E+1, 2.26E+1, 2.31E+1, 2.34E+1, 2.33E+1, 2.32E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_4p_2Po2__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po4__LS_Ne_5s_2S {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.48E+1, 1.37E+1, 1.40E+1, 1.59E+1, 2.14E+1, 2.71E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)][static_cast<int>(STRUCTURE::LS_Ne_5s_2S)] = f_vs_T__LS_Ne_4p_2Po4__LS_Ne_5s_2S;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po4__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.20E+1, 5.34E+1, 5.79E+1, 7.19E+1, 1.01E+2, 1.28E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_4p_2Po4__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po4__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.67E+1, 3.62E+1, 3.63E+1, 3.67E+1, 3.71E+1, 3.73E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_4p_2Po4__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4p_2Po4__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.13E+1, 2.26E+1, 2.31E+1, 2.34E+1, 2.33E+1, 2.32E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_4p_2Po4__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_5s_2S__LS_Ne_4d_2D {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {3.24E+1, 3.42E+1, 3.38E+1, 3.27E+1, 3.18E+1, 3.14E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_5s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4d_2D)] = f_vs_T__LS_Ne_5s_2S__LS_Ne_4d_2D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_5s_2S__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {2.23E+1, 2.31E+1, 2.20E+1, 1.99E+1, 1.80E+1, 1.72E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_5s_2S)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_5s_2S__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_5s_2S__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {5.31E+1, 7.49E+1, 9.67E+1, 1.47E+2, 2.35E+2, 3.12E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_5s_2S)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_5s_2S__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4d_2D__LS_Ne_4f_2Fo {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.72E+3, 1.84E+3, 1.98E+3, 2.28E+3, 2.72E+3, 3.01E+3}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4d_2D)][static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)] = f_vs_T__LS_Ne_4d_2D__LS_Ne_4f_2Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4d_2D__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {1.29E+2, 1.73E+2, 2.14E+2, 2.99E+2, 4.17E+2, 5.01E+2}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4d_2D)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_4d_2D__LS_Ne_5p_2Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ne_4f_2Fo__LS_Ne_5p_2Po {
    {1000.0, 3000.0, 5000.0, 10000.0, 20000.0, 30000.0},
    {8.30E+1, 8.24E+1, 8.06E+1, 7.72E+1, 7.44E+1, 7.32E+1}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)][static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)] = f_vs_T__LS_Ne_4f_2Fo__LS_Ne_5p_2Po;

  return f_vs_T;
}


}