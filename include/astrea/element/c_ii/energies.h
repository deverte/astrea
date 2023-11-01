/**
 * \file astrea/element/c_ii/energies.h
 * C II energies by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_ii/structure.h"


namespace astrea::element::c_ii {


/**
 * C II energies by Alexeeva+2015.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E() {
  Eigen::VectorXd E = Eigen::Vector<double, 77>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_2Po)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P2)) = 5.3304620585741;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P4)) = 5.3333570259424;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_4P6)) = 5.336665560077599;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2D)) = 9.289123151340899;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2S)) = 11.962418732582499;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P2)) = 13.714701123937798;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p2_2P4)) = 13.7196639251406;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_3s_2S)) = 14.447541434884599;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_3p_2Po)) = 16.3313380581141;
  E(static_cast<int>(STRUCTURE::LS_He_2p3_4So4)) = 17.6080186675344;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_3d_2D)) = 18.0447451733808;
  E(static_cast<int>(STRUCTURE::LS_He_2p3_2Do)) = 18.6539290210245;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4s_2S)) = 19.4934695578315;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po2)) = 20.148559316601098;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4p_2Po4)) = 20.149386450134898;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po2)) = 20.700050600262248;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po4)) = 20.70298692430724;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_4Po6)) = 20.70857007566039;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D4)) = 20.84347555502317;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4d_2D6)) = 20.843558268376547;
  E(static_cast<int>(STRUCTURE::LS_He_2p3_2Po2)) = 20.91857927989221;
  E(static_cast<int>(STRUCTURE::LS_He_2p3_2Po4)) = 20.92089525378685;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_4f_2Fo)) = 20.94943136070295;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5s_2S)) = 21.491203825341948;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po2)) = 21.73165154361761;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5p_2Po4)) = 21.732561390504788;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po2)) = 22.04004828169494;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3s_2Po4)) = 22.04240561226627;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5d_2D)) = 22.129420060022028;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5f_2Fo)) = 22.186492273854228;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_5g_2G)) = 22.201049824049107;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6s_2S)) = 22.47272183322572;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D2)) = 22.526320086215957;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D4)) = 22.52809842331363;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D6)) = 22.53120017406538;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4D8)) = 22.53570805182459;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P2)) = 22.566890986048847;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2P4)) = 22.569331029973558;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6p_2Po)) = 22.687114845186677;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6d_2D)) = 22.82119319101566;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6f_2Fo)) = 22.858538270066727;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6g_2G)) = 22.86759538226184;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_6h_2Ho)) = 22.869745929449717;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4S)) = 22.89757897286209;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_7s_2S)) = 23.02677723084165;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P2)) = 23.11284047503354;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P4)) = 23.11486695219135;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_4P6)) = 23.11763784952958;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_7p_2Po)) = 23.15237745794918;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_7d_2D)) = 23.22760525284829;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_7f_2Fo)) = 23.26342013486183;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_7g_He_2s2_7i)) = 23.26958227968864;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_8s_2S)) = 23.3710715642859;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D4)) = 23.37992189309756;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3p_2D6)) = 23.38409891744325;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_8p_2Po)) = 23.452792357425338;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_8d_2D)) = 23.51114662823493;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_8f_2Fo)) = 23.526407241933537;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_8g_He_2s2_8k)) = 23.531370043136338;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_11d_He_2s2_11k)) = 23.583148602352217;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_9s_2S)) = 23.599070922877868;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_9p_2Po)) = 23.6551919331462;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_9d_2D)) = 23.695804189655778;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_9f_2Fo)) = 23.706474212241798;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_9g_He_2s2_9l)) = 23.71003088643714;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_10p_2Po)) = 23.75783920469078;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_10d_2D)) = 23.82740113488336;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_10f_2Fo)) = 23.835176190101077;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_12d_He_2s2_12k)) = 23.943323899645428;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_13f_He_2s2_13k)) = 24.241439367897623;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo4)) = 24.26903667825286;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo6)) = 24.270678538317455;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo8)) = 24.273147531915846;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Fo10)) = 24.2766090857548;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do2_4Do4_4Do6)) = 24.369971783382475;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p_3Po_3d_4Do8)) = 24.371864678474576;
  return E;
}


}