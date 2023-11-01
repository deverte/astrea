/**
 * \file astrea/element/mg_i/effective_collision_strengths.h
 * Mg I effective collision strengths by Merle+2015, Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_i/structure.h"


namespace astrea::element::mg_i {


/**
 * Mg I effective collision strengths by Merle+2015, Alexeeva+2018.
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
  f_vs_T(70, std::vector<Eigen::Matrix2Xd>(70));

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.630E-02, 3.740E-02, 9.640E-02, 2.960E-01, 5.980E-01, 9.920E-01, 1.470E+00, 3.060E+00, 5.210E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.040E-03, 6.550E-03, 2.050E-02, 5.690E-02, 9.560E-02, 1.330E-01, 1.700E-01, 2.540E-01, 3.300E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.920E-04, 3.810E-03, 1.620E-02, 4.930E-02, 8.540E-02, 1.230E-01, 1.620E-01, 2.690E-01, 3.910E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.230E-03, 1.200E-02, 3.030E-02, 7.260E-02, 1.240E-01, 1.850E-01, 2.580E-01, 4.950E-01, 8.180E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.560E-03, 1.910E-02, 4.150E-02, 8.850E-02, 1.350E-01, 1.800E-01, 2.230E-01, 3.270E-01, 4.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.390E-03, 6.950E-03, 2.230E-02, 6.820E-02, 1.260E-01, 1.920E-01, 2.640E-01, 4.670E-01, 6.940E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_3d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.720E-03, 7.480E-03, 2.090E-02, 5.460E-02, 9.590E-02, 1.460E-01, 2.080E-01, 4.180E-01, 7.160E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.660E-03, 4.700E-03, 1.100E-02, 2.230E-02, 3.270E-02, 4.270E-02, 5.270E-02, 7.820E-02, 1.040E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.890E-03, 4.420E-03, 9.350E-03, 1.910E-02, 2.950E-02, 4.120E-02, 5.450E-02, 9.520E-02, 1.460E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.320E-03, 7.560E-03, 1.600E-02, 3.250E-02, 5.020E-02, 7.030E-02, 9.370E-02, 1.660E-01, 2.570E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.940E-03, 6.950E-03, 1.550E-02, 3.470E-02, 5.720E-02, 8.350E-02, 1.140E-01, 2.050E-01, 3.120E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.730E-03, 4.000E-03, 9.180E-03, 2.090E-02, 3.330E-02, 4.620E-02, 5.970E-02, 9.550E-02, 1.330E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.160E-03, 3.210E-03, 8.000E-03, 1.920E-02, 3.290E-02, 4.990E-02, 7.100E-02, 1.430E-01, 2.430E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.680E-04, 2.060E-03, 4.010E-03, 7.790E-03, 1.160E-02, 1.570E-02, 2.000E-02, 3.160E-02, 4.370E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.460E-04, 1.420E-03, 3.050E-03, 6.740E-03, 1.110E-02, 1.650E-02, 2.280E-02, 4.260E-02, 6.680E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.960E-03, 4.510E-03, 9.090E-03, 1.780E-02, 2.810E-02, 4.050E-02, 5.480E-02, 9.640E-02, 1.440E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.300E-03, 2.950E-03, 6.380E-03, 1.600E-02, 3.070E-02, 5.010E-02, 7.310E-02, 1.410E-01, 2.180E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.440E-04, 2.310E-03, 5.120E-03, 1.150E-02, 1.940E-02, 2.900E-02, 3.980E-02, 6.990E-02, 1.020E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.720E-04, 1.950E-03, 4.400E-03, 9.280E-03, 1.470E-02, 2.120E-02, 2.920E-02, 5.680E-02, 9.540E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.600E-04, 1.220E-03, 2.570E-03, 5.000E-03, 7.260E-03, 9.530E-03, 1.180E-02, 1.760E-02, 2.330E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.680E-03, 4.430E-03, 1.170E-02, 3.000E-02, 5.010E-02, 7.060E-02, 9.120E-02, 1.420E-01, 1.910E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.320E-04, 8.130E-04, 1.980E-03, 4.540E-03, 7.390E-03, 1.070E-02, 1.470E-02, 2.660E-02, 4.080E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.470E-06, 3.770E-05, 2.270E-04, 1.280E-03, 3.200E-03, 5.770E-03, 8.810E-03, 1.770E-02, 2.770E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.750E-04, 1.650E-03, 5.350E-03, 1.880E-02, 3.770E-02, 5.980E-02, 8.390E-02, 1.480E-01, 2.130E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.790E-04, 1.880E-03, 5.630E-03, 1.710E-02, 3.250E-02, 5.030E-02, 6.910E-02, 1.170E-01, 1.610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.700E-04, 6.980E-04, 2.180E-03, 8.360E-03, 1.890E-02, 3.320E-02, 5.040E-02, 1.040E-01, 1.680E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.140E-04, 4.240E-04, 2.050E-03, 8.530E-03, 1.640E-02, 2.410E-02, 3.130E-02, 4.700E-02, 6.070E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.590E-05, 1.970E-04, 8.120E-04, 4.110E-03, 1.010E-02, 1.840E-02, 2.840E-02, 5.850E-02, 9.250E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s2_1S__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_3p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.780E-02, 8.450E-02, 2.020E-01, 5.430E-01, 9.820E-01, 1.470E+00, 1.980E+00, 3.260E+00, 4.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_3p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_3p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.780E-02, 8.450E-02, 2.020E-01, 5.430E-01, 9.820E-01, 1.470E+00, 1.980E+00, 3.260E+00, 4.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_3p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_3p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.780E-02, 8.450E-02, 2.020E-01, 5.430E-01, 9.820E-01, 1.470E+00, 1.980E+00, 3.260E+00, 4.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_3p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.880E-04, 2.020E-03, 8.640E-03, 3.890E-02, 9.750E-02, 1.910E-01, 3.240E-01, 8.580E-01, 1.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.880E-04, 2.020E-03, 8.640E-03, 3.890E-02, 9.750E-02, 1.910E-01, 3.240E-01, 8.580E-01, 1.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.880E-04, 2.020E-03, 8.640E-03, 3.890E-02, 9.750E-02, 1.910E-01, 3.240E-01, 8.580E-01, 1.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.430E-02, 3.870E-02, 9.970E-02, 2.320E-01, 3.610E-01, 4.820E-01, 5.960E-01, 8.530E-01, 1.070E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.430E-02, 3.870E-02, 9.970E-02, 2.320E-01, 3.610E-01, 4.820E-01, 5.960E-01, 8.530E-01, 1.070E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.430E-02, 3.870E-02, 9.970E-02, 2.320E-01, 3.610E-01, 4.820E-01, 5.960E-01, 8.530E-01, 1.070E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.550E-02, 6.550E-02, 1.560E-01, 3.600E-01, 5.910E-01, 8.410E-01, 1.110E+00, 1.820E+00, 2.600E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.550E-02, 6.550E-02, 1.560E-01, 3.600E-01, 5.910E-01, 8.410E-01, 1.110E+00, 1.820E+00, 2.600E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.550E-02, 6.550E-02, 1.560E-01, 3.600E-01, 5.910E-01, 8.410E-01, 1.110E+00, 1.820E+00, 2.600E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.670E-03, 1.710E-02, 5.540E-02, 1.480E-01, 2.480E-01, 3.530E-01, 4.620E-01, 7.440E-01, 1.030E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.670E-03, 1.710E-02, 5.540E-02, 1.480E-01, 2.480E-01, 3.530E-01, 4.620E-01, 7.440E-01, 1.030E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.670E-03, 1.710E-02, 5.540E-02, 1.480E-01, 2.480E-01, 3.530E-01, 4.620E-01, 7.440E-01, 1.030E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.440E-03, 1.840E-02, 3.900E-02, 8.110E-02, 1.230E-01, 1.640E-01, 2.050E-01, 3.020E-01, 3.930E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.890E-03, 1.760E-02, 3.960E-02, 9.140E-02, 1.530E-01, 2.250E-01, 3.090E-01, 5.610E-01, 8.610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.040E-03, 8.840E-03, 2.280E-02, 5.600E-02, 9.420E-02, 1.360E-01, 1.820E-01, 3.030E-01, 4.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.580E-03, 5.720E-03, 1.280E-02, 2.980E-02, 4.890E-02, 6.930E-02, 9.050E-02, 1.440E-01, 1.970E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.370E-03, 1.020E-02, 2.180E-02, 4.740E-02, 8.070E-02, 1.230E-01, 1.740E-01, 3.290E-01, 5.080E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.890E-03, 4.780E-03, 1.110E-02, 2.540E-02, 4.270E-02, 6.290E-02, 8.520E-02, 1.450E-01, 2.060E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.070E-03, 8.120E-03, 2.180E-02, 5.900E-02, 1.050E-01, 1.560E-01, 2.110E-01, 3.520E-01, 4.950E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-03, 3.200E-03, 7.720E-03, 1.780E-02, 2.850E-02, 4.010E-02, 5.250E-02, 8.500E-02, 1.170E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.640E-04, 2.220E-03, 7.190E-03, 2.760E-02, 5.850E-02, 9.530E-02, 1.350E-01, 2.350E-01, 3.320E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.270E-04, 9.680E-04, 3.880E-03, 1.660E-02, 3.570E-02, 5.870E-02, 8.370E-02, 1.490E-01, 2.130E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po0__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.440E-03, 1.840E-02, 3.900E-02, 8.110E-02, 1.230E-01, 1.640E-01, 2.050E-01, 3.020E-01, 3.930E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.890E-03, 1.760E-02, 3.960E-02, 9.140E-02, 1.530E-01, 2.250E-01, 3.090E-01, 5.610E-01, 8.610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.040E-03, 8.840E-03, 2.280E-02, 5.600E-02, 9.420E-02, 1.360E-01, 1.820E-01, 3.030E-01, 4.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.580E-03, 5.720E-03, 1.280E-02, 2.980E-02, 4.890E-02, 6.930E-02, 9.050E-02, 1.440E-01, 1.970E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.370E-03, 1.020E-02, 2.180E-02, 4.740E-02, 8.070E-02, 1.230E-01, 1.740E-01, 3.290E-01, 5.080E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.890E-03, 4.780E-03, 1.110E-02, 2.540E-02, 4.270E-02, 6.290E-02, 8.520E-02, 1.450E-01, 2.060E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.070E-03, 8.120E-03, 2.180E-02, 5.900E-02, 1.050E-01, 1.560E-01, 2.110E-01, 3.520E-01, 4.950E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-03, 3.200E-03, 7.720E-03, 1.780E-02, 2.850E-02, 4.010E-02, 5.250E-02, 8.500E-02, 1.170E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.640E-04, 2.220E-03, 7.190E-03, 2.760E-02, 5.850E-02, 9.530E-02, 1.350E-01, 2.350E-01, 3.320E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.270E-04, 9.680E-04, 3.880E-03, 1.660E-02, 3.570E-02, 5.870E-02, 8.370E-02, 1.490E-01, 2.130E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po1__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.440E-03, 1.840E-02, 3.900E-02, 8.110E-02, 1.230E-01, 1.640E-01, 2.050E-01, 3.020E-01, 3.930E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.890E-03, 1.760E-02, 3.960E-02, 9.140E-02, 1.530E-01, 2.250E-01, 3.090E-01, 5.610E-01, 8.610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.040E-03, 8.840E-03, 2.280E-02, 5.600E-02, 9.420E-02, 1.360E-01, 1.820E-01, 3.030E-01, 4.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.580E-03, 5.720E-03, 1.280E-02, 2.980E-02, 4.890E-02, 6.930E-02, 9.050E-02, 1.440E-01, 1.970E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.370E-03, 1.020E-02, 2.180E-02, 4.740E-02, 8.070E-02, 1.230E-01, 1.740E-01, 3.290E-01, 5.080E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.890E-03, 4.780E-03, 1.110E-02, 2.540E-02, 4.270E-02, 6.290E-02, 8.520E-02, 1.450E-01, 2.060E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.070E-03, 8.120E-03, 2.180E-02, 5.900E-02, 1.050E-01, 1.560E-01, 2.110E-01, 3.520E-01, 4.950E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-03, 3.200E-03, 7.720E-03, 1.780E-02, 2.850E-02, 4.010E-02, 5.250E-02, 8.500E-02, 1.170E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.640E-04, 2.220E-03, 7.190E-03, 2.760E-02, 5.850E-02, 9.530E-02, 1.350E-01, 2.350E-01, 3.320E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.270E-04, 9.680E-04, 3.880E-03, 1.660E-02, 3.570E-02, 5.870E-02, 8.370E-02, 1.490E-01, 2.130E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_3Po2__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.690E-02, 9.940E-02, 2.630E-01, 6.290E-01, 9.790E-01, 1.290E+00, 1.580E+00, 2.190E+00, 2.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.190E-02, 2.220E-01, 6.320E-01, 1.640E+00, 2.860E+00, 4.330E+00, 6.060E+00, 1.150E+01, 1.850E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.520E-02, 1.950E-01, 4.730E-01, 1.200E+00, 2.150E+00, 3.330E+00, 4.730E+00, 9.200E+00, 1.500E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.060E-02, 1.890E-01, 4.250E-01, 9.230E-01, 1.410E+00, 1.880E+00, 2.310E+00, 3.270E+00, 4.080E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_3d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.780E-02, 7.610E-02, 2.110E-01, 5.530E-01, 9.310E-01, 1.320E+00, 1.710E+00, 2.670E+00, 3.630E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_3d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.420E-02, 6.920E-02, 2.050E-01, 5.770E-01, 1.040E+00, 1.580E+00, 2.200E+00, 4.140E+00, 6.610E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.620E-03, 1.780E-02, 4.370E-02, 1.010E-01, 1.590E-01, 2.160E-01, 2.700E-01, 3.960E-01, 5.090E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.260E-02, 2.730E-02, 5.670E-02, 1.160E-01, 1.780E-01, 2.480E-01, 3.300E-01, 5.930E-01, 9.460E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.420E-02, 6.160E-02, 1.480E-01, 3.440E-01, 5.600E-01, 7.940E-01, 1.050E+00, 1.740E+00, 2.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.830E-02, 4.430E-02, 1.030E-01, 2.230E-01, 3.400E-01, 4.560E-01, 5.730E-01, 8.710E-01, 1.170E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.960E-03, 2.480E-02, 5.820E-02, 1.320E-01, 2.090E-01, 2.860E-01, 3.620E-01, 5.480E-01, 7.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.060E-02, 2.960E-02, 7.250E-02, 1.640E-01, 2.680E-01, 3.910E-01, 5.340E-01, 9.890E-01, 1.570E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.680E-03, 7.250E-03, 1.710E-02, 3.870E-02, 6.110E-02, 8.330E-02, 1.050E-01, 1.550E-01, 2.000E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.210E-03, 1.030E-02, 2.260E-02, 4.640E-02, 7.200E-02, 1.020E-01, 1.380E-01, 2.530E-01, 4.020E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.160E-02, 2.830E-02, 6.320E-02, 1.460E-01, 2.520E-01, 3.790E-01, 5.240E-01, 9.650E-01, 1.510E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.810E-03, 1.800E-02, 4.360E-02, 1.040E-01, 1.750E-01, 2.530E-01, 3.350E-01, 5.440E-01, 7.490E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.030E-03, 1.320E-02, 3.040E-02, 6.810E-02, 1.140E-01, 1.670E-01, 2.250E-01, 3.800E-01, 5.350E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.000E-03, 1.780E-02, 4.000E-02, 8.690E-02, 1.450E-01, 2.160E-01, 2.990E-01, 5.500E-01, 8.470E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.990E-03, 4.960E-03, 1.150E-02, 2.380E-02, 3.480E-02, 4.500E-02, 5.460E-02, 7.620E-02, 9.540E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.730E-03, 2.380E-02, 6.740E-02, 1.900E-01, 3.340E-01, 4.910E-01, 6.570E-01, 1.110E+00, 1.620E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.920E-03, 7.270E-03, 1.700E-02, 3.570E-02, 5.410E-02, 7.470E-02, 9.870E-02, 1.750E-01, 2.720E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.040E-05, 5.210E-04, 3.040E-03, 1.660E-02, 4.170E-02, 7.710E-02, 1.210E-01, 2.630E-01, 4.400E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.800E-03, 1.210E-02, 3.860E-02, 1.120E-01, 1.970E-01, 2.820E-01, 3.660E-01, 5.620E-01, 7.370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.270E-03, 9.640E-03, 2.840E-02, 8.450E-02, 1.580E-01, 2.390E-01, 3.230E-01, 5.320E-01, 7.250E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.200E-03, 6.470E-03, 2.230E-02, 8.900E-02, 1.980E-01, 3.380E-01, 5.020E-01, 9.820E-01, 1.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.280E-04, 2.250E-03, 6.940E-03, 2.380E-02, 4.570E-02, 6.880E-02, 9.180E-02, 1.460E-01, 1.950E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.020E-04, 2.300E-03, 8.660E-03, 3.210E-02, 6.830E-02, 1.170E-01, 1.770E-01, 3.640E-01, 5.870E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3p_1Po__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.370E-02, 2.850E-02, 6.840E-02, 1.890E-01, 3.360E-01, 4.920E-01, 6.520E-01, 1.060E+00, 1.460E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.120E-01, 2.760E-01, 6.330E-01, 1.350E+00, 1.990E+00, 2.560E+00, 3.070E+00, 4.130E+00, 5.000E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.290E-03, 2.340E-02, 7.230E-02, 1.920E-01, 3.140E-01, 4.310E-01, 5.450E-01, 8.190E-01, 1.080E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.750E-03, 1.030E-02, 2.830E-02, 6.630E-02, 1.000E-01, 1.300E-01, 1.560E-01, 2.120E-01, 2.600E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.840E-02, 4.220E-02, 9.380E-02, 2.020E-01, 3.110E-01, 4.210E-01, 5.300E-01, 7.890E-01, 1.030E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.390E-03, 1.020E-02, 2.620E-02, 5.610E-02, 8.370E-02, 1.110E-01, 1.370E-01, 2.050E-01, 2.710E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.460E-03, 8.550E-03, 1.810E-02, 3.330E-02, 4.500E-02, 5.480E-02, 6.340E-02, 8.230E-02, 9.900E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.930E-03, 1.770E-02, 4.100E-02, 9.300E-02, 1.530E-01, 2.180E-01, 2.840E-01, 4.400E-01, 5.810E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.900E-03, 7.920E-03, 1.880E-02, 4.000E-02, 5.960E-02, 7.790E-02, 9.520E-02, 1.350E-01, 1.720E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.250E-03, 1.490E-02, 4.330E-02, 1.170E-01, 1.930E-01, 2.640E-01, 3.290E-01, 4.640E-01, 5.720E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.430E-03, 5.500E-03, 1.130E-02, 2.060E-02, 2.760E-02, 3.340E-02, 3.850E-02, 5.000E-02, 6.060E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.580E-03, 4.690E-03, 1.370E-02, 3.530E-02, 5.730E-02, 7.800E-02, 9.740E-02, 1.410E-01, 1.810E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.880E-04, 1.710E-03, 4.440E-03, 1.190E-02, 2.060E-02, 3.010E-02, 3.980E-02, 6.520E-02, 9.060E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_3S__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_3d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.910E-02, 6.620E-02, 1.640E-01, 4.610E-01, 8.760E-01, 1.390E+00, 1.980E+00, 3.820E+00, 6.170E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_3d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.150E-01, 2.480E-01, 4.820E-01, 8.390E-01, 1.110E+00, 1.320E+00, 1.510E+00, 1.920E+00, 2.270E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_3d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.950E-02, 7.140E-02, 1.930E-01, 5.090E-01, 8.350E-01, 1.140E+00, 1.430E+00, 2.060E+00, 2.620E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_3d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.580E-02, 6.980E-02, 3.620E-01, 1.630E+00, 3.750E+00, 6.710E+00, 1.050E+01, 2.380E+01, 4.260E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.910E-03, 1.030E-02, 3.100E-02, 7.410E-02, 1.130E-01, 1.460E-01, 1.760E-01, 2.430E-01, 3.010E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.690E-02, 4.300E-02, 1.010E-01, 2.210E-01, 3.440E-01, 4.790E-01, 6.340E-01, 1.140E+00, 1.870E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.720E-02, 8.210E-02, 2.350E-01, 6.550E-01, 1.210E+00, 1.910E+00, 2.780E+00, 5.710E+00, 9.640E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.730E-02, 5.830E-02, 1.240E-01, 2.540E-01, 3.710E-01, 4.760E-01, 5.710E-01, 7.740E-01, 9.420E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-02, 3.550E-02, 7.920E-02, 1.500E-01, 2.060E-01, 2.540E-01, 2.970E-01, 3.940E-01, 4.810E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.880E-03, 2.820E-02, 8.060E-02, 2.020E-01, 3.430E-01, 5.130E-01, 7.170E-01, 1.400E+00, 2.350E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.930E-03, 6.240E-03, 1.470E-02, 2.890E-02, 4.100E-02, 5.170E-02, 6.150E-02, 8.380E-02, 1.040E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.650E-03, 1.570E-02, 3.550E-02, 7.820E-02, 1.260E-01, 1.800E-01, 2.450E-01, 4.570E-01, 7.430E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.560E-03, 2.760E-02, 6.660E-02, 1.520E-01, 2.620E-01, 4.030E-01, 5.750E-01, 1.140E+00, 1.890E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.220E-03, 2.050E-02, 4.720E-02, 1.060E-01, 1.670E-01, 2.280E-01, 2.860E-01, 4.170E-01, 5.270E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.700E-03, 1.670E-02, 3.530E-02, 6.460E-02, 8.950E-02, 1.130E-01, 1.370E-01, 1.960E-01, 2.520E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.170E-03, 1.900E-02, 4.210E-02, 8.530E-02, 1.380E-01, 2.090E-01, 3.020E-01, 6.270E-01, 1.060E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.630E-03, 7.310E-03, 1.670E-02, 3.190E-02, 4.300E-02, 5.160E-02, 5.880E-02, 7.330E-02, 8.500E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.610E-03, 1.660E-02, 4.970E-02, 1.420E-01, 2.520E-01, 3.690E-01, 4.930E-01, 8.200E-01, 1.170E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.820E-03, 1.030E-02, 2.660E-02, 6.140E-02, 9.670E-02, 1.360E-01, 1.800E-01, 3.170E-01, 4.930E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.960E-06, 4.240E-05, 2.610E-04, 1.650E-03, 4.860E-03, 1.030E-02, 1.800E-02, 4.590E-02, 8.320E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.400E-03, 1.370E-02, 4.200E-02, 1.140E-01, 1.860E-01, 2.530E-01, 3.130E-01, 4.390E-01, 5.380E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.190E-03, 8.750E-03, 2.320E-02, 5.740E-02, 9.320E-02, 1.290E-01, 1.630E-01, 2.410E-01, 3.100E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.200E-03, 6.960E-03, 2.800E-02, 1.170E-01, 2.590E-01, 4.380E-01, 6.450E-01, 1.240E+00, 1.890E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.190E-04, 2.160E-03, 5.000E-03, 1.170E-02, 1.970E-02, 2.830E-02, 3.710E-02, 5.870E-02, 7.890E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.000E-03, 2.970E-03, 1.010E-02, 3.610E-02, 7.750E-02, 1.330E-01, 2.010E-01, 4.120E-01, 6.650E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4s_1S__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.760E-02, 1.770E-01, 4.980E-01, 1.380E+00, 2.350E+00, 3.300E+00, 4.190E+00, 6.210E+00, 7.960E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_3d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.520E-02, 1.190E-01, 4.140E-01, 1.330E+00, 2.460E+00, 3.690E+00, 4.980E+00, 8.340E+00, 1.170E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_3d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.190E-02, 2.970E-01, 1.290E+00, 4.920E+00, 1.040E+01, 1.770E+01, 2.650E+01, 5.480E+01, 9.130E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.770E-03, 1.820E-02, 6.180E-02, 1.730E-01, 2.900E-01, 4.060E-01, 5.180E-01, 7.800E-01, 1.010E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.990E-02, 2.600E-01, 6.270E-01, 1.460E+00, 2.380E+00, 3.360E+00, 4.400E+00, 7.190E+00, 1.020E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.020E-01, 3.090E-01, 8.650E-01, 2.360E+00, 4.360E+00, 6.880E+00, 9.940E+00, 1.980E+01, 3.240E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.160E-02, 1.220E-01, 2.760E-01, 6.010E-01, 9.250E-01, 1.240E+00, 1.550E+00, 2.280E+00, 2.950E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.330E-02, 5.830E-02, 1.490E-01, 3.500E-01, 5.410E-01, 7.170E-01, 8.800E-01, 1.250E+00, 1.560E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.710E-02, 1.620E-01, 4.600E-01, 1.450E+00, 3.080E+00, 5.450E+00, 8.610E+00, 2.010E+01, 3.650E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.320E-02, 8.250E-02, 2.490E-01, 6.790E-01, 1.200E+00, 1.800E+00, 2.470E+00, 4.430E+00, 6.750E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.670E-03, 1.800E-02, 4.500E-02, 9.690E-02, 1.460E-01, 1.930E-01, 2.380E-01, 3.410E-01, 4.300E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.150E-02, 5.300E-02, 1.180E-01, 2.580E-01, 4.200E-01, 6.060E-01, 8.140E-01, 1.410E+00, 2.060E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.290E-02, 1.180E-01, 3.010E-01, 8.360E-01, 1.620E+00, 2.640E+00, 3.840E+00, 7.470E+00, 1.170E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.010E-02, 5.160E-02, 1.170E-01, 2.630E-01, 4.340E-01, 6.170E-01, 8.030E-01, 1.260E+00, 1.680E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.060E-02, 2.760E-02, 6.460E-02, 1.430E-01, 2.300E-01, 3.230E-01, 4.190E-01, 6.580E-01, 8.810E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-02, 4.340E-02, 1.190E-01, 2.970E-01, 5.090E-01, 7.550E-01, 1.030E+00, 1.820E+00, 2.730E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.830E-03, 1.670E-02, 4.160E-02, 8.850E-02, 1.270E-01, 1.610E-01, 1.900E-01, 2.490E-01, 2.970E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.050E-02, 6.530E-02, 2.210E-01, 7.260E-01, 1.380E+00, 2.120E+00, 2.890E+00, 4.920E+00, 6.970E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.810E-03, 2.610E-02, 6.840E-02, 1.550E-01, 2.450E-01, 3.440E-01, 4.540E-01, 7.600E-01, 1.090E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.830E-05, 2.300E-04, 1.430E-03, 8.480E-03, 2.250E-02, 4.290E-02, 6.900E-02, 1.540E-01, 2.600E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.200E-02, 3.670E-02, 1.110E-01, 3.040E-01, 5.120E-01, 7.150E-01, 9.070E-01, 1.340E+00, 1.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.670E-03, 2.200E-02, 6.270E-02, 1.750E-01, 3.090E-01, 4.490E-01, 5.860E-01, 9.040E-01, 1.180E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.560E-03, 2.810E-02, 8.630E-02, 2.430E-01, 4.080E-01, 5.640E-01, 7.100E-01, 1.030E+00, 1.300E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_6f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.760E-03, 2.000E-02, 7.700E-02, 2.950E-01, 6.120E-01, 9.900E-01, 1.410E+00, 2.580E+00, 3.850E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.760E-03, 4.980E-03, 1.460E-02, 4.890E-02, 9.650E-02, 1.480E-01, 1.990E-01, 3.160E-01, 4.160E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.990E-03, 5.910E-03, 2.060E-02, 7.830E-02, 1.660E-01, 2.780E-01, 4.140E-01, 8.420E-01, 1.360E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_1D__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.040E-02, 6.320E-02, 1.970E-01, 5.710E-01, 1.010E+00, 1.500E+00, 2.010E+00, 3.350E+00, 4.690E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.480E-02, 3.510E-02, 7.960E-02, 1.690E-01, 2.580E-01, 3.460E-01, 4.330E-01, 6.380E-01, 8.240E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.970E-02, 1.900E-01, 4.240E-01, 8.960E-01, 1.350E+00, 1.780E+00, 2.200E+00, 3.140E+00, 3.970E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.010E-02, 8.150E-02, 2.090E-01, 5.240E-01, 8.920E-01, 1.290E+00, 1.700E+00, 2.730E+00, 3.700E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.140E-02, 3.290E-02, 8.760E-02, 2.180E-01, 3.660E-01, 5.180E-01, 6.680E-01, 1.020E+00, 1.320E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.170E-03, 2.360E-02, 5.390E-02, 1.090E-01, 1.560E-01, 1.980E-01, 2.360E-01, 3.210E-01, 3.950E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.040E-02, 5.490E-02, 1.320E-01, 3.010E-01, 4.880E-01, 6.850E-01, 8.810E-01, 1.340E+00, 1.760E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.450E-02, 3.830E-02, 8.850E-02, 1.980E-01, 3.220E-01, 4.580E-01, 6.000E-01, 9.510E-01, 1.280E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.820E-03, 2.420E-02, 6.610E-02, 1.590E-01, 2.510E-01, 3.370E-01, 4.170E-01, 5.930E-01, 7.390E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.470E-02, 4.130E-02, 1.210E-01, 3.320E-01, 5.520E-01, 7.570E-01, 9.410E-01, 1.330E+00, 1.630E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.490E-03, 1.440E-02, 3.480E-02, 7.320E-02, 1.060E-01, 1.340E-01, 1.600E-01, 2.140E-01, 2.590E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.250E-03, 1.360E-02, 4.100E-02, 1.150E-01, 2.000E-01, 2.870E-01, 3.720E-01, 5.680E-01, 7.370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.960E-03, 5.040E-03, 1.260E-02, 3.250E-02, 5.690E-02, 8.350E-02, 1.110E-01, 1.790E-01, 2.430E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_3Po__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.530E-02, 8.860E-02, 3.130E-01, 8.950E-01, 1.470E+00, 2.000E+00, 2.500E+00, 3.630E+00, 4.650E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.330E-02, 8.510E-02, 1.850E-01, 3.490E-01, 4.830E-01, 5.990E-01, 7.030E-01, 9.290E-01, 1.120E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.410E-01, 3.410E-01, 7.290E-01, 1.400E+00, 1.990E+00, 2.540E+00, 3.070E+00, 4.290E+00, 5.380E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.930E-02, 1.490E-01, 3.810E-01, 9.280E-01, 1.510E+00, 2.110E+00, 2.710E+00, 4.170E+00, 5.530E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.350E-02, 7.250E-02, 1.970E-01, 4.550E-01, 6.930E-01, 9.090E-01, 1.110E+00, 1.540E+00, 1.920E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.320E-02, 3.310E-02, 7.450E-02, 1.480E-01, 2.080E-01, 2.600E-01, 3.050E-01, 4.020E-01, 4.810E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.220E-02, 8.540E-02, 1.970E-01, 4.260E-01, 6.710E-01, 9.260E-01, 1.180E+00, 1.790E+00, 2.340E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.780E-02, 7.330E-02, 1.760E-01, 4.120E-01, 6.770E-01, 9.540E-01, 1.230E+00, 1.900E+00, 2.510E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.750E-02, 5.060E-02, 1.250E-01, 2.690E-01, 3.970E-01, 5.130E-01, 6.180E-01, 8.490E-01, 1.050E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.500E-02, 7.390E-02, 2.040E-01, 5.070E-01, 8.040E-01, 1.080E+00, 1.330E+00, 1.860E+00, 2.300E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.320E-03, 1.930E-02, 4.810E-02, 1.030E-01, 1.480E-01, 1.870E-01, 2.200E-01, 2.890E-01, 3.440E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.570E-03, 2.240E-02, 6.980E-02, 2.030E-01, 3.550E-01, 5.060E-01, 6.500E-01, 9.720E-01, 1.250E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.100E-03, 8.810E-03, 2.500E-02, 7.540E-02, 1.410E-01, 2.140E-01, 2.890E-01, 4.670E-01, 6.240E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_3d_3D__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.720E-02, 9.040E-02, 2.050E-01, 3.980E-01, 5.480E-01, 6.760E-01, 7.900E-01, 1.040E+00, 1.250E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.280E-01, 3.760E-01, 1.150E+00, 3.790E+00, 7.970E+00, 1.370E+01, 2.110E+01, 4.640E+01, 8.160E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.290E-01, 6.340E-01, 1.670E+00, 4.520E+00, 8.780E+00, 1.510E+01, 2.380E+01, 5.820E+01, 1.120E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.660E-01, 3.620E-01, 7.360E-01, 1.390E+00, 1.950E+00, 2.430E+00, 2.850E+00, 3.730E+00, 4.440E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.730E-02, 1.910E-01, 4.500E-01, 9.540E-01, 1.390E+00, 1.770E+00, 2.100E+00, 2.780E+00, 3.320E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.120E-01, 3.440E-01, 1.050E+00, 3.680E+00, 8.160E+00, 1.440E+01, 2.230E+01, 4.800E+01, 8.030E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.630E-02, 2.560E-01, 7.880E-01, 2.300E+00, 4.330E+00, 6.860E+00, 9.850E+00, 1.920E+01, 3.110E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.100E-02, 3.430E-02, 8.360E-02, 1.700E-01, 2.410E-01, 3.020E-01, 3.560E-01, 4.700E-01, 5.610E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.750E-02, 7.550E-02, 1.810E-01, 4.160E-01, 6.920E-01, 1.030E+00, 1.440E+00, 2.850E+00, 4.830E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.880E-02, 2.360E-01, 5.520E-01, 1.230E+00, 2.100E+00, 3.220E+00, 4.600E+00, 9.080E+00, 1.470E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.200E-02, 1.040E-01, 2.260E-01, 4.510E-01, 6.630E-01, 8.640E-01, 1.050E+00, 1.470E+00, 1.820E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.390E-02, 6.180E-02, 1.330E-01, 2.530E-01, 3.630E-01, 4.660E-01, 5.650E-01, 7.920E-01, 9.890E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.360E-02, 1.540E-01, 4.240E-01, 1.250E+00, 2.370E+00, 3.700E+00, 5.170E+00, 9.280E+00, 1.370E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.650E-02, 1.070E-01, 2.740E-01, 6.520E-01, 1.140E+00, 1.750E+00, 2.510E+00, 4.940E+00, 7.980E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.070E-02, 3.010E-02, 6.960E-02, 1.360E-01, 1.870E-01, 2.260E-01, 2.590E-01, 3.230E-01, 3.700E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.430E-02, 1.050E-01, 3.200E-01, 9.280E-01, 1.690E+00, 2.560E+00, 3.510E+00, 6.090E+00, 8.850E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.400E-02, 4.140E-02, 1.170E-01, 2.920E-01, 4.790E-01, 6.890E-01, 9.300E-01, 1.690E+00, 2.660E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.960E-06, 3.550E-05, 2.110E-04, 1.340E-03, 3.910E-03, 7.970E-03, 1.340E-02, 3.160E-02, 5.510E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.640E-02, 5.120E-02, 1.470E-01, 3.670E-01, 5.830E-01, 7.840E-01, 9.680E-01, 1.360E+00, 1.670E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.190E-02, 3.470E-02, 9.800E-02, 2.540E-01, 4.160E-01, 5.710E-01, 7.130E-01, 1.020E+00, 1.270E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.510E-02, 4.580E-02, 1.290E-01, 3.260E-01, 5.210E-01, 7.010E-01, 8.640E-01, 1.210E+00, 1.480E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_6f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.150E-02, 4.030E-02, 1.640E-01, 6.820E-01, 1.490E+00, 2.500E+00, 3.640E+00, 6.860E+00, 1.030E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.470E-03, 9.550E-03, 2.400E-02, 5.990E-02, 9.910E-02, 1.380E-01, 1.740E-01, 2.540E-01, 3.220E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.520E-03, 1.330E-02, 4.010E-02, 1.370E-01, 2.940E-01, 5.050E-01, 7.640E-01, 1.580E+00, 2.590E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4p_1Po__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.780E-02, 7.510E-02, 1.670E-01, 3.350E-01, 4.850E-01, 6.240E-01, 7.520E-01, 1.040E+00, 1.290E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-01, 3.240E-01, 6.560E-01, 1.140E+00, 1.500E+00, 1.800E+00, 2.060E+00, 2.600E+00, 3.020E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.460E-02, 1.660E-01, 4.030E-01, 8.810E-01, 1.310E+00, 1.690E+00, 2.040E+00, 2.740E+00, 3.300E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.900E-02, 5.800E-02, 1.520E-01, 3.320E-01, 4.910E-01, 6.330E-01, 7.620E-01, 1.030E+00, 1.250E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.000E-03, 2.350E-02, 5.410E-02, 1.090E-01, 1.560E-01, 1.960E-01, 2.300E-01, 3.000E-01, 3.580E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.930E-02, 6.960E-02, 1.490E-01, 2.860E-01, 4.040E-01, 5.090E-01, 6.040E-01, 8.020E-01, 9.590E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.370E-02, 7.880E-02, 1.610E-01, 3.010E-01, 4.230E-01, 5.330E-01, 6.330E-01, 8.450E-01, 1.010E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.190E-02, 3.440E-02, 8.500E-02, 1.720E-01, 2.400E-01, 2.970E-01, 3.470E-01, 4.480E-01, 5.280E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.770E-02, 4.660E-02, 1.110E-01, 2.300E-01, 3.260E-01, 4.050E-01, 4.720E-01, 6.040E-01, 7.020E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.560E-03, 1.270E-02, 2.840E-02, 5.420E-02, 7.450E-02, 9.160E-02, 1.070E-01, 1.400E-01, 1.700E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.350E-03, 1.820E-02, 4.540E-02, 1.030E-01, 1.600E-01, 2.130E-01, 2.630E-01, 3.720E-01, 4.620E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.060E-03, 5.480E-03, 1.290E-02, 2.940E-02, 4.830E-02, 6.970E-02, 9.300E-02, 1.560E-01, 2.180E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_3S__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.660E-01, 4.860E-01, 1.290E+00, 3.230E+00, 5.600E+00, 8.530E+00, 1.210E+01, 2.430E+01, 4.120E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.060E-02, 2.010E-01, 4.320E-01, 8.540E-01, 1.220E+00, 1.530E+00, 1.810E+00, 2.400E+00, 2.850E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.070E-02, 1.140E-01, 2.260E-01, 4.160E-01, 5.860E-01, 7.430E-01, 8.880E-01, 1.200E+00, 1.460E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.710E-02, 1.980E-01, 6.380E-01, 2.040E+00, 3.970E+00, 6.320E+00, 9.040E+00, 1.720E+01, 2.690E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.660E-02, 3.690E-01, 1.490E+00, 6.630E+00, 1.630E+01, 3.080E+01, 5.020E+01, 1.210E+02, 2.230E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.390E-03, 2.130E-02, 5.090E-02, 1.010E-01, 1.420E-01, 1.780E-01, 2.090E-01, 2.770E-01, 3.370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.180E-02, 9.190E-02, 2.090E-01, 4.380E-01, 6.930E-01, 1.010E+00, 1.420E+00, 3.010E+00, 5.540E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.140E-01, 3.600E-01, 9.790E-01, 2.500E+00, 4.670E+00, 7.780E+00, 1.190E+01, 2.620E+01, 4.550E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.630E-02, 9.530E-02, 2.030E-01, 3.650E-01, 4.910E-01, 5.990E-01, 6.940E-01, 8.900E-01, 1.040E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.540E-02, 5.980E-02, 1.160E-01, 1.970E-01, 2.630E-01, 3.210E-01, 3.740E-01, 4.890E-01, 5.870E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.620E-02, 1.890E-01, 6.290E-01, 2.410E+00, 5.310E+00, 9.010E+00, 1.330E+01, 2.540E+01, 3.840E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.160E-02, 9.940E-02, 2.730E-01, 6.740E-01, 1.190E+00, 1.890E+00, 2.810E+00, 6.150E+00, 1.090E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.100E-03, 1.280E-02, 3.240E-02, 6.490E-02, 8.920E-02, 1.080E-01, 1.250E-01, 1.580E-01, 1.860E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.150E-02, 1.030E-01, 2.810E-01, 7.490E-01, 1.400E+00, 2.230E+00, 3.240E+00, 6.330E+00, 1.010E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.690E-02, 5.100E-02, 1.570E-01, 4.280E-01, 7.260E-01, 1.050E+00, 1.430E+00, 2.580E+00, 4.050E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.450E-06, 2.200E-05, 1.430E-04, 1.050E-03, 3.330E-03, 7.170E-03, 1.240E-02, 3.070E-02, 5.410E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.190E-02, 3.420E-02, 9.340E-02, 2.170E-01, 3.280E-01, 4.250E-01, 5.100E-01, 6.810E-01, 8.090E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.280E-03, 1.970E-02, 4.890E-02, 1.140E-01, 1.800E-01, 2.440E-01, 3.050E-01, 4.390E-01, 5.500E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.880E-03, 3.020E-02, 8.290E-02, 1.980E-01, 3.020E-01, 3.920E-01, 4.700E-01, 6.240E-01, 7.370E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_6f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.150E-02, 5.230E-02, 2.210E-01, 8.730E-01, 1.900E+00, 3.240E+00, 4.800E+00, 9.410E+00, 1.460E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.880E-03, 5.000E-03, 1.190E-02, 2.730E-02, 4.530E-02, 6.510E-02, 8.590E-02, 1.390E-01, 1.910E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.830E-03, 1.320E-02, 4.340E-02, 1.390E-01, 2.700E-01, 4.300E-01, 6.170E-01, 1.200E+00, 1.930E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_5s_1S__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_4d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.030E-01, 7.410E-01, 1.740E+00, 3.650E+00, 5.330E+00, 6.820E+00, 8.150E+00, 1.090E+01, 1.320E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_4d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.290E-01, 3.780E-01, 1.020E+00, 2.340E+00, 3.500E+00, 4.500E+00, 5.360E+00, 7.080E+00, 8.390E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.240E-01, 1.030E+00, 5.600E+00, 3.080E+01, 7.870E+01, 1.480E+02, 2.380E+02, 5.390E+02, 9.360E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.370E-01, 6.240E-01, 2.630E+00, 1.120E+01, 2.630E+01, 4.800E+01, 7.610E+01, 1.730E+02, 3.040E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.530E-02, 7.550E-02, 1.860E-01, 3.980E-01, 5.800E-01, 7.360E-01, 8.710E-01, 1.140E+00, 1.340E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.380E-01, 3.760E-01, 1.000E+00, 2.770E+00, 5.060E+00, 7.770E+00, 1.080E+01, 1.970E+01, 2.990E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.730E-01, 7.840E-01, 1.980E+00, 4.990E+00, 9.290E+00, 1.510E+01, 2.250E+01, 4.730E+01, 7.950E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {9.320E-02, 2.520E-01, 5.830E-01, 1.190E+00, 1.710E+00, 2.170E+00, 2.590E+00, 3.460E+00, 4.170E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.650E-02, 1.730E-01, 3.760E-01, 7.240E-01, 1.020E+00, 1.290E+00, 1.530E+00, 2.080E+00, 2.540E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.560E-01, 4.620E-01, 1.370E+00, 4.400E+00, 8.850E+00, 1.440E+01, 2.090E+01, 3.970E+01, 6.130E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.400E-01, 3.930E-01, 9.960E-01, 2.420E+00, 4.170E+00, 6.290E+00, 8.760E+00, 1.630E+01, 2.540E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.910E-02, 5.410E-02, 1.330E-01, 2.720E-01, 3.810E-01, 4.690E-01, 5.430E-01, 6.860E-01, 7.900E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.340E-01, 4.080E-01, 1.270E+00, 3.800E+00, 6.920E+00, 1.040E+01, 1.400E+01, 2.380E+01, 3.430E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.700E-02, 1.250E-01, 3.280E-01, 8.640E-01, 1.520E+00, 2.300E+00, 3.180E+00, 5.750E+00, 8.640E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.580E-05, 9.000E-05, 5.750E-04, 3.810E-03, 1.080E-02, 2.170E-02, 3.650E-02, 8.690E-02, 1.510E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.260E-02, 1.260E-01, 3.470E-01, 8.380E-01, 1.300E+00, 1.720E+00, 2.100E+00, 2.880E+00, 3.510E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.490E-02, 9.350E-02, 2.390E-01, 5.710E-01, 8.920E-01, 1.190E+00, 1.470E+00, 2.080E+00, 2.590E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.730E-02, 1.150E-01, 3.230E-01, 7.870E-01, 1.230E+00, 1.620E+00, 1.970E+00, 2.690E+00, 3.240E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_6f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.470E-02, 1.260E-01, 4.520E-01, 1.570E+00, 3.180E+00, 5.130E+00, 7.340E+00, 1.370E+01, 2.080E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.200E-03, 2.040E-02, 4.780E-02, 1.180E-01, 2.000E-01, 2.850E-01, 3.690E-01, 5.670E-01, 7.430E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.140E-02, 3.760E-02, 1.460E-01, 6.110E-01, 1.340E+00, 2.260E+00, 3.310E+00, 6.310E+00, 9.610E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_1D__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.290E-01, 3.400E-01, 8.530E-01, 1.860E+00, 2.760E+00, 3.540E+00, 4.240E+00, 5.670E+00, 6.770E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.080E-02, 1.050E-01, 2.440E-01, 4.980E-01, 7.120E-01, 8.920E-01, 1.050E+00, 1.350E+00, 1.580E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.390E-01, 3.510E-01, 7.800E-01, 1.560E+00, 2.280E+00, 2.930E+00, 3.540E+00, 4.840E+00, 5.910E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.570E-01, 3.850E-01, 8.360E-01, 1.660E+00, 2.400E+00, 3.070E+00, 3.660E+00, 4.910E+00, 5.890E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.470E-02, 1.750E-01, 4.150E-01, 8.480E-01, 1.210E+00, 1.530E+00, 1.800E+00, 2.370E+00, 2.810E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {5.770E-02, 1.580E-01, 4.040E-01, 9.290E-01, 1.420E+00, 1.850E+00, 2.240E+00, 3.030E+00, 3.640E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.210E-02, 6.050E-02, 1.350E-01, 2.590E-01, 3.600E-01, 4.450E-01, 5.180E-01, 6.640E-01, 7.740E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.490E-02, 8.190E-02, 2.270E-01, 5.470E-01, 8.570E-01, 1.150E+00, 1.410E+00, 1.970E+00, 2.420E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.590E-03, 2.240E-02, 5.270E-02, 1.260E-01, 2.100E-01, 2.990E-01, 3.870E-01, 5.950E-01, 7.800E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_4d_3D__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_4f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.880E-02, 2.040E-01, 5.680E-01, 1.400E+00, 2.230E+00, 3.020E+00, 3.760E+00, 5.340E+00, 6.620E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_4f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.800E-02, 1.290E-01, 3.160E-01, 6.820E-01, 1.050E+00, 1.420E+00, 1.790E+00, 2.640E+00, 3.390E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.180E-02, 5.460E-02, 1.210E-01, 2.400E-01, 3.450E-01, 4.420E-01, 5.340E-01, 7.380E-01, 9.120E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.730E-02, 1.990E-01, 4.420E-01, 8.860E-01, 1.290E+00, 1.670E+00, 2.010E+00, 2.730E+00, 3.300E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {6.500E-02, 1.830E-01, 4.520E-01, 9.830E-01, 1.480E+00, 1.920E+00, 2.330E+00, 3.170E+00, 3.830E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.990E-02, 8.210E-02, 1.920E-01, 3.940E-01, 5.710E-01, 7.290E-01, 8.740E-01, 1.190E+00, 1.460E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.380E-02, 9.540E-02, 2.420E-01, 5.450E-01, 8.280E-01, 1.080E+00, 1.310E+00, 1.780E+00, 2.130E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.210E-02, 2.920E-02, 6.510E-02, 1.320E-01, 1.920E-01, 2.440E-01, 2.920E-01, 3.930E-01, 4.760E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.560E-02, 4.490E-02, 1.190E-01, 2.890E-01, 4.570E-01, 6.170E-01, 7.680E-01, 1.110E+00, 1.410E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.580E-03, 1.380E-02, 3.810E-02, 9.490E-02, 1.570E-01, 2.210E-01, 2.860E-01, 4.450E-01, 5.900E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_3Po__LS_Ne_3s_2S_8s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.770E-02, 5.490E-02, 1.400E-01, 2.940E-01, 4.290E-01, 5.500E-01, 6.600E-01, 8.940E-01, 1.080E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.360E-01, 5.670E-01, 2.270E+00, 9.740E+00, 2.330E+01, 4.300E+01, 6.890E+01, 1.600E+02, 2.870E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.480E-01, 1.190E+00, 3.930E+00, 1.390E+01, 3.190E+01, 6.020E+01, 9.990E+01, 2.530E+02, 4.840E+02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.340E-01, 3.420E-01, 7.310E-01, 1.320E+00, 1.760E+00, 2.100E+00, 2.380E+00, 2.930E+00, 3.330E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {7.910E-02, 2.030E-01, 4.270E-01, 7.750E-01, 1.050E+00, 1.280E+00, 1.480E+00, 1.900E+00, 2.230E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.140E-01, 2.990E-01, 6.570E-01, 1.260E+00, 1.770E+00, 2.220E+00, 2.600E+00, 3.370E+00, 3.950E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_5f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.870E-01, 6.640E-01, 2.050E+00, 6.110E+00, 1.190E+01, 1.940E+01, 2.880E+01, 5.900E+01, 9.770E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.120E-02, 6.110E-02, 1.420E-01, 2.670E-01, 3.580E-01, 4.290E-01, 4.870E-01, 5.980E-01, 6.790E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6d_1D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.310E-01, 4.620E-01, 1.520E+00, 4.700E+00, 8.930E+00, 1.400E+01, 1.970E+01, 3.640E+01, 5.580E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6d_1D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.910E-02, 1.620E-01, 4.850E-01, 1.380E+00, 2.500E+00, 3.880E+00, 5.580E+00, 1.130E+01, 1.920E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7s_1S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3p2_3P {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.100E-06, 1.660E-05, 9.340E-05, 6.090E-04, 1.640E-03, 3.110E-03, 4.950E-03, 1.090E-02, 1.840E-02}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3p2_3P;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6d_3D {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {3.810E-02, 1.050E-01, 2.710E-01, 6.070E-01, 9.020E-01, 1.160E+00, 1.370E+00, 1.800E+00, 2.120E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6d_3D;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7p_3Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {2.290E-02, 6.500E-02, 1.640E-01, 3.720E-01, 5.710E-01, 7.550E-01, 9.230E-01, 1.290E+00, 1.580E+00}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7p_3Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6f {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.020E-01, 4.170E-01, 1.640E+00, 5.790E+00, 1.150E+01, 1.810E+01, 2.540E+01, 4.530E+01, 6.640E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_6f;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7p_1Po {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {4.220E-02, 1.850E-01, 8.220E-01, 3.380E+00, 7.340E+00, 1.240E+01, 1.820E+01, 3.550E+01, 5.510E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_7p_1Po;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_8s_3S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {8.380E-03, 2.180E-02, 5.030E-02, 1.170E-01, 1.880E-01, 2.600E-01, 3.280E-01, 4.800E-01, 6.060E-01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_8s_3S;

  Eigen::Matrix<double, 2, 9> f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_8s_1S {
    {500.0, 1000.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 15000.0, 20000.0},
    {1.150E-02, 4.830E-02, 1.750E-01, 6.240E-01, 1.360E+00, 2.370E+00, 3.630E+00, 7.740E+00, 1.300E+01}
  };
  f_vs_T[static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)][static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)] = f_vs_T__LS_Ne_3s_2S_5p_1Po__LS_Ne_3s_2S_8s_1S;

  return f_vs_T;
}


}