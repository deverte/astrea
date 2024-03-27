/**
 * \file astrea/element/h_i/energies.h
 * H I energies by Mashonkina+2008.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/h_i/structure.h"


namespace astrea::element::h_i {


/**
 * H I energies by Mashonkina+2008.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 19>::Zero();
  E(static_cast<int>(STRUCTURE::LS_1)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_2)) = 10.198830319537477;
  E(static_cast<int>(STRUCTURE::LS_3)) = 12.087506215813217;
  E(static_cast<int>(STRUCTURE::LS_4)) = 12.748539388262216;
  E(static_cast<int>(STRUCTURE::LS_5)) = 13.05450241198387;
  E(static_cast<int>(STRUCTURE::LS_6)) = 13.220705128239013;
  E(static_cast<int>(STRUCTURE::LS_7)) = 13.320919225857136;
  E(static_cast<int>(STRUCTURE::LS_8)) = 13.385962029699083;
  E(static_cast<int>(STRUCTURE::LS_9)) = 13.43055516026361;
  E(static_cast<int>(STRUCTURE::LS_10)) = 13.462452365859226;
  E(static_cast<int>(STRUCTURE::LS_11)) = 13.486052690043485;
  E(static_cast<int>(STRUCTURE::LS_12)) = 13.504002670645084;
  E(static_cast<int>(STRUCTURE::LS_13)) = 13.517971980104596;
  E(static_cast<int>(STRUCTURE::LS_14)) = 13.529056198151366;
  E(static_cast<int>(STRUCTURE::LS_15)) = 13.537998376064667;
  E(static_cast<int>(STRUCTURE::LS_16)) = 13.545316899111853;
  E(static_cast<int>(STRUCTURE::LS_17)) = 13.551382306575816;
  E(static_cast<int>(STRUCTURE::LS_18)) = 13.556465182786901;
  E(static_cast<int>(STRUCTURE::LS_19)) = 13.560766816068242;
  return E;
}


}