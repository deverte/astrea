/**
 * \file lss/transitions/tbr_hahn.h
 * Three-body recombination transitions rates using Hahn formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
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
 * Three-body recombination transitions rates using Hahn formula
 * (doi-10.1016%2FS0375-9601(97)00287-9).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd tbr_hahn_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  auto k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto Ry = RYDBERG_ENERGY; // eV

  // TODO: calculate Gaunt factor
  auto Gamma = [](double Z, double n) { return 1.0; }; // 1
  auto n = elements[0]->atomic_number(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& N_s = N_e; // cm^{-3} // TODO: different number
  auto& T_e = electron_temperature; // K
  auto zeta = 7.2e-32; // cm^6 * s^{-1}

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

  auto C_TBR_Nj = [&](double s, double n) { // cm^{-3} * s^{-1}
    return fm::cases({
      {
        [&]() {
          return
            + zeta                                              // cm^6 * s^{-1}
            * std::pow(N_e, 2.0)                                  // cm^{-6}
            * N_s                                                 // cm^{-3}
            * std::pow(n, 6.0)                                    // 1
            * Gamma(s, n) / (std::pow(s, 4.0) * (k_B * T_e) / Ry) // 1
          ;
        },
        x(s, n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        [&]() {
          return
            + zeta                                              // cm^6 * s^{-1}
            * std::pow(N_e, 2.0)                                   // cm^{-6}
            * N_s                                                  // cm^{-3}
            * std::pow(n, 4.0)                                     // 1
            * Gamma(s, n)                                          // 1
            / (std::pow((k_B * T_e) / Ry, 2.0) * std::pow(s, 2.0)) // 1
          ;
        },
        x(s, n) < 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_TBR(L(s) + K(s), j + K(s)) = C_TBR_Nj(s, n);
    }
  }

  Eigen::MatrixXd R_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_TBR = C_TBR / N_e;

  return R_TBR;
}


}