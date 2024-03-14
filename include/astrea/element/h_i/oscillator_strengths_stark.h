/**
 * \file astrea/element/h_i/oscillator_strengths_stark.h
 * H I oscillator strengths (Stark profile) by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i {


/**
 * H I oscillator strengths (Stark profile) by Mashonkina+2008.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f_KK() {
  Eigen::MatrixXd f_KK = Eigen::Matrix<double, 19, 19>::Zero();

  // Lyman,  here DL <= 15 !!!
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_4)
  ) = 0.290E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_3)
  ) = 0.791E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_1),
    static_cast<int>(STRUCTURE::LS_2)
  ) = 0.416E+00;

  // Balmer, interval in Doppler width
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.385E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.543E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.803E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.127E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_6)
  ) = 0.221E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_5)
  ) = 0.447E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_4)
  ) = 0.119E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_2),
    static_cast<int>(STRUCTURE::LS_3)
  ) = 0.641E+00;

  // Paschen and Brackett
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_10)
  ) = 0.698E-02;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_9)
  ) = 0.102E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_8)
  ) = 0.160E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.277E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_6)
  ) = 0.558E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_5)
  ) = 0.151E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_3),
    static_cast<int>(STRUCTURE::LS_4)
  ) = 0.843E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_7)
  ) = 0.654E-01;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_6)
  ) = 0.179E+00;
  f_KK(
    static_cast<int>(STRUCTURE::LS_4),
    static_cast<int>(STRUCTURE::LS_5)
  ) = 0.104E+01;

  return f_KK;
}


}