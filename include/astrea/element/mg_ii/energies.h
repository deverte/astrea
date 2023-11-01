/**
 * \file astrea/element/mg_ii/energies.h
 * Mg II energies by Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_ii/structure.h"


namespace astrea::element::mg_ii {


/**
 * Mg II energies by Alexeeva+2018.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E() {
  Eigen::VectorXd E = Eigen::Vector<double, 43>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_Ne_3p_2Po)) = 4.4294241435290695;
  E(static_cast<int>(STRUCTURE::LS_Ne_4s_2S)) = 8.65355374396898;
  E(static_cast<int>(STRUCTURE::LS_Ne_3d_2D)) = 8.862529031283549;
  E(static_cast<int>(STRUCTURE::LS_Ne_4p_2Po2)) = 9.99421313222871;
  E(static_cast<int>(STRUCTURE::LS_Ne_4p_2Po4)) = 9.99801794648419;
  E(static_cast<int>(STRUCTURE::LS_Ne_5s_2S)) = 11.503032903577648;
  E(static_cast<int>(STRUCTURE::LS_Ne_4d_2D)) = 11.567532776543372;
  E(static_cast<int>(STRUCTURE::LS_Ne_4f_2Fo)) = 11.628140986232568;
  E(static_cast<int>(STRUCTURE::LS_Ne_5p_2Po)) = 12.082435808336879;
  E(static_cast<int>(STRUCTURE::LS_Ne_6s_2S)) = 12.793071719568818;
  E(static_cast<int>(STRUCTURE::LS_Ne_5d_2D)) = 12.820735200606759;
  E(static_cast<int>(STRUCTURE::LS_Ne_5f_2Fo)) = 12.854205159051975;
  E(static_cast<int>(STRUCTURE::LS_Ne_5g_2G)) = 12.856161329859413;
  E(static_cast<int>(STRUCTURE::LS_Ne_6p_2Po)) = 13.094375787593814;
  E(static_cast<int>(STRUCTURE::LS_Ne_7s_2S)) = 13.485750561781959;
  E(static_cast<int>(STRUCTURE::LS_Ne_6d_2D)) = 13.50010132859339;
  E(static_cast<int>(STRUCTURE::LS_Ne_6f_2Fo)) = 13.520213080467736;
  E(static_cast<int>(STRUCTURE::LS_Ne_6g_2G)) = 13.521416559759414;
  E(static_cast<int>(STRUCTURE::LS_Ne_6h_2Ho)) = 13.521656428484217;
  E(static_cast<int>(STRUCTURE::LS_Ne_7p_2Po)) = 13.66205407451143;
  E(static_cast<int>(STRUCTURE::LS_Ne_8s_2S)) = 13.900405009278906;
  E(static_cast<int>(STRUCTURE::LS_Ne_7d_2D)) = 13.90882109298532;
  E(static_cast<int>(STRUCTURE::LS_Ne_7f_2Fo)) = 13.921761597121622;
  E(static_cast<int>(STRUCTURE::LS_Ne_7g_2G)) = 13.922543238311063;
  E(static_cast<int>(STRUCTURE::LS_Ne_7h_Ne_7i)) = 13.922725207688499;
  E(static_cast<int>(STRUCTURE::LS_Ne_8p_2Po)) = 14.01234099040806;
  E(static_cast<int>(STRUCTURE::LS_Ne_9s_2S)) = 14.168193626514325;
  E(static_cast<int>(STRUCTURE::LS_Ne_8d_2D)) = 14.173569994484025;
  E(static_cast<int>(STRUCTURE::LS_Ne_8f_2Fo)) = 14.182350016945312;
  E(static_cast<int>(STRUCTURE::LS_Ne_8g_2G)) = 14.182887653742283;
  E(static_cast<int>(STRUCTURE::LS_Ne_8h_Ne_8i)) = 14.183011723772353;
  E(static_cast<int>(STRUCTURE::LS_Ne_9p_2Po)) = 14.243657154470569;
  E(static_cast<int>(STRUCTURE::LS_Ne_10s_2S)) = 14.351126614517202;
  E(static_cast<int>(STRUCTURE::LS_Ne_9d_2D)) = 14.35477427340126;
  E(static_cast<int>(STRUCTURE::LS_Ne_9f_2Fo)) = 14.360994317575436;
  E(static_cast<int>(STRUCTURE::LS_Ne_9g_Ne_9i)) = 14.36142856268068;
  E(static_cast<int>(STRUCTURE::LS_Ne_10p_2Po)) = 14.404381607090915;
  E(static_cast<int>(STRUCTURE::LS_Ne_10d_2D)) = 14.484199993102616;
  E(static_cast<int>(STRUCTURE::LS_Ne_10f_2Fo)) = 14.488761634541522;
  E(static_cast<int>(STRUCTURE::LS_Ne_10g_2G)) = 14.489046995610684;
  E(static_cast<int>(STRUCTURE::LS_Ne_10h_Ne_10i)) = 14.489113166293388;
  E(static_cast<int>(STRUCTURE::LS_Ne_11g_2G)) = 14.583505645170643;
  return E;
}


}