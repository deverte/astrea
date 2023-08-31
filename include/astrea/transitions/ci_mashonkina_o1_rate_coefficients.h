/**
 * \file astrea/transitions/ci_mashonkina_o1_rate_coefficiets.h
 * Collisional ionization rates for electrically neutral oxygen using Mashonkina
 * data (with photoionization cross sections).
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
 * Collisional ionization rates for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 * 
 * \param elements Elements.
 * \param temperature Temperature in K.
 * \return Transitions rate coefficients in s-1 cm3.
 */
inline Eigen::MatrixXd ci_mashonkina_o1_rate_coefficients(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature
) {
  const auto alpha_1 = 0.00010247381912176111; // m-1 K1/2 s
  const auto alpha_2 = 687.3896212469167; // m-2 s
  const auto alpha_3 = 1.0e2; // cm?
  const auto beta = 3.2989498784730946e-08; // m-2 K s2

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

  auto q = TransitionsTensor(ea); // s-1 cm3 ???
  for (int z = 0; z <  ea.Z() - 1; z++) {
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

        q(z, i, ea.k(z)) += alpha_3 * (d_q_a + d_q_b) / 2.0 * d_v; // s-1 cm3
      }
    }
  }

  return q.matrix();
}


}