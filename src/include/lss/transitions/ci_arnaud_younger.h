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


namespace lss {


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
  double electron_temperature /* K */,
  double electron_number_density /* cm^{-3} */
) {
  auto infty = std::numeric_limits<double>::infinity();
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI;

  auto N = element->ionization_stage(); // 1
  auto& n_e = electron_number_density; // cm^{-3}
  auto n_a = 1.0; // ?
  auto& T_e = electron_temperature; // K
  auto Z = element->atomic_number(); // 1

  std::vector<CIArnaudFit> subshells;
  for (auto fit : CIArnaud::fit()) {
    if (fit.Z == Z && fit.N == Z - N) {
      subshells.push_back(fit);
    }
  }
  auto K = subshells.size(); // 1

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

  Eigen::VectorXd A(K); // cm^2 * eV^2
  Eigen::VectorXd B(K); // cm^2 * eV^2
  Eigen::VectorXd C(K); // cm^2 * eV^2
  Eigen::VectorXd D(K); // cm^2 * eV^2
  Eigen::VectorXd F(K); // cm^2 * eV^2
  Eigen::VectorXd I(K); // eV
  Eigen::VectorXd x(K); // 1
  for (int k = 0; k < K; k++) {
    A(k) = subshells[k].A * 1.0e-14;
    B(k) = subshells[k].B * 1.0e-14;
    C(k) = subshells[k].C * 1.0e-14;
    D(k) = subshells[k].D * 1.0e-14;
    I(k) = subshells[k].E * 1.0e-14;
    x(k) = I(k) / (k_B * T_e); // 1
    F(k) = // cm^2 * eV^2
      + A(k) * (1.0 - x(k) * f_1(x(k)))                       // cm^2 * eV^2
      + B(k) * (1.0 + x(k) - x(k) * (2.0 + x(k)) * f_1(x(k))) // cm^2 * eV^2
      + C(k) * f_1(x(k))                                      // cm^2 * eV^2
      + D(k) * x(k) * f_2(x(k))                               // cm^2 * eV^2
    ;
  }

  Eigen::MatrixXd C_CI = // cm^3 * s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];

      if (is_ionization(initial, final)) {
        auto constant = 6.69e-7; // eV^{-1/2} * cm * s^{-1}

        C_CI(i, j) = // cm^3 * s^{-1}
          + constant / std::pow(k_B * T_e, 3.0 / 2.0) // eV^{-2} * cm * s^{-1}
          * fm::sum(0, K, [&](int k) {              // cm^2 * eV^2
            return
              + std::exp(-x(k)) / x(k) // 1
              * F(k)                   // cm^2 eV^2
            ;
          })
        ;
      }
    }
  }

  Eigen::MatrixXd R_CI = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  R_CI = n_e * n_a * C_CI;

  return R_CI;
}


}