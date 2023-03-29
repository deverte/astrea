#pragma once


#include <cmath>
#include <float.h>
#include <memory>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/ci_arnaud.h"
#include "../data/element.h"


namespace nlte {


/**
 * Collisional ionization (Arnaud formula)
 */
Eigen::MatrixXd ci_arnaud_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::MatrixXd C_DI = // cm^3 * s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI;
  auto infty = FLT_MAX;
  auto delta_E = FLT_EPSILON;
  auto& T = temperature; // K
  auto& n_e = electron_number_density; // cm^{-3}
  auto Z = element->atomic_number(); // 1
  auto N = element->number_of_ion_electrons_before_recombination(); // 1

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (final.term == initial.limit_term) {
        auto sum = 0.0;
        for (int k = 0; k < klim; k++) {
          auto f_1 = 0.0;
          for (int t = 1; t < infty; t += dt) {
            f_1 += dt / t * std::exp(-t * x[j]);
          }
          f_1 *= std::exp(x[j]);

          auto F = A * (1.0 - x[j] * f_1)

          sum += std::exp(-x[j]) / x[j] * 
        }

        C_DI(i, j) = 6.69e-7 / std::pow(k_B * T, 3.0 / 2.0) * ;
      }
    }
  }

  P = n_e * n_a * C_DI;

  return P;
};


}