/**
 * \file lss/calculation/lte.h
 * LTE electrons population calculation.
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
 * Calculates LTE electrons population using Boltzmann distribution.
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd lte_boltzmann_population(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& T = temperature; // K

  int S = elements.size();
  Eigen::VectorXd L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  // Boltzmann distribution
  Eigen::VectorXd n(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      n(i + K(s)) = // 1
        + g(i + K(s))                        // 1
        * std::exp(-E(i + K(s)) / (k_B * T)) // 1
        / fm::sum(0, L(s) - 1, [&](int j) {  // 1
          return g(j + K(s)) * std::exp(-E(j + K(s)) / (k_B * T)); // 1
        })
        * 1.0                                // 1
      ;
    }
  }

  return n;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution and Saha
 * ionization equation.
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd lte_boltzmann_saha_population(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_temperature,
  double electron_number_density
) {
  auto& h = PLANCK_CONSTANT; // eV * s
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& m_e = ELECTRON_MASS; // cm^{-2} * eV * s^2
  auto& pi = PI; // 1

  auto& N_e = electron_number_density; // cm^{-3}
  auto& T = temperature; // K
  auto& T_e = electron_temperature; // K

  int S = elements.size();
  Eigen::VectorXd L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::VectorXd I(S); // eV
  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    I(s) = elements[s]->levels()[0].ionization_energy;
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  auto tilde_lambda = // cm
    std::sqrt(std::pow(h, 2.0) / (2.0 * pi * m_e * k_B * T_e))
  ;

  // Saha Equation
  Eigen::VectorXd N(S); // 1
  Eigen::VectorXd r(S - 1); // 1
  for (int s = 0; s <= S - 2; s++) {
    r(s) =
      + N_e                                    // cm^{-3}
      * fm::sum(0, L(s) - 1, [&](auto i) {     // 1
        return g(i + K(s)) * std::exp(-E(i + K(s)) / (k_B * T)); // 1
      })
      / fm::sum(0, L(s + 1) - 1, [&](auto i) { // 1
        return
          + g(i + K(s))                        // 1
          * std::exp(-E(i + K(s)) / (k_B * T)) // 1
        ;
      })
      * std::pow(tilde_lambda, 3.0) / 2.0      // cm^3
      * std::exp(I(s) / (k_B * T_e))           // 1
    ;
  }
  for (int s = 0; s <= S - 1; s++) {
    N(s) =
      + fm::prod(s, S - 2, [&](auto i) { return r(i); })
      / fm::sum(0, S - 1, [&](auto k) {
        return fm::prod(k, S - 2, [&](auto i) { return r(i);});
      })
    ;
  }

  // Boltzmann distribution
  Eigen::VectorXd n(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      n(i + K(s)) = // 1
        + g(i + K(s))                        // 1
        * std::exp(-E(i + K(s)) / (k_B * T)) // 1
        / fm::sum(0, L(s) - 1, [&](int j) {  // 1
          return g(j + K(s)) * std::exp(-E(j + K(s)) / (k_B * T)); // 1
        })
        * N(s)                               // 1
      ;
    }
  }

  return n;
}


}