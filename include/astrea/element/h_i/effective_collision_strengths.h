/**
 * \file astrea/element/h_i/effective_collision_strengths.h
 * H I effective collision strengths by Mashonkina+2008, Przybilla+2004.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i {


/**
 * H I effective collision strengths by Mashonkina+2008, Przybilla+2004.
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
  f_vs_T_KK(19, std::vector<Eigen::Matrix2Xd>(19));

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_2 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.640E+00, 0.698E+00, 0.757E+00, 0.809E+00, 0.897E+00, 0.978E+00, 0.106E+01, 0.115E+01, 0.132E+01, 0.151E+01, 0.168E+01, 0.202E+01}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_2)] = f_vs_T__LS_1__LS_2;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_3 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.220E+00, 0.240E+00, 0.250E+00, 0.261E+00, 0.288E+00, 0.322E+00, 0.359E+00, 0.396E+00, 0.464E+00, 0.526E+00, 0.579E+00, 0.670E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_3)] = f_vs_T__LS_1__LS_3;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_4 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.993E-01, 0.102E+00, 0.110E+00, 0.122E+00, 0.151E+00, 0.180E+00, 0.206E+00, 0.228E+00, 0.266E+00, 0.295E+00, 0.318E+00, 0.355E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_4)] = f_vs_T__LS_1__LS_4;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_5 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.492E-01, 0.584E-01, 0.717E-01, 0.858E-01, 0.112E+00, 0.133E+00, 0.150E+00, 0.164E+00, 0.185E+00, 0.201E+00, 0.212E+00, 0.229E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_5)] = f_vs_T__LS_1__LS_5;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_6 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.297E-01, 0.466E-01, 0.628E-01, 0.768E-01, 0.982E-01, 0.114E+00, 0.125E+00, 0.133E+00, 0.145E+00, 0.153E+00, 0.158E+00, 0.165E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_6)] = f_vs_T__LS_1__LS_6;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_1__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.503E-01, 0.672E-01, 0.786E-01, 0.874E-01, 0.100E+00, 0.110E+00, 0.116E+00, 0.121E+00, 0.127E+00, 0.131E+00, 0.134E+00, 0.136E+00}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_1)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_1__LS_7;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_2__LS_3 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.235E+02, 0.278E+02, 0.309E+02, 0.338E+02, 0.401E+02, 0.471E+02, 0.545E+02, 0.620E+02, 0.771E+02, 0.914E+02, 0.105E+03, 0.129E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_2)][static_cast<int>(STRUCTURE::LS_3)] = f_vs_T__LS_2__LS_3;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_2__LS_4 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.107E+02, 0.115E+02, 0.123E+02, 0.134E+02, 0.162E+02, 0.190E+02, 0.218E+02, 0.244E+02, 0.289E+02, 0.327E+02, 0.360E+02, 0.414E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_2)][static_cast<int>(STRUCTURE::LS_4)] = f_vs_T__LS_2__LS_4;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_2__LS_5 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.522E+01, 0.590E+01, 0.696E+01, 0.815E+01, 0.104E+02, 0.123E+02, 0.139E+02, 0.152E+02, 0.174E+02, 0.190E+02, 0.203E+02, 0.223E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_2)][static_cast<int>(STRUCTURE::LS_5)] = f_vs_T__LS_2__LS_5;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_2__LS_6 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.291E+01, 0.453E+01, 0.606E+01, 0.732E+01, 0.917E+01, 0.105E+02, 0.114E+02, 0.121E+02, 0.131E+02, 0.138E+02, 0.144E+02, 0.151E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_2)][static_cast<int>(STRUCTURE::LS_6)] = f_vs_T__LS_2__LS_6;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_2__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.525E+01, 0.726E+01, 0.847E+01, 0.927E+01, 0.103E+02, 0.108E+02, 0.112E+02, 0.114E+02, 0.117E+02, 0.118E+02, 0.119E+02, 0.119E+02}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_2)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_2__LS_7;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_3__LS_4 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.150E+03, 0.190E+03, 0.228E+03, 0.270E+03, 0.364E+03, 0.466E+03, 0.570E+03, 0.672E+03, 0.866E+03, 0.104E+04, 0.119E+04, 0.146E+04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_3)][static_cast<int>(STRUCTURE::LS_4)] = f_vs_T__LS_3__LS_4;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_3__LS_5 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.789E+02, 0.901E+02, 0.107E+03, 0.126E+03, 0.166E+03, 0.203E+03, 0.237E+03, 0.268E+03, 0.319E+03, 0.362E+03, 0.398E+03, 0.453E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_3)][static_cast<int>(STRUCTURE::LS_5)] = f_vs_T__LS_3__LS_5;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_3__LS_6 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.413E+02, 0.611E+02, 0.821E+02, 0.101E+03, 0.131E+03, 0.154E+03, 0.172E+03, 0.186E+03, 0.208E+03, 0.224E+03, 0.236E+03, 0.253E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_3)][static_cast<int>(STRUCTURE::LS_6)] = f_vs_T__LS_3__LS_6;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_3__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.760E+02, 0.107E+03, 0.125E+03, 0.137E+03, 0.152E+03, 0.161E+03, 0.168E+03, 0.172E+03, 0.178E+03, 0.181E+03, 0.183E+03, 0.185E+03}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_3)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_3__LS_7;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_4__LS_5 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.590E+03, 0.817E+03, 0.107E+04, 0.135E+04, 0.193E+04, 0.247E+04, 0.296E+04, 0.340E+04, 0.414E+04, 0.475E+04, 0.525E+04, 0.608E+04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_4)][static_cast<int>(STRUCTURE::LS_5)] = f_vs_T__LS_4__LS_5;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_4__LS_6 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.294E+03, 0.421E+03, 0.578E+03, 0.736E+03, 0.102E+04, 0.126E+04, 0.146E+04, 0.164E+04, 0.192E+04, 0.215E+04, 0.233E+04, 0.261E+04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_4)][static_cast<int>(STRUCTURE::LS_6)] = f_vs_T__LS_4__LS_6;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_4__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.479E+03, 0.706E+03, 0.856E+03, 0.966E+03, 0.111E+04, 0.121E+04, 0.129E+04, 0.134E+04, 0.141E+04, 0.146E+04, 0.150E+04, 0.155E+04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_4)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_4__LS_7;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_5__LS_6 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.193E+04, 0.291E+04, 0.400E+04, 0.504E+04, 0.681E+04, 0.820E+04, 0.929E+04, 0.102E+05, 0.115E+05, 0.126E+05, 0.134E+05, 0.149E+05}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_5)][static_cast<int>(STRUCTURE::LS_6)] = f_vs_T__LS_5__LS_6;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_5__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.195E+04, 0.324E+04, 0.420E+04, 0.495E+04, 0.602E+04, 0.676E+04, 0.729E+04, 0.770E+04, 0.826E+04, 0.863E+04, 0.888E+04, 0.921E+04}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_5)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_5__LS_7;

  Eigen::Matrix<double, 2, 12> f_vs_T__LS_6__LS_7 {
    {2500.0, 5000.0, 7500.0, 10000.0, 15000.0, 20000.0, 25000.0, 30000.0, 40000.0, 50000.0, 60000.0, 80000.0},
    {0.681E+04, 0.117E+05, 0.150E+05, 0.173E+05, 0.203E+05, 0.221E+05, 0.233E+05, 0.241E+05, 0.252E+05, 0.260E+05, 0.269E+05, 0.290E+05}
  };
  f_vs_T_KK[static_cast<int>(STRUCTURE::LS_6)][static_cast<int>(STRUCTURE::LS_7)] = f_vs_T__LS_6__LS_7;

  return f_vs_T_KK;
}


}