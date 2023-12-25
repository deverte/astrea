/**
 * \file astrea/element/mg_i/energies.h
 * Mg I energies by Alexeeva+2018.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/mg_i/structure.h"


namespace astrea::element::mg_i {


/**
 * Mg I energies by Alexeeva+2018.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 70>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ne_3s2_1S)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po0)) = 2.7087382531649298;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po1)) = 2.71121965376633;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_3Po2)) = 2.7162651683225096;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3p_1Po)) = 4.345205407117554;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_3S)) = 5.107127733112762;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4s_1S)) = 5.392985082394041;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_1D)) = 5.7524614518511905;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_3Po)) = 5.931560675924905;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_3d_3D)) = 5.94510085187321;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4p_1Po)) = 6.117380359960744;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_3S)) = 6.430495894848403;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5s_1S)) = 6.515248132389219;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_1D)) = 6.586956474102011;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4d_3D)) = 6.718069546212318;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_3Po)) = 6.7254020849894545;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_4f)) = 6.778107033763191;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5p_1Po)) = 6.781820863329952;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_3S)) = 6.928756999941854;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6s_1S)) = 6.9653369804741585;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_1D)) = 6.980399082124657;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5d_3D)) = 7.062198452949808;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_3Po)) = 7.068414361456314;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5f)) = 7.091454166040314;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6p_1Po)) = 7.092789986697401;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_5g)) = 7.098708127131739;
  E(static_cast<int>(STRUCTURE::LS_Ne_3p2_3P)) = 7.171963208552737;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_3S)) = 7.172153449265511;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7s_1S)) = 7.191268505231628;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_1D)) = 7.1929848073142635;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6d_3D)) = 7.245003235254946;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_3Po)) = 7.249285305559428;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6f)) = 7.261448304173957;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7p_1Po)) = 7.26203350114912;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6g)) = 7.265822599867459;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_6h_Ho)) = 7.266832529912228;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_3S)) = 7.3094522395083406;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_1D)) = 7.319156583693649;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8s_1S)) = 7.3207062183692235;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7d_3D)) = 7.353588912005443;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_3Po)) = 7.356531853118703;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7f)) = 7.363753142435544;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8p_1Po)) = 7.3640529783415465;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7g)) = 7.3665765627531705;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7h_Ho)) = 7.367235374612842;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_7i_I)) = 7.367441744429525;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_3S)) = 7.394545256065084;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_1D)) = 7.399608140425473;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9s_1S)) = 7.401730151506437;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8d_3D)) = 7.423308824702978;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_3Po)) = 7.425377072104245;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8f)) = 7.430027216831269;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9p_1Po)) = 7.43018313150239;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8g)) = 7.4319486480302865;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8h_Ho)) = 7.432401503640042;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8i)) = 7.432580991616876;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_8k)) = 7.432633101029506;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_3S)) = 7.450931776197764;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_1D)) = 7.453812682295989;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10s_1S)) = 7.45579490780974;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9d_3D)) = 7.470714742492425;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9f)) = 7.475388460525162;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10p_1Po)) = 7.475514598389066;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9g)) = 7.4767561258233;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9h_Ho)) = 7.477076640067647;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9i_I)) = 7.477178377492304;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9k_Ko)) = 7.477218079901927;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_9l_L)) = 7.477234209005836;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_10d_Ne_3s_2S_15f)) = 7.546273804371822;
  E(static_cast<int>(STRUCTURE::LS_Ne_3s_2S_16p_Ne_3s_2S_59p)) = 7.62456075264569;
  return E;
}


}