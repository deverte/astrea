/**
 * \file astrea/element/o_i/oscillator_strengths.h
 * O I oscillator strengths by Sitnova2012, Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i/structure.h"


namespace astrea::element::o_i {


/**
 * O I oscillator strengths by Sitnova2012, Sitnova2017.
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Oscillator strength in 1.
 */
inline const Eigen::MatrixXd f() {
  Eigen::MatrixXd f = Eigen::Matrix<double, 51, 51>::Zero();

  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)
  ) = 0.5111E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)
  ) = 0.9089E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)
  ) = 0.3278E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)
  ) = 0.1567E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)
  ) = 0.8689E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.5333E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.3511E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)
  ) = 0.1050E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)
  ) = 0.1833E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)
  ) = 0.1722E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)
  ) = 0.5611E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)
  ) = 0.2622E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.1467E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.9133E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)
  ) = 0.7667E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)
  ) = 0.1503E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)
  ) = 0.3167E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)
  ) = 0.2789E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)
  ) = 0.9056E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.4278E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.2422E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.5433E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.2140E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.1937E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)
  ) = 0.4478E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)
  ) = 0.3833E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.1233E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.5867E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.6100E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.2830E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.3500E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.2363E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)
  ) = 0.5767E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.4856E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.1567E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.5900E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.7167E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.5633E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.4833E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.2783E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)
  ) = 0.7044E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.5878E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.5200E-7;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.2510E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.1690E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.8567E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.6100E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.3203E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)
  ) = 0.8333E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)
  ) = 0.1889E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)
  ) = 0.9644E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)
  ) = 0.1820E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.3927E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.1047E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.4500E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.2407E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)
  ) = 0.5422E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)
  ) = 0.1091E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)
  ) = 0.1589E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.1987E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.7867E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.1473E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.3280E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)
  ) = 0.1544E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)
  ) = 0.4000E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)
  ) = 0.1211E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)
  ) = 0.3527E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.6560E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.1780E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.8000E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)
  ) = 0.6267E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)
  ) = 0.7956E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)
  ) = 0.8889E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)
  ) = 0.1456E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)
  ) = 0.5207E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.8267E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.2140E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.3611E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.2700E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.2300E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.1278E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.1678E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)
  ) = 0.6800E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.9400E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.2278E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.1222E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.9333E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.3689E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.1622E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.1889E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)
  ) = 0.8400E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.1533E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.6567E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.4756E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.1600E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.4922E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.1933E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.2089E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)
  ) = 0.1007E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)
  ) = 0.4407E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)
  ) = 0.9619E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.1719E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.6143E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.2967E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)
  ) = 0.1580E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)
  ) = 0.3667E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)
  ) = 0.8733E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)
  ) = 0.2524E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.4810E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.1762E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)
  ) = 0.5460E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)
  ) = 0.1327E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)
  ) = 0.1840E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)
  ) = 0.8267E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)
  ) = 0.4471E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.8810E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)
  ) = 0.2600E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)
  ) = 0.6413E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)
  ) = 0.7200E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)
  ) = 0.1953E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)
  ) = 0.8067E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)
  ) = 0.6667E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.1467E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.3667E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.3647E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.8067E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.2013E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)
  ) = 0.8133E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)
  ) = 0.9780E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)
  ) = 0.1633E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So)
  ) = 0.1680E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)
  ) = 0.5587E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)
  ) = 0.2633E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)
  ) = 0.1480E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)
  ) = 0.3140E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)
  ) = 0.1454E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So)
  ) = 0.2967E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)
  ) = 0.2800E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)
  ) = 0.9267E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)
  ) = 0.4387E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)
  ) = 0.7140E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)
  ) = 0.1532E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)
  ) = 0.1894E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)
  ) = 0.4287E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)
  ) = 0.3867E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)
  ) = 0.1267E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.1718E-6;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.1822E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.2880E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.2320E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)
  ) = 0.5587E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)
  ) = 0.4900E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.6820E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.4440E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.4480E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.4240E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.2740E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)
  ) = 0.6867E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.9580E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.1554E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.1346E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.7420E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.5600E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.3180E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)
  ) = 0.9267E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)
  ) = 0.1584E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)
  ) = 0.8920E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.2524E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.1180E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.6680E-4;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)
  ) = 0.7267E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)
  ) = 0.1113E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)
  ) = 0.3128E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.1340E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.3496E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.1628E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)
  ) = 0.1893E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)
  ) = 0.1207E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)
  ) = 0.1300E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)
  ) = 0.4600E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.1444E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.3392E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.7733E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.3660E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.1567E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.1473E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)
  ) = 0.6040E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.1376E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.3940E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.1627E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.5080E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.1880E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.1653E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)
  ) = 0.7440E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.2307E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.8800E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.2347E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.6307E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.2173E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.1827E+1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)
  ) = 0.9920E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)
  ) = 0.3240E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)
  ) = 0.1186E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.2103E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.7543E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.3657E-3;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F)
  ) = 0.1600E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F)
  ) = 0.8360E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)
  ) = 0.3086E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.5771E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.2120E-2;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)
  ) = 0.5600E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)
  ) = 0.1844E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)
  ) = 0.7720E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)
  ) = 0.5429E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.1049E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)
  ) = 0.2696E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)
  ) = 0.7320E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)
  ) = 0.1904E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)
  ) = 0.7440E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)
  ) = 0.8057E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)
  ) = 0.1528E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)
  ) = 0.3756E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)
  ) = 0.8000E-1;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)
  ) = 0.1936E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)
  ) = 0.7400E+0;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)
  ) = 0.1175E-8;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)
  ) = 0.9599E-6;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)
  ) = 0.4440E-6;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)
  ) = 0.1120E-7;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)
  ) = 0.2845E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)
  ) = 0.8970E-5;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)
  ) = 0.7780E-9;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)
  ) = 0.2478E-10;
  f(
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P),
    static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)
  ) = 0.1161E-10;

  return f;
}


}