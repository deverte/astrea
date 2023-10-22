/**
 * \file astrea/element/o_i_mashonkina/collision_rate_coefficients.h
 * O I collision rate coefficients by Barklem2007 and Sitnova+2013.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i_mashonkina/terms.h"


namespace astrea::element::o_i_mashonkina {


/**
 * O I collision rate coefficients by Barklem2007 and Sitnova+2013.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 * - Axis 2: Bivariate data (row).
 *   - Row 0: Temperature in K.
 *   - Row 1: Collision rate coefficient in cm3 s-1.
 * - Axis 3: Bivariate pair index (column).
 */
inline const std::vector<std::vector<Eigen::Matrix2Xd>> C_vs_T() {
  std::vector<std::vector<Eigen::Matrix2Xd>>
  C_vs_T(51, std::vector<Eigen::Matrix2Xd>(51));

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_1s2_2s2_2p4_3P__LS_1s2_2s2_2p4_1S {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.513E-30, 0.428E-16, 0.307E-13, 0.134E-11, 0.110E-10, 0.584E-10, 0.235E-09, 0.336E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)] = C_vs_T__LS_1s2_2s2_2p4_3P__LS_1s2_2s2_2p4_1S;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.103E-54, 0.933E-24, 0.130E-17, 0.342E-14, 0.253E-12, 0.737E-11, 0.132E-09, 0.275E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.340E-56, 0.346E-24, 0.753E-18, 0.265E-14, 0.246E-12, 0.944E-11, 0.278E-09, 0.845E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.635E-63, 0.903E-27, 0.153E-19, 0.172E-15, 0.299E-13, 0.191E-11, 0.888E-10, 0.274E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.548E-64, 0.491E-27, 0.126E-19, 0.188E-15, 0.394E-13, 0.296E-11, 0.169E-09, 0.692E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.115E-68, 0.645E-29, 0.580E-21, 0.181E-16, 0.574E-14, 0.558E-12, 0.275E-10, 0.749E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.322E-69, 0.354E-29, 0.412E-21, 0.161E-16, 0.618E-14, 0.741E-12, 0.507E-10, 0.174E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.958E-70, 0.294E-29, 0.327E-21, 0.102E-16, 0.308E-14, 0.290E-12, 0.157E-10, 0.454E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.149E-69, 0.427E-29, 0.464E-21, 0.148E-16, 0.489E-14, 0.555E-12, 0.428E-10, 0.161E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.326E-71, 0.669E-30, 0.143E-21, 0.797E-17, 0.373E-14, 0.538E-12, 0.433E-10, 0.143E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.312E-71, 0.122E-29, 0.300E-21, 0.183E-16, 0.922E-14, 0.146E-11, 0.148E-09, 0.644E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.610E-72, 0.144E-29, 0.393E-21, 0.216E-16, 0.965E-14, 0.135E-11, 0.114E-09, 0.406E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.111E-73, 0.679E-31, 0.265E-22, 0.200E-17, 0.111E-14, 0.190E-12, 0.183E-10, 0.627E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.531E-73, 0.253E-30, 0.836E-22, 0.598E-17, 0.346E-14, 0.644E-12, 0.782E-10, 0.342E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.951E-74, 0.717E-31, 0.303E-22, 0.225E-17, 0.115E-14, 0.162E-12, 0.105E-10, 0.275E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.501E-73, 0.284E-30, 0.102E-21, 0.700E-17, 0.339E-14, 0.447E-12, 0.258E-10, 0.665E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p4_1S {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.191E-19, 0.417E-12, 0.124E-10, 0.820E-10, 0.229E-09, 0.502E-09, 0.984E-09, 0.118E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p4_1S;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.334E-48, 0.686E-23, 0.611E-18, 0.375E-15, 0.150E-13, 0.324E-12, 0.585E-11, 0.144E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.633E-55, 0.966E-25, 0.993E-19, 0.263E-15, 0.218E-13, 0.802E-12, 0.257E-10, 0.764E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.202E-61, 0.271E-27, 0.149E-20, 0.882E-17, 0.117E-14, 0.612E-13, 0.176E-11, 0.397E-11}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.571E-61, 0.907E-27, 0.494E-20, 0.277E-16, 0.333E-14, 0.156E-12, 0.420E-11, 0.952E-11}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.176E-62, 0.163E-27, 0.221E-20, 0.278E-16, 0.608E-14, 0.512E-12, 0.269E-10, 0.805E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.302E-62, 0.334E-26, 0.504E-19, 0.529E-15, 0.915E-13, 0.565E-11, 0.194E-09, 0.477E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.257E-63, 0.493E-27, 0.777E-20, 0.861E-16, 0.159E-13, 0.106E-11, 0.399E-10, 0.100E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.275E-63, 0.556E-27, 0.794E-20, 0.733E-16, 0.108E-13, 0.527E-12, 0.116E-10, 0.204E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p4_1D__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.885E-44, 0.453E-21, 0.141E-16, 0.798E-14, 0.330E-12, 0.605E-11, 0.649E-10, 0.109E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.271E-50, 0.147E-23, 0.641E-18, 0.997E-15, 0.528E-13, 0.112E-11, 0.128E-10, 0.195E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.100E-51, 0.248E-23, 0.220E-17, 0.391E-14, 0.212E-12, 0.446E-11, 0.589E-10, 0.109E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.948E-53, 0.165E-23, 0.151E-17, 0.274E-14, 0.152E-12, 0.345E-11, 0.513E-10, 0.944E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.805E-54, 0.421E-24, 0.407E-18, 0.776E-15, 0.460E-13, 0.114E-11, 0.176E-10, 0.309E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00, 0.000E+00}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.691E-54, 0.603E-24, 0.580E-18, 0.106E-14, 0.577E-13, 0.116E-11, 0.107E-10, 0.139E-10}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_1S)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p4_1S__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.998E-09, 0.236E-07, 0.389E-07, 0.457E-07, 0.448E-07, 0.373E-07, 0.201E-07, 0.107E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.110E-14, 0.584E-09, 0.886E-08, 0.392E-07, 0.842E-07, 0.140E-06, 0.169E-06, 0.137E-06}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.198E-16, 0.443E-10, 0.833E-09, 0.394E-08, 0.833E-08, 0.128E-07, 0.119E-07, 0.730E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.621E-21, 0.757E-12, 0.507E-10, 0.555E-09, 0.212E-08, 0.611E-08, 0.142E-07, 0.159E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.134E-21, 0.310E-12, 0.238E-10, 0.259E-09, 0.899E-09, 0.208E-08, 0.270E-08, 0.180E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.313E-21, 0.156E-11, 0.123E-09, 0.134E-08, 0.477E-08, 0.124E-07, 0.241E-07, 0.238E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.250E-22, 0.203E-12, 0.185E-10, 0.218E-09, 0.800E-09, 0.200E-08, 0.297E-08, 0.215E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.152E-23, 0.836E-13, 0.135E-10, 0.267E-09, 0.148E-08, 0.580E-08, 0.170E-07, 0.188E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.641E-24, 0.548E-13, 0.879E-11, 0.151E-09, 0.707E-09, 0.220E-08, 0.413E-08, 0.326E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.477E-25, 0.291E-13, 0.555E-11, 0.965E-10, 0.446E-09, 0.143E-08, 0.358E-08, 0.428E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.517E-25, 0.478E-13, 0.108E-10, 0.209E-09, 0.102E-08, 0.333E-08, 0.825E-08, 0.945E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.776E-26, 0.942E-14, 0.236E-11, 0.509E-10, 0.261E-09, 0.858E-09, 0.169E-08, 0.147E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.535E-25, 0.527E-13, 0.130E-10, 0.283E-09, 0.150E-08, 0.521E-08, 0.112E-07, 0.961E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.783E-26, 0.874E-14, 0.195E-11, 0.368E-10, 0.174E-09, 0.526E-09, 0.908E-09, 0.668E-09}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_5So__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.991E-13, 0.165E-08, 0.109E-07, 0.286E-07, 0.437E-07, 0.521E-07, 0.388E-07, 0.223E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.338E-14, 0.832E-09, 0.106E-07, 0.415E-07, 0.816E-07, 0.124E-06, 0.132E-06, 0.102E-06}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.547E-19, 0.385E-11, 0.134E-09, 0.905E-09, 0.235E-08, 0.423E-08, 0.421E-08, 0.254E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.161E-19, 0.211E-11, 0.990E-10, 0.942E-09, 0.344E-08, 0.984E-08, 0.235E-07, 0.269E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.857E-20, 0.321E-11, 0.155E-09, 0.128E-08, 0.386E-08, 0.819E-08, 0.103E-07, 0.694E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.209E-19, 0.649E-11, 0.293E-09, 0.229E-08, 0.670E-08, 0.147E-07, 0.255E-07, 0.253E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.938E-22, 0.288E-12, 0.250E-10, 0.305E-09, 0.117E-08, 0.306E-08, 0.495E-08, 0.376E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.150E-21, 0.486E-12, 0.420E-10, 0.611E-09, 0.298E-08, 0.110E-07, 0.315E-07, 0.349E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.218E-22, 0.253E-12, 0.230E-10, 0.266E-09, 0.969E-09, 0.249E-08, 0.448E-08, 0.429E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.176E-23, 0.106E-12, 0.153E-10, 0.239E-09, 0.102E-08, 0.284E-08, 0.452E-08, 0.334E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.345E-23, 0.172E-12, 0.209E-10, 0.278E-09, 0.106E-08, 0.278E-08, 0.617E-08, 0.753E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.196E-23, 0.113E-12, 0.143E-10, 0.193E-09, 0.734E-09, 0.181E-08, 0.251E-08, 0.171E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.371E-23, 0.202E-12, 0.287E-10, 0.476E-09, 0.226E-08, 0.744E-08, 0.160E-07, 0.139E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3s_3So__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.256E-08, 0.351E-07, 0.582E-07, 0.694E-07, 0.681E-07, 0.565E-07, 0.300E-07, 0.154E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.239E-12, 0.135E-08, 0.716E-08, 0.172E-07, 0.263E-07, 0.332E-07, 0.294E-07, 0.197E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.140E-13, 0.149E-09, 0.973E-09, 0.264E-08, 0.421E-08, 0.519E-08, 0.379E-08, 0.208E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.443E-13, 0.103E-08, 0.694E-08, 0.193E-07, 0.335E-07, 0.511E-07, 0.646E-07, 0.551E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.163E-13, 0.435E-09, 0.298E-08, 0.800E-08, 0.126E-07, 0.157E-07, 0.118E-07, 0.662E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.529E-15, 0.147E-09, 0.191E-08, 0.805E-08, 0.176E-07, 0.319E-07, 0.481E-07, 0.462E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.149E-15, 0.430E-10, 0.529E-09, 0.211E-08, 0.433E-08, 0.685E-08, 0.696E-08, 0.455E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.138E-16, 0.113E-10, 0.152E-09, 0.602E-09, 0.120E-08, 0.186E-08, 0.190E-08, 0.133E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.582E-17, 0.266E-10, 0.577E-09, 0.326E-08, 0.832E-08, 0.164E-07, 0.236E-07, 0.202E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.182E-17, 0.845E-11, 0.177E-09, 0.943E-09, 0.225E-08, 0.398E-08, 0.430E-08, 0.279E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.588E-17, 0.275E-10, 0.569E-09, 0.297E-08, 0.705E-08, 0.131E-07, 0.184E-07, 0.158E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.204E-17, 0.992E-11, 0.193E-09, 0.903E-09, 0.188E-08, 0.280E-08, 0.241E-08, 0.140E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_5P__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4s_5So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.137E-11, 0.976E-09, 0.334E-08, 0.613E-08, 0.777E-08, 0.790E-08, 0.473E-08, 0.240E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4s_5So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.151E-11, 0.278E-08, 0.125E-07, 0.277E-07, 0.411E-07, 0.515E-07, 0.465E-07, 0.321E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.952E-12, 0.336E-08, 0.146E-07, 0.297E-07, 0.398E-07, 0.430E-07, 0.279E-07, 0.147E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.107E-11, 0.496E-08, 0.238E-07, 0.524E-07, 0.765E-07, 0.971E-07, 0.990E-07, 0.780E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.897E-14, 0.275E-09, 0.205E-08, 0.573E-08, 0.912E-08, 0.111E-07, 0.819E-08, 0.470E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.149E-13, 0.629E-09, 0.533E-08, 0.184E-07, 0.379E-07, 0.684E-07, 0.108E-06, 0.106E-06}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.127E-14, 0.134E-09, 0.118E-08, 0.371E-08, 0.657E-08, 0.931E-08, 0.933E-08, 0.696E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.139E-15, 0.783E-10, 0.982E-09, 0.370E-08, 0.706E-08, 0.102E-07, 0.895E-08, 0.529E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.146E-15, 0.994E-10, 0.143E-08, 0.617E-08, 0.132E-07, 0.220E-07, 0.248E-07, 0.186E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.148E-15, 0.877E-10, 0.109E-08, 0.396E-08, 0.706E-08, 0.917E-08, 0.664E-08, 0.355E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.172E-15, 0.126E-09, 0.176E-08, 0.728E-08, 0.152E-07, 0.260E-07, 0.357E-07, 0.312E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3p_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4s_3So {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.645E-07, 0.715E-07, 0.582E-07, 0.438E-07, 0.324E-07, 0.209E-07, 0.842E-08, 0.387E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4s_3So;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.623E-07, 0.273E-06, 0.317E-06, 0.308E-06, 0.277E-06, 0.225E-06, 0.142E-06, 0.959E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.307E-07, 0.142E-06, 0.157E-06, 0.141E-06, 0.114E-06, 0.771E-07, 0.302E-07, 0.129E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.404E-09, 0.317E-07, 0.779E-07, 0.124E-06, 0.151E-06, 0.157E-06, 0.115E-06, 0.781E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.979E-10, 0.630E-08, 0.128E-07, 0.168E-07, 0.175E-07, 0.150E-07, 0.765E-08, 0.371E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.240E-10, 0.313E-08, 0.640E-08, 0.799E-08, 0.781E-08, 0.626E-08, 0.303E-08, 0.153E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.111E-10, 0.737E-08, 0.221E-07, 0.368E-07, 0.456E-07, 0.505E-07, 0.450E-07, 0.332E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.407E-11, 0.263E-08, 0.762E-08, 0.117E-07, 0.131E-07, 0.118E-07, 0.637E-08, 0.313E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.119E-10, 0.851E-08, 0.279E-07, 0.503E-07, 0.652E-07, 0.728E-07, 0.597E-07, 0.405E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.464E-11, 0.360E-08, 0.114E-07, 0.186E-07, 0.210E-07, 0.186E-07, 0.914E-08, 0.421E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_5So__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_3d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.105E-06, 0.249E-06, 0.243E-06, 0.202E-06, 0.157E-06, 0.103E-06, 0.390E-07, 0.166E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_3d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.507E-07, 0.173E-06, 0.214E-06, 0.222E-06, 0.208E-06, 0.176E-06, 0.117E-06, 0.804E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.755E-09, 0.160E-07, 0.266E-07, 0.321E-07, 0.322E-07, 0.274E-07, 0.143E-07, 0.702E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.611E-09, 0.264E-07, 0.536E-07, 0.750E-07, 0.841E-07, 0.827E-07, 0.629E-07, 0.472E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.136E-09, 0.845E-08, 0.158E-07, 0.207E-07, 0.227E-07, 0.220E-07, 0.150E-07, 0.931E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.277E-10, 0.825E-08, 0.199E-07, 0.272E-07, 0.278E-07, 0.233E-07, 0.118E-07, 0.568E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.146E-10, 0.511E-08, 0.139E-07, 0.227E-07, 0.289E-07, 0.343E-07, 0.346E-07, 0.268E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.295E-10, 0.103E-07, 0.271E-07, 0.395E-07, 0.415E-07, 0.344E-07, 0.158E-07, 0.704E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.168E-10, 0.642E-08, 0.200E-07, 0.366E-07, 0.489E-07, 0.562E-07, 0.472E-07, 0.325E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4s_3So__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_3d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.592E-07, 0.115E-06, 0.117E-06, 0.104E-06, 0.870E-07, 0.631E-07, 0.281E-07, 0.131E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_3d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.288E-07, 0.162E-06, 0.198E-06, 0.195E-06, 0.172E-06, 0.132E-06, 0.672E-07, 0.360E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.153E-08, 0.131E-07, 0.184E-07, 0.201E-07, 0.190E-07, 0.152E-07, 0.730E-08, 0.344E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.202E-09, 0.481E-08, 0.749E-08, 0.821E-08, 0.753E-08, 0.580E-08, 0.274E-08, 0.132E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.829E-10, 0.126E-07, 0.337E-07, 0.562E-07, 0.715E-07, 0.818E-07, 0.786E-07, 0.633E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.354E-10, 0.484E-08, 0.117E-07, 0.167E-07, 0.179E-07, 0.155E-07, 0.822E-08, 0.413E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.992E-10, 0.163E-07, 0.452E-07, 0.796E-07, 0.105E-06, 0.122E-06, 0.101E-06, 0.689E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.480E-10, 0.663E-08, 0.154E-07, 0.217E-07, 0.231E-07, 0.199E-07, 0.996E-08, 0.473E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4p_5P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.355E-08, 0.208E-07, 0.280E-07, 0.301E-07, 0.282E-07, 0.224E-07, 0.106E-07, 0.497E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4p_5P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.110E-07, 0.119E-06, 0.169E-06, 0.183E-06, 0.171E-06, 0.138E-06, 0.719E-07, 0.375E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.569E-09, 0.145E-07, 0.253E-07, 0.333E-07, 0.370E-07, 0.369E-07, 0.277E-07, 0.189E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.680E-10, 0.932E-08, 0.225E-07, 0.323E-07, 0.344E-07, 0.299E-07, 0.158E-07, 0.795E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.675E-10, 0.108E-07, 0.299E-07, 0.524E-07, 0.699E-07, 0.846E-07, 0.873E-07, 0.716E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.857E-10, 0.122E-07, 0.284E-07, 0.399E-07, 0.421E-07, 0.359E-07, 0.176E-07, 0.822E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.931E-10, 0.178E-07, 0.515E-07, 0.930E-07, 0.125E-06, 0.147E-06, 0.125E-06, 0.850E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_3d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4p_3P {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.150E-07, 0.491E-07, 0.549E-07, 0.514E-07, 0.437E-07, 0.318E-07, 0.143E-07, 0.691E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4p_3P;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.350E-08, 0.141E-07, 0.144E-07, 0.123E-07, 0.979E-08, 0.674E-08, 0.291E-08, 0.138E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.963E-09, 0.260E-07, 0.454E-07, 0.569E-07, 0.603E-07, 0.591E-07, 0.512E-07, 0.405E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.454E-09, 0.923E-08, 0.136E-07, 0.148E-07, 0.139E-07, 0.114E-07, 0.614E-08, 0.320E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.996E-09, 0.264E-07, 0.467E-07, 0.608E-07, 0.664E-07, 0.654E-07, 0.532E-07, 0.420E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.514E-09, 0.149E-07, 0.258E-07, 0.306E-07, 0.293E-07, 0.229E-07, 0.102E-07, 0.462E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_5P__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.448E-07, 0.104E-06, 0.975E-07, 0.824E-07, 0.669E-07, 0.485E-07, 0.251E-07, 0.153E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_2Do_3s_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.259E-08, 0.294E-07, 0.385E-07, 0.393E-07, 0.357E-07, 0.283E-07, 0.146E-07, 0.744E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.207E-08, 0.334E-07, 0.549E-07, 0.678E-07, 0.718E-07, 0.703E-07, 0.601E-07, 0.471E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.273E-08, 0.413E-07, 0.612E-07, 0.659E-07, 0.593E-07, 0.438E-07, 0.184E-07, 0.809E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.228E-08, 0.395E-07, 0.639E-07, 0.778E-07, 0.804E-07, 0.732E-07, 0.498E-07, 0.352E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4p_3P__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.299E-08, 0.122E-07, 0.142E-07, 0.141E-07, 0.130E-07, 0.106E-07, 0.576E-08, 0.300E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4d_5Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.275E-07, 0.105E-06, 0.126E-06, 0.131E-06, 0.128E-06, 0.117E-06, 0.960E-07, 0.789E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.467E-08, 0.203E-07, 0.234E-07, 0.219E-07, 0.184E-07, 0.131E-07, 0.552E-08, 0.245E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.342E-07, 0.121E-06, 0.134E-06, 0.126E-06, 0.111E-06, 0.869E-07, 0.487E-07, 0.287E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_2Do_3s_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.383E-07, 0.542E-07, 0.556E-07, 0.531E-07, 0.482E-07, 0.396E-07, 0.218E-07, 0.113E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4d_3Do;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.145E-05, 0.988E-06, 0.761E-06, 0.581E-06, 0.452E-06, 0.322E-06, 0.166E-06, 0.972E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.500E-07, 0.683E-07, 0.659E-07, 0.574E-07, 0.473E-07, 0.340E-07, 0.150E-07, 0.688E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_5Do__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.666E-07, 0.919E-07, 0.898E-07, 0.795E-07, 0.665E-07, 0.486E-07, 0.218E-07, 0.101E-07}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_5F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.175E-05, 0.117E-05, 0.886E-06, 0.664E-06, 0.509E-06, 0.358E-06, 0.181E-06, 0.104E-06}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4d_3Do__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p3_4So_4f_5F__LS_LS_1s2_2s2_2p3_4So_4f_3F {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.428E-07, 0.492E-07, 0.483E-07, 0.440E-07, 0.378E-07, 0.282E-07, 0.130E-07, 0.620E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)][static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F)] = C_vs_T__LS_LS_1s2_2s2_2p3_4So_4f_5F__LS_LS_1s2_2s2_2p3_4So_4f_3F;

  Eigen::Matrix<double, 2, 8> C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p4_1D {
    {1000.0, 3000.0, 5000.0, 8000.0, 12000.0, 20000.0, 50000.0, 100000.0},
    {0.572E-20, 0.298E-12, 0.138E-10, 0.124E-09, 0.431E-09, 0.118E-08, 0.271E-08, 0.316E-08}
  };
  C_vs_T[static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)][static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)] = C_vs_T__LS_LS_1s2_2s2_2p4_3P__LS_LS_1s2_2s2_2p4_1D;

  return C_vs_T;
}


}