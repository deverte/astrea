/**
 * \file astrea/element/c_i/statistical_weights.h
 * C I statistical weights by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_i/structure.h"


namespace astrea::element::c_i {


/**
 * C I statistical weights by Alexeeva+2015.
 * 
 * - Axis 0: Term.
 *   - Statistical weight in 1.
 */
inline const Eigen::VectorXd g_K() {
  Eigen::VectorXd g = Eigen::Vector<double, 158>::Zero();
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_10f57)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::_3f579)) = 48.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_3124f3)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo4)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_335f7)) = 48.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_315f3)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo4)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::_336f7)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_127f5)) = 28.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo4)) = 9.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::_337f7)) = 16.0;
  g(static_cast<int>(STRUCTURE::_37f5)) = 12.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::_227f3)) = 8.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3S1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3P2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Do2)) = 5.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po0)) = 1.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)) = 21.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)) = 15.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Fo3)) = 7.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)) = 3.0;
  g(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)) = 9.0;
  g(static_cast<int>(STRUCTURE::_SL3)) = 84.0;
  g(static_cast<int>(STRUCTURE::_SL1)) = 27.0;
  g(static_cast<int>(STRUCTURE::_SL3o)) = 66.0;
  g(static_cast<int>(STRUCTURE::_SL1o)) = 48.0;
  return g;
};


}