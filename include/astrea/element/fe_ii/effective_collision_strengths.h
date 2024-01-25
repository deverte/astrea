/**
 * \file astrea/element/fe_ii/effective_collision_strengths.h
 * Fe II effective collision strengths by Mashonkina+2011, IRON project,
 * Bautista+1998, Zhang+1995.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/element/fe_ii/structure.h"


namespace astrea::element::fe_ii {


/**
 * Fe II effective collision strengths by Mashonkina+2011, IRON project,
 * Bautista+1998, Zhang+1995.
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
  f_vs_T_KK(89, std::vector<Eigen::Matrix2Xd>(89));

  // Atomic data from the IRON project: VI. Collision  strengths for Fe II
  // Bautista & Pradhan, 1998, ApJ 492, 550

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d7_a4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.179E+01, 0.175E+01, 0.173E+01, 0.168E+01, 0.164E+01, 0.162E+01, 0.161E+01, 0.160E+01, 0.159E+01, 0.159E+01, 0.157E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d7_a4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4s_a4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.104E+02, 0.957E+01, 0.878E+01, 0.768E+01, 0.700E+01, 0.659E+01, 0.645E+01, 0.623E+01, 0.598E+01, 0.584E+01, 0.566E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4s_a4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d7_a4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.802E+00, 0.813E+00, 0.823E+00, 0.836E+00, 0.842E+00, 0.842E+00, 0.840E+00, 0.835E+00, 0.822E+00, 0.812E+00, 0.794E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d7_a4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.317E+00, 0.299E+00, 0.290E+00, 0.275E+00, 0.263E+00, 0.255E+00, 0.252E+00, 0.247E+00, 0.241E+00, 0.238E+00, 0.234E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.759E+00, 0.724E+00, 0.703E+00, 0.676E+00, 0.662E+00, 0.653E+00, 0.650E+00, 0.645E+00, 0.641E+00, 0.639E+00, 0.637E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.529E+00, 0.541E+00, 0.544E+00, 0.545E+00, 0.544E+00, 0.541E+00, 0.540E+00, 0.537E+00, 0.533E+00, 0.530E+00, 0.527E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.408E+00, 0.461E+00, 0.503E+00, 0.566E+00, 0.604E+00, 0.623E+00, 0.627E+00, 0.631E+00, 0.625E+00, 0.618E+00, 0.605E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.450E+00, 0.475E+00, 0.485E+00, 0.497E+00, 0.505E+00, 0.510E+00, 0.514E+00, 0.518E+00, 0.523E+00, 0.526E+00, 0.528E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.308E+00, 0.324E+00, 0.337E+00, 0.354E+00, 0.364E+00, 0.369E+00, 0.370E+00, 0.372E+00, 0.373E+00, 0.374E+00, 0.374E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.161E+02, 0.158E+02, 0.155E+02, 0.151E+02, 0.149E+02, 0.147E+02, 0.147E+02, 0.148E+02, 0.148E+02, 0.149E+02, 0.150E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.130E+02, 0.124E+02, 0.122E+02, 0.120E+02, 0.120E+02, 0.120E+02, 0.121E+02, 0.121E+02, 0.123E+02, 0.124E+02, 0.125E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.565E+01, 0.583E+01, 0.598E+01, 0.624E+01, 0.645E+01, 0.665E+01, 0.675E+01, 0.692E+01, 0.716E+01, 0.730E+01, 0.746E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.183E+01, 0.181E+01, 0.179E+01, 0.175E+01, 0.172E+01, 0.169E+01, 0.168E+01, 0.165E+01, 0.162E+01, 0.159E+01, 0.155E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.159E+01, 0.154E+01, 0.149E+01, 0.143E+01, 0.138E+01, 0.134E+01, 0.133E+01, 0.130E+01, 0.126E+01, 0.124E+01, 0.121E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4s_a4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.139E+01, 0.135E+01, 0.133E+01, 0.133E+01, 0.137E+01, 0.144E+01, 0.149E+01, 0.156E+01, 0.167E+01, 0.172E+01, 0.178E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4s_a4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.101E+01, 0.989E+00, 0.977E+00, 0.950E+00, 0.939E+00, 0.938E+00, 0.939E+00, 0.944E+00, 0.951E+00, 0.955E+00, 0.959E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.736E+00, 0.892E+00, 0.935E+00, 0.906E+00, 0.852E+00, 0.799E+00, 0.776E+00, 0.735E+00, 0.689E+00, 0.664E+00, 0.636E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.272E+00, 0.244E+00, 0.222E+00, 0.194E+00, 0.178E+00, 0.168E+00, 0.164E+00, 0.159E+00, 0.153E+00, 0.150E+00, 0.148E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.425E+00, 0.353E+00, 0.313E+00, 0.271E+00, 0.249E+00, 0.238E+00, 0.233E+00, 0.228E+00, 0.224E+00, 0.222E+00, 0.222E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.161E+00, 0.153E+00, 0.145E+00, 0.135E+00, 0.131E+00, 0.129E+00, 0.129E+00, 0.128E+00, 0.128E+00, 0.127E+00, 0.126E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.404E+00, 0.424E+00, 0.425E+00, 0.419E+00, 0.412E+00, 0.406E+00, 0.403E+00, 0.399E+00, 0.394E+00, 0.391E+00, 0.386E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.116E+01, 0.112E+01, 0.108E+01, 0.102E+01, 0.991E+00, 0.973E+00, 0.967E+00, 0.959E+00, 0.952E+00, 0.950E+00, 0.949E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.343E+00, 0.364E+00, 0.367E+00, 0.362E+00, 0.356E+00, 0.351E+00, 0.349E+00, 0.345E+00, 0.341E+00, 0.338E+00, 0.334E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.855E-02, 0.119E-01, 0.164E-01, 0.224E-01, 0.250E-01, 0.257E-01, 0.257E-01, 0.254E-01, 0.243E-01, 0.234E-01, 0.221E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.799E+00, 0.835E+00, 0.829E+00, 0.821E+00, 0.820E+00, 0.823E+00, 0.824E+00, 0.825E+00, 0.823E+00, 0.819E+00, 0.812E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.764E-01, 0.716E-01, 0.699E-01, 0.700E-01, 0.718E-01, 0.740E-01, 0.751E-01, 0.771E-01, 0.798E-01, 0.813E-01, 0.832E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.166E+00, 0.170E+00, 0.177E+00, 0.189E+00, 0.195E+00, 0.198E+00, 0.198E+00, 0.198E+00, 0.196E+00, 0.193E+00, 0.189E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.307E+00, 0.288E+00, 0.288E+00, 0.290E+00, 0.290E+00, 0.286E+00, 0.284E+00, 0.279E+00, 0.272E+00, 0.267E+00, 0.259E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.294E+00, 0.308E+00, 0.314E+00, 0.323E+00, 0.327E+00, 0.329E+00, 0.328E+00, 0.326E+00, 0.321E+00, 0.316E+00, 0.310E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.203E+00, 0.207E+00, 0.217E+00, 0.240E+00, 0.257E+00, 0.266E+00, 0.268E+00, 0.271E+00, 0.270E+00, 0.268E+00, 0.264E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.148E+01, 0.180E+01, 0.181E+01, 0.166E+01, 0.149E+01, 0.135E+01, 0.130E+01, 0.120E+01, 0.110E+01, 0.104E+01, 0.972E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.129E+01, 0.115E+01, 0.104E+01, 0.915E+00, 0.841E+00, 0.791E+00, 0.772E+00, 0.742E+00, 0.707E+00, 0.689E+00, 0.665E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.446E+00, 0.402E+00, 0.368E+00, 0.328E+00, 0.305E+00, 0.291E+00, 0.285E+00, 0.275E+00, 0.264E+00, 0.258E+00, 0.250E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.284E+01, 0.284E+01, 0.287E+01, 0.292E+01, 0.298E+01, 0.304E+01, 0.306E+01, 0.312E+01, 0.320E+01, 0.324E+01, 0.329E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.300E+01, 0.305E+01, 0.309E+01, 0.318E+01, 0.327E+01, 0.335E+01, 0.340E+01, 0.349E+01, 0.361E+01, 0.369E+01, 0.378E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.102E+01, 0.997E+00, 0.964E+00, 0.936E+00, 0.946E+00, 0.970E+00, 0.982E+00, 0.100E+01, 0.102E+01, 0.103E+01, 0.104E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.637E-01, 0.101E+00, 0.111E+00, 0.110E+00, 0.102E+00, 0.946E-01, 0.911E-01, 0.850E-01, 0.771E-01, 0.726E-01, 0.668E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.244E+00, 0.211E+00, 0.182E+00, 0.144E+00, 0.120E+00, 0.104E+00, 0.979E-01, 0.873E-01, 0.755E-01, 0.694E-01, 0.620E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.321E-01, 0.280E-01, 0.266E-01, 0.255E-01, 0.248E-01, 0.240E-01, 0.236E-01, 0.228E-01, 0.215E-01, 0.207E-01, 0.195E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.601E+00, 0.589E+00, 0.571E+00, 0.528E+00, 0.490E+00, 0.455E+00, 0.439E+00, 0.410E+00, 0.373E+00, 0.353E+00, 0.325E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.359E+00, 0.350E+00, 0.341E+00, 0.319E+00, 0.299E+00, 0.281E+00, 0.273E+00, 0.259E+00, 0.242E+00, 0.232E+00, 0.218E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.231E+00, 0.225E+00, 0.236E+00, 0.256E+00, 0.266E+00, 0.269E+00, 0.268E+00, 0.266E+00, 0.259E+00, 0.253E+00, 0.245E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.711E-01, 0.109E+00, 0.125E+00, 0.136E+00, 0.138E+00, 0.138E+00, 0.137E+00, 0.136E+00, 0.133E+00, 0.131E+00, 0.127E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.147E+00, 0.198E+00, 0.223E+00, 0.242E+00, 0.248E+00, 0.249E+00, 0.249E+00, 0.248E+00, 0.245E+00, 0.242E+00, 0.237E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.759E+00, 0.702E+00, 0.676E+00, 0.635E+00, 0.598E+00, 0.564E+00, 0.549E+00, 0.520E+00, 0.484E+00, 0.462E+00, 0.433E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.500E+00, 0.457E+00, 0.426E+00, 0.381E+00, 0.352E+00, 0.334E+00, 0.327E+00, 0.318E+00, 0.310E+00, 0.307E+00, 0.304E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.154E+00, 0.168E+00, 0.178E+00, 0.182E+00, 0.181E+00, 0.178E+00, 0.176E+00, 0.173E+00, 0.169E+00, 0.167E+00, 0.164E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.348E+00, 0.335E+00, 0.319E+00, 0.293E+00, 0.275E+00, 0.264E+00, 0.261E+00, 0.255E+00, 0.250E+00, 0.249E+00, 0.248E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.467E+00, 0.464E+00, 0.451E+00, 0.421E+00, 0.395E+00, 0.375E+00, 0.366E+00, 0.352E+00, 0.335E+00, 0.327E+00, 0.316E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.257E+00, 0.248E+00, 0.253E+00, 0.272E+00, 0.283E+00, 0.286E+00, 0.285E+00, 0.281E+00, 0.271E+00, 0.264E+00, 0.252E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.440E+01, 0.502E+01, 0.501E+01, 0.464E+01, 0.425E+01, 0.392E+01, 0.379E+01, 0.355E+01, 0.327E+01, 0.311E+01, 0.292E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.700E+01, 0.637E+01, 0.579E+01, 0.498E+01, 0.448E+01, 0.413E+01, 0.399E+01, 0.376E+01, 0.350E+01, 0.336E+01, 0.318E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.156E+01, 0.145E+01, 0.138E+01, 0.130E+01, 0.126E+01, 0.122E+01, 0.120E+01, 0.118E+01, 0.114E+01, 0.112E+01, 0.108E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.119E+02, 0.120E+02, 0.121E+02, 0.123E+02, 0.125E+02, 0.127E+02, 0.127E+02, 0.129E+02, 0.132E+02, 0.133E+02, 0.134E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.896E+01, 0.903E+01, 0.911E+01, 0.930E+01, 0.949E+01, 0.969E+01, 0.979E+01, 0.999E+01, 0.102E+02, 0.104E+02, 0.106E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.911E-01, 0.889E-01, 0.903E-01, 0.915E-01, 0.920E-01, 0.925E-01, 0.927E-01, 0.932E-01, 0.939E-01, 0.943E-01, 0.950E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.594E+00, 0.554E+00, 0.502E+00, 0.424E+00, 0.373E+00, 0.337E+00, 0.323E+00, 0.299E+00, 0.271E+00, 0.256E+00, 0.239E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.185E-01, 0.193E-01, 0.220E-01, 0.281E-01, 0.331E-01, 0.374E-01, 0.394E-01, 0.429E-01, 0.472E-01, 0.495E-01, 0.524E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.136E-01, 0.149E-01, 0.158E-01, 0.166E-01, 0.166E-01, 0.163E-01, 0.161E-01, 0.157E-01, 0.151E-01, 0.147E-01, 0.142E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.277E+01, 0.278E+01, 0.272E+01, 0.260E+01, 0.250E+01, 0.243E+01, 0.241E+01, 0.237E+01, 0.232E+01, 0.230E+01, 0.227E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.277E+00, 0.285E+00, 0.258E+00, 0.214E+00, 0.186E+00, 0.167E+00, 0.160E+00, 0.149E+00, 0.138E+00, 0.133E+00, 0.128E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.160E+00, 0.189E+00, 0.195E+00, 0.193E+00, 0.188E+00, 0.184E+00, 0.182E+00, 0.179E+00, 0.175E+00, 0.173E+00, 0.171E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.207E-01, 0.213E-01, 0.204E-01, 0.190E-01, 0.180E-01, 0.171E-01, 0.167E-01, 0.159E-01, 0.148E-01, 0.141E-01, 0.133E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.591E-01, 0.718E-01, 0.755E-01, 0.769E-01, 0.764E-01, 0.751E-01, 0.742E-01, 0.723E-01, 0.690E-01, 0.668E-01, 0.635E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.504E-02, 0.732E-02, 0.848E-02, 0.960E-02, 0.101E-01, 0.102E-01, 0.102E-01, 0.102E-01, 0.100E-01, 0.988E-02, 0.965E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.144E+00, 0.155E+00, 0.156E+00, 0.150E+00, 0.144E+00, 0.137E+00, 0.135E+00, 0.128E+00, 0.120E+00, 0.115E+00, 0.108E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.169E+00, 0.167E+00, 0.164E+00, 0.164E+00, 0.166E+00, 0.169E+00, 0.171E+00, 0.174E+00, 0.176E+00, 0.177E+00, 0.178E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.486E-01, 0.409E-01, 0.376E-01, 0.366E-01, 0.369E-01, 0.368E-01, 0.366E-01, 0.358E-01, 0.342E-01, 0.331E-01, 0.314E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.370E+00, 0.523E+00, 0.630E+00, 0.731E+00, 0.765E+00, 0.772E+00, 0.771E+00, 0.764E+00, 0.747E+00, 0.734E+00, 0.714E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.850E+00, 0.901E+00, 0.866E+00, 0.766E+00, 0.683E+00, 0.619E+00, 0.594E+00, 0.551E+00, 0.501E+00, 0.476E+00, 0.444E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.580E+00, 0.499E+00, 0.450E+00, 0.394E+00, 0.362E+00, 0.341E+00, 0.334E+00, 0.323E+00, 0.311E+00, 0.306E+00, 0.300E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.238E+00, 0.235E+00, 0.231E+00, 0.226E+00, 0.222E+00, 0.219E+00, 0.217E+00, 0.215E+00, 0.210E+00, 0.208E+00, 0.205E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.807E+00, 0.843E+00, 0.833E+00, 0.804E+00, 0.786E+00, 0.783E+00, 0.786E+00, 0.802E+00, 0.841E+00, 0.874E+00, 0.927E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.141E+01, 0.141E+01, 0.141E+01, 0.141E+01, 0.141E+01, 0.141E+01, 0.140E+01, 0.141E+01, 0.141E+01, 0.141E+01, 0.140E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.166E+00, 0.163E+00, 0.167E+00, 0.181E+00, 0.194E+00, 0.204E+00, 0.207E+00, 0.213E+00, 0.219E+00, 0.221E+00, 0.224E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.425E+01, 0.397E+01, 0.369E+01, 0.322E+01, 0.286E+01, 0.259E+01, 0.248E+01, 0.230E+01, 0.208E+01, 0.197E+01, 0.183E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.227E+01, 0.202E+01, 0.185E+01, 0.162E+01, 0.148E+01, 0.137E+01, 0.133E+01, 0.125E+01, 0.117E+01, 0.113E+01, 0.107E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.263E-01, 0.336E-01, 0.378E-01, 0.425E-01, 0.453E-01, 0.467E-01, 0.470E-01, 0.470E-01, 0.462E-01, 0.453E-01, 0.439E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.139E+01, 0.131E+01, 0.126E+01, 0.119E+01, 0.114E+01, 0.111E+01, 0.109E+01, 0.105E+01, 0.101E+01, 0.989E+00, 0.957E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.466E+00, 0.469E+00, 0.462E+00, 0.443E+00, 0.428E+00, 0.415E+00, 0.411E+00, 0.400E+00, 0.388E+00, 0.380E+00, 0.370E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.196E+01, 0.189E+01, 0.180E+01, 0.167E+01, 0.157E+01, 0.150E+01, 0.147E+01, 0.142E+01, 0.135E+01, 0.130E+01, 0.125E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.905E-01, 0.839E-01, 0.847E-01, 0.921E-01, 0.996E-01, 0.105E+00, 0.108E+00, 0.111E+00, 0.114E+00, 0.116E+00, 0.117E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.611E+00, 0.552E+00, 0.521E+00, 0.482E+00, 0.462E+00, 0.449E+00, 0.444E+00, 0.437E+00, 0.427E+00, 0.422E+00, 0.415E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.123E+01, 0.107E+01, 0.101E+01, 0.973E+00, 0.968E+00, 0.966E+00, 0.966E+00, 0.963E+00, 0.956E+00, 0.950E+00, 0.941E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.966E+00, 0.102E+01, 0.106E+01, 0.109E+01, 0.110E+01, 0.110E+01, 0.110E+01, 0.109E+01, 0.109E+01, 0.108E+01, 0.107E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.564E+00, 0.647E+00, 0.694E+00, 0.733E+00, 0.748E+00, 0.752E+00, 0.750E+00, 0.743E+00, 0.727E+00, 0.714E+00, 0.694E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.562E-01, 0.535E-01, 0.496E-01, 0.438E-01, 0.400E-01, 0.375E-01, 0.365E-01, 0.350E-01, 0.332E-01, 0.323E-01, 0.312E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.307E-01, 0.271E-01, 0.243E-01, 0.206E-01, 0.183E-01, 0.168E-01, 0.163E-01, 0.154E-01, 0.146E-01, 0.141E-01, 0.137E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a2G__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d7_a2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.245E-01, 0.267E-01, 0.300E-01, 0.378E-01, 0.444E-01, 0.490E-01, 0.507E-01, 0.530E-01, 0.548E-01, 0.553E-01, 0.554E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d7_a2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.386E+00, 0.438E+00, 0.491E+00, 0.544E+00, 0.557E+00, 0.548E+00, 0.541E+00, 0.524E+00, 0.496E+00, 0.479E+00, 0.454E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.218E+01, 0.189E+01, 0.175E+01, 0.157E+01, 0.144E+01, 0.134E+01, 0.130E+01, 0.123E+01, 0.115E+01, 0.110E+01, 0.104E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.204E-01, 0.191E-01, 0.192E-01, 0.198E-01, 0.202E-01, 0.204E-01, 0.205E-01, 0.205E-01, 0.206E-01, 0.207E-01, 0.209E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.173E-01, 0.157E-01, 0.148E-01, 0.136E-01, 0.129E-01, 0.125E-01, 0.123E-01, 0.121E-01, 0.119E-01, 0.118E-01, 0.117E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.343E-01, 0.597E-01, 0.669E-01, 0.668E-01, 0.632E-01, 0.595E-01, 0.578E-01, 0.546E-01, 0.502E-01, 0.475E-01, 0.440E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.466E+00, 0.475E+00, 0.474E+00, 0.472E+00, 0.471E+00, 0.470E+00, 0.469E+00, 0.467E+00, 0.463E+00, 0.460E+00, 0.456E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.331E+00, 0.305E+00, 0.289E+00, 0.275E+00, 0.271E+00, 0.272E+00, 0.272E+00, 0.276E+00, 0.282E+00, 0.287E+00, 0.294E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.529E+00, 0.495E+00, 0.480E+00, 0.475E+00, 0.480E+00, 0.486E+00, 0.489E+00, 0.494E+00, 0.498E+00, 0.500E+00, 0.501E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.134E-01, 0.183E-01, 0.218E-01, 0.278E-01, 0.319E-01, 0.342E-01, 0.347E-01, 0.353E-01, 0.351E-01, 0.346E-01, 0.336E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.188E+00, 0.219E+00, 0.233E+00, 0.247E+00, 0.256E+00, 0.260E+00, 0.261E+00, 0.261E+00, 0.257E+00, 0.254E+00, 0.248E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.153E-01, 0.120E-01, 0.104E-01, 0.900E-02, 0.849E-02, 0.827E-02, 0.822E-02, 0.816E-02, 0.814E-02, 0.813E-02, 0.812E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.179E-01, 0.145E-01, 0.122E-01, 0.942E-02, 0.781E-02, 0.676E-02, 0.637E-02, 0.575E-02, 0.510E-02, 0.478E-02, 0.441E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a2P__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d7_a2D2 {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.679E-01, 0.643E-01, 0.657E-01, 0.755E-01, 0.861E-01, 0.944E-01, 0.974E-01, 0.102E+00, 0.104E+00, 0.105E+00, 0.104E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d7_a2D2;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.275E-01, 0.283E-01, 0.314E-01, 0.365E-01, 0.386E-01, 0.391E-01, 0.390E-01, 0.386E-01, 0.375E-01, 0.366E-01, 0.354E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.382E+01, 0.370E+01, 0.354E+01, 0.326E+01, 0.305E+01, 0.288E+01, 0.281E+01, 0.269E+01, 0.254E+01, 0.246E+01, 0.236E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.239E+00, 0.192E+00, 0.174E+00, 0.152E+00, 0.138E+00, 0.127E+00, 0.123E+00, 0.116E+00, 0.107E+00, 0.102E+00, 0.965E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.105E+01, 0.117E+01, 0.118E+01, 0.113E+01, 0.107E+01, 0.102E+01, 0.999E+00, 0.956E+00, 0.903E+00, 0.872E+00, 0.831E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.240E-01, 0.295E-01, 0.313E-01, 0.315E-01, 0.304E-01, 0.289E-01, 0.282E-01, 0.268E-01, 0.249E-01, 0.238E-01, 0.222E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.260E+01, 0.264E+01, 0.260E+01, 0.253E+01, 0.249E+01, 0.246E+01, 0.245E+01, 0.242E+01, 0.238E+01, 0.236E+01, 0.232E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.200E+00, 0.197E+00, 0.209E+00, 0.233E+00, 0.249E+00, 0.258E+00, 0.261E+00, 0.264E+00, 0.266E+00, 0.266E+00, 0.265E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.600E+00, 0.595E+00, 0.605E+00, 0.623E+00, 0.636E+00, 0.640E+00, 0.642E+00, 0.640E+00, 0.636E+00, 0.632E+00, 0.624E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.348E-01, 0.539E-01, 0.755E-01, 0.110E+00, 0.130E+00, 0.140E+00, 0.143E+00, 0.146E+00, 0.145E+00, 0.143E+00, 0.139E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.331E-01, 0.305E-01, 0.285E-01, 0.261E-01, 0.246E-01, 0.235E-01, 0.231E-01, 0.225E-01, 0.217E-01, 0.213E-01, 0.208E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.150E-01, 0.141E-01, 0.134E-01, 0.124E-01, 0.117E-01, 0.112E-01, 0.110E-01, 0.107E-01, 0.103E-01, 0.101E-01, 0.985E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a2H__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3P2_4s_b4P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.436E+00, 0.345E+00, 0.298E+00, 0.244E+00, 0.209E+00, 0.183E+00, 0.172E+00, 0.155E+00, 0.135E+00, 0.125E+00, 0.112E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3P2_4s_b4P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.110E+01, 0.883E+00, 0.790E+00, 0.689E+00, 0.626E+00, 0.579E+00, 0.558E+00, 0.523E+00, 0.478E+00, 0.453E+00, 0.420E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.668E-02, 0.636E-02, 0.618E-02, 0.597E-02, 0.587E-02, 0.585E-02, 0.585E-02, 0.588E-02, 0.594E-02, 0.599E-02, 0.606E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.160E+01, 0.150E+01, 0.142E+01, 0.127E+01, 0.114E+01, 0.104E+01, 0.100E+01, 0.932E+00, 0.853E+00, 0.813E+00, 0.765E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.223E+01, 0.233E+01, 0.243E+01, 0.256E+01, 0.259E+01, 0.256E+01, 0.254E+01, 0.246E+01, 0.235E+01, 0.226E+01, 0.215E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.512E-01, 0.627E-01, 0.672E-01, 0.684E-01, 0.670E-01, 0.647E-01, 0.635E-01, 0.611E-01, 0.574E-01, 0.552E-01, 0.520E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.616E+00, 0.553E+00, 0.523E+00, 0.499E+00, 0.489E+00, 0.482E+00, 0.478E+00, 0.471E+00, 0.461E+00, 0.455E+00, 0.445E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.542E+00, 0.520E+00, 0.520E+00, 0.523E+00, 0.520E+00, 0.513E+00, 0.508E+00, 0.499E+00, 0.486E+00, 0.478E+00, 0.467E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.243E+00, 0.246E+00, 0.238E+00, 0.221E+00, 0.210E+00, 0.202E+00, 0.199E+00, 0.193E+00, 0.186E+00, 0.182E+00, 0.176E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.331E-01, 0.292E-01, 0.266E-01, 0.239E-01, 0.225E-01, 0.217E-01, 0.215E-01, 0.211E-01, 0.209E-01, 0.208E-01, 0.208E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.688E-02, 0.688E-02, 0.689E-02, 0.695E-02, 0.700E-02, 0.707E-02, 0.709E-02, 0.714E-02, 0.722E-02, 0.724E-02, 0.728E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d7_a2D2__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4s_a4H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.238E+00, 0.230E+00, 0.220E+00, 0.205E+00, 0.196E+00, 0.189E+00, 0.186E+00, 0.182E+00, 0.177E+00, 0.174E+00, 0.170E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4s_a4H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.696E-01, 0.758E-01, 0.767E-01, 0.758E-01, 0.757E-01, 0.772E-01, 0.784E-01, 0.811E-01, 0.854E-01, 0.881E-01, 0.913E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.949E-02, 0.671E-02, 0.516E-02, 0.359E-02, 0.279E-02, 0.231E-02, 0.214E-02, 0.186E-02, 0.156E-02, 0.142E-02, 0.125E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.200E+00, 0.194E+00, 0.193E+00, 0.191E+00, 0.189E+00, 0.186E+00, 0.184E+00, 0.182E+00, 0.179E+00, 0.178E+00, 0.176E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.304E-01, 0.301E-01, 0.292E-01, 0.266E-01, 0.242E-01, 0.224E-01, 0.218E-01, 0.206E-01, 0.193E-01, 0.187E-01, 0.180E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.287E+01, 0.287E+01, 0.286E+01, 0.279E+01, 0.268E+01, 0.257E+01, 0.251E+01, 0.240E+01, 0.224E+01, 0.214E+01, 0.201E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.173E+00, 0.184E+00, 0.186E+00, 0.182E+00, 0.178E+00, 0.174E+00, 0.172E+00, 0.167E+00, 0.161E+00, 0.158E+00, 0.152E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.975E-01, 0.840E-01, 0.754E-01, 0.692E-01, 0.678E-01, 0.670E-01, 0.667E-01, 0.658E-01, 0.642E-01, 0.630E-01, 0.612E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.205E+00, 0.240E+00, 0.245E+00, 0.242E+00, 0.236E+00, 0.230E+00, 0.226E+00, 0.219E+00, 0.210E+00, 0.205E+00, 0.198E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.561E-01, 0.572E-01, 0.561E-01, 0.531E-01, 0.505E-01, 0.485E-01, 0.477E-01, 0.462E-01, 0.445E-01, 0.436E-01, 0.424E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.342E-01, 0.334E-01, 0.328E-01, 0.320E-01, 0.315E-01, 0.312E-01, 0.310E-01, 0.306E-01, 0.301E-01, 0.298E-01, 0.294E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.790E-02, 0.785E-02, 0.775E-02, 0.757E-02, 0.744E-02, 0.734E-02, 0.732E-02, 0.726E-02, 0.719E-02, 0.716E-02, 0.711E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.139E+00, 0.125E+00, 0.121E+00, 0.143E+00, 0.195E+00, 0.277E+00, 0.329E+00, 0.454E+00, 0.681E+00, 0.849E+00, 0.110E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.988E-01, 0.931E-01, 0.882E-01, 0.803E-01, 0.745E-01, 0.701E-01, 0.684E-01, 0.652E-01, 0.614E-01, 0.593E-01, 0.565E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4s_b4F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.396E+00, 0.379E+00, 0.366E+00, 0.340E+00, 0.320E+00, 0.306E+00, 0.300E+00, 0.291E+00, 0.279E+00, 0.273E+00, 0.266E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4s_b4F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.226E-04, 0.455E-04, 0.597E-04, 0.698E-04, 0.703E-04, 0.683E-04, 0.670E-04, 0.644E-04, 0.610E-04, 0.591E-04, 0.568E-04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.821E+00, 0.828E+00, 0.825E+00, 0.811E+00, 0.800E+00, 0.792E+00, 0.788E+00, 0.781E+00, 0.772E+00, 0.767E+00, 0.760E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.153E+00, 0.157E+00, 0.159E+00, 0.159E+00, 0.155E+00, 0.150E+00, 0.147E+00, 0.142E+00, 0.136E+00, 0.132E+00, 0.127E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.286E+01, 0.275E+01, 0.268E+01, 0.258E+01, 0.249E+01, 0.240E+01, 0.236E+01, 0.229E+01, 0.218E+01, 0.212E+01, 0.203E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.917E-01, 0.817E-01, 0.786E-01, 0.764E-01, 0.748E-01, 0.731E-01, 0.722E-01, 0.705E-01, 0.680E-01, 0.665E-01, 0.643E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.138E+00, 0.164E+00, 0.177E+00, 0.192E+00, 0.201E+00, 0.207E+00, 0.208E+00, 0.210E+00, 0.210E+00, 0.208E+00, 0.206E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.453E-01, 0.532E-01, 0.593E-01, 0.658E-01, 0.691E-01, 0.709E-01, 0.715E-01, 0.723E-01, 0.729E-01, 0.732E-01, 0.732E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.764E-01, 0.763E-01, 0.744E-01, 0.708E-01, 0.678E-01, 0.653E-01, 0.642E-01, 0.622E-01, 0.597E-01, 0.584E-01, 0.566E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.460E-01, 0.458E-01, 0.464E-01, 0.479E-01, 0.490E-01, 0.496E-01, 0.498E-01, 0.500E-01, 0.501E-01, 0.501E-01, 0.499E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.271E-02, 0.260E-02, 0.257E-02, 0.260E-02, 0.270E-02, 0.283E-02, 0.290E-02, 0.305E-02, 0.328E-02, 0.342E-02, 0.362E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.970E-01, 0.937E-01, 0.905E-01, 0.853E-01, 0.813E-01, 0.783E-01, 0.771E-01, 0.748E-01, 0.721E-01, 0.704E-01, 0.681E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.536E-01, 0.517E-01, 0.498E-01, 0.465E-01, 0.440E-01, 0.419E-01, 0.411E-01, 0.397E-01, 0.379E-01, 0.369E-01, 0.355E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d5_4s2_a6S {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.331E-03, 0.509E-03, 0.646E-03, 0.748E-03, 0.745E-03, 0.711E-03, 0.691E-03, 0.651E-03, 0.595E-03, 0.563E-03, 0.521E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d5_4s2_a6S;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.187E+00, 0.181E+00, 0.174E+00, 0.165E+00, 0.160E+00, 0.157E+00, 0.157E+00, 0.156E+00, 0.155E+00, 0.155E+00, 0.155E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.269E-03, 0.252E-03, 0.222E-03, 0.181E-03, 0.158E-03, 0.142E-03, 0.136E-03, 0.127E-03, 0.115E-03, 0.110E-03, 0.104E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.616E-01, 0.534E-01, 0.467E-01, 0.390E-01, 0.350E-01, 0.326E-01, 0.317E-01, 0.303E-01, 0.289E-01, 0.281E-01, 0.271E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.104E+01, 0.102E+01, 0.998E+00, 0.959E+00, 0.922E+00, 0.890E+00, 0.875E+00, 0.848E+00, 0.809E+00, 0.785E+00, 0.752E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.723E-02, 0.772E-02, 0.784E-02, 0.780E-02, 0.764E-02, 0.742E-02, 0.730E-02, 0.706E-02, 0.670E-02, 0.648E-02, 0.618E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.347E+00, 0.344E+00, 0.346E+00, 0.350E+00, 0.355E+00, 0.358E+00, 0.360E+00, 0.362E+00, 0.364E+00, 0.365E+00, 0.367E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.623E-01, 0.645E-01, 0.637E-01, 0.613E-01, 0.593E-01, 0.578E-01, 0.571E-01, 0.559E-01, 0.543E-01, 0.533E-01, 0.519E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.283E-01, 0.256E-01, 0.244E-01, 0.239E-01, 0.239E-01, 0.240E-01, 0.241E-01, 0.242E-01, 0.245E-01, 0.247E-01, 0.248E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.159E-01, 0.174E-01, 0.190E-01, 0.210E-01, 0.220E-01, 0.227E-01, 0.229E-01, 0.231E-01, 0.233E-01, 0.232E-01, 0.230E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.224E-01, 0.262E-01, 0.325E-01, 0.409E-01, 0.440E-01, 0.444E-01, 0.442E-01, 0.435E-01, 0.420E-01, 0.409E-01, 0.393E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.248E-01, 0.226E-01, 0.210E-01, 0.189E-01, 0.176E-01, 0.166E-01, 0.163E-01, 0.157E-01, 0.151E-01, 0.148E-01, 0.144E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_3G_4s_a4G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.373E-02, 0.653E-02, 0.720E-02, 0.702E-02, 0.652E-02, 0.604E-02, 0.582E-02, 0.544E-02, 0.495E-02, 0.468E-02, 0.433E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_3G_4s_a4G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.151E-02, 0.175E-02, 0.181E-02, 0.197E-02, 0.239E-02, 0.292E-02, 0.318E-02, 0.364E-02, 0.412E-02, 0.435E-02, 0.453E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.495E+00, 0.573E+00, 0.558E+00, 0.487E+00, 0.425E+00, 0.379E+00, 0.360E+00, 0.331E+00, 0.296E+00, 0.279E+00, 0.258E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.738E+00, 0.527E+00, 0.436E+00, 0.351E+00, 0.310E+00, 0.285E+00, 0.276E+00, 0.261E+00, 0.244E+00, 0.235E+00, 0.225E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.125E+03, 0.127E+03, 0.130E+03, 0.134E+03, 0.138E+03, 0.142E+03, 0.144E+03, 0.148E+03, 0.152E+03, 0.155E+03, 0.158E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.926E-01, 0.950E-01, 0.956E-01, 0.943E-01, 0.926E-01, 0.912E-01, 0.905E-01, 0.893E-01, 0.877E-01, 0.865E-01, 0.850E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.435E-01, 0.435E-01, 0.434E-01, 0.433E-01, 0.430E-01, 0.428E-01, 0.428E-01, 0.425E-01, 0.422E-01, 0.421E-01, 0.416E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d5_4s2_a6S__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4s_b2P {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.206E+00, 0.257E+00, 0.278E+00, 0.294E+00, 0.290E+00, 0.280E+00, 0.274E+00, 0.259E+00, 0.239E+00, 0.226E+00, 0.209E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4s_b2P;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.123E+00, 0.143E+00, 0.141E+00, 0.127E+00, 0.116E+00, 0.106E+00, 0.103E+00, 0.959E-01, 0.877E-01, 0.833E-01, 0.778E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.417E+00, 0.421E+00, 0.413E+00, 0.388E+00, 0.360E+00, 0.335E+00, 0.324E+00, 0.304E+00, 0.281E+00, 0.267E+00, 0.250E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.120E+02, 0.125E+02, 0.129E+02, 0.132E+02, 0.131E+02, 0.128E+02, 0.126E+02, 0.122E+02, 0.115E+02, 0.111E+02, 0.105E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.840E+00, 0.864E+00, 0.878E+00, 0.885E+00, 0.872E+00, 0.849E+00, 0.836E+00, 0.810E+00, 0.773E+00, 0.751E+00, 0.722E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.621E-01, 0.652E-01, 0.648E-01, 0.624E-01, 0.602E-01, 0.585E-01, 0.577E-01, 0.566E-01, 0.552E-01, 0.545E-01, 0.537E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.526E-01, 0.495E-01, 0.472E-01, 0.445E-01, 0.430E-01, 0.421E-01, 0.417E-01, 0.412E-01, 0.405E-01, 0.402E-01, 0.397E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.188E-01, 0.165E-01, 0.151E-01, 0.137E-01, 0.130E-01, 0.126E-01, 0.125E-01, 0.123E-01, 0.121E-01, 0.121E-01, 0.119E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.205E+00, 0.177E+00, 0.163E+00, 0.149E+00, 0.141E+00, 0.136E+00, 0.135E+00, 0.131E+00, 0.128E+00, 0.126E+00, 0.124E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.802E-01, 0.970E-01, 0.126E+00, 0.213E+00, 0.350E+00, 0.546E+00, 0.667E+00, 0.948E+00, 0.144E+01, 0.180E+01, 0.233E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3H_4s_b2H {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.969E-01, 0.860E-01, 0.796E-01, 0.701E-01, 0.638E-01, 0.597E-01, 0.583E-01, 0.563E-01, 0.547E-01, 0.542E-01, 0.541E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3H_4s_b2H;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.308E+00, 0.326E+00, 0.333E+00, 0.347E+00, 0.357E+00, 0.365E+00, 0.368E+00, 0.374E+00, 0.381E+00, 0.384E+00, 0.388E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.243E+00, 0.248E+00, 0.250E+00, 0.250E+00, 0.249E+00, 0.247E+00, 0.246E+00, 0.244E+00, 0.239E+00, 0.237E+00, 0.233E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.615E-01, 0.764E-01, 0.886E-01, 0.101E+00, 0.104E+00, 0.103E+00, 0.102E+00, 0.986E-01, 0.926E-01, 0.884E-01, 0.825E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.592E-01, 0.542E-01, 0.507E-01, 0.464E-01, 0.440E-01, 0.427E-01, 0.422E-01, 0.416E-01, 0.413E-01, 0.412E-01, 0.414E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.234E-01, 0.228E-01, 0.223E-01, 0.216E-01, 0.212E-01, 0.211E-01, 0.210E-01, 0.209E-01, 0.209E-01, 0.208E-01, 0.207E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b2P__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3F2_4s_a2F {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.324E+00, 0.325E+00, 0.324E+00, 0.322E+00, 0.323E+00, 0.327E+00, 0.330E+00, 0.335E+00, 0.342E+00, 0.346E+00, 0.350E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)] = f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3F2_4s_a2F;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.889E+00, 0.871E+00, 0.869E+00, 0.877E+00, 0.890E+00, 0.905E+00, 0.912E+00, 0.924E+00, 0.943E+00, 0.953E+00, 0.966E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.343E-01, 0.357E-01, 0.378E-01, 0.412E-01, 0.428E-01, 0.428E-01, 0.424E-01, 0.412E-01, 0.389E-01, 0.373E-01, 0.348E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.837E-01, 0.848E-01, 0.850E-01, 0.848E-01, 0.841E-01, 0.832E-01, 0.828E-01, 0.818E-01, 0.802E-01, 0.791E-01, 0.774E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.272E-01, 0.271E-01, 0.270E-01, 0.268E-01, 0.265E-01, 0.262E-01, 0.260E-01, 0.256E-01, 0.251E-01, 0.248E-01, 0.243E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_b2H__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_3G_4s_b2G {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.695E+00, 0.716E+00, 0.708E+00, 0.684E+00, 0.665E+00, 0.649E+00, 0.644E+00, 0.634E+00, 0.621E+00, 0.614E+00, 0.604E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)] = f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_3G_4s_b2G;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.288E+00, 0.282E+00, 0.276E+00, 0.263E+00, 0.252E+00, 0.242E+00, 0.236E+00, 0.227E+00, 0.214E+00, 0.206E+00, 0.196E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.694E-01, 0.672E-01, 0.657E-01, 0.634E-01, 0.619E-01, 0.609E-01, 0.604E-01, 0.595E-01, 0.584E-01, 0.578E-01, 0.567E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.430E-01, 0.435E-01, 0.439E-01, 0.442E-01, 0.442E-01, 0.439E-01, 0.438E-01, 0.436E-01, 0.431E-01, 0.428E-01, 0.423E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_a2F__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_3D_4s_b4D {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.528E+00, 0.607E+00, 0.669E+00, 0.738E+00, 0.753E+00, 0.742E+00, 0.730E+00, 0.702E+00, 0.659E+00, 0.631E+00, 0.594E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)] = f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_3D_4s_b4D;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.175E+00, 0.140E+00, 0.123E+00, 0.106E+00, 0.969E-01, 0.915E-01, 0.896E-01, 0.866E-01, 0.836E-01, 0.820E-01, 0.801E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.708E-01, 0.582E-01, 0.519E-01, 0.455E-01, 0.421E-01, 0.399E-01, 0.391E-01, 0.378E-01, 0.365E-01, 0.358E-01, 0.350E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_b2G__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.384E-01, 0.406E-01, 0.402E-01, 0.384E-01, 0.370E-01, 0.358E-01, 0.353E-01, 0.344E-01, 0.333E-01, 0.327E-01, 0.317E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.173E-01, 0.153E-01, 0.147E-01, 0.148E-01, 0.152E-01, 0.156E-01, 0.157E-01, 0.159E-01, 0.161E-01, 0.161E-01, 0.162E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.164E-01, 0.188E-01, 0.208E-01, 0.233E-01, 0.246E-01, 0.251E-01, 0.254E-01, 0.256E-01, 0.256E-01, 0.256E-01, 0.254E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.233E+00, 0.217E+00, 0.236E+00, 0.384E+00, 0.688E+00, 0.115E+01, 0.143E+01, 0.209E+01, 0.324E+01, 0.406E+01, 0.529E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.285E+00, 0.262E+00, 0.285E+00, 0.486E+00, 0.903E+00, 0.153E+01, 0.192E+01, 0.283E+01, 0.441E+01, 0.555E+01, 0.723E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z6Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.135E+02, 0.129E+02, 0.125E+02, 0.120E+02, 0.117E+02, 0.115E+02, 0.114E+02, 0.113E+02, 0.112E+02, 0.111E+02, 0.109E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z6Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.450E+01, 0.442E+01, 0.432E+01, 0.416E+01, 0.404E+01, 0.395E+01, 0.391E+01, 0.383E+01, 0.374E+01, 0.368E+01, 0.360E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.300E+01, 0.293E+01, 0.288E+01, 0.280E+01, 0.273E+01, 0.267E+01, 0.263E+01, 0.258E+01, 0.249E+01, 0.244E+01, 0.236E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.450E+01, 0.441E+01, 0.435E+01, 0.425E+01, 0.417E+01, 0.410E+01, 0.406E+01, 0.399E+01, 0.389E+01, 0.382E+01, 0.372E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z6Po {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.729E+01, 0.745E+01, 0.757E+01, 0.772E+01, 0.780E+01, 0.785E+01, 0.787E+01, 0.789E+01, 0.790E+01, 0.790E+01, 0.787E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z6Po;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.549E+01, 0.540E+01, 0.532E+01, 0.518E+01, 0.504E+01, 0.492E+01, 0.486E+01, 0.474E+01, 0.457E+01, 0.447E+01, 0.431E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.241E+01, 0.236E+01, 0.232E+01, 0.226E+01, 0.220E+01, 0.215E+01, 0.213E+01, 0.208E+01, 0.201E+01, 0.197E+01, 0.190E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.425E+01, 0.424E+01, 0.422E+01, 0.416E+01, 0.410E+01, 0.405E+01, 0.401E+01, 0.395E+01, 0.385E+01, 0.379E+01, 0.369E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Do;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Fo {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.196E+01, 0.192E+01, 0.189E+01, 0.183E+01, 0.176E+01, 0.170E+01, 0.167E+01, 0.162E+01, 0.154E+01, 0.150E+01, 0.143E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Fo;

  Eigen::Matrix<double, 2, 11> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_5D_4p_z4Do {
    {1000.0, 2000.0, 3000.0, 5000.0, 7000.0, 9000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0},
    {0.672E+01, 0.676E+01, 0.678E+01, 0.682E+01, 0.685E+01, 0.687E+01, 0.687E+01, 0.687E+01, 0.687E+01, 0.686E+01, 0.682E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_5D_4p_z4Do;

  // Atomic data from the IRON project: VI. Collision  strengths for Fe II
  // Zhang H.L., Pradhan A.K. A&A 293, 953 (1995)

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.655E+00, 0.661E+00, 0.658E+00, 0.653E+00, 0.648E+00, 0.644E+00, 0.638E+00, 0.634E+00, 0.628E+00, 0.618E+00, 0.608E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.173E+00, 0.178E+00, 0.186E+00, 0.192E+00, 0.199E+00, 0.203E+00, 0.209E+00, 0.213E+00, 0.218E+00, 0.226E+00, 0.233E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.911E-01, 0.964E-01, 0.100E+00, 0.103E+00, 0.106E+00, 0.108E+00, 0.110E+00, 0.112E+00, 0.114E+00, 0.118E+00, 0.122E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.423E-02, 0.650E-02, 0.677E-02, 0.679E-02, 0.673E-02, 0.669E-02, 0.663E-02, 0.661E-02, 0.657E-02, 0.654E-02, 0.652E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.239E-01, 0.347E-01, 0.341E-01, 0.325E-01, 0.302E-01, 0.290E-01, 0.275E-01, 0.268E-01, 0.259E-01, 0.247E-01, 0.240E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.701E-01, 0.105E+00, 0.107E+00, 0.105E+00, 0.101E+00, 0.990E-01, 0.967E-01, 0.955E-01, 0.941E-01, 0.925E-01, 0.915E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.229E-01, 0.361E-01, 0.388E-01, 0.398E-01, 0.406E-01, 0.410E-01, 0.414E-01, 0.416E-01, 0.419E-01, 0.422E-01, 0.425E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.596E-01, 0.906E-01, 0.935E-01, 0.933E-01, 0.925E-01, 0.921E-01, 0.918E-01, 0.918E-01, 0.919E-01, 0.923E-01, 0.928E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.583E-01, 0.578E-01, 0.577E-01, 0.576E-01, 0.576E-01, 0.576E-01, 0.576E-01, 0.576E-01, 0.576E-01, 0.575E-01, 0.575E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.464E-01, 0.459E-01, 0.459E-01, 0.458E-01, 0.458E-01, 0.458E-01, 0.457E-01, 0.457E-01, 0.457E-01, 0.457E-01, 0.456E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.378E-01, 0.375E-01, 0.374E-01, 0.374E-01, 0.373E-01, 0.373E-01, 0.372E-01, 0.372E-01, 0.371E-01, 0.370E-01, 0.369E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.742E-01, 0.734E-01, 0.733E-01, 0.732E-01, 0.731E-01, 0.730E-01, 0.729E-01, 0.728E-01, 0.727E-01, 0.725E-01, 0.722E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.844E-01, 0.836E-01, 0.832E-01, 0.831E-01, 0.831E-01, 0.831E-01, 0.831E-01, 0.831E-01, 0.831E-01, 0.830E-01, 0.829E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.513E-01, 0.508E-01, 0.506E-01, 0.505E-01, 0.506E-01, 0.506E-01, 0.506E-01, 0.506E-01, 0.506E-01, 0.507E-01, 0.507E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.624E-01, 0.619E-01, 0.616E-01, 0.615E-01, 0.615E-01, 0.616E-01, 0.616E-01, 0.617E-01, 0.617E-01, 0.618E-01, 0.618E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.432E-01, 0.426E-01, 0.426E-01, 0.425E-01, 0.425E-01, 0.425E-01, 0.424E-01, 0.424E-01, 0.423E-01, 0.423E-01, 0.423E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.464E-01, 0.457E-01, 0.457E-01, 0.457E-01, 0.456E-01, 0.456E-01, 0.456E-01, 0.456E-01, 0.456E-01, 0.455E-01, 0.455E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.471E-01, 0.465E-01, 0.465E-01, 0.464E-01, 0.464E-01, 0.464E-01, 0.464E-01, 0.464E-01, 0.463E-01, 0.463E-01, 0.463E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a6D__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.396E+00, 0.452E+00, 0.479E+00, 0.500E+00, 0.514E+00, 0.515E+00, 0.511E+00, 0.506E+00, 0.497E+00, 0.481E+00, 0.467E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.474E+00, 0.899E+00, 0.156E+01, 0.199E+01, 0.224E+01, 0.227E+01, 0.222E+01, 0.215E+01, 0.205E+01, 0.186E+01, 0.170E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.807E-01, 0.106E+00, 0.127E+00, 0.137E+00, 0.141E+00, 0.139E+00, 0.134E+00, 0.130E+00, 0.123E+00, 0.114E+00, 0.105E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.148E+00, 0.207E+00, 0.195E+00, 0.177E+00, 0.154E+00, 0.142E+00, 0.127E+00, 0.120E+00, 0.110E+00, 0.983E-01, 0.897E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.337E+00, 0.474E+00, 0.447E+00, 0.407E+00, 0.356E+00, 0.329E+00, 0.296E+00, 0.279E+00, 0.258E+00, 0.232E+00, 0.212E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.167E+01, 0.267E+01, 0.289E+01, 0.300E+01, 0.311E+01, 0.317E+01, 0.325E+01, 0.330E+01, 0.337E+01, 0.347E+01, 0.357E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.184E+00, 0.285E+00, 0.300E+00, 0.304E+00, 0.304E+00, 0.303E+00, 0.301E+00, 0.300E+00, 0.299E+00, 0.297E+00, 0.295E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.389E+00, 0.581E+00, 0.588E+00, 0.575E+00, 0.552E+00, 0.540E+00, 0.524E+00, 0.516E+00, 0.505E+00, 0.492E+00, 0.483E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.135E+01, 0.134E+01, 0.134E+01, 0.134E+01, 0.135E+01, 0.136E+01, 0.138E+01, 0.139E+01, 0.140E+01, 0.143E+01, 0.146E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.623E+00, 0.617E+00, 0.617E+00, 0.618E+00, 0.620E+00, 0.623E+00, 0.626E+00, 0.629E+00, 0.634E+00, 0.642E+00, 0.650E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.787E+00, 0.780E+00, 0.780E+00, 0.782E+00, 0.787E+00, 0.791E+00, 0.799E+00, 0.804E+00, 0.812E+00, 0.826E+00, 0.841E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E+01, 0.120E+01, 0.120E+01, 0.120E+01, 0.120E+01, 0.120E+01, 0.121E+01, 0.121E+01, 0.122E+01, 0.122E+01, 0.123E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.245E+01, 0.243E+01, 0.244E+01, 0.248E+01, 0.254E+01, 0.259E+01, 0.267E+01, 0.272E+01, 0.280E+01, 0.293E+01, 0.305E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.623E+00, 0.619E+00, 0.622E+00, 0.630E+00, 0.645E+00, 0.657E+00, 0.676E+00, 0.688E+00, 0.706E+00, 0.735E+00, 0.763E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.320E+00, 0.317E+00, 0.315E+00, 0.315E+00, 0.314E+00, 0.314E+00, 0.314E+00, 0.314E+00, 0.314E+00, 0.314E+00, 0.314E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.365E-01, 0.360E-01, 0.360E-01, 0.359E-01, 0.359E-01, 0.359E-01, 0.358E-01, 0.358E-01, 0.357E-01, 0.356E-01, 0.356E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.233E+00, 0.230E+00, 0.230E+00, 0.232E+00, 0.238E+00, 0.242E+00, 0.249E+00, 0.253E+00, 0.261E+00, 0.272E+00, 0.284E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.673E-01, 0.664E-01, 0.663E-01, 0.662E-01, 0.660E-01, 0.660E-01, 0.659E-01, 0.659E-01, 0.660E-01, 0.662E-01, 0.665E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d7_a4F__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.720E+01, 0.787E+01, 0.811E+01, 0.832E+01, 0.865E+01, 0.888E+01, 0.923E+01, 0.948E+01, 0.984E+01, 0.105E+02, 0.110E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.123E+00, 0.166E+00, 0.203E+00, 0.221E+00, 0.228E+00, 0.226E+00, 0.218E+00, 0.212E+00, 0.202E+00, 0.187E+00, 0.174E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.603E-01, 0.704E-01, 0.797E-01, 0.859E-01, 0.913E-01, 0.930E-01, 0.937E-01, 0.934E-01, 0.921E-01, 0.891E-01, 0.857E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.495E-02, 0.711E-02, 0.687E-02, 0.642E-02, 0.581E-02, 0.548E-02, 0.508E-02, 0.486E-02, 0.460E-02, 0.426E-02, 0.402E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.157E-01, 0.230E-01, 0.228E-01, 0.219E-01, 0.207E-01, 0.200E-01, 0.193E-01, 0.189E-01, 0.185E-01, 0.181E-01, 0.180E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.139E+00, 0.206E+00, 0.207E+00, 0.200E+00, 0.188E+00, 0.181E+00, 0.173E+00, 0.168E+00, 0.161E+00, 0.152E+00, 0.144E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E-01, 0.183E-01, 0.188E-01, 0.186E-01, 0.182E-01, 0.180E-01, 0.177E-01, 0.175E-01, 0.173E-01, 0.172E-01, 0.171E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.330E-01, 0.489E-01, 0.491E-01, 0.477E-01, 0.456E-01, 0.445E-01, 0.433E-01, 0.427E-01, 0.421E-01, 0.414E-01, 0.410E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.164E+00, 0.163E+00, 0.163E+00, 0.164E+00, 0.166E+00, 0.167E+00, 0.170E+00, 0.172E+00, 0.175E+00, 0.181E+00, 0.186E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.190E+00, 0.188E+00, 0.188E+00, 0.190E+00, 0.193E+00, 0.195E+00, 0.199E+00, 0.202E+00, 0.207E+00, 0.214E+00, 0.222E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.379E-01, 0.375E-01, 0.373E-01, 0.371E-01, 0.367E-01, 0.365E-01, 0.361E-01, 0.359E-01, 0.356E-01, 0.351E-01, 0.348E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.802E-01, 0.794E-01, 0.791E-01, 0.786E-01, 0.778E-01, 0.773E-01, 0.764E-01, 0.759E-01, 0.750E-01, 0.737E-01, 0.725E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.190E+00, 0.189E+00, 0.188E+00, 0.189E+00, 0.191E+00, 0.193E+00, 0.195E+00, 0.197E+00, 0.199E+00, 0.204E+00, 0.208E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.390E-01, 0.384E-01, 0.378E-01, 0.371E-01, 0.362E-01, 0.356E-01, 0.348E-01, 0.343E-01, 0.336E-01, 0.327E-01, 0.320E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.317E-01, 0.314E-01, 0.312E-01, 0.310E-01, 0.309E-01, 0.308E-01, 0.308E-01, 0.307E-01, 0.307E-01, 0.307E-01, 0.307E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.102E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.102E+00, 0.103E+00, 0.103E+00, 0.104E+00, 0.106E+00, 0.108E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.473E-01, 0.466E-01, 0.465E-01, 0.464E-01, 0.462E-01, 0.459E-01, 0.455E-01, 0.452E-01, 0.447E-01, 0.439E-01, 0.432E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.220E-01, 0.217E-01, 0.217E-01, 0.217E-01, 0.216E-01, 0.216E-01, 0.216E-01, 0.216E-01, 0.215E-01, 0.215E-01, 0.214E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_a4D__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.542E+01, 0.600E+01, 0.604E+01, 0.607E+01, 0.617E+01, 0.625E+01, 0.639E+01, 0.650E+01, 0.665E+01, 0.689E+01, 0.711E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.475E+00, 0.467E+00, 0.505E+00, 0.527E+00, 0.538E+00, 0.537E+00, 0.530E+00, 0.524E+00, 0.513E+00, 0.495E+00, 0.479E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.376E+00, 0.435E+00, 0.490E+00, 0.517E+00, 0.530E+00, 0.530E+00, 0.525E+00, 0.519E+00, 0.510E+00, 0.494E+00, 0.479E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.194E+00, 0.302E+00, 0.319E+00, 0.326E+00, 0.334E+00, 0.340E+00, 0.351E+00, 0.359E+00, 0.372E+00, 0.395E+00, 0.420E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.354E+00, 0.549E+00, 0.579E+00, 0.589E+00, 0.600E+00, 0.607E+00, 0.621E+00, 0.632E+00, 0.651E+00, 0.686E+00, 0.725E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.407E+00, 0.567E+00, 0.527E+00, 0.473E+00, 0.405E+00, 0.369E+00, 0.326E+00, 0.303E+00, 0.275E+00, 0.240E+00, 0.215E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.842E-01, 0.116E+00, 0.107E+00, 0.950E-01, 0.801E-01, 0.722E-01, 0.629E-01, 0.579E-01, 0.518E-01, 0.442E-01, 0.386E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.792E-01, 0.110E+00, 0.103E+00, 0.946E-01, 0.842E-01, 0.788E-01, 0.723E-01, 0.687E-01, 0.641E-01, 0.579E-01, 0.531E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.659E+00, 0.654E+00, 0.657E+00, 0.667E+00, 0.688E+00, 0.706E+00, 0.736E+00, 0.758E+00, 0.793E+00, 0.855E+00, 0.921E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.142E+01, 0.141E+01, 0.141E+01, 0.142E+01, 0.143E+01, 0.143E+01, 0.145E+01, 0.146E+01, 0.147E+01, 0.150E+01, 0.153E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.925E-01, 0.916E-01, 0.914E-01, 0.911E-01, 0.907E-01, 0.904E-01, 0.899E-01, 0.895E-01, 0.891E-01, 0.883E-01, 0.876E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.163E+00, 0.161E+00, 0.161E+00, 0.161E+00, 0.160E+00, 0.160E+00, 0.160E+00, 0.160E+00, 0.160E+00, 0.159E+00, 0.159E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.616E-01, 0.609E-01, 0.601E-01, 0.595E-01, 0.591E-01, 0.591E-01, 0.592E-01, 0.593E-01, 0.596E-01, 0.601E-01, 0.605E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.192E-01, 0.190E-01, 0.188E-01, 0.185E-01, 0.183E-01, 0.181E-01, 0.178E-01, 0.177E-01, 0.175E-01, 0.172E-01, 0.169E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.128E-01, 0.126E-01, 0.124E-01, 0.122E-01, 0.119E-01, 0.117E-01, 0.114E-01, 0.112E-01, 0.110E-01, 0.107E-01, 0.105E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.151E+01, 0.149E+01, 0.149E+01, 0.150E+01, 0.150E+01, 0.151E+01, 0.152E+01, 0.153E+01, 0.154E+01, 0.157E+01, 0.159E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.744E+00, 0.734E+00, 0.735E+00, 0.737E+00, 0.744E+00, 0.749E+00, 0.759E+00, 0.765E+00, 0.776E+00, 0.793E+00, 0.811E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.247E+00, 0.243E+00, 0.243E+00, 0.243E+00, 0.243E+00, 0.243E+00, 0.242E+00, 0.242E+00, 0.242E+00, 0.241E+00, 0.241E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d7_a4P__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.292E+00, 0.345E+00, 0.334E+00, 0.323E+00, 0.313E+00, 0.310E+00, 0.310E+00, 0.312E+00, 0.318E+00, 0.334E+00, 0.355E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.577E+00, 0.506E+00, 0.484E+00, 0.465E+00, 0.436E+00, 0.418E+00, 0.393E+00, 0.379E+00, 0.360E+00, 0.334E+00, 0.313E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.448E+00, 0.606E+00, 0.678E+00, 0.689E+00, 0.667E+00, 0.644E+00, 0.610E+00, 0.588E+00, 0.559E+00, 0.519E+00, 0.488E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.241E+01, 0.378E+01, 0.403E+01, 0.413E+01, 0.424E+01, 0.430E+01, 0.441E+01, 0.448E+01, 0.460E+01, 0.479E+01, 0.498E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.668E+01, 0.106E+02, 0.114E+02, 0.118E+02, 0.121E+02, 0.122E+02, 0.124E+02, 0.126E+02, 0.127E+02, 0.130E+02, 0.132E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.116E+00, 0.164E+00, 0.155E+00, 0.141E+00, 0.124E+00, 0.115E+00, 0.104E+00, 0.981E-01, 0.910E-01, 0.823E-01, 0.760E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.547E-01, 0.764E-01, 0.713E-01, 0.642E-01, 0.551E-01, 0.503E-01, 0.445E-01, 0.414E-01, 0.376E-01, 0.328E-01, 0.294E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.759E-01, 0.108E+00, 0.103E+00, 0.947E-01, 0.838E-01, 0.779E-01, 0.708E-01, 0.669E-01, 0.621E-01, 0.560E-01, 0.515E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.199E+02, 0.197E+02, 0.198E+02, 0.198E+02, 0.200E+02, 0.202E+02, 0.204E+02, 0.206E+02, 0.209E+02, 0.213E+02, 0.218E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.102E+00, 0.101E+00, 0.101E+00, 0.100E+00, 0.995E-01, 0.991E-01, 0.986E-01, 0.982E-01, 0.979E-01, 0.977E-01, 0.979E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.550E-01, 0.545E-01, 0.544E-01, 0.542E-01, 0.539E-01, 0.537E-01, 0.534E-01, 0.531E-01, 0.528E-01, 0.522E-01, 0.518E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.618E-01, 0.612E-01, 0.610E-01, 0.608E-01, 0.604E-01, 0.602E-01, 0.597E-01, 0.594E-01, 0.590E-01, 0.582E-01, 0.576E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.449E-01, 0.443E-01, 0.433E-01, 0.423E-01, 0.409E-01, 0.401E-01, 0.390E-01, 0.384E-01, 0.377E-01, 0.371E-01, 0.371E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.166E-01, 0.164E-01, 0.163E-01, 0.162E-01, 0.161E-01, 0.160E-01, 0.159E-01, 0.159E-01, 0.159E-01, 0.158E-01, 0.158E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.222E-01, 0.220E-01, 0.219E-01, 0.219E-01, 0.219E-01, 0.220E-01, 0.220E-01, 0.220E-01, 0.220E-01, 0.221E-01, 0.221E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.298E+00, 0.294E+00, 0.295E+00, 0.297E+00, 0.303E+00, 0.308E+00, 0.315E+00, 0.321E+00, 0.329E+00, 0.343E+00, 0.358E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.480E-01, 0.473E-01, 0.473E-01, 0.472E-01, 0.472E-01, 0.472E-01, 0.472E-01, 0.472E-01, 0.473E-01, 0.475E-01, 0.477E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.496E-01, 0.489E-01, 0.487E-01, 0.485E-01, 0.481E-01, 0.479E-01, 0.476E-01, 0.475E-01, 0.473E-01, 0.471E-01, 0.472E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4s_b4P__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.123E+00, 0.133E+00, 0.132E+00, 0.132E+00, 0.130E+00, 0.128E+00, 0.122E+00, 0.118E+00, 0.112E+00, 0.103E+00, 0.943E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.136E+01, 0.191E+01, 0.242E+01, 0.266E+01, 0.271E+01, 0.266E+01, 0.254E+01, 0.244E+01, 0.231E+01, 0.211E+01, 0.194E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.138E+00, 0.181E+00, 0.214E+00, 0.225E+00, 0.223E+00, 0.217E+00, 0.206E+00, 0.198E+00, 0.187E+00, 0.171E+00, 0.157E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.999E-02, 0.143E-01, 0.137E-01, 0.127E-01, 0.114E-01, 0.107E-01, 0.983E-02, 0.939E-02, 0.885E-02, 0.817E-02, 0.769E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.354E-01, 0.499E-01, 0.471E-01, 0.430E-01, 0.377E-01, 0.349E-01, 0.315E-01, 0.297E-01, 0.275E-01, 0.247E-01, 0.227E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.743E+01, 0.120E+02, 0.131E+02, 0.137E+02, 0.143E+02, 0.146E+02, 0.150E+02, 0.153E+02, 0.156E+02, 0.162E+02, 0.167E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.131E+02, 0.211E+02, 0.231E+02, 0.242E+02, 0.253E+02, 0.258E+02, 0.266E+02, 0.270E+02, 0.276E+02, 0.286E+02, 0.295E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.173E+02, 0.280E+02, 0.308E+02, 0.323E+02, 0.339E+02, 0.348E+02, 0.359E+02, 0.366E+02, 0.376E+02, 0.391E+02, 0.405E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.207E-01, 0.205E-01, 0.204E-01, 0.204E-01, 0.204E-01, 0.204E-01, 0.204E-01, 0.204E-01, 0.204E-01, 0.203E-01, 0.203E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.422E-01, 0.418E-01, 0.416E-01, 0.413E-01, 0.408E-01, 0.404E-01, 0.397E-01, 0.393E-01, 0.387E-01, 0.379E-01, 0.373E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.578E-01, 0.573E-01, 0.572E-01, 0.570E-01, 0.568E-01, 0.565E-01, 0.562E-01, 0.559E-01, 0.556E-01, 0.551E-01, 0.547E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.539E+01, 0.534E+01, 0.534E+01, 0.536E+01, 0.540E+01, 0.543E+01, 0.548E+01, 0.552E+01, 0.558E+01, 0.568E+01, 0.579E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.157E+00, 0.155E+00, 0.154E+00, 0.153E+00, 0.152E+00, 0.151E+00, 0.150E+00, 0.149E+00, 0.149E+00, 0.148E+00, 0.147E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.650E+00, 0.645E+00, 0.644E+00, 0.646E+00, 0.651E+00, 0.655E+00, 0.661E+00, 0.666E+00, 0.672E+00, 0.683E+00, 0.694E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.193E+01, 0.191E+01, 0.191E+01, 0.192E+01, 0.194E+01, 0.195E+01, 0.197E+01, 0.199E+01, 0.201E+01, 0.204E+01, 0.208E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.844E-02, 0.832E-02, 0.830E-02, 0.827E-02, 0.820E-02, 0.814E-02, 0.807E-02, 0.802E-02, 0.795E-02, 0.784E-02, 0.776E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.224E-01, 0.221E-01, 0.220E-01, 0.220E-01, 0.218E-01, 0.217E-01, 0.215E-01, 0.214E-01, 0.212E-01, 0.211E-01, 0.211E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.307E-01, 0.302E-01, 0.301E-01, 0.300E-01, 0.297E-01, 0.295E-01, 0.293E-01, 0.291E-01, 0.290E-01, 0.289E-01, 0.291E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3H_4s_a4H__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.164E+00, 0.252E+00, 0.257E+00, 0.258E+00, 0.257E+00, 0.253E+00, 0.244E+00, 0.237E+00, 0.226E+00, 0.209E+00, 0.193E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.138E+01, 0.152E+01, 0.187E+01, 0.210E+01, 0.220E+01, 0.219E+01, 0.212E+01, 0.206E+01, 0.196E+01, 0.180E+01, 0.167E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.271E+00, 0.297E+00, 0.324E+00, 0.337E+00, 0.336E+00, 0.330E+00, 0.316E+00, 0.307E+00, 0.293E+00, 0.273E+00, 0.256E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.217E+00, 0.302E+00, 0.280E+00, 0.251E+00, 0.213E+00, 0.193E+00, 0.170E+00, 0.157E+00, 0.141E+00, 0.122E+00, 0.108E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.441E+00, 0.613E+00, 0.570E+00, 0.511E+00, 0.436E+00, 0.396E+00, 0.349E+00, 0.323E+00, 0.292E+00, 0.252E+00, 0.223E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.527E+01, 0.794E+01, 0.811E+01, 0.802E+01, 0.785E+01, 0.777E+01, 0.770E+01, 0.768E+01, 0.769E+01, 0.775E+01, 0.785E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.977E+00, 0.135E+01, 0.125E+01, 0.111E+01, 0.935E+00, 0.843E+00, 0.734E+00, 0.675E+00, 0.604E+00, 0.514E+00, 0.448E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.156E+01, 0.215E+01, 0.198E+01, 0.176E+01, 0.148E+01, 0.133E+01, 0.115E+01, 0.106E+01, 0.945E+00, 0.801E+00, 0.696E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.160E+00, 0.159E+00, 0.159E+00, 0.160E+00, 0.162E+00, 0.164E+00, 0.166E+00, 0.168E+00, 0.171E+00, 0.176E+00, 0.182E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.138E+02, 0.137E+02, 0.137E+02, 0.137E+02, 0.138E+02, 0.139E+02, 0.140E+02, 0.141E+02, 0.143E+02, 0.146E+02, 0.149E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.195E+02, 0.193E+02, 0.193E+02, 0.193E+02, 0.194E+02, 0.195E+02, 0.197E+02, 0.198E+02, 0.199E+02, 0.202E+02, 0.205E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.216E+02, 0.214E+02, 0.214E+02, 0.214E+02, 0.215E+02, 0.216E+02, 0.217E+02, 0.218E+02, 0.220E+02, 0.223E+02, 0.226E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.595E+00, 0.591E+00, 0.595E+00, 0.604E+00, 0.622E+00, 0.635E+00, 0.655E+00, 0.669E+00, 0.691E+00, 0.727E+00, 0.765E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.443E+00, 0.441E+00, 0.448E+00, 0.460E+00, 0.483E+00, 0.500E+00, 0.527E+00, 0.546E+00, 0.576E+00, 0.627E+00, 0.680E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.822E-01, 0.814E-01, 0.810E-01, 0.809E-01, 0.809E-01, 0.809E-01, 0.809E-01, 0.809E-01, 0.809E-01, 0.809E-01, 0.808E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.448E-01, 0.441E-01, 0.440E-01, 0.438E-01, 0.435E-01, 0.433E-01, 0.430E-01, 0.428E-01, 0.425E-01, 0.422E-01, 0.419E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.653E+00, 0.644E+00, 0.644E+00, 0.645E+00, 0.646E+00, 0.648E+00, 0.651E+00, 0.653E+00, 0.657E+00, 0.663E+00, 0.670E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.367E+00, 0.362E+00, 0.362E+00, 0.362E+00, 0.363E+00, 0.364E+00, 0.366E+00, 0.367E+00, 0.369E+00, 0.372E+00, 0.376E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4s_b4F__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.123E+00, 0.159E+00, 0.180E+00, 0.189E+00, 0.189E+00, 0.184E+00, 0.175E+00, 0.168E+00, 0.158E+00, 0.143E+00, 0.130E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.113E+01, 0.183E+01, 0.218E+01, 0.231E+01, 0.231E+01, 0.225E+01, 0.214E+01, 0.206E+01, 0.195E+01, 0.179E+01, 0.166E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.199E+00, 0.221E+00, 0.246E+00, 0.257E+00, 0.256E+00, 0.250E+00, 0.238E+00, 0.230E+00, 0.218E+00, 0.200E+00, 0.185E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.251E-02, 0.381E-02, 0.393E-02, 0.390E-02, 0.382E-02, 0.377E-02, 0.371E-02, 0.367E-02, 0.362E-02, 0.357E-02, 0.354E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.193E-01, 0.282E-01, 0.279E-01, 0.266E-01, 0.249E-01, 0.240E-01, 0.229E-01, 0.223E-01, 0.217E-01, 0.210E-01, 0.207E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.822E+00, 0.130E+01, 0.140E+01, 0.144E+01, 0.148E+01, 0.150E+01, 0.153E+01, 0.155E+01, 0.158E+01, 0.162E+01, 0.167E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.164E+01, 0.257E+01, 0.273E+01, 0.279E+01, 0.284E+01, 0.287E+01, 0.291E+01, 0.294E+01, 0.298E+01, 0.306E+01, 0.314E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.200E+00, 0.295E+00, 0.296E+00, 0.286E+00, 0.272E+00, 0.264E+00, 0.254E+00, 0.249E+00, 0.243E+00, 0.235E+00, 0.229E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.318E-01, 0.315E-01, 0.313E-01, 0.311E-01, 0.308E-01, 0.306E-01, 0.302E-01, 0.300E-01, 0.297E-01, 0.294E-01, 0.291E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.701E-01, 0.694E-01, 0.689E-01, 0.680E-01, 0.666E-01, 0.656E-01, 0.642E-01, 0.633E-01, 0.621E-01, 0.604E-01, 0.590E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.462E+00, 0.458E+00, 0.460E+00, 0.465E+00, 0.476E+00, 0.485E+00, 0.501E+00, 0.512E+00, 0.531E+00, 0.564E+00, 0.599E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.142E+00, 0.141E+00, 0.140E+00, 0.140E+00, 0.141E+00, 0.143E+00, 0.146E+00, 0.149E+00, 0.155E+00, 0.169E+00, 0.188E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.160E+02, 0.159E+02, 0.159E+02, 0.159E+02, 0.161E+02, 0.162E+02, 0.164E+02, 0.165E+02, 0.167E+02, 0.170E+02, 0.174E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.226E+02, 0.224E+02, 0.224E+02, 0.225E+02, 0.227E+02, 0.229E+02, 0.232E+02, 0.233E+02, 0.236E+02, 0.240E+02, 0.245E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.273E+02, 0.271E+02, 0.273E+02, 0.277E+02, 0.284E+02, 0.290E+02, 0.297E+02, 0.302E+02, 0.310E+02, 0.321E+02, 0.332E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.326E-01, 0.321E-01, 0.321E-01, 0.320E-01, 0.320E-01, 0.319E-01, 0.319E-01, 0.318E-01, 0.318E-01, 0.317E-01, 0.317E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.902E-01, 0.890E-01, 0.888E-01, 0.885E-01, 0.879E-01, 0.874E-01, 0.865E-01, 0.859E-01, 0.852E-01, 0.841E-01, 0.832E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.146E+01, 0.144E+01, 0.144E+01, 0.144E+01, 0.145E+01, 0.146E+01, 0.148E+01, 0.149E+01, 0.150E+01, 0.154E+01, 0.157E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3G_4s_a4G__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.427E+00, 0.429E+00, 0.449E+00, 0.482E+00, 0.529E+00, 0.556E+00, 0.591E+00, 0.613E+00, 0.645E+00, 0.700E+00, 0.757E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.458E+00, 0.769E+00, 0.126E+01, 0.157E+01, 0.176E+01, 0.179E+01, 0.175E+01, 0.171E+01, 0.163E+01, 0.150E+01, 0.139E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.634E+00, 0.714E+00, 0.781E+00, 0.821E+00, 0.848E+00, 0.851E+00, 0.846E+00, 0.839E+00, 0.826E+00, 0.803E+00, 0.781E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.421E-01, 0.591E-01, 0.555E-01, 0.502E-01, 0.432E-01, 0.395E-01, 0.349E-01, 0.325E-01, 0.294E-01, 0.256E-01, 0.228E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.185E+00, 0.274E+00, 0.273E+00, 0.263E+00, 0.248E+00, 0.239E+00, 0.228E+00, 0.223E+00, 0.217E+00, 0.209E+00, 0.205E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.302E+00, 0.428E+00, 0.406E+00, 0.371E+00, 0.323E+00, 0.297E+00, 0.264E+00, 0.247E+00, 0.224E+00, 0.196E+00, 0.174E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.203E+00, 0.290E+00, 0.277E+00, 0.255E+00, 0.224E+00, 0.207E+00, 0.186E+00, 0.175E+00, 0.160E+00, 0.142E+00, 0.128E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.198E+00, 0.280E+00, 0.264E+00, 0.241E+00, 0.209E+00, 0.192E+00, 0.171E+00, 0.160E+00, 0.146E+00, 0.127E+00, 0.114E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.688E-01, 0.681E-01, 0.673E-01, 0.661E-01, 0.639E-01, 0.625E-01, 0.605E-01, 0.593E-01, 0.577E-01, 0.556E-01, 0.539E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.206E+01, 0.204E+01, 0.203E+01, 0.202E+01, 0.200E+01, 0.199E+01, 0.199E+01, 0.199E+01, 0.201E+01, 0.204E+01, 0.208E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.193E+01, 0.191E+01, 0.189E+01, 0.188E+01, 0.185E+01, 0.184E+01, 0.182E+01, 0.182E+01, 0.182E+01, 0.183E+01, 0.186E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.233E+00, 0.230E+00, 0.225E+00, 0.217E+00, 0.202E+00, 0.193E+00, 0.180E+00, 0.173E+00, 0.163E+00, 0.149E+00, 0.139E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.252E+01, 0.249E+01, 0.246E+01, 0.244E+01, 0.242E+01, 0.242E+01, 0.243E+01, 0.243E+01, 0.245E+01, 0.249E+01, 0.254E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.279E+00, 0.272E+00, 0.260E+00, 0.245E+00, 0.224E+00, 0.212E+00, 0.197E+00, 0.188E+00, 0.177E+00, 0.163E+00, 0.151E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.329E+00, 0.321E+00, 0.307E+00, 0.290E+00, 0.267E+00, 0.253E+00, 0.236E+00, 0.227E+00, 0.214E+00, 0.198E+00, 0.186E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.940E+01, 0.927E+01, 0.927E+01, 0.930E+01, 0.935E+01, 0.939E+01, 0.947E+01, 0.953E+01, 0.962E+01, 0.977E+01, 0.993E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.150E+02, 0.148E+02, 0.148E+02, 0.148E+02, 0.149E+02, 0.150E+02, 0.151E+02, 0.151E+02, 0.153E+02, 0.155E+02, 0.157E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.207E+02, 0.204E+02, 0.204E+02, 0.205E+02, 0.208E+02, 0.210E+02, 0.214E+02, 0.216E+02, 0.220E+02, 0.226E+02, 0.232E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3D_4s_b4D__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.876E+00, 0.862E+00, 0.843E+00, 0.824E+00, 0.795E+00, 0.777E+00, 0.752E+00, 0.736E+00, 0.714E+00, 0.681E+00, 0.651E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.967E-01, 0.685E-01, 0.659E-01, 0.648E-01, 0.629E-01, 0.616E-01, 0.597E-01, 0.586E-01, 0.571E-01, 0.550E-01, 0.534E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.287E-01, 0.306E-01, 0.326E-01, 0.334E-01, 0.331E-01, 0.326E-01, 0.317E-01, 0.311E-01, 0.302E-01, 0.289E-01, 0.279E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.244E-01, 0.374E-01, 0.389E-01, 0.390E-01, 0.387E-01, 0.386E-01, 0.384E-01, 0.383E-01, 0.382E-01, 0.382E-01, 0.382E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.781E-01, 0.115E+00, 0.115E+00, 0.112E+00, 0.106E+00, 0.103E+00, 0.999E-01, 0.983E-01, 0.964E-01, 0.942E-01, 0.929E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.225E+00, 0.348E+00, 0.365E+00, 0.369E+00, 0.370E+00, 0.370E+00, 0.370E+00, 0.371E+00, 0.371E+00, 0.372E+00, 0.374E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.106E+00, 0.168E+00, 0.181E+00, 0.186E+00, 0.190E+00, 0.192E+00, 0.194E+00, 0.195E+00, 0.197E+00, 0.200E+00, 0.202E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.548E-01, 0.843E-01, 0.884E-01, 0.895E-01, 0.908E-01, 0.918E-01, 0.935E-01, 0.947E-01, 0.966E-01, 0.998E-01, 0.103E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.118E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.192E+00, 0.190E+00, 0.190E+00, 0.189E+00, 0.189E+00, 0.189E+00, 0.189E+00, 0.189E+00, 0.189E+00, 0.188E+00, 0.188E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.165E+00, 0.164E+00, 0.164E+00, 0.164E+00, 0.165E+00, 0.165E+00, 0.166E+00, 0.167E+00, 0.168E+00, 0.170E+00, 0.172E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.499E-01, 0.494E-01, 0.493E-01, 0.492E-01, 0.491E-01, 0.491E-01, 0.490E-01, 0.490E-01, 0.489E-01, 0.487E-01, 0.486E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.172E+00, 0.170E+00, 0.170E+00, 0.169E+00, 0.169E+00, 0.169E+00, 0.169E+00, 0.169E+00, 0.168E+00, 0.168E+00, 0.167E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.188E+00, 0.186E+00, 0.185E+00, 0.185E+00, 0.185E+00, 0.185E+00, 0.184E+00, 0.184E+00, 0.184E+00, 0.184E+00, 0.183E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.430E-01, 0.426E-01, 0.424E-01, 0.423E-01, 0.423E-01, 0.422E-01, 0.422E-01, 0.422E-01, 0.421E-01, 0.420E-01, 0.419E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.759E-01, 0.748E-01, 0.747E-01, 0.746E-01, 0.743E-01, 0.742E-01, 0.740E-01, 0.739E-01, 0.737E-01, 0.735E-01, 0.733E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.800E-01, 0.789E-01, 0.788E-01, 0.787E-01, 0.786E-01, 0.785E-01, 0.784E-01, 0.783E-01, 0.782E-01, 0.779E-01, 0.777E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.646E-01, 0.637E-01, 0.637E-01, 0.636E-01, 0.635E-01, 0.635E-01, 0.634E-01, 0.634E-01, 0.633E-01, 0.631E-01, 0.630E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Do__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.135E+01, 0.138E+01, 0.137E+01, 0.137E+01, 0.136E+01, 0.135E+01, 0.134E+01, 0.134E+01, 0.133E+01, 0.131E+01, 0.129E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.591E-01, 0.587E-01, 0.681E-01, 0.718E-01, 0.712E-01, 0.693E-01, 0.657E-01, 0.633E-01, 0.599E-01, 0.552E-01, 0.514E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.167E-01, 0.125E-01, 0.146E-01, 0.163E-01, 0.174E-01, 0.175E-01, 0.173E-01, 0.171E-01, 0.167E-01, 0.160E-01, 0.154E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.911E-02, 0.131E-01, 0.127E-01, 0.120E-01, 0.109E-01, 0.103E-01, 0.958E-02, 0.919E-02, 0.870E-02, 0.807E-02, 0.759E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.291E-01, 0.425E-01, 0.421E-01, 0.404E-01, 0.381E-01, 0.369E-01, 0.357E-01, 0.351E-01, 0.345E-01, 0.339E-01, 0.338E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.111E+00, 0.166E+00, 0.168E+00, 0.164E+00, 0.157E+00, 0.152E+00, 0.147E+00, 0.144E+00, 0.141E+00, 0.136E+00, 0.132E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.951E-01, 0.150E+00, 0.160E+00, 0.164E+00, 0.167E+00, 0.169E+00, 0.170E+00, 0.171E+00, 0.172E+00, 0.173E+00, 0.174E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.321E+00, 0.490E+00, 0.508E+00, 0.509E+00, 0.507E+00, 0.506E+00, 0.507E+00, 0.508E+00, 0.511E+00, 0.516E+00, 0.522E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.124E+00, 0.123E+00, 0.123E+00, 0.123E+00, 0.122E+00, 0.122E+00, 0.122E+00, 0.122E+00, 0.122E+00, 0.121E+00, 0.121E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.679E-01, 0.672E-01, 0.670E-01, 0.668E-01, 0.665E-01, 0.662E-01, 0.659E-01, 0.656E-01, 0.653E-01, 0.648E-01, 0.644E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.114E+00, 0.113E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.112E+00, 0.111E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.269E+00, 0.266E+00, 0.266E+00, 0.266E+00, 0.266E+00, 0.267E+00, 0.268E+00, 0.268E+00, 0.269E+00, 0.270E+00, 0.272E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.161E+00, 0.159E+00, 0.158E+00, 0.157E+00, 0.155E+00, 0.154E+00, 0.152E+00, 0.151E+00, 0.150E+00, 0.147E+00, 0.144E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.167E+00, 0.166E+00, 0.165E+00, 0.164E+00, 0.164E+00, 0.164E+00, 0.164E+00, 0.164E+00, 0.163E+00, 0.163E+00, 0.163E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.378E+00, 0.374E+00, 0.372E+00, 0.372E+00, 0.372E+00, 0.373E+00, 0.373E+00, 0.373E+00, 0.374E+00, 0.374E+00, 0.374E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.929E-01, 0.916E-01, 0.913E-01, 0.907E-01, 0.895E-01, 0.887E-01, 0.874E-01, 0.867E-01, 0.858E-01, 0.845E-01, 0.835E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.102E+00, 0.101E+00, 0.101E+00, 0.100E+00, 0.100E+00, 0.100E+00, 0.100E+00, 0.999E-01, 0.997E-01, 0.994E-01, 0.991E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.181E+00, 0.179E+00, 0.179E+00, 0.179E+00, 0.179E+00, 0.180E+00, 0.180E+00, 0.181E+00, 0.182E+00, 0.183E+00, 0.185E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Fo__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.245E+01, 0.237E+01, 0.235E+01, 0.232E+01, 0.228E+01, 0.226E+01, 0.222E+01, 0.219E+01, 0.215E+01, 0.209E+01, 0.203E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.256E-01, 0.292E-01, 0.339E-01, 0.365E-01, 0.381E-01, 0.385E-01, 0.386E-01, 0.385E-01, 0.384E-01, 0.381E-01, 0.379E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.175E-01, 0.211E-01, 0.244E-01, 0.260E-01, 0.267E-01, 0.266E-01, 0.262E-01, 0.259E-01, 0.255E-01, 0.248E-01, 0.242E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.134E-01, 0.214E-01, 0.232E-01, 0.241E-01, 0.248E-01, 0.252E-01, 0.256E-01, 0.259E-01, 0.262E-01, 0.267E-01, 0.272E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.949E-01, 0.141E+00, 0.142E+00, 0.138E+00, 0.132E+00, 0.130E+00, 0.126E+00, 0.125E+00, 0.123E+00, 0.122E+00, 0.121E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.207E+00, 0.316E+00, 0.327E+00, 0.326E+00, 0.320E+00, 0.315E+00, 0.310E+00, 0.306E+00, 0.302E+00, 0.296E+00, 0.291E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.151E+00, 0.236E+00, 0.250E+00, 0.255E+00, 0.259E+00, 0.261E+00, 0.265E+00, 0.267E+00, 0.270E+00, 0.275E+00, 0.279E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.122E-02, 0.195E-02, 0.212E-02, 0.221E-02, 0.229E-02, 0.234E-02, 0.239E-02, 0.243E-02, 0.248E-02, 0.256E-02, 0.264E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.261E-01, 0.259E-01, 0.258E-01, 0.257E-01, 0.257E-01, 0.256E-01, 0.256E-01, 0.256E-01, 0.256E-01, 0.257E-01, 0.258E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.905E-01, 0.896E-01, 0.894E-01, 0.893E-01, 0.892E-01, 0.890E-01, 0.889E-01, 0.888E-01, 0.886E-01, 0.883E-01, 0.881E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.111E+00, 0.110E+00, 0.109E+00, 0.109E+00, 0.109E+00, 0.109E+00, 0.109E+00, 0.109E+00, 0.108E+00, 0.108E+00, 0.108E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.189E+00, 0.187E+00, 0.187E+00, 0.187E+00, 0.186E+00, 0.186E+00, 0.186E+00, 0.186E+00, 0.185E+00, 0.185E+00, 0.184E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.196E+00, 0.194E+00, 0.193E+00, 0.193E+00, 0.192E+00, 0.192E+00, 0.192E+00, 0.192E+00, 0.192E+00, 0.192E+00, 0.192E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.155E+00, 0.154E+00, 0.153E+00, 0.152E+00, 0.152E+00, 0.152E+00, 0.152E+00, 0.152E+00, 0.152E+00, 0.151E+00, 0.151E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.122E-01, 0.120E-01, 0.119E-01, 0.118E-01, 0.116E-01, 0.115E-01, 0.113E-01, 0.113E-01, 0.111E-01, 0.110E-01, 0.109E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.872E-01, 0.859E-01, 0.859E-01, 0.858E-01, 0.857E-01, 0.857E-01, 0.856E-01, 0.856E-01, 0.855E-01, 0.853E-01, 0.852E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.182E+00, 0.179E+00, 0.179E+00, 0.179E+00, 0.179E+00, 0.180E+00, 0.180E+00, 0.180E+00, 0.180E+00, 0.181E+00, 0.181E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.145E+00, 0.143E+00, 0.142E+00, 0.142E+00, 0.142E+00, 0.142E+00, 0.142E+00, 0.142E+00, 0.141E+00, 0.141E+00, 0.140E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z6Po__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.220E+01, 0.223E+01, 0.223E+01, 0.222E+01, 0.222E+01, 0.222E+01, 0.222E+01, 0.222E+01, 0.223E+01, 0.223E+01, 0.224E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.275E+00, 0.331E+00, 0.391E+00, 0.422E+00, 0.436E+00, 0.435E+00, 0.426E+00, 0.419E+00, 0.407E+00, 0.387E+00, 0.369E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.108E+00, 0.114E+00, 0.119E+00, 0.118E+00, 0.114E+00, 0.111E+00, 0.106E+00, 0.103E+00, 0.979E-01, 0.911E-01, 0.852E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.323E-01, 0.480E-01, 0.482E-01, 0.469E-01, 0.448E-01, 0.437E-01, 0.423E-01, 0.416E-01, 0.408E-01, 0.398E-01, 0.392E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.799E-01, 0.123E+00, 0.128E+00, 0.128E+00, 0.127E+00, 0.125E+00, 0.123E+00, 0.122E+00, 0.120E+00, 0.117E+00, 0.115E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.142E+00, 0.217E+00, 0.225E+00, 0.225E+00, 0.221E+00, 0.219E+00, 0.215E+00, 0.214E+00, 0.211E+00, 0.208E+00, 0.205E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.712E-01, 0.109E+00, 0.112E+00, 0.112E+00, 0.109E+00, 0.108E+00, 0.105E+00, 0.104E+00, 0.102E+00, 0.989E-01, 0.963E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.672E-01, 0.992E-01, 0.992E-01, 0.961E-01, 0.914E-01, 0.888E-01, 0.855E-01, 0.836E-01, 0.811E-01, 0.777E-01, 0.750E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.279E+00, 0.277E+00, 0.276E+00, 0.276E+00, 0.275E+00, 0.275E+00, 0.274E+00, 0.274E+00, 0.274E+00, 0.273E+00, 0.272E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.208E+00, 0.206E+00, 0.206E+00, 0.205E+00, 0.205E+00, 0.204E+00, 0.203E+00, 0.203E+00, 0.202E+00, 0.201E+00, 0.200E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.226E+00, 0.224E+00, 0.224E+00, 0.223E+00, 0.222E+00, 0.221E+00, 0.220E+00, 0.219E+00, 0.218E+00, 0.216E+00, 0.214E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.118E+00, 0.117E+00, 0.116E+00, 0.116E+00, 0.115E+00, 0.113E+00, 0.112E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.226E+00, 0.223E+00, 0.222E+00, 0.220E+00, 0.218E+00, 0.217E+00, 0.215E+00, 0.214E+00, 0.212E+00, 0.209E+00, 0.207E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.804E-01, 0.797E-01, 0.792E-01, 0.790E-01, 0.789E-01, 0.788E-01, 0.786E-01, 0.785E-01, 0.784E-01, 0.781E-01, 0.778E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.521E-01, 0.516E-01, 0.511E-01, 0.507E-01, 0.502E-01, 0.498E-01, 0.492E-01, 0.487E-01, 0.481E-01, 0.471E-01, 0.461E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.705E-01, 0.695E-01, 0.694E-01, 0.692E-01, 0.690E-01, 0.688E-01, 0.685E-01, 0.683E-01, 0.680E-01, 0.675E-01, 0.671E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.956E-01, 0.942E-01, 0.940E-01, 0.935E-01, 0.926E-01, 0.919E-01, 0.907E-01, 0.900E-01, 0.889E-01, 0.871E-01, 0.855E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.629E-01, 0.620E-01, 0.617E-01, 0.612E-01, 0.601E-01, 0.593E-01, 0.581E-01, 0.574E-01, 0.563E-01, 0.549E-01, 0.537E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Do__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_5D_4p_z4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.614E+01, 0.641E+01, 0.637E+01, 0.632E+01, 0.629E+01, 0.628E+01, 0.627E+01, 0.627E+01, 0.627E+01, 0.627E+01, 0.627E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_5D_4p_z4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.153E+00, 0.235E+00, 0.324E+00, 0.381E+00, 0.420E+00, 0.430E+00, 0.433E+00, 0.431E+00, 0.426E+00, 0.414E+00, 0.402E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.323E-01, 0.393E-01, 0.481E-01, 0.545E-01, 0.607E-01, 0.632E-01, 0.651E-01, 0.655E-01, 0.654E-01, 0.640E-01, 0.618E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.303E-02, 0.447E-02, 0.444E-02, 0.425E-02, 0.397E-02, 0.381E-02, 0.361E-02, 0.350E-02, 0.336E-02, 0.318E-02, 0.305E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.354E-01, 0.519E-01, 0.515E-01, 0.493E-01, 0.460E-01, 0.442E-01, 0.420E-01, 0.407E-01, 0.392E-01, 0.371E-01, 0.356E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.875E-01, 0.133E+00, 0.138E+00, 0.137E+00, 0.134E+00, 0.132E+00, 0.129E+00, 0.127E+00, 0.124E+00, 0.121E+00, 0.119E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.542E-01, 0.834E-01, 0.870E-01, 0.873E-01, 0.864E-01, 0.857E-01, 0.846E-01, 0.838E-01, 0.828E-01, 0.813E-01, 0.799E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.707E-01, 0.106E+00, 0.107E+00, 0.105E+00, 0.102E+00, 0.996E-01, 0.969E-01, 0.955E-01, 0.937E-01, 0.915E-01, 0.899E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.160E+00, 0.158E+00, 0.158E+00, 0.157E+00, 0.157E+00, 0.156E+00, 0.155E+00, 0.155E+00, 0.154E+00, 0.153E+00, 0.152E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.170E+00, 0.169E+00, 0.168E+00, 0.168E+00, 0.167E+00, 0.166E+00, 0.165E+00, 0.164E+00, 0.163E+00, 0.162E+00, 0.160E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.565E-01, 0.559E-01, 0.558E-01, 0.557E-01, 0.555E-01, 0.554E-01, 0.553E-01, 0.552E-01, 0.550E-01, 0.548E-01, 0.546E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.979E-01, 0.969E-01, 0.967E-01, 0.966E-01, 0.963E-01, 0.961E-01, 0.958E-01, 0.957E-01, 0.954E-01, 0.952E-01, 0.951E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.239E+00, 0.237E+00, 0.234E+00, 0.232E+00, 0.229E+00, 0.227E+00, 0.225E+00, 0.223E+00, 0.221E+00, 0.218E+00, 0.215E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.115E+00, 0.114E+00, 0.112E+00, 0.111E+00, 0.109E+00, 0.108E+00, 0.107E+00, 0.106E+00, 0.105E+00, 0.103E+00, 0.101E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.208E+00, 0.206E+00, 0.205E+00, 0.204E+00, 0.203E+00, 0.203E+00, 0.202E+00, 0.201E+00, 0.200E+00, 0.198E+00, 0.196E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.107E+00, 0.106E+00, 0.106E+00, 0.105E+00, 0.105E+00, 0.104E+00, 0.104E+00, 0.103E+00, 0.103E+00, 0.102E+00, 0.101E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.648E-01, 0.639E-01, 0.637E-01, 0.634E-01, 0.626E-01, 0.620E-01, 0.610E-01, 0.603E-01, 0.594E-01, 0.579E-01, 0.567E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.751E-01, 0.740E-01, 0.739E-01, 0.738E-01, 0.734E-01, 0.730E-01, 0.724E-01, 0.720E-01, 0.713E-01, 0.702E-01, 0.692E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Fo__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.696E-01, 0.900E-01, 0.129E+00, 0.155E+00, 0.171E+00, 0.173E+00, 0.171E+00, 0.167E+00, 0.160E+00, 0.149E+00, 0.137E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P1_4s_c4P {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.125E+00, 0.137E+00, 0.147E+00, 0.153E+00, 0.158E+00, 0.161E+00, 0.163E+00, 0.165E+00, 0.166E+00, 0.168E+00, 0.170E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P1_4s_c4P;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.148E-01, 0.216E-01, 0.212E-01, 0.201E-01, 0.186E-01, 0.178E-01, 0.167E-01, 0.162E-01, 0.155E-01, 0.145E-01, 0.138E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.536E-01, 0.775E-01, 0.754E-01, 0.709E-01, 0.645E-01, 0.610E-01, 0.566E-01, 0.542E-01, 0.512E-01, 0.474E-01, 0.446E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.392E-01, 0.576E-01, 0.570E-01, 0.546E-01, 0.511E-01, 0.491E-01, 0.468E-01, 0.456E-01, 0.440E-01, 0.422E-01, 0.409E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.105E-01, 0.166E-01, 0.179E-01, 0.184E-01, 0.187E-01, 0.188E-01, 0.189E-01, 0.190E-01, 0.191E-01, 0.191E-01, 0.191E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.295E-02, 0.428E-02, 0.422E-02, 0.405E-02, 0.388E-02, 0.382E-02, 0.383E-02, 0.388E-02, 0.402E-02, 0.436E-02, 0.480E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.725E-01, 0.718E-01, 0.714E-01, 0.707E-01, 0.694E-01, 0.685E-01, 0.670E-01, 0.660E-01, 0.646E-01, 0.623E-01, 0.602E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.102E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.101E+00, 0.100E+00, 0.100E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.467E-01, 0.462E-01, 0.461E-01, 0.459E-01, 0.455E-01, 0.452E-01, 0.448E-01, 0.445E-01, 0.441E-01, 0.435E-01, 0.430E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.618E-01, 0.612E-01, 0.611E-01, 0.610E-01, 0.609E-01, 0.609E-01, 0.608E-01, 0.608E-01, 0.607E-01, 0.606E-01, 0.605E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.142E+00, 0.140E+00, 0.140E+00, 0.139E+00, 0.139E+00, 0.138E+00, 0.138E+00, 0.137E+00, 0.137E+00, 0.136E+00, 0.136E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.639E-01, 0.631E-01, 0.621E-01, 0.611E-01, 0.598E-01, 0.591E-01, 0.581E-01, 0.575E-01, 0.568E-01, 0.557E-01, 0.548E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.128E-01, 0.126E-01, 0.125E-01, 0.123E-01, 0.122E-01, 0.121E-01, 0.120E-01, 0.120E-01, 0.119E-01, 0.118E-01, 0.117E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.137E+00, 0.135E+00, 0.135E+00, 0.135E+00, 0.134E+00, 0.133E+00, 0.132E+00, 0.132E+00, 0.131E+00, 0.129E+00, 0.128E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.120E+00, 0.118E+00, 0.118E+00, 0.118E+00, 0.117E+00, 0.116E+00, 0.115E+00, 0.114E+00, 0.113E+00, 0.112E+00, 0.110E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.150E+00, 0.148E+00, 0.148E+00, 0.147E+00, 0.147E+00, 0.146E+00, 0.144E+00, 0.143E+00, 0.142E+00, 0.140E+00, 0.138E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_5D_4p_z4Po__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F1_4s_c4F {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.638E+00, 0.682E+00, 0.802E+00, 0.963E+00, 0.121E+01, 0.135E+01, 0.151E+01, 0.160E+01, 0.169E+01, 0.178E+01, 0.182E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F1_4s_c4F;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.218E-01, 0.320E-01, 0.318E-01, 0.305E-01, 0.285E-01, 0.274E-01, 0.260E-01, 0.252E-01, 0.241E-01, 0.225E-01, 0.213E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.549E-01, 0.820E-01, 0.826E-01, 0.796E-01, 0.740E-01, 0.704E-01, 0.655E-01, 0.627E-01, 0.589E-01, 0.536E-01, 0.495E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.547E+00, 0.862E+00, 0.923E+00, 0.948E+00, 0.971E+00, 0.982E+00, 0.995E+00, 0.100E+01, 0.102E+01, 0.104E+01, 0.106E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.128E+00, 0.199E+00, 0.209E+00, 0.209E+00, 0.202E+00, 0.197E+00, 0.188E+00, 0.183E+00, 0.176E+00, 0.165E+00, 0.156E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.142E+00, 0.216E+00, 0.224E+00, 0.223E+00, 0.219E+00, 0.216E+00, 0.210E+00, 0.207E+00, 0.201E+00, 0.193E+00, 0.186E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.152E+00, 0.150E+00, 0.149E+00, 0.148E+00, 0.147E+00, 0.146E+00, 0.144E+00, 0.144E+00, 0.143E+00, 0.142E+00, 0.142E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.242E+00, 0.239E+00, 0.239E+00, 0.239E+00, 0.240E+00, 0.241E+00, 0.242E+00, 0.243E+00, 0.244E+00, 0.247E+00, 0.249E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.400E+00, 0.396E+00, 0.395E+00, 0.394E+00, 0.393E+00, 0.392E+00, 0.391E+00, 0.390E+00, 0.389E+00, 0.388E+00, 0.387E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.306E+00, 0.303E+00, 0.303E+00, 0.304E+00, 0.305E+00, 0.307E+00, 0.309E+00, 0.311E+00, 0.313E+00, 0.318E+00, 0.324E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.743E+00, 0.736E+00, 0.734E+00, 0.736E+00, 0.740E+00, 0.743E+00, 0.747E+00, 0.751E+00, 0.756E+00, 0.764E+00, 0.772E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.109E+01, 0.108E+01, 0.107E+01, 0.107E+01, 0.107E+01, 0.108E+01, 0.108E+01, 0.108E+01, 0.108E+01, 0.109E+01, 0.109E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.228E+00, 0.224E+00, 0.219E+00, 0.213E+00, 0.203E+00, 0.198E+00, 0.190E+00, 0.185E+00, 0.178E+00, 0.169E+00, 0.162E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.349E-01, 0.344E-01, 0.342E-01, 0.338E-01, 0.331E-01, 0.327E-01, 0.323E-01, 0.321E-01, 0.318E-01, 0.315E-01, 0.314E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.508E-01, 0.501E-01, 0.500E-01, 0.499E-01, 0.498E-01, 0.497E-01, 0.496E-01, 0.495E-01, 0.494E-01, 0.494E-01, 0.494E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.147E+00, 0.145E+00, 0.145E+00, 0.144E+00, 0.143E+00, 0.142E+00, 0.141E+00, 0.140E+00, 0.138E+00, 0.136E+00, 0.134E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3F1_4s_c4F__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_z4So {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.165E+00, 0.272E+00, 0.305E+00, 0.326E+00, 0.350E+00, 0.364E+00, 0.382E+00, 0.393E+00, 0.409E+00, 0.434E+00, 0.459E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_z4So;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.194E+00, 0.327E+00, 0.374E+00, 0.404E+00, 0.439E+00, 0.458E+00, 0.485E+00, 0.501E+00, 0.525E+00, 0.563E+00, 0.600E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.574E-01, 0.890E-01, 0.929E-01, 0.922E-01, 0.888E-01, 0.860E-01, 0.819E-01, 0.792E-01, 0.755E-01, 0.702E-01, 0.658E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.155E-01, 0.240E-01, 0.251E-01, 0.250E-01, 0.243E-01, 0.237E-01, 0.228E-01, 0.222E-01, 0.213E-01, 0.201E-01, 0.191E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.146E-01, 0.232E-01, 0.249E-01, 0.256E-01, 0.261E-01, 0.262E-01, 0.263E-01, 0.263E-01, 0.262E-01, 0.260E-01, 0.258E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.207E+00, 0.204E+00, 0.201E+00, 0.195E+00, 0.186E+00, 0.180E+00, 0.171E+00, 0.166E+00, 0.159E+00, 0.150E+00, 0.143E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.224E+00, 0.222E+00, 0.224E+00, 0.227E+00, 0.235E+00, 0.242E+00, 0.253E+00, 0.262E+00, 0.276E+00, 0.301E+00, 0.329E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.118E+00, 0.116E+00, 0.115E+00, 0.111E+00, 0.105E+00, 0.101E+00, 0.953E-01, 0.918E-01, 0.870E-01, 0.803E-01, 0.749E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.786E-01, 0.777E-01, 0.767E-01, 0.749E-01, 0.714E-01, 0.690E-01, 0.655E-01, 0.633E-01, 0.603E-01, 0.559E-01, 0.522E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.108E+00, 0.105E+00, 0.100E+00, 0.944E-01, 0.867E-01, 0.824E-01, 0.769E-01, 0.738E-01, 0.697E-01, 0.643E-01, 0.601E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.158E+00, 0.154E+00, 0.145E+00, 0.136E+00, 0.122E+00, 0.113E+00, 0.103E+00, 0.969E-01, 0.892E-01, 0.791E-01, 0.713E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.748E-01, 0.734E-01, 0.709E-01, 0.679E-01, 0.634E-01, 0.608E-01, 0.573E-01, 0.553E-01, 0.528E-01, 0.494E-01, 0.470E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.919E+00, 0.906E+00, 0.906E+00, 0.905E+00, 0.906E+00, 0.906E+00, 0.907E+00, 0.907E+00, 0.908E+00, 0.909E+00, 0.911E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.565E+00, 0.557E+00, 0.557E+00, 0.556E+00, 0.556E+00, 0.556E+00, 0.555E+00, 0.555E+00, 0.555E+00, 0.554E+00, 0.554E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.149E+00, 0.147E+00, 0.147E+00, 0.146E+00, 0.144E+00, 0.143E+00, 0.141E+00, 0.139E+00, 0.137E+00, 0.134E+00, 0.131E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3P1_4s_c4P__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3P2_4p_y4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.376E+01, 0.547E+01, 0.537E+01, 0.508E+01, 0.467E+01, 0.443E+01, 0.414E+01, 0.398E+01, 0.377E+01, 0.350E+01, 0.329E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3P2_4p_y4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.103E+00, 0.164E+00, 0.176E+00, 0.182E+00, 0.185E+00, 0.187E+00, 0.188E+00, 0.188E+00, 0.189E+00, 0.189E+00, 0.189E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.618E-03, 0.903E-03, 0.894E-03, 0.864E-03, 0.832E-03, 0.821E-03, 0.815E-03, 0.815E-03, 0.821E-03, 0.838E-03, 0.857E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.159E-02, 0.248E-02, 0.263E-02, 0.270E-02, 0.278E-02, 0.284E-02, 0.294E-02, 0.301E-02, 0.313E-02, 0.334E-02, 0.355E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.932E+01, 0.923E+01, 0.922E+01, 0.920E+01, 0.919E+01, 0.918E+01, 0.917E+01, 0.916E+01, 0.915E+01, 0.913E+01, 0.911E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.270E+00, 0.268E+00, 0.267E+00, 0.267E+00, 0.266E+00, 0.265E+00, 0.265E+00, 0.264E+00, 0.264E+00, 0.263E+00, 0.262E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.129E-01, 0.128E-01, 0.128E-01, 0.128E-01, 0.127E-01, 0.127E-01, 0.127E-01, 0.127E-01, 0.127E-01, 0.126E-01, 0.126E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.625E-01, 0.619E-01, 0.618E-01, 0.617E-01, 0.616E-01, 0.616E-01, 0.615E-01, 0.614E-01, 0.613E-01, 0.612E-01, 0.610E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.590E-01, 0.585E-01, 0.582E-01, 0.580E-01, 0.580E-01, 0.579E-01, 0.579E-01, 0.578E-01, 0.577E-01, 0.576E-01, 0.574E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.451E-01, 0.447E-01, 0.446E-01, 0.446E-01, 0.449E-01, 0.451E-01, 0.454E-01, 0.456E-01, 0.460E-01, 0.465E-01, 0.470E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.744E-03, 0.737E-03, 0.735E-03, 0.737E-03, 0.740E-03, 0.743E-03, 0.748E-03, 0.751E-03, 0.755E-03, 0.763E-03, 0.770E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.618E-01, 0.609E-01, 0.607E-01, 0.604E-01, 0.601E-01, 0.599E-01, 0.596E-01, 0.594E-01, 0.592E-01, 0.590E-01, 0.589E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.713E-01, 0.703E-01, 0.702E-01, 0.701E-01, 0.699E-01, 0.698E-01, 0.696E-01, 0.695E-01, 0.694E-01, 0.692E-01, 0.692E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.543E-01, 0.535E-01, 0.535E-01, 0.533E-01, 0.530E-01, 0.527E-01, 0.521E-01, 0.517E-01, 0.510E-01, 0.499E-01, 0.489E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_z4So__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.277E-01, 0.435E-01, 0.465E-01, 0.476E-01, 0.484E-01, 0.487E-01, 0.491E-01, 0.494E-01, 0.497E-01, 0.502E-01, 0.507E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.355E-01, 0.560E-01, 0.600E-01, 0.618E-01, 0.634E-01, 0.643E-01, 0.655E-01, 0.662E-01, 0.674E-01, 0.693E-01, 0.712E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.113E-02, 0.181E-02, 0.195E-02, 0.202E-02, 0.208E-02, 0.210E-02, 0.213E-02, 0.214E-02, 0.216E-02, 0.218E-02, 0.221E-02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.102E+02, 0.101E+02, 0.100E+02, 0.100E+02, 0.999E+01, 0.997E+01, 0.993E+01, 0.991E+01, 0.987E+01, 0.981E+01, 0.976E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.122E+00, 0.121E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.240E+00, 0.238E+00, 0.237E+00, 0.236E+00, 0.234E+00, 0.233E+00, 0.230E+00, 0.229E+00, 0.226E+00, 0.223E+00, 0.219E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.115E+00, 0.114E+00, 0.114E+00, 0.114E+00, 0.114E+00, 0.114E+00, 0.113E+00, 0.113E+00, 0.113E+00, 0.113E+00, 0.112E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.624E-01, 0.619E-01, 0.615E-01, 0.614E-01, 0.614E-01, 0.614E-01, 0.614E-01, 0.614E-01, 0.614E-01, 0.613E-01, 0.613E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.341E-01, 0.337E-01, 0.336E-01, 0.335E-01, 0.335E-01, 0.334E-01, 0.334E-01, 0.334E-01, 0.333E-01, 0.332E-01, 0.331E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.193E-01, 0.192E-01, 0.191E-01, 0.191E-01, 0.192E-01, 0.193E-01, 0.195E-01, 0.195E-01, 0.197E-01, 0.199E-01, 0.201E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.652E-01, 0.643E-01, 0.643E-01, 0.643E-01, 0.643E-01, 0.643E-01, 0.644E-01, 0.644E-01, 0.645E-01, 0.646E-01, 0.647E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.917E-01, 0.904E-01, 0.903E-01, 0.902E-01, 0.899E-01, 0.897E-01, 0.894E-01, 0.892E-01, 0.888E-01, 0.882E-01, 0.875E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.894E-01, 0.882E-01, 0.881E-01, 0.880E-01, 0.879E-01, 0.879E-01, 0.878E-01, 0.877E-01, 0.877E-01, 0.876E-01, 0.875E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Po__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3H_4p_z4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.280E+01, 0.441E+01, 0.472E+01, 0.482E+01, 0.487E+01, 0.486E+01, 0.484E+01, 0.482E+01, 0.479E+01, 0.473E+01, 0.467E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3H_4p_z4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.446E+01, 0.708E+01, 0.761E+01, 0.781E+01, 0.794E+01, 0.797E+01, 0.799E+01, 0.798E+01, 0.797E+01, 0.793E+01, 0.788E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.583E-01, 0.578E-01, 0.576E-01, 0.575E-01, 0.573E-01, 0.573E-01, 0.573E-01, 0.574E-01, 0.575E-01, 0.578E-01, 0.581E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.228E+01, 0.225E+01, 0.225E+01, 0.224E+01, 0.224E+01, 0.223E+01, 0.222E+01, 0.221E+01, 0.220E+01, 0.217E+01, 0.215E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.231E+01, 0.229E+01, 0.229E+01, 0.228E+01, 0.228E+01, 0.227E+01, 0.226E+01, 0.226E+01, 0.225E+01, 0.223E+01, 0.222E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.162E+01, 0.161E+01, 0.160E+01, 0.159E+01, 0.156E+01, 0.154E+01, 0.152E+01, 0.150E+01, 0.147E+01, 0.144E+01, 0.141E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.493E+00, 0.488E+00, 0.486E+00, 0.485E+00, 0.485E+00, 0.485E+00, 0.485E+00, 0.485E+00, 0.485E+00, 0.485E+00, 0.485E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.749E+00, 0.742E+00, 0.739E+00, 0.738E+00, 0.738E+00, 0.738E+00, 0.738E+00, 0.739E+00, 0.739E+00, 0.739E+00, 0.739E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.641E+00, 0.633E+00, 0.623E+00, 0.613E+00, 0.599E+00, 0.589E+00, 0.576E+00, 0.568E+00, 0.557E+00, 0.541E+00, 0.528E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.373E-01, 0.368E-01, 0.368E-01, 0.367E-01, 0.367E-01, 0.367E-01, 0.366E-01, 0.366E-01, 0.366E-01, 0.365E-01, 0.364E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.177E+00, 0.175E+00, 0.175E+00, 0.174E+00, 0.174E+00, 0.174E+00, 0.174E+00, 0.174E+00, 0.173E+00, 0.173E+00, 0.173E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.200E+00, 0.197E+00, 0.197E+00, 0.197E+00, 0.197E+00, 0.198E+00, 0.198E+00, 0.198E+00, 0.199E+00, 0.200E+00, 0.201E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Go__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3H_4p_z4Io {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.523E+01, 0.822E+01, 0.875E+01, 0.893E+01, 0.901E+01, 0.902E+01, 0.900E+01, 0.898E+01, 0.895E+01, 0.888E+01, 0.882E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3H_4p_z4Io;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.386E-01, 0.383E-01, 0.382E-01, 0.381E-01, 0.381E-01, 0.381E-01, 0.380E-01, 0.380E-01, 0.379E-01, 0.379E-01, 0.378E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.653E-01, 0.646E-01, 0.645E-01, 0.644E-01, 0.642E-01, 0.640E-01, 0.639E-01, 0.638E-01, 0.637E-01, 0.638E-01, 0.641E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.173E+00, 0.171E+00, 0.171E+00, 0.171E+00, 0.171E+00, 0.171E+00, 0.171E+00, 0.171E+00, 0.172E+00, 0.172E+00, 0.173E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.170E+01, 0.168E+01, 0.168E+01, 0.167E+01, 0.165E+01, 0.164E+01, 0.162E+01, 0.161E+01, 0.159E+01, 0.156E+01, 0.154E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.124E+01, 0.123E+01, 0.122E+01, 0.122E+01, 0.122E+01, 0.122E+01, 0.121E+01, 0.121E+01, 0.121E+01, 0.121E+01, 0.121E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.953E+00, 0.943E+00, 0.936E+00, 0.931E+00, 0.925E+00, 0.921E+00, 0.915E+00, 0.911E+00, 0.906E+00, 0.899E+00, 0.893E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.182E+01, 0.180E+01, 0.179E+01, 0.179E+01, 0.179E+01, 0.178E+01, 0.178E+01, 0.178E+01, 0.177E+01, 0.176E+01, 0.175E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.104E-01, 0.103E-01, 0.103E-01, 0.103E-01, 0.103E-01, 0.102E-01, 0.102E-01, 0.102E-01, 0.102E-01, 0.102E-01, 0.102E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.663E-01, 0.654E-01, 0.653E-01, 0.653E-01, 0.651E-01, 0.650E-01, 0.649E-01, 0.648E-01, 0.646E-01, 0.644E-01, 0.641E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.196E+00, 0.193E+00, 0.193E+00, 0.193E+00, 0.193E+00, 0.193E+00, 0.193E+00, 0.193E+00, 0.194E+00, 0.194E+00, 0.195E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Ho__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.168E+00, 0.166E+00, 0.166E+00, 0.166E+00, 0.165E+00, 0.165E+00, 0.165E+00, 0.165E+00, 0.165E+00, 0.164E+00, 0.164E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E-01, 0.119E-01, 0.119E-01, 0.119E-01, 0.118E-01, 0.118E-01, 0.117E-01, 0.117E-01, 0.117E-01, 0.116E-01, 0.116E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_y4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.318E-01, 0.314E-01, 0.314E-01, 0.314E-01, 0.313E-01, 0.313E-01, 0.312E-01, 0.312E-01, 0.311E-01, 0.311E-01, 0.310E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_y4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.260E+01, 0.258E+01, 0.257E+01, 0.257E+01, 0.256E+01, 0.255E+01, 0.255E+01, 0.254E+01, 0.253E+01, 0.252E+01, 0.251E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.112E+00, 0.111E+00, 0.111E+00, 0.111E+00, 0.110E+00, 0.110E+00, 0.110E+00, 0.110E+00, 0.110E+00, 0.110E+00, 0.110E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.577E+00, 0.571E+00, 0.568E+00, 0.567E+00, 0.567E+00, 0.566E+00, 0.566E+00, 0.566E+00, 0.566E+00, 0.566E+00, 0.566E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.175E+01, 0.174E+01, 0.173E+01, 0.173E+01, 0.173E+01, 0.173E+01, 0.173E+01, 0.174E+01, 0.174E+01, 0.174E+01, 0.174E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.576E-03, 0.568E-03, 0.567E-03, 0.565E-03, 0.564E-03, 0.563E-03, 0.564E-03, 0.565E-03, 0.568E-03, 0.574E-03, 0.583E-03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.157E-01, 0.155E-01, 0.154E-01, 0.154E-01, 0.154E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.887E-01, 0.875E-01, 0.874E-01, 0.872E-01, 0.871E-01, 0.870E-01, 0.868E-01, 0.866E-01, 0.865E-01, 0.862E-01, 0.859E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3H_4p_z4Io__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.178E+00, 0.176E+00, 0.176E+00, 0.175E+00, 0.174E+00, 0.173E+00, 0.172E+00, 0.171E+00, 0.170E+00, 0.169E+00, 0.167E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3P2_4p_y4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.147E+00, 0.145E+00, 0.145E+00, 0.145E+00, 0.144E+00, 0.144E+00, 0.143E+00, 0.143E+00, 0.143E+00, 0.142E+00, 0.141E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3P2_4p_y4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.100E+00, 0.994E-01, 0.993E-01, 0.991E-01, 0.990E-01, 0.989E-01, 0.988E-01, 0.987E-01, 0.986E-01, 0.984E-01, 0.982E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.663E-01, 0.657E-01, 0.654E-01, 0.654E-01, 0.655E-01, 0.656E-01, 0.658E-01, 0.658E-01, 0.660E-01, 0.662E-01, 0.664E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.621E-01, 0.615E-01, 0.613E-01, 0.614E-01, 0.617E-01, 0.619E-01, 0.622E-01, 0.624E-01, 0.627E-01, 0.632E-01, 0.637E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.960E-01, 0.951E-01, 0.946E-01, 0.944E-01, 0.944E-01, 0.943E-01, 0.943E-01, 0.942E-01, 0.941E-01, 0.939E-01, 0.937E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.121E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.119E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00, 0.120E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.472E-01, 0.465E-01, 0.465E-01, 0.464E-01, 0.463E-01, 0.463E-01, 0.462E-01, 0.462E-01, 0.462E-01, 0.462E-01, 0.462E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.109E+00, 0.108E+00, 0.107E+00, 0.107E+00, 0.107E+00, 0.106E+00, 0.106E+00, 0.106E+00, 0.106E+00, 0.107E+00, 0.108E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3P2_4p_y4Do__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3F2_4p_x4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.494E+01, 0.489E+01, 0.488E+01, 0.485E+01, 0.481E+01, 0.478E+01, 0.473E+01, 0.470E+01, 0.466E+01, 0.459E+01, 0.453E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3F2_4p_x4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.862E+01, 0.853E+01, 0.852E+01, 0.851E+01, 0.849E+01, 0.848E+01, 0.846E+01, 0.845E+01, 0.844E+01, 0.841E+01, 0.839E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.166E+00, 0.165E+00, 0.163E+00, 0.163E+00, 0.162E+00, 0.162E+00, 0.162E+00, 0.162E+00, 0.162E+00, 0.163E+00, 0.163E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.198E+00, 0.196E+00, 0.195E+00, 0.195E+00, 0.196E+00, 0.196E+00, 0.197E+00, 0.197E+00, 0.198E+00, 0.199E+00, 0.200E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.533E-01, 0.527E-01, 0.523E-01, 0.519E-01, 0.513E-01, 0.509E-01, 0.502E-01, 0.498E-01, 0.492E-01, 0.483E-01, 0.475E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.369E+00, 0.364E+00, 0.363E+00, 0.362E+00, 0.361E+00, 0.360E+00, 0.358E+00, 0.357E+00, 0.356E+00, 0.354E+00, 0.352E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.788E+00, 0.777E+00, 0.776E+00, 0.774E+00, 0.771E+00, 0.769E+00, 0.765E+00, 0.762E+00, 0.758E+00, 0.752E+00, 0.746E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.512E+00, 0.505E+00, 0.504E+00, 0.502E+00, 0.497E+00, 0.494E+00, 0.489E+00, 0.486E+00, 0.481E+00, 0.474E+00, 0.468E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_x4Do__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3F2_4p_y4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.837E+01, 0.829E+01, 0.827E+01, 0.824E+01, 0.820E+01, 0.816E+01, 0.810E+01, 0.806E+01, 0.800E+01, 0.791E+01, 0.782E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3F2_4p_y4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.535E+00, 0.529E+00, 0.526E+00, 0.524E+00, 0.522E+00, 0.521E+00, 0.519E+00, 0.518E+00, 0.517E+00, 0.516E+00, 0.515E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.866E+00, 0.858E+00, 0.853E+00, 0.852E+00, 0.852E+00, 0.852E+00, 0.852E+00, 0.852E+00, 0.853E+00, 0.853E+00, 0.854E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.438E+00, 0.434E+00, 0.431E+00, 0.430E+00, 0.429E+00, 0.428E+00, 0.428E+00, 0.427E+00, 0.426E+00, 0.425E+00, 0.425E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.339E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.334E+00, 0.335E+00, 0.335E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.605E+00, 0.596E+00, 0.595E+00, 0.592E+00, 0.587E+00, 0.583E+00, 0.577E+00, 0.573E+00, 0.567E+00, 0.558E+00, 0.550E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.834E+00, 0.822E+00, 0.821E+00, 0.820E+00, 0.818E+00, 0.816E+00, 0.813E+00, 0.810E+00, 0.806E+00, 0.801E+00, 0.796E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Fo__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.526E+00, 0.521E+00, 0.519E+00, 0.519E+00, 0.520E+00, 0.521E+00, 0.523E+00, 0.524E+00, 0.525E+00, 0.527E+00, 0.529E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_x4Go {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.362E+00, 0.358E+00, 0.356E+00, 0.354E+00, 0.353E+00, 0.352E+00, 0.351E+00, 0.350E+00, 0.349E+00, 0.347E+00, 0.346E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_x4Go;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.291E+00, 0.288E+00, 0.287E+00, 0.286E+00, 0.286E+00, 0.286E+00, 0.286E+00, 0.286E+00, 0.286E+00, 0.285E+00, 0.285E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.255E-01, 0.252E-01, 0.252E-01, 0.252E-01, 0.251E-01, 0.251E-01, 0.251E-01, 0.251E-01, 0.251E-01, 0.252E-01, 0.252E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.649E+00, 0.640E+00, 0.640E+00, 0.639E+00, 0.639E+00, 0.639E+00, 0.639E+00, 0.639E+00, 0.639E+00, 0.639E+00, 0.640E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.494E+00, 0.487E+00, 0.486E+00, 0.487E+00, 0.487E+00, 0.488E+00, 0.489E+00, 0.490E+00, 0.491E+00, 0.493E+00, 0.495E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3F2_4p_y4Go__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3G_4p_x4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.617E+01, 0.611E+01, 0.606E+01, 0.602E+01, 0.596E+01, 0.593E+01, 0.588E+01, 0.585E+01, 0.580E+01, 0.572E+01, 0.566E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3G_4p_x4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.111E+02, 0.110E+02, 0.110E+02, 0.109E+02, 0.109E+02, 0.109E+02, 0.109E+02, 0.108E+02, 0.108E+02, 0.108E+02, 0.107E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.422E+00, 0.417E+00, 0.416E+00, 0.415E+00, 0.414E+00, 0.412E+00, 0.411E+00, 0.410E+00, 0.409E+00, 0.408E+00, 0.407E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.627E+00, 0.618E+00, 0.618E+00, 0.617E+00, 0.616E+00, 0.615E+00, 0.614E+00, 0.614E+00, 0.612E+00, 0.611E+00, 0.609E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.642E+00, 0.633E+00, 0.631E+00, 0.628E+00, 0.621E+00, 0.616E+00, 0.609E+00, 0.603E+00, 0.596E+00, 0.585E+00, 0.574E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Fo__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3G_4p_y4Ho {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.103E+02, 0.102E+02, 0.102E+02, 0.101E+02, 0.101E+02, 0.100E+02, 0.999E+01, 0.995E+01, 0.989E+01, 0.981E+01, 0.973E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3G_4p_y4Ho;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.112E+00, 0.110E+00, 0.110E+00, 0.110E+00, 0.109E+00, 0.109E+00, 0.108E+00, 0.108E+00, 0.107E+00, 0.106E+00, 0.106E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.230E+00, 0.226E+00, 0.226E+00, 0.226E+00, 0.227E+00, 0.227E+00, 0.228E+00, 0.228E+00, 0.229E+00, 0.230E+00, 0.231E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.776E+00, 0.765E+00, 0.763E+00, 0.761E+00, 0.757E+00, 0.753E+00, 0.748E+00, 0.744E+00, 0.738E+00, 0.730E+00, 0.723E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3G_4p_x4Go__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Po {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.155E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01, 0.153E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)] = f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Po;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.870E-01, 0.857E-01, 0.857E-01, 0.856E-01, 0.856E-01, 0.856E-01, 0.856E-01, 0.855E-01, 0.855E-01, 0.855E-01, 0.854E-01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.177E+01, 0.175E+01, 0.175E+01, 0.175E+01, 0.174E+01, 0.174E+01, 0.174E+01, 0.174E+01, 0.174E+01, 0.174E+01, 0.174E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3G_4p_y4Ho__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4p_w4Po__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.332E+01, 0.328E+01, 0.327E+01, 0.325E+01, 0.322E+01, 0.320E+01, 0.317E+01, 0.315E+01, 0.312E+01, 0.307E+01, 0.303E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3D_4p_w4Po__LS_Ar_3d6_3D_4p_w4Do;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4p_w4Po__LS_Ar_3d6_3D_4p_w4Fo {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.894E+01, 0.882E+01, 0.881E+01, 0.880E+01, 0.879E+01, 0.878E+01, 0.876E+01, 0.875E+01, 0.873E+01, 0.870E+01, 0.867E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)] = f_vs_T__LS_Ar_3d6_3D_4p_w4Po__LS_Ar_3d6_3D_4p_w4Fo;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_Ar_3d6_3D_4p_w4Fo__LS_Ar_3d6_3D_4p_w4Do {
    {1000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 15000.0, 17000.0, 20000.0, 25000.0, 30000.0, 35000.0},
    {0.919E+01, 0.906E+01, 0.905E+01, 0.904E+01, 0.900E+01, 0.897E+01, 0.892E+01, 0.889E+01, 0.884E+01, 0.878E+01, 0.873E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)] = f_vs_T__LS_Ar_3d6_3D_4p_w4Fo__LS_Ar_3d6_3D_4p_w4Do;

  return f_vs_T_KK;
}


}