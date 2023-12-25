/**
 * \file astrea/element/o_i/statistical_weights.h
 * O I statistical weights by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i/structure.h"


namespace astrea::element::o_i {


/**
 * O I statistical weights by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 51>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)) = 25.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)) = 35.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)) = 5.0;
  return g;
};


}