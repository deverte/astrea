/**
 * \file astrea/transitions/tbr_mashonkina_o1_rate_coefficients.h
 * Collisional recombination (three-body recombination) rate coefficients for
 * electrically neutral oxygen using Mashonkina data (with photoionization cross
 * sections).
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
 * Collisional recombination (three-body recombination) rate coefficients for
 * electrically neutral oxygen using Mashonkina data (from private
 * communication).
 * 
 * \param elements Elements.
 * \param temperature Temperature in K.
 * \return Transitions rate coefficients in cm3 s-1.
 */
inline Eigen::MatrixXd cr_mashonkina_o1_rate_coefficients(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature
) {
  const auto alpha_1 = 0.00010247381912176111; // m-1 K1/2 s
  const auto alpha_2 = 687.3896212469167; // m-2 s
  const auto alpha_3 = 1.0e2; // cm?
  const auto alpha_4 = 2.0706651010884884e-16; // K3/2 cm3
  const auto beta = 3.2989498784730946e-08; // m-2 K s2
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto ea = ElementsAdapter(elements);

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();
  const auto infty = // m s-1
    std::pow(rbf_mashonkina_o1.max_frequency() / alpha_2, 1.0 / 2.0);
  ;
  const auto v_0 = // m s-1
    std::pow(rbf_mashonkina_o1.min_frequency() / alpha_2, 1.0 / 2.0);
  ;
  const auto number_of_points_per_transition = 1.0e3;
  const auto d_v = (infty - v_0) / number_of_points_per_transition; // m s-1

  const auto& T = temperature; // K

  auto C = TransitionsTensor(ea); // s-1 cm3
  for (int z = 0; z < ea.Z() - 1; z++) {
    for (int i = 0; i < ea.k(z); i++) {
      // integration using trapezoidal rule
      for (double v = v_0; v < infty - d_v; v += d_v) {
        const auto& v_a = v; // m s-1
        const auto v_b = v + d_v; // m s-1

        const auto f_a = // m-1 s
          + alpha_1 * std::pow(T, -1.0 / 2.0)
          * std::exp(-beta * std::pow(v_a, 2.0) / T)
        ;
        const auto f_b = // m-1 s
          + alpha_1 * std::pow(T, -1.0 / 2.0)
          * std::exp(-beta * std::pow(v_b, 2.0) / T)
        ;

        const auto sigma_a = rbf_mashonkina_o1.rbf_cross_section( // cm2
          elements[z]->levels()[i].term,
          alpha_2 * std::pow(v_a, 2.0)
        );
        const auto sigma_b = rbf_mashonkina_o1.rbf_cross_section( // cm2
          elements[z]->levels()[i].term,
          alpha_2 * std::pow(v_b, 2.0)
        );

        const auto d_q_a = sigma_a * v_a * f_a; // cm2
        const auto d_q_b = sigma_b * v_b * f_b; // cm2

        C(z, ea.k(z), i) += alpha_3 * (d_q_a + d_q_b) / 2.0 * d_v; // s-1 cm3
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
      * alpha_4 * std::pow(T, -3.0 / 2.0)
      * std::exp(ea.I(z, 0) / (k_B * T))
    ;
  }

  auto alpha_TBR = TransitionsTensor(ea); // cm3 s-1 ???
  for (int z = 0; z < ea.Z() - 1; z++) {
    for (int i = 0; i < ea.k(z); i++) {
      alpha_TBR(z, ea.k(z), i) = Phi(i + ea.K(z)) * C(z, ea.k(z), i);
    }
  }

  return alpha_TBR.matrix();
}


}