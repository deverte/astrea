/**
 * \file astrea/element/o_i/principal_quantum_numbers.h
 * O I principal quantum numbers by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i/structure.h"


namespace astrea::element::o_i {


/**
 * O I principal quantum numbers by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Principal quantum number in 1.
 */
inline const Eigen::VectorXd n() {
  Eigen::VectorXd n = Eigen::Vector<double, 51>::Zero();
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)) = 4.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F)) = 5.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)) = 6.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)) = 7.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)) = 8.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)) = 9.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)) = 3.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)) = 2.0;
  n(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)) = 2.0;
  return n;
};


}