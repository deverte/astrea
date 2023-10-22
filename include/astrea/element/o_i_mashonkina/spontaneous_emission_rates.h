/**
 * \file astrea/element/o_i_mashonkina/spontaneous_emission_rates.h
 * O I spontaneous emission rates from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i_mashonkina/terms.h"


namespace astrea::element::o_i_mashonkina {


/**
 * O I spontaneous emission rates from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * - Axis 0: Initial term (i-index).
 * - Axis 1: Final term (j-index).
 *   - Spontaneous emission rate in s-1.
 */
inline const Eigen::Matrix<double, 51, 51> A() {
  Eigen::Matrix<double, 51, 51> A = Eigen::Matrix<double, 51, 51>::Zero();
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p4_1D),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 0.00149507;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p4_1S),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 0.037821;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 2780.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 203866666.66666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)
  ) = 36900000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)
  ) = 299.5;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)
  ) = 979.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)
  ) = 32200000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 8913333.333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 56500000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 7140000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 24732222.222222224;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 826.4;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 32171923.076923076;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 6339705.333333333;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_5So)
  ) = 489200.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)
  ) = 4294666.666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)
  ) = 56.45;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 165688.88888888888;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)
  ) = 758333.3333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)
  ) = 4100000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 403195.45454545453;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 130346538.46153846;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_1D)
  ) = 13801.333333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 32388.46153846154;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 2750000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 1836666.6666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 23086666.666666668;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 2238333.3333333335;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 1608333.3333333333;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 4234777.777777778;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 3581222.222222222;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 279.58000000000004;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 18632884.615384616;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 840383.3333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 532.5416666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 1166782.0895522388;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 6986986.486486486;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 113.41905405405406;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 8139578.947368421;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)
  ) = 8633.381578947368;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 25.86026315789474;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)
  ) = 235000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 13461.555555555555;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 67262.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3s_3So)
  ) = 93000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_3So)
  ) = 286000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 74875.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)
  ) = 13648.235294117647;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 191688.23529411765;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 1288000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 664333.3333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 11616666.666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 1050000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 568000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 1505444.4444444445;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 1073266.6666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)
  ) = 22998.557142857142;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 16170769.23076923;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 523023.07692307694;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 680861.5384615385;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 2348139.189189189;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 1268487.8378378379;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 2663552.6315789474;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)
  ) = 24017.105263157893;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_5f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 1504631.5789473683;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4s_5So)
  ) = 45400.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 6953.888888888889;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6p_5P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 4502.266666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 34843.63636363636;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6p_3P),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 35735.294117647056;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 713000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 346000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 6646666.666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 582666.6666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 295866.6666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 704144.4444444445;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 480633.3333333333;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)
  ) = 10033.714285714286;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 9555884.615384616;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 206628.84615384616;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 268257.6923076923;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 1122700.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 646902.7027027027;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 1258236.8421052631;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)
  ) = 13853.28947368421;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_6f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 739669.7368421053;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 436666.6666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8s_5So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 206333.33333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 4130000.0;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 357666.6666666667;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8s_3So),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 176966.66666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 388844.44444444444;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 261211.11111111112;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)
  ) = 5357.8;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 6116846.153846154;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 101548.84615384616;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 135096.15384615384;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_5Do)
  ) = 634897.2972972973;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7f_5F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_5Do)
  ) = 372622.97297297296;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3d_3Do)
  ) = 708661.8421052631;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_2Do_3s_3Do)
  ) = 8535.552631578947;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_7f_3F),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4d_3Do)
  ) = 419989.4736842105;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_5P)
  ) = 239033.33333333334;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_5P)
  ) = 159246.66666666666;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_5Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4f_5F)
  ) = 3223.0342857142855;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p4_3P)
  ) = 4158192.3076923075;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_3p_3P)
  ) = 57554.230769230766;
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_8d_3Do),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4So_4p_3P)
  ) = 78404.23076923077;
  return A;
}


}