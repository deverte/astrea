/**
 * \file astrea/element/fe_ii/energies.h
 * Fe II energies by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_ii/structure.h"


namespace astrea::element::fe_ii {


/**
 * Fe II energies by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E() {
  Eigen::VectorXd E = Eigen::Vector<double, 89>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a6D)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4F)) = 0.24799283037098357;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_a4D)) = 0.9799923600806758;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a4P)) = 1.636099079530083;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2G)) = 1.9417790975156468;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2P)) = 2.2465591942164362;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2H)) = 2.4964974426589173;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_a2D2)) = 2.531395033583473;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b4P)) = 2.6042394432049387;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_a4H)) = 2.608961134982636;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_b4F)) = 2.7761752773091777;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_a6S)) = 2.8394013646328498;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_a4G)) = 3.142303868211913;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_b2P)) = 3.1929583529553587;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_b2H)) = 3.203367001344698;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_a2F)) = 3.351233663182124;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_b2G)) = 3.736791207227055;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b4D)) = 3.8438959013852827;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_b2F)) = 3.9058151177255507;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_a2I)) = 4.026402088484719;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_c2G)) = 4.099614572528726;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_b2D)) = 4.436900189974321;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4s_a2S)) = 4.563976850439684;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4s_c2D)) = 4.682631637263896;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Do)) = 4.747789494955757;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Fo)) = 5.17684599154323;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z6Po)) = 5.287841108277687;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Fo)) = 5.492224563779366;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Do)) = 5.495885870366731;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1F_4s_c2F)) = 5.517912849938592;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p_z4Po)) = 5.8026663895190165;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_d2D1)) = 5.886395876445289;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c4P)) = 6.12182868410552;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_c4F)) = 6.166360312865011;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_z8Po)) = 6.478814968059164;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_b4G)) = 6.6760437184934736;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P1_4s_c2P)) = 6.720737465425589;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F1_4s_d2F)) = 6.75385465141864;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_d4P)) = 7.0733023070743055;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G1_4s_d2G)) = 7.2196855049188615;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z4So)) = 7.345702193760659;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_c4D)) = 7.433104980710539;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Po)) = 7.488847990953922;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Go)) = 7.488969993150158;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Ho)) = 7.504453932902893;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z4Io)) = 7.571311963573481;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Do)) = 7.574196178205842;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_y6Po)) = 7.646198152323132;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Fo)) = 7.653081971158183;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Go)) = 7.658891343532827;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_y4Do)) = 7.6816131152730796;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Io)) = 7.692864612733361;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_x4Do)) = 7.785288100233406;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y4Go)) = 7.879426649115786;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_z2Fo)) = 7.926257295532474;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2Po)) = 7.985645483259314;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Go)) = 8.001822560913375;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4p_z2Ho)) = 8.06329388444509;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Go)) = 8.10324029845996;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4p_z2So)) = 8.162166532108174;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x4Fo)) = 8.170003622340928;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y4Ho)) = 8.195010350468303;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4p_y2Do)) = 8.268944508520551;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Ho)) = 8.346645432685722;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_3Po_x4Po)) = 8.530948153820573;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_y2Fo)) = 8.580827200876081;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4p_x2Go)) = 8.677809021280897;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_z2Ko)) = 8.779102688797414;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Po)) = 8.879240437200444;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Ho)) = 8.90028891780182;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Fo)) = 8.925853547497743;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w4Do)) = 8.94895662779708;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_x2Fo)) = 9.003283585430596;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4p_w2Go)) = 9.013433754590622;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_y2Po)) = 9.022604184079864;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_4F)) = 9.055911197218922;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_w2Ho)) = 9.082387328069093;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4p_y2Io)) = 9.11927252087537;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_x2Do)) = 9.193056554191232;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4p_w2Fo)) = 9.338405835118538;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1S2_4p_x2Po)) = 9.405753942407902;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_4s2_2H)) = 9.523797063983869;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_v2Fo)) = 9.615213516406513;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e6D)) = 9.653295985002964;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_5s_e2G)) = 9.669105815368018;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Do)) = 9.694698154037324;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1D2_4p_w2Po)) = 9.75674019970736;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s_4p_1Po_x6Po)) = 9.779965282202932;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_5s_e4D)) = 9.843762091664924;
  return E;
}


}