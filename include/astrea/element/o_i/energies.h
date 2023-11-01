/**
 * \file astrea/element/o_i/energies.h
 * O I energies by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/o_i/structure.h"


namespace astrea::element::o_i {


/**
 * O I energies by Przybilla2000, Sitnova2012, Sitnova2017.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E() {
  Eigen::VectorXd E = Eigen::Vector<double, 51>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_3So)) = 9.511695728174285;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3s_5So)) = 9.136423134698713;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_3P)) = 10.979172553249883;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3p_5P)) = 10.730970127241436;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_3Do)) = 12.077362460737287;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_3d_5Do)) = 12.068965235675442;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_3So)) = 11.920717472062318;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4s_5So)) = 11.827937490009205;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_3P)) = 12.3492070926824;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4p_5P)) = 12.276430053087264;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_3Do)) = 12.749349854538917;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4d_5Do)) = 12.74403618329108;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_3F)) = 12.756779374722893;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_4f_5F)) = 12.756767712140066;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_3So)) = 12.687801028595084;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5s_5So)) = 12.651188831211638;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_3P)) = 12.868573006170879;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5p_5P)) = 12.83835227638649;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_3Do)) = 13.059383241739576;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5d_5Do)) = 13.056454403253069;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_3F)) = 13.063439545946009;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_5f_5F)) = 13.063429744413634;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_3So)) = 13.029158872567638;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6s_5So)) = 13.01106648450271;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_3P)) = 13.121750144105015;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6p_5P)) = 13.106457065415203;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_3Do)) = 13.22760438192251;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6d_5Do)) = 13.22582635086425;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_3F)) = 13.230009429827406;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_6f_5F)) = 13.230004342956173;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_3So)) = 13.21051080722766;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7s_5So)) = 13.200272188543195;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_3P)) = 13.266159453941839;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7p_5P)) = 13.25690653856094;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_3Do)) = 13.328896250423591;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7d_5Do)) = 13.327744396671426;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_3F)) = 13.330429933828967;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_7f_5F)) = 13.330429065338755;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_3So)) = 13.318289027951126;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8s_5So)) = 13.311942523330966;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_3P)) = 13.353373054774199;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8p_5P)) = 13.34758130861516;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_3Do)) = 13.394759504135749;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8d_5Do)) = 13.393777452626736;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_3F)) = 13.395783276260207;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_8f_5F)) = 13.395773735274894;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_4So_9s_3So)) = 13.387568421735562;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p3_2Do_3s_3Do)) = 12.530521421716308;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1S)) = 4.180078536263556;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_3P)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p4_1D)) = 1.957696455240094;
  return E;
}


}