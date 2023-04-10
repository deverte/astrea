#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Three-body recombination
 * 
 * e + e' + A^{Z+} \rightarrow A^{(Z - 1)+}(f'') + e''
 * 
 * formula: doi-10.1016%2FS0375-9601(97)00287-9 (Hahn 1997)
 * inverse process: collisional ionization
 * 
 * see also:
 *   - P. Mansbach and J. Keck, Monte Carlo trajectory calculations of atomic
 *     excitation and ionization by thermal electrons, Phys. Rev. 181, 275
 *     (1969)
 *   - Three-body ionic recombination at moderate and high gas densities D. R.
 *     BATES and M. R. FLANNERY
 */
inline Eigen::MatrixXd tbr_hahn_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto Ry = RYDBERG_ENERGY; // eV

  auto Gamma = [](double Z, double n) { return 1.0; }; // 1, TODO: calculate Gaunt factor
  auto n = elements[0]->atomic_number(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& N_Z = N_e; // cm^{-3}
  auto& T_e = electron_temperature; // K
  auto Z = [&](int s) { return n - s; }; // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto I = [&](double Z, double n) { // eV
    return std::pow(Z, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double Z, double n) { return I(Z, n) / (k_B * T_e); }; // 1

  auto C_TBR_Nj = [&](double Z, double n) { // cm^{-3} * s^{-1}
    return fm::cases({
      {
        [&]() {
          return
            + 7.2e-32                                             // cm^6 * s^{-1}
            * std::pow(N_e, 2.0)                                  // cm^{-6}
            * N_Z                                                 // cm^{-3}
            * std::pow(n, 6.0)                                    // 1
            * Gamma(Z, n) / (std::pow(Z, 4.0) * (k_B * T_e) / Ry) // 1
          ;
        },
        x(Z, n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        [&]() {
          return
            + 7.2e-32                                             // cm^6 * s^{-1}
            * std::pow(N_e, 2.0)                                   // cm^{-6}
            * N_Z                                                  // cm^{-3}
            * std::pow(n, 4.0)                                     // 1
            * Gamma(Z, n)                                          // 1
            / (std::pow((k_B * T_e) / Ry, 2.0) * std::pow(Z, 2.0)) // 1
          ;
        },
        x(Z, n) < 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_TBR(L(s) + K(s), j + K(s)) = C_TBR_Nj(Z(s), n);
    }
  }

  Eigen::MatrixXd R_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_TBR = C_TBR / N_e;

  return R_TBR;
}


}