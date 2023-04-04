#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
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
  std::shared_ptr<Element> element,
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto Ry = RYDBERG_ENERGY; // eV

  auto Gamma = [](double Z, double n) { return 1.0; }; // 1, TODO: calculate Gaunt factor
  auto n = element->atomic_number(); // 1
  auto& N_e = electron_number_density; // cm^{-3}
  auto& N_Z = N_e; // cm^{-3}
  auto& T_e = electron_temperature; // K
  auto Z = n - element->ionization_stage(); // 1

  auto I = [&](double Z, double n) { // eV
    return std::pow(Z, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double n) { return I(Z, n) / (k_B * T_e); }; // 1

  auto C_TBR_Nj = [&](double Z, double n) { // cm^{-3} * s^{-1}
    return fm::cases({
      {
        (
          + 7.2e-32                                             // cm^6 * s^{-1}
          * std::pow(N_e, 2.0)                                  // cm^{-6}
          * N_Z                                                 // cm^{-3}
          * std::pow(n, 6.0)                                    // 1
          * Gamma(Z, n) / (std::pow(Z, 4.0) * (k_B * T_e) / Ry) // 1
        ),
        x(n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        (
          + 7.2e-32                                             // cm^6 * s^{-1}
          * std::pow(N_e, 2.0)                                   // cm^{-6}
          * N_Z                                                  // cm^{-3}
          * std::pow(n, 4.0)                                     // 1
          * Gamma(Z, n)                                          // 1
          / (std::pow((k_B * T_e) / Ry, 2.0) * std::pow(Z, 2.0)) // 1
        ),
        x(n) < 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_TBR = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_recombination(initial, final)) {
        C_TBR(i, j) = C_TBR_Nj(Z, n);
      }
    }
  }

  Eigen::MatrixXd R_TBR = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  R_TBR = C_TBR / N_e;

  return R_TBR;
}


}