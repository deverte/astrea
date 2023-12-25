/**
 * \file astrea/element/c_i/energies.h
 * C I energies by Alexeeva+2015.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>

#include "astrea/element/c_i/structure.h"


namespace astrea::element::c_i {


/**
 * C I energies by Alexeeva+2015.
 * 
 * - Axis 0: Term.
 *   - Energy in eV.
 */
inline const Eigen::VectorXd E_K() {
  Eigen::VectorXd E = Eigen::Vector<double, 158>::Zero();
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P0)) = 0.0;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P1)) = 0.0020678338344999997;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_3P2)) = 0.0053763679697;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1D2)) = 1.2638600396464;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p2_1S0)) = 2.684048317181;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p3_5So2)) = 4.1828142804266;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po0)) = 7.48026482627368;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po1)) = 7.482622156845009;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_3Po2)) = 7.48766767140119;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3s_1Po1)) = 7.684608165798969;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Do)) = 7.945858292449699;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1P1)) = 8.536969272379869;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D1)) = 8.64027825075149;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D2)) = 8.64288372138296;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3D3)) = 8.647019389051959;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3S1)) = 8.77100670576858;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P0)) = 8.846441284051139;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P1)) = 8.84801283776536;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_3P2)) = 8.85053559504345;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1D2)) = 9.002480025202509;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3p_1S0)) = 9.17171154621799;
  E(static_cast<int>(STRUCTURE::LS_He_2s_2p3_3Po)) = 9.33031440132414;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Do2)) = 9.63093608418375;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po0)) = 9.6836658469635;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po1)) = 9.68511333064765;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_3Po2)) = 9.68900085825651;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo2)) = 9.695328429790079;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo3)) = 9.69735490694789;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Fo4)) = 9.701656001323649;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do1)) = 9.70703236929335;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do2)) = 9.70881070639102;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Do3)) = 9.71009276336841;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4s_1Po1)) = 9.71286366070664;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Fo3)) = 9.736312896389869;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_1Po1)) = 9.761333685787319;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po2)) = 9.83317023319785;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po1)) = 9.83416279343841;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_3d_3Po0)) = 9.83470043023538;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1P1)) = 9.988423197492109;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D1)) = 10.01563589075413;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D2)) = 10.017951864648769;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3D3)) = 10.02208753231777;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3S1)) = 10.05562779711336;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P0)) = 10.08118622330778;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P1)) = 10.08300591708214;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_3P2)) = 10.08528053430009;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1D2)) = 10.138051653756529;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4p_1S0)) = 10.19781205157358;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Do2)) = 10.352279239010729;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po0)) = 10.382345542964359;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po2)) = 10.38325538985154;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_3Po1)) = 10.383875740001889;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo3)) = 10.38495101359583;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo2)) = 10.38867311449793;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Fo4)) = 10.38958296138511;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do1)) = 10.392271145369959;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do2)) = 10.394504405911219;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Do3)) = 10.3958278195653;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5s_1Po1)) = 10.399384493760639;
  E(static_cast<int>(STRUCTURE::_10f57)) = 10.40509171514386;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Fo3)) = 10.40802803918885;
  E(static_cast<int>(STRUCTURE::_3f579)) = 10.4152654576096;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_1Po1)) = 10.41853263506811;
  E(static_cast<int>(STRUCTURE::_3124f3)) = 10.41907027186508;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po2)) = 10.42734160720308;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po1)) = 10.42895451759399;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_4d_3Po0)) = 10.429616224421029;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1P1)) = 10.52014598969544;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D1)) = 10.53052651554463;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D2)) = 10.532387565995679;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3S1)) = 10.53375233632645;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3D3)) = 10.53668866037144;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_3P)) = 10.562743366686139;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1D2)) = 10.5881363661738;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5p_1S0)) = 10.61605212293955;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Do2)) = 10.685489983102059;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo2)) = 10.70190858374799;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po0)) = 10.702446220544958;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo3)) = 10.703107927371999;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po1)) = 10.70364556416897;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do1)) = 10.70749173510114;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Fo4)) = 10.70836022531163;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_3Po2)) = 10.70836022531163;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do2)) = 10.710800269236339;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Do3)) = 10.71187554283028;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6s_1Po1)) = 10.714191516724918;
  E(static_cast<int>(STRUCTURE::_335f7)) = 10.722131998649399;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_1Po1)) = 10.72345541230348;
  E(static_cast<int>(STRUCTURE::_315f3)) = 10.724365259190659;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_5d_3Po)) = 10.72610223961164;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1P1)) = 10.77573025163964;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D1)) = 10.78110661960934;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3S1)) = 10.78201646649652;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D2)) = 10.78222324987997;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3D3)) = 10.78681384099256;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_3P)) = 10.79963441076646;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1D2)) = 10.813571610810989;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6p_1S0)) = 10.82879086783291;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Do2)) = 10.865081351628385;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo2)) = 10.87431629753326;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po0)) = 10.874705050294148;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo3)) = 10.874957326021956;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po1)) = 10.875598354510652;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do1)) = 10.87767445968049;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_3Po2)) = 10.879957348233777;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Fo4)) = 10.88081343144126;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do2)) = 10.882360171149466;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Do3)) = 10.882864722605085;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7s_1Po1)) = 10.88441146231329;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Fo3)) = 10.886553738165832;
  E(static_cast<int>(STRUCTURE::_336f7)) = 10.888542994314621;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_1Po1)) = 10.889436298531125;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_6d_3Po)) = 10.890395773430333;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1P1)) = 10.918088204141958;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3S1)) = 10.921446366289185;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3D)) = 10.924597745052964;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_3P)) = 10.934295885736768;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1D2)) = 10.942774004458219;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7p_1S0)) = 10.9519014230037;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Do2)) = 10.972315078617886;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo2)) = 10.977625275904881;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po0)) = 10.977910636974043;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo3)) = 10.978051249674788;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po1)) = 10.978568208133414;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do1)) = 10.979755144754415;
  E(static_cast<int>(STRUCTURE::_127f5)) = 10.981798164582901;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_3Po2)) = 10.982931337524208;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Fo4)) = 10.984449127558731;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do2)) = 10.985470637472973;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Do3)) = 10.985669149521087;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8s_1Po1)) = 10.986744423115026;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Fo3)) = 10.987985123415726;
  E(static_cast<int>(STRUCTURE::_337f7)) = 10.989101753686356;
  E(static_cast<int>(STRUCTURE::_37f5)) = 10.989631119147989;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po2)) = 10.989449149770552;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_1Po1)) = 10.989722103836707;
  E(static_cast<int>(STRUCTURE::_227f3)) = 10.990503745026148;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po1)) = 10.990598865382534;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_7d_3Po0)) = 10.990971075472745;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1P1)) = 11.00558652501499;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3S1)) = 11.007629544843477;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3D)) = 11.011310289068886;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_3P2)) = 11.018849611229474;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1D2)) = 11.023758648752576;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8p_1S0)) = 11.029598211501204;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Do2)) = 11.04119462364508;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po0)) = 11.044598278136668;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_3Po1)) = 11.045065608583265;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Fo)) = 11.047505652507974;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Do)) = 11.050983749017604;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_9s_1Po1)) = 11.052993683504738;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Fo3)) = 11.053783596029517;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_1Po1)) = 11.054904361967814;
  E(static_cast<int>(STRUCTURE::LS_He_2s2_2p_8d_3Po)) = 11.055040839000892;
  E(static_cast<int>(STRUCTURE::_SL3)) = 11.105144452810828;
  E(static_cast<int>(STRUCTURE::_SL1)) = 11.108903774721949;
  E(static_cast<int>(STRUCTURE::_SL3o)) = 11.127241325166294;
  E(static_cast<int>(STRUCTURE::_SL1o)) = 11.132084192006694;
  return E;
}


}