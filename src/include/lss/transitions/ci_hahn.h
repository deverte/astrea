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
 * Collisional ionization
 * 
 * formula: doi-10.1016%2FS0375-9601(97)00287-9 (Hahn 1997)
 * inverse process: three-body recombination
 */
inline Eigen::MatrixXd ci_hahn_rates(
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

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto I = [&](double s, double n) { // eV
    return std::pow(s, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double s, double n) { return I(s, n) / (k_B * T_e); }; // 1

  auto C_CI_ij = [&](double s, double n) { // cm^{-3} * s^{-1}
    return fm::cases({
      {
        [&]() {
          return
            + 2.2e-8                              // cm^3 * s^{-1}
            * N_Z                                 // cm^{-3}
            * N_e                                 // cm^{-3}
            * std::pow(k_B * T_e / Ry, 1.0 / 2.0) // 1
            * std::pow(n, 4.0)                    // 1
            * std::exp(-x(s, n))                     // 1
            * Gamma(s, n) / std::pow(s, 4.0)      // 1
          ;
        },
        x(s, n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        [&]() {
          return
            + 2.2e-8                                              // cm^3 * s^{-1}
            * N_Z                                                      // cm^{-3}
            * N_e                                                      // cm^{-3}
            * std::pow(n, 2.0)                                         // 1
            * std::exp(-x(s, n))                                          // 1
            * Gamma(s, n)                                              // 1
            / (std::pow(s, 2.0) * std::pow(k_B * T_e / Ry, 1.0 / 2.0)) // 1
          ;
        },
        x(s, n) >= 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      C_CI(i + K(s), L(s) + K(s)) = C_CI_ij(s, n);
    }
  }

  Eigen::MatrixXd R_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CI = C_CI / N_e;

  return R_CI;
}


}