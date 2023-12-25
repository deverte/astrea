/**
 * \file astrea/element/fe_i/energies.h
 * Fe I energies by Mashonkina+2011.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/fe_i/structure.h"


namespace astrea::element::fe_i {


/**
 * Fe I energies by Mashonkina+2011.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 239>::Zero();
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a5D)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a5F)) = 0.8749302721841667;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4s_a3F)) = 1.4883610369571627;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_a5P)) = 2.142644754098075;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3P)) = 2.3000383399778093;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a3H)) = 2.377114364758195;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Do)) = 2.3831131507120795;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3F)) = 2.5306005718242583;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a3G)) = 2.671313769294615;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4s_b3P)) = 2.7890541599972103;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Fo)) = 2.792753928293898;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3G)) = 2.930529561018964;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z7Po)) = 2.932766543661126;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_c3P)) = 2.995731670354884;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4s_a1G)) = 2.996907854239948;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Do)) = 3.1923156701995965;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_b3H)) = 3.21453040908363;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a3D)) = 3.2225014949488604;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Fo)) = 3.3248220487475892;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4s_a1P)) = 3.364935957303055;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4s_a1D)) = 3.4965589572369495;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4s_a1H)) = 3.5232575870077127;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_a1I)) = 3.5843885450902695;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z5Po)) = 3.586392689642667;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b3D)) = 3.5897727708285405;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1G)) = 3.6446361245587275;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Do)) = 3.863823491978329;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Fo)) = 3.8766222667836137;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d8_c3F)) = 4.074451350736755;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Do)) = 4.10397633714919;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y5Fo)) = 4.180091935826804;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_3Po_z3Po)) = 4.184497042244439;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s2_b1D)) = 4.244453718849059;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z5Go)) = 4.307277116211801;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_z3Go)) = 4.3750576489126365;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2F_4s_d3F)) = 7.326826386169193;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_y5Po)) = 4.540638533363337;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Fo)) = 4.542889411848867;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4p_y3Do)) = 4.724297579182183;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Do)) = 4.905849750463735;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_y7Po)) = 4.941921622866226;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4p_1Po_x5Fo)) = 4.989314347875808;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z5So)) = 5.020371640516284;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d8_3P)) = 5.035137876501742;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x5Po)) = 5.250488336884752;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y5Go)) = 5.277080555926392;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Ho)) = 5.304125713291141;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e7D)) = 5.309508326119021;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z5Io)) = 5.310649025975485;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_w5Do)) = 5.393266555935594;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v5Do)) = 5.4440052842294575;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_w5Fo)) = 5.450820575051233;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y5So)) = 5.468800183458827;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5s_e5D)) = 5.535845477161466;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_x3Do)) = 5.567425642265334;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y3Go)) = 5.580022100208251;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x5Go)) = 5.624697153922503;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Io)) = 5.658127368601421;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w5Po)) = 5.684378229633661;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_z3So)) = 5.7278037740750785;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_y3Po)) = 5.7499287276140185;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_u5Do)) = 5.756706259789976;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_z3Ho)) = 5.780379276450775;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Fo)) = 5.781052604503965;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_w3Do)) = 5.790659925925759;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_3Po_1Do)) = 5.829330693248127;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Go)) = 5.83342607951403;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e5F)) = 5.839636280799154;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w5Go)) = 5.84249882453293;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_y3So)) = 5.846182918649151;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x3Go)) = 5.879829635530541;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_v5Fo)) = 5.894704680932371;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d5_6S_4s2_4p_v5Po)) = 5.91328983380006;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Io)) = 5.913466923089646;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y5Ho)) = 5.923745339304088;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5s_e3F)) = 5.94859181030929;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Ho)) = 5.948717286466367;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4P_4p_x3Po)) = 5.949933462257791;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_y1Go)) = 5.988383260856604;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_v3Do)) = 6.050484529287661;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_w3Fo)) = 6.053874949642707;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_1Fo)) = 6.084420991045941;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_y3Ho)) = 6.096032167523395;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_v3Go)) = 6.1018360808167165;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Do)) = 6.10688730259428;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_w3Po)) = 6.16323345861051;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Fo)) = 6.170783657577067;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_n7Po)) = 6.21169024955465;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5D)) = 6.221969782399363;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2G_4p_z1Fo)) = 6.222011966209586;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7P)) = 6.225192046506987;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_3Po_x1Go)) = 6.225372981967506;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f7D)) = 6.23993160743598;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5G)) = 6.255987882237429;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7F)) = 6.25945820369184;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7G)) = 6.288007089821037;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_x3Ho)) = 6.291038368795707;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5S)) = 6.291695609101665;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Fo)) = 6.310457851258941;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_t5Do)) = 6.321807570826361;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Fo)) = 6.326101138286964;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_f5F)) = 6.327457719995749;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e7S)) = 6.343915857624594;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_u3Go)) = 6.346278275067157;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_e3D)) = 6.346621866337098;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_1Ho)) = 6.351365022229997;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_y1Do)) = 6.361051707114359;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_5s_g5D)) = 6.365961943981086;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_3Po_x1Do)) = 6.36771823797008;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_5p_u5Po)) = 6.379857828705602;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_4d_e5P)) = 6.391075992684472;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_1Po)) = 6.419635962403022;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_u3Do)) = 6.420407512563351;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_t3Do)) = 6.459048875288592;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_w3Ho)) = 6.469622040537804;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_y3Io)) = 6.481113282652857;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_v3Po)) = 6.525405332184284;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Io)) = 6.5327973418625005;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Fo)) = 6.5556349950108395;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_y1Ho)) = 6.560062309963857;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5P)) = 6.5769400524343995;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Fo)) = 6.584765604154358;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_h5D)) = 6.590673860342968;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_g5F)) = 6.593751210655471;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f5G)) = 6.596210237294781;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Go)) = 6.597139439106653;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Go)) = 6.601799881646172;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e5H)) = 6.611157987734232;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_x1Fo)) = 6.615835634651254;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2P_4p_x3So)) = 6.6214241623723735;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Fo)) = 6.627220300610477;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3F)) = 6.6423201609067934;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_5Do)) = 6.642342369442176;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3D)) = 6.6444777387297105;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3G)) = 6.646967824233215;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_5Do)) = 6.652650769247218;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t5Po)) = 6.656818281557269;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3H)) = 6.667204390557813;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5p_3Do)) = 6.669986991835546;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_6s_g7D)) = 6.670219044148454;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_t3Go)) = 6.673450696221687;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_w1Go)) = 6.745718759196801;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6s_5D)) = 6.751073621694622;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_f3F)) = 6.768688546927163;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_4d_e3P)) = 6.786433911117985;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_v3Ho)) = 6.8298910934170705;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_s3Go)) = 6.8537206864558184;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2D2_4p_w1Do)) = 6.862682430154481;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_1Ho)) = 6.881645086766996;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_3Po_1Fo)) = 6.9052837360294665;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5D)) = 6.938772801259314;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_u3Ho)) = 6.939592656018017;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Do)) = 6.956984958259937;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_4d_5G)) = 6.9761346711211205;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7D)) = 6.9765421170998705;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Fo)) = 6.97733976332319;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1G2_4s_4p_3Po_u3Fo)) = 6.982368238928574;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5S)) = 6.98247311946066;
  E(static_cast<int>(STRUCTURE::_s6D44f)) = 6.987973971027197;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_7Po)) = 6.993784005108668;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7P)) = 6.995237196014202;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_5F)) = 6.997223267698885;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7F)) = 7.004168418485468;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5F)) = 7.005060978281791;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_2H_4p_v1Go)) = 7.011100252422155;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7G)) = 7.0170518504079356;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_1I_4s_4p_3Po_x3Io)) = 7.024994482879603;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Do)) = 7.030348228747155;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Fo)) = 7.032257128873135;
  E(static_cast<int>(STRUCTURE::_s6D34f)) = 7.0357224875263435;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_6s_3F)) = 7.039341610303485;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_1Po_3Do)) = 7.046042549914213;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_6p_5Po)) = 7.046148588433246;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_5P)) = 7.049546204850036;
  E(static_cast<int>(STRUCTURE::_s6D24f)) = 7.07082297430674;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_5d_7S)) = 7.071476327085088;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3Do)) = 7.087226686549061;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3D_4s_4p_3Po_t3Fo)) = 7.093776632933194;
  E(static_cast<int>(STRUCTURE::_s6D14f)) = 7.095114397354085;
  E(static_cast<int>(STRUCTURE::_s6D04f)) = 7.1093333190802275;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_i5D)) = 7.1240501338370406;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5F)) = 7.147913597993997;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Do)) = 7.147950777646342;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Do)) = 7.172363210329682;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Go)) = 7.175185762157098;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_6D_7s_7D)) = 7.175514382310077;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5P)) = 7.18698176162268;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4s_4D_4d_g5G)) = 7.187374774121265;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Po)) = 7.203559254620453;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Fo)) = 7.207419280039314;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_3Fo)) = 7.210155809979215;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5F)) = 7.214470427988252;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_6D_7s_5D)) = 7.227644721417882;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3G)) = 7.228543939639152;
  E(static_cast<int>(STRUCTURE::_4F44f)) = 7.229201717581907;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_5H)) = 7.2292516764473485;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3D)) = 7.245042565454478;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_5S)) = 7.255430907715562;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_3Io)) = 7.25599931387999;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_5p_5Po)) = 7.259554044311525;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d7_4F_5d_3G)) = 7.263682185065368;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3S)) = 7.284281738941273;
  E(static_cast<int>(STRUCTURE::_s6D46d)) = 7.286260614564213;
  E(static_cast<int>(STRUCTURE::_4F34f)) = 7.298323612734506;
  E(static_cast<int>(STRUCTURE::_s6D45f)) = 7.300111503224491;
  E(static_cast<int>(STRUCTURE::_s6D45g)) = 7.306342300134606;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3P2_4s_4p_1Po_3So)) = 7.327176098227284;
  E(static_cast<int>(STRUCTURE::_s6D36d)) = 7.330091909360636;
  E(static_cast<int>(STRUCTURE::_s6D35f)) = 7.347920524541634;
  E(static_cast<int>(STRUCTURE::_4F24f)) = 7.348969660715906;
  E(static_cast<int>(STRUCTURE::_s6D35g)) = 7.354047516193258;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_5D_4p2_3P_7F)) = 7.3613706670047865;
  E(static_cast<int>(STRUCTURE::_s6D26d)) = 7.364115550993378;
  E(static_cast<int>(STRUCTURE::_4F14f)) = 7.3833429730500635;
  E(static_cast<int>(STRUCTURE::_s6D25g)) = 7.389125794438272;
  E(static_cast<int>(STRUCTURE::_s6D16d)) = 7.396191954860849;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Fo)) = 7.405112631379559;
  E(static_cast<int>(STRUCTURE::_s6D15g)) = 7.413294512225878;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_4s_4D_4d_3P)) = 7.415777401667639;
  E(static_cast<int>(STRUCTURE::_s6D05g)) = 7.4274890335127735;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_r3Go)) = 7.439311674949479;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3H_4s_4p_1Po_t3Ho)) = 7.455260232150821;
  E(static_cast<int>(STRUCTURE::_s6D16g)) = 7.473385254769325;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3F2_4s_4p_1Po_3Do)) = 7.481658719976174;
  E(static_cast<int>(STRUCTURE::_s6D26g)) = 7.521050524413962;
  E(static_cast<int>(STRUCTURE::_s6D26h)) = 7.5218892502242385;
  E(static_cast<int>(STRUCTURE::_s6D36g)) = 7.556088831430955;
  E(static_cast<int>(STRUCTURE::_s6D36h)) = 7.55695309085342;
  E(static_cast<int>(STRUCTURE::_s6D46g)) = 7.587370637062178;
  E(static_cast<int>(STRUCTURE::_s6D46h)) = 7.588219912960678;
  E(static_cast<int>(STRUCTURE::_58831e)) = 7.638486558925793;
  E(static_cast<int>(STRUCTURE::_58906e)) = 7.645447263958478;
  E(static_cast<int>(STRUCTURE::_4p27D)) = 7.6724191496991345;
  E(static_cast<int>(STRUCTURE::_61724e)) = 7.694340367841696;
  E(static_cast<int>(STRUCTURE::_62079e)) = 7.719268452112678;
  E(static_cast<int>(STRUCTURE::_62192e)) = 7.727549688239078;
  E(static_cast<int>(STRUCTURE::_62377e)) = 7.761336848258839;
  E(static_cast<int>(STRUCTURE::LS_Ar_3d6_3G_4s_4p_1Po_3Ho)) = 7.76547608087337;
  return E;
}


}