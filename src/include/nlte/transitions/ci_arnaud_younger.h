#pragma once


#include <cmath>
#include <limits>
#include <memory>
#include <vector>

#include <boost/math/quadrature/trapezoidal.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/ci_arnaud.h"
#include "../physics/constants.h"


namespace nlte {


/**
 * Collisional ionization
 * 
 * A^{i+} + e^- \rightarrow A^{(i + 1)+} + 2 e^- - \Delta E_{A^{i+}}
 * 
 * formula: doi-10.1016%2F0022-4073(81)90127-8 (Younger 1981)
 * data: bibcode-1985A&AS...60..425A (Arnaud 1985)
 * inverse process: three-body-recombination
 * A^{(i + 1)+} + 2 e^- \rightarrow A^{i+} + e^-
 */
Eigen::MatrixXd ci_arnaud_younger_rates(
  std::shared_ptr<Element> element,
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto infty = std::numeric_limits<double>::infinity();
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI;

  auto N = element->ionization_stage(); // 1
  auto& n_e = electron_number_density; // cm^{-3}
  auto n_a = 1.0; // ?
  auto& T = temperature; // K
  auto Z = element->atomic_number(); // 1

  std::vector<CIArnaudFit> subshells;
  for (auto fit : CIArnaud::fit()) {
    if (fit.Z == Z && fit.N == Z - N) {
      subshells.push_back(fit);
    }
  }
  auto k_max = subshells.size(); // 1

  auto f_1 = [&](double x /* 1 */) { // 1
    return
      + std::exp(x)                           // 1
      * boost::math::quadrature::trapezoidal( // 1
        [&](double t /* 1 */) { // 1
          return 1.0 / t * std::exp(-t * x) /* * dt */;
        },
        1.0,
        infty
      )
    ;
  };

  auto f_2 = [&](double x /* 1 */) { // 1
    return
      + std::exp(x)                           // 1
      * boost::math::quadrature::trapezoidal( // 1
        [&](double t /* 1 */) { // 1
          return 1.0 / t * std::exp(-t * x) * std::log(t) /* * dt */;
        },
        1.0,
        infty
      )
    ;
  };

  Eigen::VectorXd A(k_max); // 1
  Eigen::VectorXd B(k_max); // 1
  Eigen::VectorXd C(k_max); // 1
  Eigen::VectorXd D(k_max); // 1
  Eigen::VectorXd F(k_max); // 1
  Eigen::VectorXd I(k_max); // eV
  Eigen::VectorXd x(k_max); // 1
  for (int k = 0; k < k_max; k++) {
    A(k) = subshells[k].A;
    B(k) = subshells[k].B;
    C(k) = subshells[k].C;
    D(k) = subshells[k].D;
    I(k) = subshells[k].E;
    x(k) = I(k) / (k_B * T); // 1
    F(k) = // 1
      + A(k) * (1.0 - x(k) * f_1(x(k)))                       // 1
      + B(k) * (1.0 + x(k) - x(k) * (2.0 + x(k)) * f_1(x(k))) // 1
      + C(k) * f_1(x(k))                                      // 1
      + D(k) * x(k) * f_2(x(k))                               // 1
    ;
  }

  Eigen::MatrixXd C_DI = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];

      if (is_ionization(initial, final)) {
        auto constant = 6.69e-7; // eV^{3/2} * cm^3 * s^{-1}

        C_DI(i, j) =
          + constant / std::pow(k_B * T, 3.0 / 2.0) // cm^3 * s^{-1} // or k * T^{3/2} ?
          * fm::sum(0, k_max, [&](int k) {       // 1
            return
              + std::exp(-x(k)) / x(k) // 1
              * F(k)                   // 1
            ;
          })
        ;
      }
    }
  }

  Eigen::MatrixXd P = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  P = n_e * n_a * C_DI;

  return P;
}


}