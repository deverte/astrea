/**
 * \file astrea/element/h_i/oscillator_strengths_doppler.h
 * H I oscillator strengths (Doppler profile) by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i::oscillator_strengths_doppler {


/**
 * H I oscillator strengths (Doppler profile) by Mashonkina+2008.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 19, 19>::Zero();

  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_2)
  ) = 0.416E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.229E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.270E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.321E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.385E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.468E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.577E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.723E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.920E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.120E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.161E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.222E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.318E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.482E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_6)
  ) = 0.780E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_5)
  ) = 0.139E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.515E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.608E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.724E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.875E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.107E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.132E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.167E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.215E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.284E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.833E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.988E-03;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.119E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.144E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.177E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.222E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.284E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.371E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.500E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.120E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.143E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.173E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.213E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.265E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.338E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.439E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.589E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.818E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.120E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.187E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.323E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.164E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.198E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.242E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.301E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.382E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.495E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.664E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.921E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.134E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.210E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.365E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.745E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.207E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_5),
    static_cast<int>(STRUCTURE::LS_6)
  ) = 0.123E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.219E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.267E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.332E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.420E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.545E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.729E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.101E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.148E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.232E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.403E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.831E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_6),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.234E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.290E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.360E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.456E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.590E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.788E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.110E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.161E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.253E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.441E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.916E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.261E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_7),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.162E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.384E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.487E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.632E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.845E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.118E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.173E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.272E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.478E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.100E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.288E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_8),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.181E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.518E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.672E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.898E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.125E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.184E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.292E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.515E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.108E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.314E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_9),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.200E+01;

  // fij calculated
  f_KK(
    static_cast<int>(STRUCTURE::LS_6 ),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.109E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_11)
  ) = 0.166E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.316E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.112E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.538E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.306E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.193E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.131E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.942E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_10),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.703E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_12)
  ) = 0.180E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.342E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.120E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.574E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.325E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.205E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.139E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_11),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.993E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_13)
  ) = 0.194E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.367E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.129E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.610E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.344E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.216E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_12),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.146E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_14)
  ) = 0.208E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.392E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.137E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.646E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.362E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_13),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.227E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_14),
    static_cast<int>(STRUCTURE::LS_15)
  ) = 0.223E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_14),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.417E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_14),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.145E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_14),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.681E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_14),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.381E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_15),
    static_cast<int>(STRUCTURE::LS_16)
  ) = 0.237E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_15),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.442E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_15),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.153E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_15),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.716E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_16),
    static_cast<int>(STRUCTURE::LS_17)
  ) = 0.251E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_16),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.466E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_16),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.161E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_17),
    static_cast<int>(STRUCTURE::LS_18)
  ) = 0.265E+01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_17),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.491E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_18),
    static_cast<int>(STRUCTURE::LS_19)
  ) = 0.280E+01;

  return f_KK;
}


}