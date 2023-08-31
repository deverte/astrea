/**
 * \file astrea/transitions/rr_mashonkina_o1_rate_coefficients.h
 * Radiative recombination transitions rate coefficients using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"
#include "../data/transitions/rbf_mashonkina_o1.h"
#include "../data/transitions/transitions_tensor.h"


namespace astrea {


/**
 * Radiative recombination transitions rate coefficients using Mashonkina data.
 * 
 * \param elements Elements.
 * \param temperature Temperature in K.
 * \return Rate coefficients in cm3 s-1.
 */
inline Eigen::MatrixXd rr_mashonkina_o1_rate_coefficients(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature
) {
  const auto alpha_1 = 2.225300112107237e-21; // cm-2 s2
  const auto alpha_2 = 2.0706651010884884e-16; // K3/2 cm3
  const auto beta = 4.799243041042782e-11; // s K
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();
  const auto infty = rbf_mashonkina_o1.max_frequency(); // s-1
  const auto nu_0 = rbf_mashonkina_o1.min_frequency(); // s-1
  const auto number_of_points_per_transition = 1.0e3;
  const auto d_nu = (infty - nu_0) / number_of_points_per_transition; // s-1

  const auto ea = ElementsAdapter(elements);
  const auto& T = temperature; // K

  auto R = TransitionsTensor(ea); // s-1
  for (int z = 0; z < ea.Z() - 1; z++) {
    for (int i = 0; i < ea.k(z); i++) {
      // integration using trapezoidal rule
      for (double nu = nu_0; nu < infty - d_nu; nu += d_nu) {
        const auto& nu_a = nu; // s-1
        const auto nu_b = nu + d_nu; // s-1

        const auto sigma_a = rbf_mashonkina_o1.rbf_cross_section( // cm2
          ea.term(z, i),
          nu_a
        );
        const auto sigma_b = rbf_mashonkina_o1.rbf_cross_section( // cm2
          ea.term(z, i),
          nu_b
        );

        const auto C_a = // cm2 s-2
          sigma_a * std::pow(nu_a, 2.0) * std::exp(-beta * nu_a / T)
        ;
        const auto C_b = // cm2 s-2
          sigma_b * std::pow(nu_b, 2.0) * std::exp(-beta * nu_b / T)
        ;

        R(z, i, ea.k(z)) += alpha_1 * (C_a + C_b) / 2.0 * d_nu;
      }
    }
  }

  // Saha Equation
  Eigen::VectorXd Phi(ea.Z() - 1); // cm3
  for (int z = 0; z < ea.Z() - 1; z++) {
    auto numerator = 0.0; // 1
    for (int i = 0; i < ea.k(z); i++) {
      numerator += ea.g(z, i) * std::exp(-ea.E(z, i) / (k_B * T));
    }

    auto denomenator = 0.0; // 1
    for (int i = 0; i < ea.k(z + 1); i++) {
      denomenator += ea.g(z + 1, i) * std::exp(-ea.E(z + 1, i) / (k_B * T));
    }

    Phi(z) =
      + numerator / denomenator
      * alpha_2 * std::pow(T, -3.0 / 2.0)
      * std::exp(ea.I(z, 0) / (k_B * T))
    ;
  }

  auto alpha_RR = TransitionsTensor(ea); // cm3 s-1
  for (int z = 0; z < ea.Z() - 1; z++) {
    for (int i = 0; i < ea.k(z); i++) {
      alpha_RR(z, ea.k(z), i) = Phi(i + ea.K(z)) * R(z, ea.k(z), i);
    }
  }

  return alpha_RR.matrix();
}


}