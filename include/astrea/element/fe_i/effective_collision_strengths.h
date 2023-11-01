/**
 * \file astrea/element/fe_i/effective_collision_strengths.h
 * Fe I effective collision strengths by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_i/structure.h"


namespace astrea::element::fe_i {


/**
 * Fe I effective collision strengths by Mashonkina+2011.
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
  f_vs_T(239, std::vector<Eigen::Matrix2Xd>(239));

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4s_a5F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5410E+01, 0.6387E+01, 0.6837E+01, 0.6963E+01, 0.7114E+01, 0.7159E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4s_a5F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4s_a3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2264E+01, 0.2690E+01, 0.3098E+01, 0.3292E+01, 0.3613E+01, 0.3780E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4s_a3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4P_4s_a5P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1661E+01, 0.2037E+01, 0.2361E+01, 0.2503E+01, 0.2732E+01, 0.2862E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4P_4s_a5P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1170E+01, 0.1215E+01, 0.1274E+01, 0.1315E+01, 0.1405E+01, 0.1465E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1921E-01, 0.5084E-01, 0.1138E+00, 0.1588E+00, 0.2655E+00, 0.3569E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7889E+01, 0.1041E+02, 0.1289E+02, 0.1390E+02, 0.1513E+02, 0.1540E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8845E-01, 0.1687E+00, 0.2526E+00, 0.2951E+00, 0.3793E+00, 0.4461E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1910E-01, 0.2493E-01, 0.2826E-01, 0.2943E-01, 0.3167E-01, 0.3370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2279E+00, 0.2500E+00, 0.2710E+00, 0.2808E+00, 0.2957E+00, 0.3018E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1316E+02, 0.1617E+02, 0.1890E+02, 0.1989E+02, 0.2087E+02, 0.2084E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1175E+00, 0.2428E+00, 0.3735E+00, 0.4368E+00, 0.5592E+00, 0.6547E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4433E+01, 0.5603E+01, 0.6651E+01, 0.7048E+01, 0.7486E+01, 0.7535E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1779E+00, 0.2303E+00, 0.2693E+00, 0.2839E+00, 0.3036E+00, 0.3130E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5177E+01, 0.5986E+01, 0.6953E+01, 0.7392E+01, 0.8010E+01, 0.8266E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3720E-02, 0.5454E-02, 0.8736E-02, 0.1112E-01, 0.1750E-01, 0.2403E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8818E-01, 0.9405E-01, 0.8932E-01, 0.8474E-01, 0.7562E-01, 0.7040E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6556E+01, 0.8293E+01, 0.1025E+02, 0.1116E+02, 0.1257E+02, 0.1332E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2574E+01, 0.3105E+01, 0.3678E+01, 0.3948E+01, 0.4405E+01, 0.4698E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5317E-01, 0.1193E+00, 0.2035E+00, 0.2501E+00, 0.3488E+00, 0.4296E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2561E+01, 0.2922E+01, 0.3190E+01, 0.3261E+01, 0.3276E+01, 0.3201E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3540E+01, 0.4394E+01, 0.5098E+01, 0.5336E+01, 0.5548E+01, 0.5518E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3218E-01, 0.4939E-01, 0.6050E-01, 0.6407E-01, 0.6942E-01, 0.7342E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2485E+01, 0.4963E+01, 0.9287E+01, 0.1240E+02, 0.2052E+02, 0.2845E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3449E+01, 0.6617E+01, 0.1196E+02, 0.1573E+02, 0.2539E+02, 0.3466E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1109E+01, 0.1274E+01, 0.1407E+01, 0.1454E+01, 0.1497E+01, 0.1494E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8111E-02, 0.2996E-01, 0.8185E-01, 0.1200E+00, 0.2075E+00, 0.2748E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1286E-02, 0.3352E-02, 0.1174E-01, 0.1983E-01, 0.4204E-01, 0.6168E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1696E-02, 0.5967E-02, 0.1744E-01, 0.2660E-01, 0.5065E-01, 0.7380E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1734E+01, 0.2859E+01, 0.4646E+01, 0.5911E+01, 0.9237E+01, 0.1251E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3016E-02, 0.5087E-02, 0.1051E-01, 0.1511E-01, 0.2696E-01, 0.3724E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6798E-02, 0.1189E-01, 0.2174E-01, 0.2881E-01, 0.4546E-01, 0.5899E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1327E+00, 0.2242E+00, 0.3360E+00, 0.3981E+00, 0.5301E+00, 0.6400E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6690E+00, 0.9864E+00, 0.1415E+01, 0.1660E+01, 0.2124E+01, 0.2412E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2147E-01, 0.4662E-01, 0.7557E-01, 0.9074E-01, 0.1217E+00, 0.1455E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1636E-02, 0.3138E-02, 0.4759E-02, 0.5861E-02, 0.9251E-02, 0.1303E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8669E-03, 0.3880E-02, 0.1470E-01, 0.2468E-01, 0.5325E-01, 0.8126E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4305E-01, 0.5516E-01, 0.5957E-01, 0.6102E-01, 0.6636E-01, 0.7390E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4180E-01, 0.7133E-01, 0.1009E+00, 0.1166E+00, 0.1482E+00, 0.1710E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_a5D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4s_a3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2734E+02, 0.3110E+02, 0.3273E+02, 0.3272E+02, 0.3139E+02, 0.2952E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4s_a3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4P_4s_a5P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3299E+01, 0.3908E+01, 0.4262E+01, 0.4364E+01, 0.4473E+01, 0.4503E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4P_4s_a5P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4916E+00, 0.6099E+00, 0.7129E+00, 0.7539E+00, 0.8094E+00, 0.8313E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2027E+01, 0.2933E+01, 0.3491E+01, 0.3648E+01, 0.3786E+01, 0.3795E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5545E+01, 0.5911E+01, 0.5697E+01, 0.5502E+01, 0.5131E+01, 0.4906E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1340E+01, 0.2088E+01, 0.2568E+01, 0.2683E+01, 0.2719E+01, 0.2639E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1311E+01, 0.1698E+01, 0.2067E+01, 0.2225E+01, 0.2478E+01, 0.2633E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8205E+00, 0.9195E+00, 0.1027E+01, 0.1071E+01, 0.1125E+01, 0.1140E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3257E+01, 0.3145E+01, 0.3181E+01, 0.3252E+01, 0.3453E+01, 0.3629E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6817E+00, 0.1321E+01, 0.1879E+01, 0.2093E+01, 0.2389E+01, 0.2533E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3595E+00, 0.4799E+00, 0.6302E+00, 0.7114E+00, 0.8636E+00, 0.9643E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7399E+00, 0.8154E+00, 0.8121E+00, 0.7910E+00, 0.7298E+00, 0.6757E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8150E+01, 0.8213E+01, 0.9252E+01, 0.1020E+02, 0.1279E+02, 0.1529E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2224E+00, 0.3319E+00, 0.4965E+00, 0.6043E+00, 0.8559E+00, 0.1073E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8159E+00, 0.9946E+00, 0.1123E+01, 0.1170E+01, 0.1241E+01, 0.1285E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4770E+01, 0.4814E+01, 0.5325E+01, 0.5791E+01, 0.7071E+01, 0.8303E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6858E+00, 0.7129E+00, 0.7294E+00, 0.7348E+00, 0.7432E+00, 0.7500E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5215E-01, 0.1439E+00, 0.2520E+00, 0.3001E+00, 0.3756E+00, 0.4215E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1682E+01, 0.1611E+01, 0.1512E+01, 0.1456E+01, 0.1342E+01, 0.1256E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4942E+00, 0.5514E+00, 0.6109E+00, 0.6376E+00, 0.6757E+00, 0.6923E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3049E+00, 0.4914E+00, 0.6917E+00, 0.7874E+00, 0.9589E+00, 0.1078E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2824E+00, 0.4447E+00, 0.6801E+00, 0.8278E+00, 0.1164E+01, 0.1455E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1550E+00, 0.2701E+00, 0.4389E+00, 0.5420E+00, 0.7676E+00, 0.9575E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8348E-01, 0.8917E-01, 0.1004E+00, 0.1070E+00, 0.1191E+00, 0.1265E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8860E+00, 0.2515E+01, 0.4768E+01, 0.6057E+01, 0.8843E+01, 0.1115E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3872E-01, 0.8879E-01, 0.1819E+00, 0.2426E+00, 0.3747E+00, 0.4763E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4562E+00, 0.7707E+00, 0.1433E+01, 0.1893E+01, 0.2880E+01, 0.3587E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5146E-01, 0.9217E-01, 0.1461E+00, 0.1757E+00, 0.2324E+00, 0.2732E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1906E-01, 0.3031E-01, 0.5368E-01, 0.7083E-01, 0.1123E+00, 0.1482E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1465E-01, 0.3064E-01, 0.5655E-01, 0.7137E-01, 0.1008E+00, 0.1233E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3946E+00, 0.8479E+00, 0.1376E+01, 0.1674E+01, 0.2346E+01, 0.2940E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4518E-01, 0.8541E-01, 0.1516E+00, 0.1954E+00, 0.2924E+00, 0.3666E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5536E+00, 0.1155E+01, 0.1678E+01, 0.1889E+01, 0.2240E+01, 0.2485E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1405E+00, 0.2469E+00, 0.3026E+00, 0.3119E+00, 0.3090E+00, 0.2980E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7290E-01, 0.1142E+00, 0.2044E+00, 0.2774E+00, 0.4638E+00, 0.6249E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5888E+00, 0.7369E+00, 0.7550E+00, 0.7374E+00, 0.6871E+00, 0.6487E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1400E+01, 0.2027E+01, 0.2493E+01, 0.2735E+01, 0.3308E+01, 0.3826E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a5F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4P_4s_a5P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2334E+00, 0.3783E+00, 0.5152E+00, 0.5701E+00, 0.6425E+00, 0.6694E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4P_4s_a5P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9037E+00, 0.1077E+01, 0.1317E+01, 0.1441E+01, 0.1660E+01, 0.1795E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3127E+01, 0.4104E+01, 0.4408E+01, 0.4369E+01, 0.4113E+01, 0.3869E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1557E+01, 0.2321E+01, 0.2677E+01, 0.2712E+01, 0.2615E+01, 0.2475E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2169E+01, 0.2383E+01, 0.2314E+01, 0.2219E+01, 0.2007E+01, 0.1858E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9433E+00, 0.9171E+00, 0.8782E+00, 0.8552E+00, 0.8118E+00, 0.7823E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9672E+00, 0.1687E+01, 0.2187E+01, 0.2320E+01, 0.2410E+01, 0.2400E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9223E+00, 0.1014E+01, 0.9935E+00, 0.9649E+00, 0.9098E+00, 0.8809E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2775E+00, 0.3456E+00, 0.4295E+00, 0.4764E+00, 0.5762E+00, 0.6593E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2384E+01, 0.2432E+01, 0.2457E+01, 0.2466E+01, 0.2471E+01, 0.2458E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4498E+00, 0.4019E+00, 0.3897E+00, 0.3975E+00, 0.4369E+00, 0.4831E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6068E+00, 0.6209E+00, 0.5859E+00, 0.5616E+00, 0.5191E+00, 0.4959E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1394E+01, 0.1453E+01, 0.1547E+01, 0.1612E+01, 0.1749E+01, 0.1846E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6185E-01, 0.8164E-01, 0.1060E+00, 0.1199E+00, 0.1489E+00, 0.1719E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1596E+00, 0.1760E+00, 0.1981E+00, 0.2134E+00, 0.2520E+00, 0.2874E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1096E+00, 0.1317E+00, 0.1812E+00, 0.2175E+00, 0.3087E+00, 0.3927E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6471E-03, 0.1166E-02, 0.2680E-02, 0.4495E-02, 0.1100E-01, 0.1856E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2985E+00, 0.3234E+00, 0.3671E+00, 0.3946E+00, 0.4477E+00, 0.4827E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9460E-01, 0.1923E+00, 0.2905E+00, 0.3281E+00, 0.3768E+00, 0.4003E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1640E-02, 0.4001E-02, 0.7365E-02, 0.9538E-02, 0.1554E-01, 0.2244E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6609E+01, 0.6902E+01, 0.8016E+01, 0.8941E+01, 0.1141E+02, 0.1375E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3988E+01, 0.4180E+01, 0.4791E+01, 0.5281E+01, 0.6543E+01, 0.7702E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1258E+00, 0.2238E+00, 0.3359E+00, 0.3921E+00, 0.4950E+00, 0.5664E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7981E-01, 0.1440E+00, 0.2387E+00, 0.2968E+00, 0.4227E+00, 0.5262E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1018E+00, 0.2086E+00, 0.3657E+00, 0.4565E+00, 0.6332E+00, 0.7594E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8659E+00, 0.8633E+00, 0.8567E+00, 0.8530E+00, 0.8464E+00, 0.8413E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1098E-02, 0.3449E-02, 0.7178E-02, 0.9414E-02, 0.1468E-01, 0.1977E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8471E-01, 0.1683E+00, 0.2846E+00, 0.3408E+00, 0.4358E+00, 0.5020E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1160E+00, 0.3120E+00, 0.6935E+00, 0.9708E+00, 0.1679E+01, 0.2333E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5744E+00, 0.8520E+00, 0.1307E+01, 0.1604E+01, 0.2256E+01, 0.2762E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5389E-01, 0.1071E+00, 0.1781E+00, 0.2161E+00, 0.2836E+00, 0.3263E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3176E-01, 0.7481E-01, 0.1696E+00, 0.2444E+00, 0.4446E+00, 0.6360E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3579E-01, 0.9841E-01, 0.2185E+00, 0.3035E+00, 0.5168E+00, 0.7143E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2614E-01, 0.5119E-01, 0.8123E-01, 0.9583E-01, 0.1226E+00, 0.1427E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4826E-01, 0.8759E-01, 0.1388E+00, 0.1661E+00, 0.2195E+00, 0.2593E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1632E-02, 0.4621E-02, 0.8374E-02, 0.1046E-01, 0.1523E-01, 0.1957E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7353E-01, 0.1178E+00, 0.1944E+00, 0.2484E+00, 0.3769E+00, 0.4842E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1353E-01, 0.2604E-01, 0.3692E-01, 0.4243E-01, 0.5467E-01, 0.6497E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1031E+00, 0.1819E+00, 0.2580E+00, 0.2909E+00, 0.3429E+00, 0.3732E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4s_a3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9554E+01, 0.1016E+02, 0.1024E+02, 0.1010E+02, 0.9543E+01, 0.8919E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7777E-03, 0.2241E-02, 0.5063E-02, 0.7188E-02, 0.1271E-01, 0.1792E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8418E+00, 0.1138E+01, 0.1368E+01, 0.1455E+01, 0.1576E+01, 0.1635E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1235E+00, 0.2118E+00, 0.3019E+00, 0.3492E+00, 0.4395E+00, 0.4996E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1859E-01, 0.3747E-01, 0.6598E-01, 0.8395E-01, 0.1238E+00, 0.1566E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3186E+01, 0.3251E+01, 0.3189E+01, 0.3116E+01, 0.2916E+01, 0.2728E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1022E+01, 0.1047E+01, 0.1098E+01, 0.1157E+01, 0.1339E+01, 0.1514E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7500E-03, 0.1682E-02, 0.3573E-02, 0.5403E-02, 0.1226E-01, 0.2136E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1146E+01, 0.1206E+01, 0.1276E+01, 0.1310E+01, 0.1365E+01, 0.1393E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1809E+01, 0.2309E+01, 0.2551E+01, 0.2576E+01, 0.2476E+01, 0.2314E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3622E+01, 0.4013E+01, 0.4614E+01, 0.4991E+01, 0.5799E+01, 0.6421E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1157E-01, 0.2810E-01, 0.5841E-01, 0.8031E-01, 0.1360E+00, 0.1885E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1098E+00, 0.1736E+00, 0.2437E+00, 0.2784E+00, 0.3436E+00, 0.3927E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3117E+01, 0.2616E+01, 0.2203E+01, 0.2045E+01, 0.1829E+01, 0.1729E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4314E+01, 0.5377E+01, 0.7149E+01, 0.8302E+01, 0.1089E+02, 0.1300E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1128E+00, 0.3030E+00, 0.5234E+00, 0.6228E+00, 0.7788E+00, 0.8662E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5391E+00, 0.5292E+00, 0.5109E+00, 0.4997E+00, 0.4755E+00, 0.4557E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2353E+00, 0.2418E+00, 0.2516E+00, 0.2561E+00, 0.2611E+00, 0.2617E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4963E-01, 0.9042E-01, 0.1452E+00, 0.1798E+00, 0.2639E+00, 0.3424E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1361E+00, 0.2426E+00, 0.3784E+00, 0.4526E+00, 0.5986E+00, 0.7056E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7803E-01, 0.1572E+00, 0.2768E+00, 0.3495E+00, 0.4985E+00, 0.6050E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4846E+00, 0.5301E+00, 0.5695E+00, 0.5826E+00, 0.5907E+00, 0.5831E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1009E-01, 0.5612E-01, 0.1343E+00, 0.1728E+00, 0.2329E+00, 0.2679E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5808E-03, 0.2453E-02, 0.8101E-02, 0.1242E-01, 0.2236E-01, 0.3042E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8144E-01, 0.2035E+00, 0.4992E+00, 0.7063E+00, 0.1140E+01, 0.1437E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1444E+00, 0.2344E+00, 0.3448E+00, 0.4066E+00, 0.5358E+00, 0.6398E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6776E-03, 0.3383E-02, 0.1209E-01, 0.1932E-01, 0.3736E-01, 0.5299E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1592E-02, 0.8817E-02, 0.2424E-01, 0.3420E-01, 0.5430E-01, 0.6832E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7215E-01, 0.1803E+00, 0.3325E+00, 0.4243E+00, 0.6300E+00, 0.8026E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4720E-01, 0.9149E-01, 0.1548E+00, 0.1933E+00, 0.2760E+00, 0.3392E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4145E-01, 0.1051E+00, 0.1895E+00, 0.2354E+00, 0.3199E+00, 0.3744E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1586E-01, 0.2913E-01, 0.4439E-01, 0.5307E-01, 0.7473E-01, 0.9709E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5950E-01, 0.1225E+00, 0.2903E+00, 0.4215E+00, 0.7307E+00, 0.9723E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3396E-01, 0.5368E-01, 0.7714E-01, 0.9033E-01, 0.1205E+00, 0.1480E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4121E+00, 0.6449E+00, 0.7699E+00, 0.8018E+00, 0.8366E+00, 0.8529E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4P_4s_a5P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3962E-02, 0.1267E-01, 0.2161E-01, 0.2506E-01, 0.3018E-01, 0.3384E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_a3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_a3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3137E+00, 0.5718E+00, 0.7653E+00, 0.8258E+00, 0.8925E+00, 0.9193E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3621E-02, 0.1085E-01, 0.2465E-01, 0.3398E-01, 0.5506E-01, 0.7262E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3939E+01, 0.3725E+01, 0.3499E+01, 0.3380E+01, 0.3153E+01, 0.2984E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1008E-01, 0.1580E-01, 0.1984E-01, 0.2190E-01, 0.2740E-01, 0.3406E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2312E+01, 0.2607E+01, 0.2743E+01, 0.2788E+01, 0.2868E+01, 0.2911E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5016E-02, 0.1263E-01, 0.2418E-01, 0.3099E-01, 0.4493E-01, 0.5552E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5274E+00, 0.5734E+00, 0.6052E+00, 0.6171E+00, 0.6327E+00, 0.6378E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3803E-02, 0.8171E-02, 0.1637E-01, 0.2255E-01, 0.3827E-01, 0.5257E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7348E+00, 0.7595E+00, 0.7514E+00, 0.7419E+00, 0.7226E+00, 0.7098E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8410E+00, 0.7695E+00, 0.6929E+00, 0.6630E+00, 0.6279E+00, 0.6171E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4706E+00, 0.5037E+00, 0.5156E+00, 0.5155E+00, 0.5077E+00, 0.4967E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1196E+00, 0.1420E+00, 0.1742E+00, 0.1939E+00, 0.2386E+00, 0.2768E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3343E-02, 0.8337E-02, 0.1762E-01, 0.2434E-01, 0.4131E-01, 0.5723E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1387E-06, 0.7137E-06, 0.4281E-05, 0.9855E-05, 0.3609E-04, 0.7450E-04}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6527E+00, 0.6648E+00, 0.6816E+00, 0.6900E+00, 0.7002E+00, 0.6999E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1289E+00, 0.2664E+00, 0.4045E+00, 0.4590E+00, 0.5330E+00, 0.5699E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1590E-03, 0.7647E-03, 0.2882E-02, 0.4872E-02, 0.1050E-01, 0.1597E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2133E+01, 0.2263E+01, 0.2529E+01, 0.2724E+01, 0.3194E+01, 0.3597E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1828E+01, 0.1653E+01, 0.1486E+01, 0.1417E+01, 0.1313E+01, 0.1253E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2150E-01, 0.4096E-01, 0.6917E-01, 0.8725E-01, 0.1299E+00, 0.1675E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5799E-01, 0.1132E+00, 0.1823E+00, 0.2173E+00, 0.2760E+00, 0.3092E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2490E-01, 0.5926E-01, 0.1208E+00, 0.1615E+00, 0.2483E+00, 0.3122E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2064E+01, 0.2582E+01, 0.3471E+01, 0.4072E+01, 0.5486E+01, 0.6694E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3998E-02, 0.1388E-01, 0.3170E-01, 0.4244E-01, 0.6439E-01, 0.8122E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7995E-03, 0.6917E-02, 0.2213E-01, 0.3157E-01, 0.4875E-01, 0.5926E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3229E-03, 0.9056E-03, 0.2473E-02, 0.4049E-02, 0.9912E-02, 0.1738E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6861E-01, 0.1146E+00, 0.1975E+00, 0.2523E+00, 0.3683E+00, 0.4528E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6256E-01, 0.1019E+00, 0.1459E+00, 0.1672E+00, 0.2030E+00, 0.2246E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1164E-02, 0.6217E-02, 0.2194E-01, 0.3499E-01, 0.6779E-01, 0.9562E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7117E-01, 0.1719E+00, 0.3877E+00, 0.5484E+00, 0.9366E+00, 0.1261E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8536E-01, 0.1990E+00, 0.4343E+00, 0.5857E+00, 0.8823E+00, 0.1072E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4353E-02, 0.1626E-01, 0.3751E-01, 0.5069E-01, 0.7586E-01, 0.9127E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5396E-01, 0.1025E+00, 0.1915E+00, 0.2459E+00, 0.3485E+00, 0.4119E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4680E-01, 0.8261E-01, 0.1577E+00, 0.2123E+00, 0.3370E+00, 0.4331E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1835E+00, 0.3252E+00, 0.5333E+00, 0.6488E+00, 0.8536E+00, 0.9716E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4151E-01, 0.1000E+00, 0.1465E+00, 0.1616E+00, 0.1804E+00, 0.1891E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_a3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6727E+00, 0.1159E+01, 0.1429E+01, 0.1475E+01, 0.1462E+01, 0.1416E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4319E+01, 0.4423E+01, 0.4099E+01, 0.3894E+01, 0.3570E+01, 0.3435E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1314E-02, 0.3019E-02, 0.5583E-02, 0.7372E-02, 0.1170E-01, 0.1548E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1538E+01, 0.2748E+01, 0.3628E+01, 0.3921E+01, 0.4352E+01, 0.4675E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1969E-02, 0.4113E-02, 0.8819E-02, 0.1277E-01, 0.2355E-01, 0.3408E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1513E+01, 0.1471E+01, 0.1415E+01, 0.1388E+01, 0.1349E+01, 0.1333E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2289E-01, 0.4360E-01, 0.7591E-01, 0.9348E-01, 0.1225E+00, 0.1371E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1162E+02, 0.1093E+02, 0.1059E+02, 0.1062E+02, 0.1104E+02, 0.1152E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7033E-03, 0.1630E-02, 0.4749E-02, 0.8009E-02, 0.1908E-01, 0.3215E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2221E-01, 0.3750E-01, 0.5782E-01, 0.6797E-01, 0.8461E-01, 0.9475E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8550E-04, 0.1209E-03, 0.3727E-03, 0.7153E-03, 0.2127E-02, 0.3963E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1512E-03, 0.3906E-03, 0.1484E-02, 0.2729E-02, 0.7004E-02, 0.1182E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2294E+01, 0.2272E+01, 0.2333E+01, 0.2405E+01, 0.2611E+01, 0.2784E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8607E-01, 0.1640E+00, 0.2622E+00, 0.3288E+00, 0.5024E+00, 0.6690E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3212E-04, 0.1038E-03, 0.3779E-03, 0.6816E-03, 0.1790E-02, 0.3196E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1912E-02, 0.5751E-02, 0.1484E-01, 0.2270E-01, 0.4650E-01, 0.7262E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3241E-01, 0.7434E-01, 0.1232E+00, 0.1491E+00, 0.2045E+00, 0.2523E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4330E-01, 0.5534E-01, 0.6687E-01, 0.7154E-01, 0.7822E-01, 0.8203E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2417E-01, 0.3394E-01, 0.4633E-01, 0.5265E-01, 0.6468E-01, 0.7458E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5588E+00, 0.9011E+00, 0.1257E+01, 0.1423E+01, 0.1705E+01, 0.1889E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5864E-02, 0.1475E-01, 0.2915E-01, 0.3784E-01, 0.5574E-01, 0.6986E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7186E-02, 0.1564E-01, 0.2876E-01, 0.3695E-01, 0.5449E-01, 0.6825E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1126E-03, 0.2638E-03, 0.7000E-03, 0.1103E-02, 0.2364E-02, 0.3791E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4023E-03, 0.1431E-02, 0.4394E-02, 0.7372E-02, 0.1756E-01, 0.2922E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6436E+00, 0.1375E+01, 0.3185E+01, 0.4489E+01, 0.7287E+01, 0.9253E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4372E+00, 0.9361E+00, 0.2137E+01, 0.3090E+01, 0.5435E+01, 0.7378E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1790E-01, 0.4101E-01, 0.1051E+00, 0.1588E+00, 0.2977E+00, 0.4223E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5882E-04, 0.2257E-03, 0.6786E-03, 0.1084E-02, 0.2335E-02, 0.3740E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9415E-03, 0.6600E-02, 0.2548E-01, 0.4288E-01, 0.9358E-01, 0.1435E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4089E-03, 0.1566E-02, 0.4474E-02, 0.6863E-02, 0.1352E-01, 0.2022E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1811E-02, 0.7981E-02, 0.2087E-01, 0.2912E-01, 0.4587E-01, 0.5780E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6299E-02, 0.1985E-01, 0.3909E-01, 0.4966E-01, 0.7321E-01, 0.9503E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1095E-04, 0.4616E-04, 0.1153E-03, 0.1657E-03, 0.3043E-03, 0.4505E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2722E-03, 0.9494E-03, 0.3030E-02, 0.5307E-02, 0.1403E-01, 0.2525E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3480E-04, 0.1110E-03, 0.2472E-03, 0.3500E-03, 0.6614E-03, 0.1014E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3305E+00, 0.6831E+00, 0.1149E+01, 0.1397E+01, 0.1863E+01, 0.2170E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1722E+02, 0.1767E+02, 0.1918E+02, 0.2030E+02, 0.2291E+02, 0.2501E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5476E+01, 0.6452E+01, 0.7944E+01, 0.8786E+01, 0.1030E+02, 0.1119E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7211E+01, 0.7454E+01, 0.7935E+01, 0.8279E+01, 0.9052E+01, 0.9622E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2795E+01, 0.2878E+01, 0.3271E+01, 0.3559E+01, 0.4172E+01, 0.4599E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9394E+00, 0.1192E+01, 0.1520E+01, 0.1692E+01, 0.1988E+01, 0.2157E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6500E+00, 0.1540E+01, 0.2970E+01, 0.3824E+01, 0.5459E+01, 0.6485E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3926E+00, 0.1010E+01, 0.1940E+01, 0.2455E+01, 0.3369E+01, 0.3897E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5929E-02, 0.2057E-01, 0.5845E-01, 0.9138E-01, 0.1889E+00, 0.2927E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2294E+00, 0.4789E+00, 0.7986E+00, 0.9584E+00, 0.1215E+01, 0.1344E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1163E+00, 0.2282E+00, 0.3288E+00, 0.3723E+00, 0.4468E+00, 0.4969E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4115E+00, 0.6599E+00, 0.1076E+01, 0.1348E+01, 0.1896E+01, 0.2246E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4885E-01, 0.1111E+00, 0.1881E+00, 0.2304E+00, 0.3191E+00, 0.3901E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8668E-02, 0.1643E-01, 0.2570E-01, 0.3172E-01, 0.4713E-01, 0.6197E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1185E+00, 0.1499E+00, 0.1574E+00, 0.1583E+00, 0.1628E+00, 0.1704E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2212E-01, 0.4017E-01, 0.6529E-01, 0.8305E-01, 0.1238E+00, 0.1545E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_a3H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2G_4s_a3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2152E+01, 0.3363E+01, 0.4037E+01, 0.4171E+01, 0.4188E+01, 0.4094E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2G_4s_a3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1134E+01, 0.1540E+01, 0.1769E+01, 0.1819E+01, 0.1844E+01, 0.1837E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4697E+00, 0.7870E+00, 0.1017E+01, 0.1095E+01, 0.1196E+01, 0.1248E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7817E+00, 0.9711E+00, 0.1040E+01, 0.1053E+01, 0.1076E+01, 0.1096E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1224E+01, 0.1464E+01, 0.1544E+01, 0.1545E+01, 0.1515E+01, 0.1484E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1159E+00, 0.1145E+00, 0.1173E+00, 0.1223E+00, 0.1390E+00, 0.1557E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6317E+00, 0.5946E+00, 0.5755E+00, 0.5699E+00, 0.5656E+00, 0.5672E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2383E+01, 0.2434E+01, 0.2320E+01, 0.2238E+01, 0.2090E+01, 0.2003E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1127E+00, 0.1046E+00, 0.1031E+00, 0.1055E+00, 0.1156E+00, 0.1272E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5983E+00, 0.5783E+00, 0.5517E+00, 0.5421E+00, 0.5368E+00, 0.5423E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3364E+00, 0.3308E+00, 0.3227E+00, 0.3216E+00, 0.3301E+00, 0.3449E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1382E+00, 0.1437E+00, 0.1472E+00, 0.1495E+00, 0.1567E+00, 0.1647E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8638E-03, 0.3860E-02, 0.1489E-01, 0.2642E-01, 0.6249E-01, 0.9965E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1129E-01, 0.2153E-01, 0.3711E-01, 0.4599E-01, 0.6291E-01, 0.7431E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2190E+00, 0.5509E+00, 0.9132E+00, 0.1064E+01, 0.1278E+01, 0.1383E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7274E-02, 0.2548E-01, 0.6659E-01, 0.9871E-01, 0.1810E+00, 0.2557E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1098E+00, 0.1149E+00, 0.1255E+00, 0.1337E+00, 0.1554E+00, 0.1771E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8919E-01, 0.1023E+00, 0.1250E+00, 0.1401E+00, 0.1762E+00, 0.2090E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1189E+01, 0.1570E+01, 0.1865E+01, 0.1986E+01, 0.2178E+01, 0.2284E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1365E-01, 0.2089E-01, 0.3410E-01, 0.4297E-01, 0.6262E-01, 0.7835E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9396E-02, 0.1514E-01, 0.2550E-01, 0.3277E-01, 0.5050E-01, 0.6703E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2454E-01, 0.3296E-01, 0.4370E-01, 0.4960E-01, 0.6188E-01, 0.7189E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1241E-01, 0.4648E-01, 0.1009E+00, 0.1311E+00, 0.1903E+00, 0.2352E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1409E+00, 0.2567E+00, 0.5319E+00, 0.7449E+00, 0.1235E+01, 0.1596E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1768E-01, 0.4017E-01, 0.9546E-01, 0.1417E+00, 0.2700E+00, 0.3948E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1237E+00, 0.2133E+00, 0.3874E+00, 0.5050E+00, 0.7582E+00, 0.9489E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6974E-02, 0.1616E-01, 0.3096E-01, 0.3952E-01, 0.5598E-01, 0.6773E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2303E+00, 0.4506E+00, 0.1026E+01, 0.1524E+01, 0.2818E+01, 0.3912E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3916E-01, 0.8149E-01, 0.1972E+00, 0.2950E+00, 0.5418E+00, 0.7460E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1456E+00, 0.3020E+00, 0.6289E+00, 0.8423E+00, 0.1264E+01, 0.1536E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1004E+01, 0.1969E+01, 0.3764E+01, 0.4889E+01, 0.7082E+01, 0.8478E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1374E-02, 0.4438E-02, 0.1125E-01, 0.1680E-01, 0.3236E-01, 0.4714E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7208E-02, 0.1556E-01, 0.3228E-01, 0.4468E-01, 0.7685E-01, 0.1086E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4182E-02, 0.1774E-01, 0.5189E-01, 0.7685E-01, 0.1325E+00, 0.1734E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1669E+01, 0.3162E+01, 0.5617E+01, 0.7040E+01, 0.9632E+01, 0.1117E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3846E-02, 0.2605E-01, 0.8014E-01, 0.1168E+00, 0.1953E+00, 0.2560E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4P_4s_b3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4P_4s_b3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2064E+01, 0.3463E+01, 0.4517E+01, 0.4873E+01, 0.5331E+01, 0.5555E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3013E-02, 0.1273E-01, 0.3177E-01, 0.4375E-01, 0.6947E-01, 0.9094E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1014E+02, 0.1208E+02, 0.1343E+02, 0.1381E+02, 0.1396E+02, 0.1359E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6967E-01, 0.7462E-01, 0.7502E-01, 0.7484E-01, 0.7562E-01, 0.7769E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1441E+01, 0.1455E+01, 0.1720E+01, 0.1957E+01, 0.2540E+01, 0.3005E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4498E+00, 0.4849E+00, 0.5660E+00, 0.6252E+00, 0.7668E+00, 0.8873E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1841E+00, 0.1639E+00, 0.1463E+00, 0.1401E+00, 0.1344E+00, 0.1355E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1207E-01, 0.4312E-01, 0.9081E-01, 0.1171E+00, 0.1662E+00, 0.1999E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4400E+00, 0.5256E+00, 0.6118E+00, 0.6482E+00, 0.6992E+00, 0.7227E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7725E+00, 0.8447E+00, 0.9708E+00, 0.1041E+01, 0.1162E+01, 0.1229E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3598E+00, 0.6748E+00, 0.9838E+00, 0.1129E+01, 0.1397E+01, 0.1585E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1113E-02, 0.1929E-02, 0.3260E-02, 0.4199E-02, 0.6836E-02, 0.9688E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2950E+00, 0.7288E+00, 0.1203E+01, 0.1399E+01, 0.1671E+01, 0.1803E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3503E+00, 0.8646E+00, 0.1415E+01, 0.1648E+01, 0.1989E+01, 0.2163E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2486E-01, 0.2720E-01, 0.3178E-01, 0.3471E-01, 0.4116E-01, 0.4678E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4600E-01, 0.4629E-01, 0.4662E-01, 0.4754E-01, 0.5253E-01, 0.6002E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2055E+00, 0.3515E+00, 0.5622E+00, 0.6935E+00, 0.9780E+00, 0.1201E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6903E-03, 0.1504E-02, 0.3459E-02, 0.5121E-02, 0.9848E-02, 0.1458E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2374E-02, 0.3082E-02, 0.4594E-02, 0.6010E-02, 0.1050E-01, 0.1529E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2223E-02, 0.3224E-02, 0.4319E-02, 0.5052E-02, 0.7383E-02, 0.1022E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3837E-01, 0.1017E+00, 0.2009E+00, 0.2523E+00, 0.3393E+00, 0.3915E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7064E-01, 0.2214E+00, 0.5107E+00, 0.6877E+00, 0.1045E+01, 0.1307E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5935E+00, 0.1362E+01, 0.2721E+01, 0.3640E+01, 0.5769E+01, 0.7536E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1107E+00, 0.2401E+00, 0.5076E+00, 0.6968E+00, 0.1122E+01, 0.1446E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3172E-03, 0.6172E-03, 0.1151E-02, 0.1568E-02, 0.2771E-02, 0.4034E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2814E+00, 0.6570E+00, 0.1374E+01, 0.1877E+01, 0.3069E+01, 0.4085E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3680E-02, 0.1564E-01, 0.3773E-01, 0.5174E-01, 0.8111E-01, 0.1024E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8159E-02, 0.2560E-01, 0.4987E-01, 0.6346E-01, 0.9209E-01, 0.1150E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1294E+00, 0.3558E+00, 0.6564E+00, 0.8007E+00, 0.1039E+01, 0.1183E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6346E-05, 0.3377E-04, 0.1164E-03, 0.1886E-03, 0.3906E-03, 0.5890E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3487E-03, 0.1912E-02, 0.6932E-02, 0.1093E-01, 0.2116E-01, 0.3133E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9658E-02, 0.2290E-01, 0.3623E-01, 0.4273E-01, 0.5437E-01, 0.6121E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2023E+00, 0.4049E+00, 0.6082E+00, 0.7078E+00, 0.8930E+00, 0.1015E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a3G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1493E-02, 0.3911E-02, 0.8351E-02, 0.1185E-01, 0.2275E-01, 0.3591E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2502E+01, 0.3248E+01, 0.3605E+01, 0.3668E+01, 0.3655E+01, 0.3565E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4232E-02, 0.2150E-01, 0.5696E-01, 0.7911E-01, 0.1233E+00, 0.1553E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2821E+00, 0.2879E+00, 0.2885E+00, 0.2862E+00, 0.2791E+00, 0.2730E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2744E-03, 0.8807E-03, 0.3250E-02, 0.5737E-02, 0.1359E-01, 0.2203E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9159E+00, 0.1045E+01, 0.1107E+01, 0.1121E+01, 0.1133E+01, 0.1136E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7901E-01, 0.8947E-01, 0.9719E-01, 0.1017E+00, 0.1134E+00, 0.1250E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2399E+01, 0.2995E+01, 0.3451E+01, 0.3590E+01, 0.3667E+01, 0.3579E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2349E+00, 0.3160E+00, 0.3903E+00, 0.4193E+00, 0.4594E+00, 0.4782E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7979E-03, 0.2327E-02, 0.5694E-02, 0.8271E-02, 0.1490E-01, 0.2129E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2148E-06, 0.9844E-06, 0.4338E-05, 0.9634E-05, 0.3786E-04, 0.8347E-04}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1654E+00, 0.1817E+00, 0.1983E+00, 0.2065E+00, 0.2203E+00, 0.2272E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4470E-01, 0.1196E+00, 0.2116E+00, 0.2561E+00, 0.3346E+00, 0.3886E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2215E-03, 0.8764E-03, 0.2658E-02, 0.4201E-02, 0.8693E-02, 0.1370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6057E+00, 0.6760E+00, 0.7770E+00, 0.8387E+00, 0.9701E+00, 0.1071E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3016E+00, 0.2826E+00, 0.2645E+00, 0.2580E+00, 0.2514E+00, 0.2508E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1510E+00, 0.2700E+00, 0.3782E+00, 0.4220E+00, 0.4909E+00, 0.5347E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1396E-01, 0.2586E-01, 0.4271E-01, 0.5199E-01, 0.6888E-01, 0.7956E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9598E-02, 0.2179E-01, 0.4035E-01, 0.5120E-01, 0.7252E-01, 0.8754E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6699E+00, 0.8162E+00, 0.1058E+01, 0.1215E+01, 0.1563E+01, 0.1845E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3556E-01, 0.1310E+00, 0.2931E+00, 0.3800E+00, 0.5272E+00, 0.6130E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2969E-02, 0.1237E-01, 0.3310E-01, 0.4625E-01, 0.7261E-01, 0.9151E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1517E-02, 0.3412E-02, 0.7314E-02, 0.1047E-01, 0.1879E-01, 0.2640E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2645E-01, 0.5554E-01, 0.1222E+00, 0.1699E+00, 0.2740E+00, 0.3501E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1467E-01, 0.2507E-01, 0.3659E-01, 0.4217E-01, 0.5207E-01, 0.5884E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3179E-02, 0.1511E-01, 0.4766E-01, 0.7147E-01, 0.1239E+00, 0.1625E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1524E+00, 0.3402E+00, 0.6801E+00, 0.9039E+00, 0.1397E+01, 0.1783E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6668E-01, 0.1640E+00, 0.3305E+00, 0.4297E+00, 0.6225E+00, 0.7517E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1288E-01, 0.3735E-01, 0.7661E-01, 0.1011E+00, 0.1532E+00, 0.1919E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3576E-01, 0.8586E-01, 0.1694E+00, 0.2167E+00, 0.3021E+00, 0.3542E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3315E-01, 0.5805E-01, 0.1108E+00, 0.1510E+00, 0.2485E+00, 0.3311E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8089E-01, 0.1556E+00, 0.2456E+00, 0.2942E+00, 0.3833E+00, 0.4368E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5259E-01, 0.1233E+00, 0.1896E+00, 0.2214E+00, 0.2856E+00, 0.3344E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b3G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7117E+01, 0.8152E+01, 0.9762E+01, 0.1080E+02, 0.1317E+02, 0.1520E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b3G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3241E+01, 0.3427E+01, 0.3833E+01, 0.4099E+01, 0.4623E+01, 0.4953E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8929E+01, 0.1039E+02, 0.1254E+02, 0.1379E+02, 0.1621E+02, 0.1778E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8690E+00, 0.1029E+01, 0.1361E+01, 0.1578E+01, 0.2031E+01, 0.2360E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6560E+00, 0.1494E+01, 0.2681E+01, 0.3323E+01, 0.4441E+01, 0.5073E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1209E+01, 0.2756E+01, 0.5133E+01, 0.6517E+01, 0.9117E+01, 0.1071E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1023E-01, 0.3598E-01, 0.8838E-01, 0.1225E+00, 0.2005E+00, 0.2699E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5642E+00, 0.9775E+00, 0.1505E+01, 0.1779E+01, 0.2250E+01, 0.2518E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8194E-01, 0.1519E+00, 0.2414E+00, 0.2979E+00, 0.4326E+00, 0.5529E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1568E+01, 0.2135E+01, 0.2989E+01, 0.3518E+01, 0.4631E+01, 0.5440E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2703E-01, 0.6569E-01, 0.1193E+00, 0.1531E+00, 0.2357E+00, 0.3114E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9228E-04, 0.2631E-03, 0.7627E-03, 0.1240E-02, 0.2652E-02, 0.4051E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1805E-01, 0.2338E-01, 0.3183E-01, 0.3818E-01, 0.5502E-01, 0.7114E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1230E+00, 0.2151E+00, 0.3055E+00, 0.3577E+00, 0.4842E+00, 0.6019E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4P_4s_b3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1250E-02, 0.4403E-02, 0.1425E-01, 0.2257E-01, 0.4440E-01, 0.6528E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2570E+00, 0.5144E+00, 0.7564E+00, 0.8562E+00, 0.1009E+01, 0.1097E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1055E-01, 0.2115E-01, 0.3580E-01, 0.4467E-01, 0.6501E-01, 0.8358E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2338E+01, 0.2843E+01, 0.2996E+01, 0.3006E+01, 0.3028E+01, 0.3099E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7564E+00, 0.1075E+01, 0.1265E+01, 0.1324E+01, 0.1417E+01, 0.1492E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6750E-01, 0.8496E-01, 0.9944E-01, 0.1077E+00, 0.1299E+00, 0.1540E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4187E-03, 0.1493E-02, 0.3630E-02, 0.5202E-02, 0.9440E-02, 0.1392E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2059E+00, 0.2285E+00, 0.2418E+00, 0.2490E+00, 0.2694E+00, 0.2909E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1165E+01, 0.1090E+01, 0.1015E+01, 0.9903E+00, 0.9785E+00, 0.9955E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6499E-01, 0.9718E-01, 0.1292E+00, 0.1545E+00, 0.2376E+00, 0.3284E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1256E-01, 0.1204E-01, 0.1434E-01, 0.1772E-01, 0.2966E-01, 0.4291E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1538E+00, 0.3655E+00, 0.6228E+00, 0.7572E+00, 0.1032E+01, 0.1260E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4381E-01, 0.1110E+00, 0.1973E+00, 0.2449E+00, 0.3444E+00, 0.4246E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1853E-01, 0.2743E-01, 0.4208E-01, 0.5194E-01, 0.7610E-01, 0.9890E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1920E+00, 0.2105E+00, 0.2436E+00, 0.2665E+00, 0.3239E+00, 0.3783E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6303E+00, 0.1160E+01, 0.1770E+01, 0.2070E+01, 0.2601E+01, 0.2956E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1679E-02, 0.5835E-02, 0.2196E-01, 0.3714E-01, 0.7590E-01, 0.1075E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2646E-01, 0.3486E-01, 0.4947E-01, 0.6082E-01, 0.9087E-01, 0.1190E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1427E-01, 0.1648E-01, 0.2130E-01, 0.2515E-01, 0.3553E-01, 0.4561E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1220E-01, 0.4062E-01, 0.7790E-01, 0.9501E-01, 0.1231E+00, 0.1421E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2006E-01, 0.4261E-01, 0.1136E+00, 0.1774E+00, 0.3547E+00, 0.5258E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3084E-01, 0.6815E-01, 0.1965E+00, 0.3182E+00, 0.6450E+00, 0.9254E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2777E-01, 0.8154E-01, 0.2224E+00, 0.3310E+00, 0.5885E+00, 0.8008E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2974E-02, 0.7069E-02, 0.1748E-01, 0.2608E-01, 0.4726E-01, 0.6441E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2377E-01, 0.5119E-01, 0.1341E+00, 0.2110E+00, 0.4225E+00, 0.6139E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7949E-03, 0.2431E-02, 0.8040E-02, 0.1386E-01, 0.3274E-01, 0.5319E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9974E-03, 0.4383E-02, 0.1321E-01, 0.2001E-01, 0.3778E-01, 0.5506E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1399E-01, 0.3370E-01, 0.8076E-01, 0.1158E+00, 0.2006E+00, 0.2759E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4933E-05, 0.3837E-04, 0.1412E-03, 0.2191E-03, 0.3954E-03, 0.5371E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5026E-02, 0.1005E-01, 0.1788E-01, 0.2350E-01, 0.3929E-01, 0.5706E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4414E-03, 0.1563E-02, 0.4462E-02, 0.6804E-02, 0.1348E-01, 0.2049E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1484E-01, 0.4022E-01, 0.9723E-01, 0.1392E+00, 0.2460E+00, 0.3444E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z7Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2P_4s_c3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2P_4s_c3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9891E+00, 0.1302E+01, 0.1696E+01, 0.1898E+01, 0.2228E+01, 0.2392E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2188E+01, 0.2109E+01, 0.2288E+01, 0.2453E+01, 0.2837E+01, 0.3124E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2838E+01, 0.3368E+01, 0.4048E+01, 0.4420E+01, 0.5100E+01, 0.5510E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4901E+00, 0.9295E+00, 0.1425E+01, 0.1652E+01, 0.1986E+01, 0.2129E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9233E+00, 0.1567E+01, 0.2283E+01, 0.2618E+01, 0.3139E+01, 0.3394E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3284E-02, 0.1217E-01, 0.3566E-01, 0.5593E-01, 0.1139E+00, 0.1727E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7548E+00, 0.1365E+01, 0.2159E+01, 0.2578E+01, 0.3284E+01, 0.3643E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4856E-01, 0.9288E-01, 0.1438E+00, 0.1698E+00, 0.2174E+00, 0.2496E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4910E+01, 0.6521E+01, 0.8366E+01, 0.9438E+01, 0.1181E+02, 0.1377E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1353E-01, 0.2922E-01, 0.5023E-01, 0.6336E-01, 0.9425E-01, 0.1217E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7743E-02, 0.1498E-01, 0.2167E-01, 0.2515E-01, 0.3285E-01, 0.3953E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9314E-01, 0.1218E+00, 0.1343E+00, 0.1389E+00, 0.1510E+00, 0.1645E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2657E-02, 0.8470E-02, 0.2283E-01, 0.3480E-01, 0.6814E-01, 0.1012E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2G_4s_a1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1097E-02, 0.5290E-02, 0.1410E-01, 0.1989E-01, 0.3247E-01, 0.4235E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2G_4s_a1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9415E-01, 0.1013E+00, 0.1100E+00, 0.1156E+00, 0.1289E+00, 0.1399E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5197E-03, 0.1821E-02, 0.5526E-02, 0.9230E-02, 0.2204E-01, 0.3749E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2299E+01, 0.2590E+01, 0.2629E+01, 0.2582E+01, 0.2435E+01, 0.2315E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4136E-01, 0.5405E-01, 0.6855E-01, 0.7683E-01, 0.9500E-01, 0.1104E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9208E+00, 0.1126E+01, 0.1280E+01, 0.1329E+01, 0.1371E+01, 0.1361E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4455E+00, 0.4504E+00, 0.4317E+00, 0.4168E+00, 0.3865E+00, 0.3654E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1917E-03, 0.5260E-03, 0.1386E-02, 0.2204E-02, 0.4812E-02, 0.7731E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6267E-07, 0.3782E-06, 0.3113E-05, 0.7783E-05, 0.2964E-04, 0.6069E-04}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6403E-01, 0.7613E-01, 0.8406E-01, 0.8738E-01, 0.9346E-01, 0.9818E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1692E+00, 0.3713E+00, 0.5756E+00, 0.6555E+00, 0.7593E+00, 0.8036E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2065E-03, 0.1280E-02, 0.5889E-02, 0.1056E-01, 0.2460E-01, 0.3874E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3077E+00, 0.3367E+00, 0.3694E+00, 0.3882E+00, 0.4281E+00, 0.4593E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1397E+00, 0.1333E+00, 0.1290E+00, 0.1295E+00, 0.1369E+00, 0.1473E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7125E-01, 0.1254E+00, 0.1791E+00, 0.2032E+00, 0.2449E+00, 0.2737E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2319E-01, 0.3791E-01, 0.5816E-01, 0.6911E-01, 0.8855E-01, 0.1004E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1390E-01, 0.2828E-01, 0.4633E-01, 0.5567E-01, 0.7271E-01, 0.8451E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5561E+00, 0.6737E+00, 0.8581E+00, 0.9731E+00, 0.1222E+01, 0.1416E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1206E-01, 0.4393E-01, 0.9675E-01, 0.1249E+00, 0.1749E+00, 0.2085E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7120E-03, 0.1849E-02, 0.5999E-02, 0.1040E-01, 0.2411E-01, 0.3774E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7079E-03, 0.1764E-02, 0.4782E-02, 0.7605E-02, 0.1608E-01, 0.2476E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2187E-01, 0.5357E-01, 0.1178E+00, 0.1622E+00, 0.2594E+00, 0.3334E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9792E-02, 0.1601E-01, 0.2318E-01, 0.2674E-01, 0.3321E-01, 0.3778E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1388E-02, 0.5766E-02, 0.2318E-01, 0.4056E-01, 0.8968E-01, 0.1330E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1018E+00, 0.2211E+00, 0.5506E+00, 0.8201E+00, 0.1472E+01, 0.1981E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4592E+00, 0.8637E+00, 0.1597E+01, 0.2046E+01, 0.2895E+01, 0.3413E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3777E-02, 0.2260E-01, 0.7546E-01, 0.1126E+00, 0.1870E+00, 0.2347E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1448E+00, 0.2681E+00, 0.4568E+00, 0.5649E+00, 0.7610E+00, 0.8751E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1764E-01, 0.3435E-01, 0.7622E-01, 0.1097E+00, 0.1933E+00, 0.2659E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7210E+00, 0.1257E+01, 0.2062E+01, 0.2501E+01, 0.3259E+01, 0.3679E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1855E-01, 0.4688E-01, 0.8527E-01, 0.1081E+00, 0.1574E+00, 0.1953E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2P_4s_c3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5646E+00, 0.6462E+00, 0.7738E+00, 0.8522E+00, 0.9983E+00, 0.1084E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2598E+00, 0.2715E+00, 0.3011E+00, 0.3202E+00, 0.3588E+00, 0.3871E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5841E-02, 0.2158E-01, 0.4706E-01, 0.6176E-01, 0.9008E-01, 0.1091E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4371E+00, 0.5261E+00, 0.6019E+00, 0.6266E+00, 0.6462E+00, 0.6407E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1408E+01, 0.1447E+01, 0.1494E+01, 0.1514E+01, 0.1533E+01, 0.1522E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3989E+00, 0.6509E+00, 0.8209E+00, 0.8681E+00, 0.9111E+00, 0.9254E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4704E-01, 0.1328E+00, 0.2373E+00, 0.2857E+00, 0.3631E+00, 0.4081E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4091E+00, 0.8644E+00, 0.1268E+01, 0.1404E+01, 0.1540E+01, 0.1568E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3739E-01, 0.3622E-01, 0.3507E-01, 0.3487E-01, 0.3586E-01, 0.3804E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7475E-01, 0.7069E-01, 0.6523E-01, 0.6273E-01, 0.5976E-01, 0.5980E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3241E-01, 0.7989E-01, 0.1577E+00, 0.2033E+00, 0.2926E+00, 0.3553E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9015E-03, 0.1276E-02, 0.1829E-02, 0.2249E-02, 0.3621E-02, 0.5220E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2062E-01, 0.4404E-01, 0.7644E-01, 0.9261E-01, 0.1205E+00, 0.1391E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2488E-01, 0.7258E-01, 0.1833E+00, 0.2610E+00, 0.4326E+00, 0.5594E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3148E-01, 0.6477E-01, 0.1429E+00, 0.2014E+00, 0.3371E+00, 0.4417E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1185E-01, 0.3305E-01, 0.9255E-01, 0.1384E+00, 0.2458E+00, 0.3302E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1188E-02, 0.5831E-02, 0.1515E-01, 0.2094E-01, 0.3290E-01, 0.4199E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7205E-04, 0.3472E-03, 0.1436E-02, 0.2439E-02, 0.5213E-02, 0.7987E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2G_4s_a1G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2H_4s_b3H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5231E-02, 0.7423E-02, 0.9033E-02, 0.9753E-02, 0.1139E-01, 0.1306E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2H_4s_b3H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1799E-01, 0.2696E-01, 0.3623E-01, 0.4089E-01, 0.5051E-01, 0.5872E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8403E+01, 0.9234E+01, 0.1030E+02, 0.1094E+02, 0.1239E+02, 0.1363E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3153E+01, 0.3415E+01, 0.3816E+01, 0.4056E+01, 0.4555E+01, 0.4934E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1074E-01, 0.1709E-01, 0.2538E-01, 0.3033E-01, 0.4302E-01, 0.5633E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5931E+01, 0.7045E+01, 0.8194E+01, 0.8727E+01, 0.9560E+01, 0.9963E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1418E+01, 0.1568E+01, 0.1837E+01, 0.1994E+01, 0.2296E+01, 0.2502E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9241E-02, 0.1618E-01, 0.2646E-01, 0.3353E-01, 0.5129E-01, 0.6744E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1435E+01, 0.2481E+01, 0.3897E+01, 0.4710E+01, 0.6340E+01, 0.7507E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9762E+00, 0.1798E+01, 0.2857E+01, 0.3417E+01, 0.4403E+01, 0.4979E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4252E+00, 0.6226E+00, 0.8488E+00, 0.9545E+00, 0.1121E+01, 0.1209E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1678E-01, 0.3861E-01, 0.7784E-01, 0.1050E+00, 0.1701E+00, 0.2267E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1100E-02, 0.4676E-02, 0.1630E-01, 0.2676E-01, 0.5719E-01, 0.8888E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6781E-02, 0.1211E-01, 0.2422E-01, 0.3272E-01, 0.5141E-01, 0.6630E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4832E+00, 0.7937E+00, 0.1163E+01, 0.1348E+01, 0.1651E+01, 0.1807E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1081E-02, 0.4809E-02, 0.1679E-01, 0.2740E-01, 0.5706E-01, 0.8567E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9544E-02, 0.2682E-01, 0.5294E-01, 0.6741E-01, 0.9659E-01, 0.1194E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4587E+00, 0.7068E+00, 0.9441E+00, 0.1059E+01, 0.1294E+01, 0.1490E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1595E+00, 0.2590E+00, 0.3909E+00, 0.4669E+00, 0.6148E+00, 0.7092E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5588E-01, 0.1153E+00, 0.1783E+00, 0.2106E+00, 0.2768E+00, 0.3284E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7744E-02, 0.1492E-01, 0.2215E-01, 0.2599E-01, 0.3490E-01, 0.4262E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8287E-02, 0.1297E-01, 0.2225E-01, 0.2870E-01, 0.4314E-01, 0.5469E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1256E+00, 0.1610E+00, 0.1722E+00, 0.1752E+00, 0.1853E+00, 0.1966E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3247E-01, 0.5268E-01, 0.7389E-01, 0.8771E-01, 0.1227E+00, 0.1528E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2D2_4s_a3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1499E-02, 0.7947E-02, 0.2683E-01, 0.4357E-01, 0.9289E-01, 0.1449E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2D2_4s_a3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1422E-01, 0.1924E-01, 0.2558E-01, 0.2942E-01, 0.3831E-01, 0.4642E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1992E-04, 0.1680E-03, 0.9641E-03, 0.1802E-02, 0.4207E-02, 0.6514E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4724E-03, 0.2804E-02, 0.9868E-02, 0.1594E-01, 0.3153E-01, 0.4483E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1593E+02, 0.1690E+02, 0.1779E+02, 0.1809E+02, 0.1818E+02, 0.1777E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8163E+00, 0.1595E+01, 0.2306E+01, 0.2613E+01, 0.3141E+01, 0.3503E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1060E-04, 0.5647E-04, 0.2346E-03, 0.4277E-03, 0.1095E-02, 0.1887E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1514E-03, 0.5400E-03, 0.2290E-02, 0.5053E-02, 0.1873E-01, 0.3917E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8241E-01, 0.2062E+00, 0.3264E+00, 0.3705E+00, 0.4245E+00, 0.4495E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8547E-02, 0.1074E-01, 0.1376E-01, 0.1550E-01, 0.1936E-01, 0.2281E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1191E-01, 0.1232E-01, 0.1311E-01, 0.1398E-01, 0.1757E-01, 0.2240E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1010E+01, 0.1733E+01, 0.2366E+01, 0.2609E+01, 0.2959E+01, 0.3158E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1384E-03, 0.4569E-03, 0.1336E-02, 0.2123E-02, 0.4362E-02, 0.6586E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2657E-03, 0.6022E-03, 0.1349E-02, 0.2046E-02, 0.4375E-02, 0.7149E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5386E-05, 0.2830E-04, 0.1161E-03, 0.2137E-03, 0.5740E-03, 0.1027E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5509E-04, 0.4556E-03, 0.2056E-02, 0.3688E-02, 0.9397E-02, 0.1667E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1131E+00, 0.3050E+00, 0.6546E+00, 0.8648E+00, 0.1278E+01, 0.1567E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2892E+00, 0.6772E+00, 0.1382E+01, 0.1852E+01, 0.2891E+01, 0.3691E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1301E+00, 0.3673E+00, 0.9051E+00, 0.1278E+01, 0.2062E+01, 0.2611E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3895E-05, 0.1415E-04, 0.5246E-04, 0.9401E-04, 0.2397E-03, 0.4179E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2345E-02, 0.1526E-01, 0.5157E-01, 0.7786E-01, 0.1359E+00, 0.1800E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7308E-03, 0.3007E-02, 0.7959E-02, 0.1133E-01, 0.1913E-01, 0.2600E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1031E-02, 0.3390E-02, 0.7743E-02, 0.1089E-01, 0.1892E-01, 0.2610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7506E-02, 0.1883E-01, 0.3523E-01, 0.4652E-01, 0.7725E-01, 0.1082E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3993E-05, 0.2331E-04, 0.8282E-04, 0.1319E-03, 0.2594E-03, 0.3784E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1553E-03, 0.1265E-02, 0.5788E-02, 0.9831E-02, 0.2062E-01, 0.3095E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1169E-04, 0.4421E-04, 0.1198E-03, 0.1819E-03, 0.3743E-03, 0.5958E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8397E-01, 0.1595E+00, 0.2550E+00, 0.3079E+00, 0.4160E+00, 0.4950E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2H_4s_b3H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2451E-01, 0.2526E-01, 0.2696E-01, 0.2959E-01, 0.3994E-01, 0.5213E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1730E+00, 0.2247E+00, 0.2936E+00, 0.3282E+00, 0.3845E+00, 0.4145E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5006E+01, 0.6218E+01, 0.7072E+01, 0.7319E+01, 0.7450E+01, 0.7282E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6055E-03, 0.3373E-02, 0.1019E-01, 0.1530E-01, 0.2767E-01, 0.3848E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1415E-04, 0.1172E-03, 0.8307E-03, 0.1806E-02, 0.5563E-02, 0.1006E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1098E-01, 0.1269E-01, 0.1650E-01, 0.1955E-01, 0.2816E-01, 0.3675E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3718E+00, 0.7503E+00, 0.1182E+01, 0.1384E+01, 0.1729E+01, 0.1954E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1398E+00, 0.3388E+00, 0.5564E+00, 0.6533E+00, 0.8069E+00, 0.8962E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2224E-01, 0.2506E-01, 0.2902E-01, 0.3154E-01, 0.3791E-01, 0.4451E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2784E-01, 0.2746E-01, 0.2874E-01, 0.3063E-01, 0.3733E-01, 0.4504E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2574E+00, 0.4912E+00, 0.7595E+00, 0.8980E+00, 0.1157E+01, 0.1336E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1133E-02, 0.2036E-02, 0.4258E-02, 0.6181E-02, 0.1181E-01, 0.1756E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1478E-02, 0.1929E-02, 0.3521E-02, 0.5419E-02, 0.1170E-01, 0.1802E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2243E-01, 0.2208E-01, 0.2157E-01, 0.2182E-01, 0.2442E-01, 0.2859E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4442E-01, 0.1498E+00, 0.3257E+00, 0.4180E+00, 0.5709E+00, 0.6591E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2400E-02, 0.9550E-02, 0.2599E-01, 0.3697E-01, 0.6095E-01, 0.8024E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3147E-02, 0.1313E-01, 0.4253E-01, 0.6451E-01, 0.1116E+00, 0.1445E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3277E-01, 0.7590E-01, 0.1731E+00, 0.2471E+00, 0.4248E+00, 0.5692E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2075E-02, 0.2539E-02, 0.3613E-02, 0.4669E-02, 0.8404E-02, 0.1285E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2568E+00, 0.5536E+00, 0.1060E+01, 0.1395E+01, 0.2142E+01, 0.2732E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2417E-01, 0.8822E-01, 0.2039E+00, 0.2716E+00, 0.3998E+00, 0.4842E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2583E-01, 0.7417E-01, 0.1447E+00, 0.1853E+00, 0.2686E+00, 0.3310E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3578E-01, 0.1284E+00, 0.2568E+00, 0.3194E+00, 0.4213E+00, 0.4789E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4850E-02, 0.1339E-01, 0.3054E-01, 0.4335E-01, 0.7300E-01, 0.9492E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7752E-02, 0.2233E-01, 0.6771E-01, 0.1047E+00, 0.1940E+00, 0.2669E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1655E+00, 0.3345E+00, 0.4986E+00, 0.5697E+00, 0.6860E+00, 0.7552E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7290E-01, 0.1768E+00, 0.2781E+00, 0.3246E+00, 0.4110E+00, 0.4725E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a3D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2P_4s_a1P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2P_4s_a1P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5076E+01, 0.6178E+01, 0.7534E+01, 0.8336E+01, 0.1013E+02, 0.1164E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1224E-01, 0.2032E-01, 0.3103E-01, 0.3870E-01, 0.6217E-01, 0.8815E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1102E+01, 0.1323E+01, 0.1676E+01, 0.1868E+01, 0.2216E+01, 0.2439E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8331E+01, 0.1023E+02, 0.1254E+02, 0.1373E+02, 0.1571E+02, 0.1676E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6774E-02, 0.1005E-01, 0.1720E-01, 0.2282E-01, 0.3726E-01, 0.5054E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1135E+01, 0.2103E+01, 0.3344E+01, 0.3998E+01, 0.5150E+01, 0.5829E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2678E+01, 0.4527E+01, 0.6949E+01, 0.8287E+01, 0.1083E+02, 0.1252E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6641E+00, 0.6614E+00, 0.7219E+00, 0.7858E+00, 0.9685E+00, 0.1139E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8997E-02, 0.2701E-01, 0.6063E-01, 0.8355E-01, 0.1386E+00, 0.1870E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5243E-03, 0.2459E-02, 0.9039E-02, 0.1498E-01, 0.3242E-01, 0.5085E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1006E-01, 0.1432E-01, 0.2241E-01, 0.2795E-01, 0.4097E-01, 0.5312E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7456E+00, 0.1213E+01, 0.1817E+01, 0.2148E+01, 0.2757E+01, 0.3140E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2263E-02, 0.6382E-02, 0.1914E-01, 0.3135E-01, 0.6893E-01, 0.1084E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4538E-02, 0.1042E-01, 0.2214E-01, 0.3184E-01, 0.6030E-01, 0.8976E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1496E+00, 0.2667E+00, 0.4054E+00, 0.4810E+00, 0.6323E+00, 0.7427E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3388E+00, 0.5527E+00, 0.8666E+00, 0.1050E+01, 0.1396E+01, 0.1608E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4509E-01, 0.8152E-01, 0.1245E+00, 0.1496E+00, 0.2067E+00, 0.2538E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3926E-03, 0.8378E-03, 0.1522E-02, 0.2001E-02, 0.3222E-02, 0.4336E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1532E-03, 0.1188E-02, 0.5202E-02, 0.8673E-02, 0.1768E-01, 0.2612E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2936E-01, 0.3996E-01, 0.4806E-01, 0.5247E-01, 0.6358E-01, 0.7414E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8129E-01, 0.1412E+00, 0.1991E+00, 0.2329E+00, 0.3128E+00, 0.3778E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2D2_4s_a1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1743E+00, 0.2282E+00, 0.2679E+00, 0.2826E+00, 0.3051E+00, 0.3191E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2D2_4s_a1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6054E-04, 0.3622E-03, 0.1794E-02, 0.3261E-02, 0.7400E-02, 0.1124E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1150E-06, 0.7233E-06, 0.3920E-05, 0.8469E-05, 0.2805E-04, 0.5449E-04}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3690E-01, 0.9776E-01, 0.1655E+00, 0.1938E+00, 0.2323E+00, 0.2495E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9272E-04, 0.3999E-03, 0.1368E-02, 0.2373E-02, 0.5903E-02, 0.1016E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7538E-01, 0.7071E-01, 0.6642E-01, 0.6442E-01, 0.6156E-01, 0.6086E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4678E-02, 0.4797E-02, 0.5316E-02, 0.6000E-02, 0.8528E-02, 0.1146E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6019E-02, 0.1895E-01, 0.3647E-01, 0.4556E-01, 0.6299E-01, 0.7633E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1529E-01, 0.1529E-01, 0.1534E-01, 0.1547E-01, 0.1627E-01, 0.1750E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4762E-01, 0.1188E+00, 0.2167E+00, 0.2631E+00, 0.3337E+00, 0.3714E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2397E-03, 0.6803E-03, 0.1890E-02, 0.3189E-02, 0.7831E-02, 0.1311E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3638E-02, 0.8959E-02, 0.2283E-01, 0.3390E-01, 0.6085E-01, 0.8268E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1909E-02, 0.8683E-02, 0.2795E-01, 0.4328E-01, 0.8054E-01, 0.1105E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1935E-01, 0.6171E-01, 0.1449E+00, 0.1933E+00, 0.2809E+00, 0.3332E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4732E-02, 0.8383E-02, 0.1850E-01, 0.2780E-01, 0.5295E-01, 0.7519E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2P_4s_a1P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_2H_4s_a1H {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3397E-03, 0.1930E-02, 0.6482E-02, 0.1039E-01, 0.2107E-01, 0.3121E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_2H_4s_a1H;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2009E-04, 0.1722E-03, 0.1205E-02, 0.2423E-02, 0.6188E-02, 0.9883E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7691E-01, 0.2109E+00, 0.3674E+00, 0.4374E+00, 0.5438E+00, 0.6001E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1170E+00, 0.2325E+00, 0.3348E+00, 0.3708E+00, 0.4147E+00, 0.4357E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9275E-02, 0.1271E-01, 0.1730E-01, 0.1989E-01, 0.2526E-01, 0.2972E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1160E-01, 0.1198E-01, 0.1300E-01, 0.1414E-01, 0.1815E-01, 0.2276E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7927E-02, 0.3063E-01, 0.8131E-01, 0.1159E+00, 0.1886E+00, 0.2414E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5565E-02, 0.6002E-02, 0.6859E-02, 0.7530E-02, 0.9617E-02, 0.1201E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7605E-01, 0.1561E+00, 0.2656E+00, 0.3202E+00, 0.4169E+00, 0.4841E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8017E-03, 0.6205E-02, 0.2040E-01, 0.3003E-01, 0.4999E-01, 0.6427E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7146E-02, 0.1672E-01, 0.4071E-01, 0.6001E-01, 0.1084E+00, 0.1491E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3884E-02, 0.1326E-01, 0.4552E-01, 0.7313E-01, 0.1438E+00, 0.2038E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7924E-02, 0.3610E-01, 0.9173E-01, 0.1259E+00, 0.1938E+00, 0.2404E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2309E-02, 0.7156E-02, 0.2407E-01, 0.3887E-01, 0.7622E-01, 0.1069E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2D2_4s_a1D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9469E+00, 0.1795E+01, 0.2490E+01, 0.2713E+01, 0.2922E+01, 0.2954E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_a1I {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_a1I;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1713E-04, 0.1061E-03, 0.6323E-03, 0.1546E-02, 0.6406E-02, 0.1396E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5311E-01, 0.1297E+00, 0.1991E+00, 0.2221E+00, 0.2440E+00, 0.2480E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7550E-02, 0.8533E-02, 0.9708E-02, 0.1042E-01, 0.1214E-01, 0.1378E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1524E-01, 0.1721E-01, 0.1935E-01, 0.2065E-01, 0.2392E-01, 0.2727E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3982E-01, 0.1196E+00, 0.2281E+00, 0.2842E+00, 0.3915E+00, 0.4710E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4923E-05, 0.2573E-04, 0.1023E-03, 0.1848E-03, 0.4868E-03, 0.8758E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5018E-04, 0.3233E-03, 0.1403E-02, 0.2656E-02, 0.7578E-02, 0.1391E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2900E-01, 0.6420E-01, 0.1527E+00, 0.2230E+00, 0.3921E+00, 0.5247E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2840E-01, 0.1034E+00, 0.2938E+00, 0.4294E+00, 0.7169E+00, 0.9171E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9902E-03, 0.3659E-02, 0.1108E-01, 0.1724E-01, 0.3364E-01, 0.4856E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1640E-03, 0.9945E-03, 0.3191E-02, 0.4886E-02, 0.9126E-02, 0.1292E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3699E-04, 0.2173E-03, 0.7734E-03, 0.1283E-02, 0.2985E-02, 0.5106E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2H_4s_a1H__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5638E-04, 0.4377E-03, 0.2823E-02, 0.6220E-02, 0.1975E-01, 0.3598E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3343E-01, 0.7843E-01, 0.1217E+00, 0.1439E+00, 0.2065E+00, 0.2825E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3309E-06, 0.2760E-05, 0.1901E-04, 0.3918E-04, 0.1063E-03, 0.1775E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2289E-04, 0.5237E-04, 0.2131E-03, 0.4282E-03, 0.1261E-02, 0.2274E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7602E-04, 0.5451E-03, 0.2849E-02, 0.5627E-02, 0.1602E-01, 0.2900E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1984E-06, 0.1211E-05, 0.8262E-05, 0.1830E-04, 0.5846E-04, 0.1084E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2127E-04, 0.1347E-03, 0.7628E-03, 0.1610E-02, 0.5015E-02, 0.9364E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5104E-03, 0.4053E-02, 0.2413E-01, 0.4720E-01, 0.1180E+00, 0.1853E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7325E-04, 0.4574E-03, 0.1853E-02, 0.3212E-02, 0.7661E-02, 0.1306E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2299E-03, 0.1189E-02, 0.7096E-02, 0.1432E-01, 0.3730E-01, 0.5954E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6060E-06, 0.1212E-04, 0.9256E-04, 0.1839E-03, 0.4601E-03, 0.7308E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9776E-07, 0.6767E-06, 0.3850E-05, 0.8095E-05, 0.2569E-04, 0.4916E-04}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b3D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1495E-01, 0.3356E-01, 0.5701E-01, 0.6881E-01, 0.9067E-01, 0.1074E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b3D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4394E+00, 0.5488E+00, 0.7244E+00, 0.8201E+00, 0.9856E+00, 0.1082E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1360E+01, 0.1170E+01, 0.1072E+01, 0.1067E+01, 0.1141E+01, 0.1252E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2640E-02, 0.6292E-02, 0.1192E-01, 0.1572E-01, 0.2513E-01, 0.3370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5695E+00, 0.1010E+01, 0.1513E+01, 0.1758E+01, 0.2159E+01, 0.2377E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8161E+00, 0.1387E+01, 0.2094E+01, 0.2473E+01, 0.3172E+01, 0.3623E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2983E+01, 0.3744E+01, 0.4575E+01, 0.4964E+01, 0.5551E+01, 0.5809E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9823E-03, 0.3802E-02, 0.1077E-01, 0.1632E-01, 0.3070E-01, 0.4380E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5106E-03, 0.2275E-02, 0.7542E-02, 0.1253E-01, 0.2849E-01, 0.4681E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7129E-03, 0.4488E-02, 0.1525E-01, 0.2320E-01, 0.4084E-01, 0.5457E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1338E+01, 0.1934E+01, 0.2668E+01, 0.3072E+01, 0.3855E+01, 0.4390E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7732E-03, 0.2130E-02, 0.6350E-02, 0.1064E-01, 0.2454E-01, 0.3980E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2410E-02, 0.6844E-02, 0.1350E-01, 0.1746E-01, 0.2672E-01, 0.3522E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6112E-01, 0.1051E+00, 0.1559E+00, 0.1830E+00, 0.2357E+00, 0.2728E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2752E+00, 0.4812E+00, 0.7724E+00, 0.9390E+00, 0.1259E+01, 0.1465E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9377E-02, 0.1897E-01, 0.3041E-01, 0.3802E-01, 0.5779E-01, 0.7582E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6314E-02, 0.1278E-01, 0.1852E-01, 0.2118E-01, 0.2694E-01, 0.3181E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1421E-02, 0.4074E-02, 0.1182E-01, 0.1792E-01, 0.3253E-01, 0.4476E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3968E-01, 0.5293E-01, 0.6315E-01, 0.6917E-01, 0.8663E-01, 0.1056E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6158E-02, 0.1434E-01, 0.2946E-01, 0.4031E-01, 0.6576E-01, 0.8607E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_a1I__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_4s2_b1G {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6314E-02, 0.1870E-01, 0.3629E-01, 0.4822E-01, 0.8392E-01, 0.1252E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_4s2_b1G;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1895E+00, 0.2124E+00, 0.2319E+00, 0.2403E+00, 0.2575E+00, 0.2737E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2805E-01, 0.3635E-01, 0.4507E-01, 0.5011E-01, 0.6474E-01, 0.8303E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7045E+00, 0.1230E+01, 0.1626E+01, 0.1754E+01, 0.1894E+01, 0.1944E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1087E-01, 0.1764E-01, 0.2644E-01, 0.3393E-01, 0.5733E-01, 0.8063E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2126E-02, 0.3992E-02, 0.1119E-01, 0.2058E-01, 0.5327E-01, 0.8656E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1901E+00, 0.2058E+00, 0.2192E+00, 0.2268E+00, 0.2454E+00, 0.2638E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9957E-02, 0.3570E-01, 0.7511E-01, 0.9720E-01, 0.1446E+00, 0.1854E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3291E-02, 0.6358E-02, 0.1295E-01, 0.1897E-01, 0.3870E-01, 0.6251E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4399E-02, 0.7442E-02, 0.1362E-01, 0.1943E-01, 0.3851E-01, 0.6072E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1260E-01, 0.2896E-01, 0.6384E-01, 0.8967E-01, 0.1538E+00, 0.2123E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1808E-01, 0.2183E-01, 0.3008E-01, 0.3747E-01, 0.5860E-01, 0.7875E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5806E-02, 0.8458E-02, 0.2378E-01, 0.4374E-01, 0.1156E+00, 0.1954E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2187E-02, 0.4986E-02, 0.1449E-01, 0.2450E-01, 0.5759E-01, 0.9406E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9019E-02, 0.1548E-01, 0.3571E-01, 0.5381E-01, 0.1042E+00, 0.1528E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4750E-01, 0.7076E-01, 0.1404E+00, 0.2014E+00, 0.3548E+00, 0.4794E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4433E-03, 0.1352E-02, 0.4202E-02, 0.6960E-02, 0.1455E-01, 0.2108E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1243E-01, 0.4395E-01, 0.1471E+00, 0.2320E+00, 0.4400E+00, 0.6164E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6230E-02, 0.1134E-01, 0.2047E-01, 0.2807E-01, 0.5075E-01, 0.7417E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3402E-02, 0.1317E-01, 0.4338E-01, 0.7183E-01, 0.1561E+00, 0.2401E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_b3D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6507E-04, 0.1177E-03, 0.2554E-03, 0.4264E-03, 0.1230E-02, 0.2418E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1292E-03, 0.2238E-03, 0.4456E-03, 0.7493E-03, 0.2376E-02, 0.4958E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7261E-01, 0.1614E+00, 0.2533E+00, 0.2943E+00, 0.3664E+00, 0.4185E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3865E-04, 0.6936E-04, 0.1431E-03, 0.2400E-03, 0.7459E-03, 0.1538E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3002E-01, 0.9108E-01, 0.1789E+00, 0.2204E+00, 0.2855E+00, 0.3252E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3207E-01, 0.4794E-01, 0.8467E-01, 0.1211E+00, 0.2322E+00, 0.3378E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2227E-02, 0.5535E-02, 0.1425E-01, 0.2132E-01, 0.3954E-01, 0.5628E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2431E-01, 0.3390E-01, 0.5735E-01, 0.8054E-01, 0.1514E+00, 0.2201E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1473E-03, 0.8207E-03, 0.4169E-02, 0.8149E-02, 0.2154E-01, 0.3588E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5532E-03, 0.1219E-02, 0.2543E-02, 0.3714E-02, 0.7790E-02, 0.1308E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_b1G__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5180E+01, 0.5737E+01, 0.6516E+01, 0.7010E+01, 0.8133E+01, 0.9076E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1933E-01, 0.2836E-01, 0.3640E-01, 0.4032E-01, 0.4878E-01, 0.5650E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2287E+00, 0.5134E+00, 0.1008E+01, 0.1331E+01, 0.2035E+01, 0.2565E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2458E+00, 0.6288E+00, 0.1246E+01, 0.1611E+01, 0.2302E+01, 0.2731E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2083E+01, 0.2212E+01, 0.2479E+01, 0.2652E+01, 0.3024E+01, 0.3310E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7047E-04, 0.2292E-03, 0.6235E-03, 0.1132E-02, 0.3582E-02, 0.7037E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1233E-02, 0.3443E-02, 0.8258E-02, 0.1170E-01, 0.2001E-01, 0.2744E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3568E-02, 0.8228E-02, 0.1833E-01, 0.2612E-01, 0.4656E-01, 0.6600E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1989E-01, 0.2610E-01, 0.3750E-01, 0.4518E-01, 0.6216E-01, 0.7618E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1986E+00, 0.4071E+00, 0.6876E+00, 0.8355E+00, 0.1087E+01, 0.1224E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1399E-01, 0.2414E-01, 0.4212E-01, 0.5529E-01, 0.8949E-01, 0.1213E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5849E-01, 0.1033E+00, 0.1627E+00, 0.1966E+00, 0.2716E+00, 0.3365E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4873E-01, 0.9205E-01, 0.1398E+00, 0.1613E+00, 0.1983E+00, 0.2246E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5748E-02, 0.1241E-01, 0.2098E-01, 0.2561E-01, 0.3567E-01, 0.4430E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5058E-03, 0.7248E-03, 0.1111E-02, 0.1491E-02, 0.2910E-02, 0.4635E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1966E-01, 0.2718E-01, 0.4013E-01, 0.4878E-01, 0.6737E-01, 0.8144E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9903E-02, 0.1585E-01, 0.1993E-01, 0.2171E-01, 0.2587E-01, 0.2971E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2372E-02, 0.6411E-02, 0.1153E-01, 0.1454E-01, 0.2189E-01, 0.2871E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d8_c3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1773E-01, 0.2469E-01, 0.3265E-01, 0.3730E-01, 0.4847E-01, 0.5917E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d8_c3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1835E+00, 0.5191E+00, 0.1107E+01, 0.1470E+01, 0.2179E+01, 0.2638E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4936E+00, 0.1198E+01, 0.2382E+01, 0.3117E+01, 0.4605E+01, 0.5628E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3766E+01, 0.4306E+01, 0.5136E+01, 0.5671E+01, 0.6902E+01, 0.7942E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9528E-04, 0.2361E-03, 0.5640E-03, 0.9827E-03, 0.3049E-02, 0.6020E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8524E-03, 0.2894E-02, 0.7328E-02, 0.1065E-01, 0.1970E-01, 0.2868E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1843E-02, 0.4904E-02, 0.1223E-01, 0.1844E-01, 0.3703E-01, 0.5689E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3596E-01, 0.4506E-01, 0.5959E-01, 0.6897E-01, 0.8953E-01, 0.1066E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2726E+00, 0.5570E+00, 0.9813E+00, 0.1226E+01, 0.1686E+01, 0.1976E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1141E-01, 0.2085E-01, 0.3714E-01, 0.4951E-01, 0.8553E-01, 0.1236E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3262E-01, 0.5774E-01, 0.9466E-01, 0.1180E+00, 0.1718E+00, 0.2170E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3409E-01, 0.7162E-01, 0.1171E+00, 0.1389E+00, 0.1752E+00, 0.1971E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3856E-02, 0.8806E-02, 0.1607E-01, 0.2050E-01, 0.3109E-01, 0.4053E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3379E-04, 0.1116E-03, 0.2507E-03, 0.3468E-03, 0.6020E-03, 0.8556E-03}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2073E-03, 0.1291E-02, 0.5481E-02, 0.9026E-02, 0.1779E-01, 0.2538E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1944E-02, 0.3699E-02, 0.5836E-02, 0.7087E-02, 0.1006E-01, 0.1276E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5911E-02, 0.1389E-01, 0.2367E-01, 0.3074E-01, 0.5136E-01, 0.7056E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3484E-02, 0.6202E-02, 0.9496E-02, 0.1172E-01, 0.1790E-01, 0.2425E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1456E-02, 0.2938E-02, 0.5039E-02, 0.6659E-02, 0.1168E-01, 0.1727E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2118E-02, 0.5489E-02, 0.1042E-01, 0.1336E-01, 0.1991E-01, 0.2566E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1523E-01, 0.6127E-01, 0.1404E+00, 0.1872E+00, 0.2798E+00, 0.3467E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5406E-01, 0.1493E+00, 0.3045E+00, 0.3967E+00, 0.5837E+00, 0.7216E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3229E+01, 0.4560E+01, 0.5974E+01, 0.6662E+01, 0.7841E+01, 0.8539E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4344E+00, 0.5515E+00, 0.8451E+00, 0.1079E+01, 0.1628E+01, 0.2057E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3545E-03, 0.7392E-03, 0.1741E-02, 0.2666E-02, 0.5417E-02, 0.8203E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2941E+00, 0.4941E+00, 0.7698E+00, 0.9295E+00, 0.1246E+01, 0.1468E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4882E-01, 0.8822E-01, 0.1456E+00, 0.1812E+00, 0.2599E+00, 0.3228E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3038E-01, 0.5124E-01, 0.8619E-01, 0.1092E+00, 0.1610E+00, 0.2030E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1781E+00, 0.2870E+00, 0.4582E+00, 0.5572E+00, 0.7444E+00, 0.8680E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4927E-03, 0.1410E-02, 0.4217E-02, 0.6936E-02, 0.1491E-01, 0.2264E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1665E-01, 0.7852E-01, 0.2786E+00, 0.4376E+00, 0.8122E+00, 0.1108E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7095E-02, 0.1630E-01, 0.2912E-01, 0.3677E-01, 0.5322E-01, 0.6618E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1418E+00, 0.2224E+00, 0.3329E+00, 0.4005E+00, 0.5443E+00, 0.6480E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d8_c3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2561E+02, 0.3362E+02, 0.4136E+02, 0.4497E+02, 0.5121E+02, 0.5521E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1099E+00, 0.2743E+00, 0.5322E+00, 0.6804E+00, 0.9506E+00, 0.1111E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2602E-02, 0.8170E-02, 0.2019E-01, 0.2897E-01, 0.5085E-01, 0.7063E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2384E-03, 0.9869E-03, 0.4255E-02, 0.7572E-02, 0.1693E-01, 0.2545E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4739E-03, 0.2615E-02, 0.8789E-02, 0.1349E-01, 0.2537E-01, 0.3752E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6186E+01, 0.8545E+01, 0.1076E+02, 0.1173E+02, 0.1328E+02, 0.1417E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2440E-02, 0.5121E-02, 0.1081E-01, 0.1532E-01, 0.2628E-01, 0.3491E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1692E-01, 0.3519E-01, 0.5904E-01, 0.7079E-01, 0.9048E-01, 0.1023E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1491E+01, 0.1936E+01, 0.2267E+01, 0.2399E+01, 0.2633E+01, 0.2814E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2172E+01, 0.3054E+01, 0.3847E+01, 0.4152E+01, 0.4487E+01, 0.4505E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1425E-01, 0.2502E-01, 0.4105E-01, 0.5153E-01, 0.7609E-01, 0.9694E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1504E-01, 0.2602E-01, 0.3276E-01, 0.3466E-01, 0.3734E-01, 0.3951E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4190E-03, 0.2701E-02, 0.1035E-01, 0.1643E-01, 0.3124E-01, 0.4442E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7445E-01, 0.8551E-01, 0.8689E-01, 0.8626E-01, 0.8691E-01, 0.9067E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2445E-01, 0.4018E-01, 0.5486E-01, 0.6329E-01, 0.8388E-01, 0.1024E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1109E+00, 0.3030E+00, 0.6342E+00, 0.8409E+00, 0.1256E+01, 0.1537E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_3Po_z3Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1952E-02, 0.7758E-02, 0.2029E-01, 0.2922E-01, 0.5146E-01, 0.7249E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3404E-03, 0.1036E-02, 0.3090E-02, 0.5020E-02, 0.1082E-01, 0.1683E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5268E-03, 0.2745E-02, 0.8818E-02, 0.1322E-01, 0.2349E-01, 0.3319E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2362E+02, 0.2978E+02, 0.3582E+02, 0.3882E+02, 0.4449E+02, 0.4846E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5980E-02, 0.1147E-01, 0.2131E-01, 0.2842E-01, 0.4476E-01, 0.5726E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1939E-01, 0.3576E-01, 0.5622E-01, 0.6609E-01, 0.8151E-01, 0.8953E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8036E+00, 0.1112E+01, 0.1340E+01, 0.1409E+01, 0.1460E+01, 0.1444E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5847E+01, 0.7908E+01, 0.9854E+01, 0.1062E+02, 0.1145E+02, 0.1149E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2407E-01, 0.3780E-01, 0.5890E-01, 0.7268E-01, 0.1036E+00, 0.1288E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7240E-03, 0.1484E-02, 0.2624E-02, 0.3310E-02, 0.4844E-02, 0.6138E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1127E-03, 0.9378E-03, 0.3591E-02, 0.5744E-02, 0.1185E-01, 0.1857E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4271E-01, 0.5067E-01, 0.5631E-01, 0.5879E-01, 0.6478E-01, 0.7068E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3445E-01, 0.5535E-01, 0.7141E-01, 0.7886E-01, 0.9538E-01, 0.1109E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_4s2_b1D {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8304E-04, 0.2661E-03, 0.6358E-03, 0.9782E-03, 0.2357E-02, 0.4248E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_4s2_b1D;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3139E-04, 0.1401E-03, 0.4652E-03, 0.7609E-03, 0.1641E-02, 0.2581E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1151E-03, 0.5235E-03, 0.1977E-02, 0.3505E-02, 0.8639E-02, 0.1445E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5378E-03, 0.2620E-02, 0.8224E-02, 0.1235E-01, 0.2157E-01, 0.2883E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3491E+00, 0.6010E+00, 0.9627E+00, 0.1172E+01, 0.1578E+01, 0.1849E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9122E-02, 0.1298E-01, 0.1869E-01, 0.2268E-01, 0.3336E-01, 0.4406E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1056E-01, 0.1857E-01, 0.3056E-01, 0.3841E-01, 0.5779E-01, 0.7544E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2063E-01, 0.3560E-01, 0.5242E-01, 0.6007E-01, 0.7217E-01, 0.7908E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1100E-02, 0.2628E-02, 0.4689E-02, 0.5964E-02, 0.9314E-02, 0.1266E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4680E-03, 0.7761E-03, 0.1201E-02, 0.1552E-02, 0.2725E-02, 0.3987E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5809E-02, 0.9640E-02, 0.1791E-01, 0.2409E-01, 0.3886E-01, 0.5134E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5137E-02, 0.7855E-02, 0.1043E-01, 0.1180E-01, 0.1576E-01, 0.2069E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2399E-03, 0.7895E-03, 0.1821E-02, 0.2508E-02, 0.4049E-02, 0.5284E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_3Po_z3Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_z5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_z5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3611E-03, 0.1652E-02, 0.4863E-02, 0.7799E-02, 0.1735E-01, 0.2797E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2286E-02, 0.8462E-02, 0.2117E-01, 0.3037E-01, 0.5247E-01, 0.7149E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1322E-02, 0.5735E-02, 0.1585E-01, 0.2437E-01, 0.4980E-01, 0.7621E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8276E-03, 0.3043E-02, 0.8677E-02, 0.1380E-01, 0.2993E-01, 0.4818E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1930E-02, 0.6870E-02, 0.2315E-01, 0.3705E-01, 0.7149E-01, 0.1005E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_4s2_b1D__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_z3Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8240E-01, 0.3578E+00, 0.1054E+01, 0.1612E+01, 0.3021E+01, 0.4222E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_z3Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1129E-02, 0.4788E-02, 0.1590E-01, 0.2586E-01, 0.5731E-01, 0.9612E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2028E-03, 0.7445E-03, 0.2261E-02, 0.3655E-02, 0.8008E-02, 0.1278E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5564E-02, 0.2536E-01, 0.8035E-01, 0.1238E+00, 0.2317E+00, 0.3244E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3793E-02, 0.1456E-01, 0.3603E-01, 0.4917E-01, 0.7605E-01, 0.9675E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1819E+00, 0.3337E+00, 0.4940E+00, 0.5695E+00, 0.7053E+00, 0.7981E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4015E-03, 0.1067E-02, 0.2765E-02, 0.4344E-02, 0.9230E-02, 0.1440E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1141E+01, 0.1820E+01, 0.2582E+01, 0.2966E+01, 0.3671E+01, 0.4146E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7205E-03, 0.1971E-02, 0.5425E-02, 0.8657E-02, 0.1861E-01, 0.2934E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9315E-04, 0.6118E-03, 0.2676E-02, 0.4737E-02, 0.1217E-01, 0.2240E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2174E-02, 0.4924E-02, 0.1156E-01, 0.1701E-01, 0.3156E-01, 0.4536E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2823E+01, 0.4033E+01, 0.5129E+01, 0.5657E+01, 0.6558E+01, 0.7062E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_z5Go__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_4F_4p_y3Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4235E+00, 0.5714E+00, 0.7217E+00, 0.7928E+00, 0.9118E+00, 0.9839E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_4F_4p_y3Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_y5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5793E-04, 0.2697E-03, 0.9283E-03, 0.1563E-02, 0.3643E-02, 0.6072E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_y5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_2F_4s_d3F {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1983E-01, 0.4606E-01, 0.1185E+00, 0.1775E+00, 0.3254E+00, 0.4519E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_2F_4s_d3F;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9012E-03, 0.2432E-02, 0.7509E-02, 0.1270E-01, 0.2986E-01, 0.4903E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1197E-02, 0.2831E-02, 0.6758E-02, 0.9991E-02, 0.1930E-01, 0.2909E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1055E-01, 0.2309E-01, 0.4512E-01, 0.6002E-01, 0.9822E-01, 0.1351E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4103E-04, 0.1631E-03, 0.5495E-03, 0.9331E-03, 0.2185E-02, 0.3606E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2990E-03, 0.2148E-02, 0.8938E-02, 0.1491E-01, 0.3132E-01, 0.4746E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9063E-04, 0.2818E-03, 0.6861E-03, 0.1014E-02, 0.2004E-02, 0.3113E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1357E+00, 0.2347E+00, 0.4195E+00, 0.5537E+00, 0.8606E+00, 0.1093E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_z3Go__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8794E-02, 0.1372E-01, 0.2256E-01, 0.2907E-01, 0.4569E-01, 0.6159E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1156E-02, 0.4272E-02, 0.1430E-01, 0.2239E-01, 0.4265E-01, 0.6155E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4418E-02, 0.1658E-01, 0.4510E-01, 0.6543E-01, 0.1140E+00, 0.1585E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2288E-04, 0.3312E-03, 0.1705E-02, 0.2955E-02, 0.6513E-02, 0.1035E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6409E-01, 0.1343E+00, 0.3042E+00, 0.4343E+00, 0.7501E+00, 0.1020E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2958E-03, 0.1389E-02, 0.4228E-02, 0.6613E-02, 0.1413E-01, 0.2299E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1042E-01, 0.3411E-01, 0.8341E-01, 0.1167E+00, 0.1894E+00, 0.2462E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6570E-02, 0.1406E-01, 0.2338E-01, 0.2771E-01, 0.3413E-01, 0.3727E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2904E+00, 0.4160E+00, 0.5131E+00, 0.5424E+00, 0.5611E+00, 0.5502E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3988E+01, 0.5586E+01, 0.6983E+01, 0.7479E+01, 0.7936E+01, 0.7876E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5873E-02, 0.9285E-02, 0.1376E-01, 0.1670E-01, 0.2450E-01, 0.3248E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7477E-02, 0.1132E-01, 0.1339E-01, 0.1392E-01, 0.1499E-01, 0.1642E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1062E-03, 0.3736E-03, 0.1409E-02, 0.2524E-02, 0.6640E-02, 0.1192E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8101E-01, 0.9012E-01, 0.9262E-01, 0.9261E-01, 0.9427E-01, 0.9935E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.7038E-03, 0.2191E-02, 0.5705E-02, 0.8330E-02, 0.1445E-01, 0.1927E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_y5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d7_4F_4p_y3Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1934E+00, 0.2966E+00, 0.4568E+00, 0.5627E+00, 0.8032E+00, 0.9918E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d7_4F_4p_y3Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1027E-01, 0.3117E-01, 0.8121E-01, 0.1210E+00, 0.2198E+00, 0.3017E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1434E+00, 0.4898E+00, 0.1229E+01, 0.1755E+01, 0.2966E+01, 0.3927E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3660E-04, 0.1668E-03, 0.5250E-03, 0.8239E-03, 0.1622E-02, 0.2378E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1295E-03, 0.1699E-02, 0.7838E-02, 0.1301E-01, 0.2665E-01, 0.4031E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6957E-02, 0.1946E-01, 0.3792E-01, 0.4954E-01, 0.7505E-01, 0.9482E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1843E+00, 0.4422E+00, 0.8605E+00, 0.1138E+01, 0.1754E+01, 0.2216E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_2F_4s_d3F__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1652E+00, 0.4773E+00, 0.1113E+01, 0.1564E+01, 0.2606E+01, 0.3433E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Do;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2566E-01, 0.5771E-01, 0.1157E+00, 0.1555E+00, 0.2452E+00, 0.3152E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4085E-01, 0.1055E+00, 0.2057E+00, 0.2640E+00, 0.3831E+00, 0.4716E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2820E-01, 0.4370E-01, 0.6630E-01, 0.8120E-01, 0.1178E+00, 0.1529E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2023E+00, 0.3862E+00, 0.6474E+00, 0.8043E+00, 0.1131E+01, 0.1365E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5917E-01, 0.1330E+00, 0.2307E+00, 0.2871E+00, 0.4065E+00, 0.4967E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d7_4F_4p_y3Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d5_6S_4s2_4p_y7Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.4373E+00, 0.6881E+00, 0.8893E+00, 0.9498E+00, 0.9814E+00, 0.9464E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d5_6S_4s2_4p_y7Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6333E+00, 0.9986E+00, 0.1480E+01, 0.1762E+01, 0.2337E+01, 0.2749E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1593E+01, 0.2170E+01, 0.2686E+01, 0.2923E+01, 0.3367E+01, 0.3692E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8706E-03, 0.4842E-02, 0.1871E-01, 0.3153E-01, 0.6848E-01, 0.1059E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.5373E+01, 0.6861E+01, 0.8192E+01, 0.8851E+01, 0.1015E+02, 0.1110E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1648E+01, 0.2233E+01, 0.2751E+01, 0.2997E+01, 0.3464E+01, 0.3802E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Do__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1029E-01, 0.1688E-01, 0.2401E-01, 0.2803E-01, 0.3687E-01, 0.4404E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)] = f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2730E-02, 0.4808E-02, 0.6414E-02, 0.7156E-02, 0.9256E-02, 0.1195E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00, 0.0000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.6110E-01, 0.7929E-01, 0.9092E-01, 0.9434E-01, 0.1000E+00, 0.1065E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1125E-02, 0.2683E-02, 0.6017E-02, 0.8555E-02, 0.1449E-01, 0.1916E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d5_6S_4s2_4p_y7Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d8_3P {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3662E-03, 0.1397E-02, 0.3927E-02, 0.5734E-02, 0.9652E-02, 0.1261E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d8_3P;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1261E-03, 0.1838E-02, 0.7666E-02, 0.1225E-01, 0.2533E-01, 0.4157E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_z5So;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.3199E+00, 0.4429E+00, 0.5049E+00, 0.5314E+00, 0.5880E+00, 0.6327E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.8731E+01, 0.1185E+02, 0.1476E+02, 0.1619E+02, 0.1890E+02, 0.2082E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_5D_4s_4p_1Po_x5Fo__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9797E+00, 0.1376E+01, 0.1782E+01, 0.1994E+01, 0.2388E+01, 0.2634E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d8_3P__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d8_3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1916E-02, 0.4384E-02, 0.9905E-02, 0.1427E-01, 0.2539E-01, 0.3545E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d8_3P__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_z5So__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.9283E-03, 0.3438E-02, 0.1085E-01, 0.1744E-01, 0.3587E-01, 0.5441E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)] = f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_z5So__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_z5So__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.1451E-03, 0.6953E-03, 0.2138E-02, 0.3735E-02, 0.1191E-01, 0.2576E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_z5So__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  Eigen::Matrix<double, 2, 6> f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go {
    {3000.0, 5000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {0.2595E-02, 0.7707E-02, 0.2028E-01, 0.3019E-01, 0.5537E-01, 0.7856E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)][static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)] = f_vs_T__LS_Ar_3d6_3P2_4s_4p_3Po_x5Po__LS_Ar_3d6_3H_4s_4p_3Po_y5Go;

  return f_vs_T;
}


}