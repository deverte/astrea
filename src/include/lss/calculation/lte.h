#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


inline Eigen::VectorXd lte_population(
  std::shared_ptr<Element> element,
  double temperature, /* K */
  double electron_temperature, /* K */
  double electron_number_density /* cm^{-3} */
) {
  auto& h = PLANCK_CONSTANT; // eV * s
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  auto& pi = PI; // 1

  auto I_s = element->levels()[0].ionization_energy; // eV
  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto& T_e = electron_temperature; // K

  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  Eigen::VectorXd s(element->levels().size()); // 1
  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
    g(i) = element->levels()[i].statistical_weight;
    s(i) = element->levels()[i].ionization_stage;
  }
  auto N = E.size(); // 1

  auto lambda = // cm
    std::sqrt(std::pow(h, 2.0) / (2.0 * pi * m_e * k_B * T_e))
  ;

  auto N_s_N_s_plus_1 = // 1
    + N_e                                        // cm^{-3}
    * fm::sum(0, N - 1, [&](auto j) {            // 1
      return g(j) * std::exp(-E(j) / (k_B * T)); // 1
    })
    / fm::sum(N - 1, N, [&](auto j) {            // 1
      return g(j) * std::exp(-E(j) / (k_B * T)); // 1
    })
    * std::pow(lambda, 3.0) / 2.0                // cm^3
    * std::exp(I_s / (k_B * T_e))                // 1
  ;

  auto N_s = N_s_N_s_plus_1 / (1.0 + N_s_N_s_plus_1); // 1
  auto N_s_plus_1 = 1.0 / (1.0 + N_s_N_s_plus_1);     // 1

  Eigen::VectorXd n(element->levels().size()); // 1
  if (s.reverse()(0) == 0.0) {
    for (int i = 0; i < N; i++) {
      n(i) =
        + g(i)
        * std::exp(-E(i) / (k_B * T))
        / fm::sum(0, N, [&](int j) {
          return g(j) * std::exp(-E(j) / (k_B * T));
        })
      ;
    }
  }
  else if (s.reverse()(0) == 1.0) {
    for (int i = 0; i < N - 1; i++) {
      n(i) = // 1
        + g(i)                                       // 1
        * std::exp(-E(i) / (k_B * T))                // 1
        / fm::sum(0, N - 1, [&](int j) {             // 1
          return g(j) * std::exp(-E(j) / (k_B * T)); // 1
        })
        * N_s                                        // 1
      ;
    }
    for (int i = N - 1; i < N; i++) {
      n(i) = // 1
        + g(i)                                       // 1
        * std::exp(-E(i) / (k_B * T))                // 1
        / fm::sum(0, N - 1, [&](int j) {             // 1
          return g(j) * std::exp(-E(j) / (k_B * T)); // 1
        })
        * N_s_plus_1                                 // 1
      ;
    }
  }

  return n;
}


}