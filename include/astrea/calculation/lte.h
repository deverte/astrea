/**
 * \file astrea/calculation/lte.h
 * LTE electrons population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <stdexcept>
#include <vector>

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"


namespace astrea {


/**
 * Calculates LTE electrons population using Boltzmann distribution. Elements
 * population is set manually.
 * 
 * \param elements Elements.
 * \param elements_population Elements population in 1.
 * \param temperature Temperature in K.
 * \exception length_error \p elements and \p elements_population must have the
 * same size.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd lte_boltzmann_population(
  const std::vector<std::shared_ptr<Element>> elements,
  const Eigen::VectorXd elements_population,
  const double temperature
) {
  if (elements.size() != elements_population.size()) {
    throw std::length_error(
      "astrea::lte_boltzmann_population error: "
      "elements and elements_population must have the same size."
    );
  }

  const auto k_B = 8.617333262e-5; // eV K-1

  const auto ea = ElementsAdapter(elements);
  const auto& T = temperature; // K
  const auto& N_ = elements_population; // 1

  Eigen::VectorXd N = N_ / N_.sum();

  // Boltzmann distribution
  Eigen::VectorXd n(ea.K(ea.Z()));
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      auto sum_g_exp = 0.0;
      for (int j = 0; j < ea.k(z); j++) {
        sum_g_exp += ea.g(z, j) * std::exp(-ea.E(z, j) / (k_B * T));
      }

      n(i + ea.K(z)) =
        + ea.g(z, i)
        * std::exp(-ea.E(z, i) / (k_B * T))
        / sum_g_exp
        * N(z)
      ;
    }
  }

  return n;
}


/**
 * Calculates LTE electrons and elements population using Boltzmann distribution
 * and Saha ionization equation.
 * 
 * \param elements Elements.
 * \param temperature Temperature in K.
 * \param electron_number_density Electron number density in cm-3.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd lte_boltzmann_saha_population(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
  const double electron_number_density
) {
  const auto k_B = 8.617333262e-5; // eV K-1
  const auto gamma = 2.0706651010884884e-16; // K3/2 cm3

  const auto ea = ElementsAdapter(elements);
  const auto& N_e = electron_number_density; // cm-3
  const auto& T = temperature; // K

  // Saha Equation
  Eigen::VectorXd Phi(ea.Z() - 1); // cm3
  for (int z = 0; z < ea.Z() - 1; z++) {
    auto numerator = 0.0;
    for (int i = 0; i < ea.k(z); i++) {
      numerator += ea.g(z, i) * std::exp(-ea.E(z, i) / (k_B * T));
    }

    auto denomenator = 0.0;
    for (int i = 0; i < ea.k(z + 1); i++) {
      denomenator += ea.g(z + 1, i) * std::exp(-ea.E(z + 1, i) / (k_B * T));
    }

    Phi(z) =
      + numerator / denomenator
      * gamma * std::pow(T, -3.0 / 2.0)
      * std::exp(ea.I(z, 0) / (k_B * T))
    ;
  }

  Eigen::VectorXd N(ea.Z()); // 1
  for (int z = 0; z < ea.Z(); z++) {
    auto numerator = 1.0; // 1
    for (int i = z; i < ea.Z() - 1; i++) {
      numerator *= N_e * Phi(i);
    }

    auto denomenator = 0.0; // 1
    for (int k = 0; k < ea.Z(); k++) {
      auto product = 1.0; // 1
      for (int i = k; k < ea.Z() - 1; i++) {
        product *= N_e * Phi(i);
      }

      denomenator += product;
    }

    N(z) = numerator / denomenator;
  }

  // Boltzmann distribution
  Eigen::VectorXd n(ea.K(ea.Z()));
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      auto sum = 0.0; // 1
      for (int j = 0; j < ea.k(z); j++) {
        sum += ea.g(z, j) * std::exp(-ea.E(z, j) / (k_B * T));
      }

      n(i + ea.K(z)) =
        + ea.g(z, i)
        * std::exp(-ea.E(z, i) / (k_B * T)) / sum
        * N(z)
      ;
    }
  }

  return n;
}


}