/**
 * \file astrea/element/n_i/energies.h
 * N I energies by Kurucz2014, Mashonkina2024.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/n_i/structure.h"


namespace astrea::element::n_i {


/**
 * N I energies by Kurucz2014, Mashonkina2024.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 59>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do)) = 2.383961805281622;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Po)) = 3.5756023424710524;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_4P)) = 10.332297414556326;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3s_2P)) = 10.686544069132044;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p4_4P)) = 10.927031077820594;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2So)) = 11.602633587212447;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Do)) = 11.758386347961348;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4Po)) = 11.84171310411402;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_4So)) = 11.99557545115908;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Do)) = 12.005824214703246;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3p_2Po)) = 12.124905017431468;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3s_2D)) = 12.356714278663533;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_4P)) = 12.856402481861776;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4s_2P)) = 12.91866094742739;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2P)) = 12.98939653920956;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_4D)) = 13.019245514022055;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_3d_2D)) = 13.03497689087413;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2So)) = 13.201564770133135;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Do)) = 13.244405324662461;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4Po)) = 13.268039962481593;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Do)) = 13.294203147530059;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_4So)) = 13.321559431352144;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4p_2Po)) = 13.34256105497594;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_4P)) = 13.623905730960292;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5s_2P)) = 13.648320686560306;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4d_4F)) = 13.67881805135418;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_4f_D)) = 13.693833420058047;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Fo)) = 13.726694980647016;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2So)) = 13.769797405654852;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4Do)) = 13.79212037510752;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_4So)) = 13.82440782230693;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5p_2Do)) = 13.871921267765966;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D_3p_2Po)) = 13.924814927400758;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6s_4P)) = 13.980186100125517;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_5d_2F)) = 13.999505375487256;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2_5f)) = 13.999879239846976;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_6p_4Do)) = 14.051211147289727;
  E(static_cast<int>(STRUCTURE::_k2o)) = 14.115605685220327;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7s_4P)) = 14.150945189008702;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3Po_6f)) = 14.156096758660219;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_7p_4Do)) = 14.19810417052518;
  E(static_cast<int>(STRUCTURE::_k1e)) = 14.238618680793905;
  E(static_cast<int>(STRUCTURE::_k3o)) = 14.242124081004372;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_8s_4P)) = 14.254623516265376;
  E(static_cast<int>(STRUCTURE::_k4o)) = 14.257166381176274;
  E(static_cast<int>(STRUCTURE::_k5o)) = 14.288814458285552;
  E(static_cast<int>(STRUCTURE::_k6o)) = 14.308196790172653;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_9s_4P)) = 14.31678889622249;
  E(static_cast<int>(STRUCTURE::_k7o)) = 14.321557722235744;
  E(static_cast<int>(STRUCTURE::_k8o)) = 14.353019702570037;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_4P)) = 14.357005187629325;
  E(static_cast<int>(STRUCTURE::_k9o)) = 14.366601611629461;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_10s_2P)) = 14.376678356211478;
  E(static_cast<int>(STRUCTURE::_k10o)) = 14.39771558379847;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_11s_2P)) = 14.408254915219288;
  E(static_cast<int>(STRUCTURE::_k11o)) = 14.431205583907852;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P_12s_2P)) = 14.440842338939362;
  E(static_cast<int>(STRUCTURE::_k12o)) = 14.4543854678428;
  return E;
}


}