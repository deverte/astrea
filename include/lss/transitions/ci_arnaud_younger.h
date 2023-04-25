/**
 * \file lss/transitions/ci_arnaud_younger.h
 * Collisional ionization transitions rates using Younger formula and Arnaud
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <limits>
#include <memory>
#include <vector>

#include <boost/math/quadrature/trapezoidal.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/ci_arnaud.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Collisional ionization transitions rates using Younger formula
 * (doi-10.1016%2F0022-4073(81)90127-8) and Arnaud data
 * (bibcode-1985A&AS...60..425A).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
Eigen::MatrixXd ci_arnaud_younger_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  auto infty = std::numeric_limits<double>::infinity();
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI;

  auto& n_e = electron_number_density; // cm^{-3}
  auto n_a = 1.0; // ?
  auto& T_e = electron_temperature; // K
  auto Z = elements[0]->atomic_number(); // 1
  auto zeta = 6.69e-7; // eV^{-1/2} * cm * s^{-1}

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

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

  Eigen::MatrixXd C_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    std::vector<CIArnaudFit> subshells;
    for (auto fit : CIArnaud::fit()) {
      if (fit.Z == Z && fit.N == Z - s) {
        subshells.push_back(fit);
      }
    }
    auto M = subshells.size(); // 1

    Eigen::VectorXd A(M); // cm^2 * eV^2
    Eigen::VectorXd B(M); // cm^2 * eV^2
    Eigen::VectorXd C(M); // cm^2 * eV^2
    Eigen::VectorXd D(M); // cm^2 * eV^2
    Eigen::VectorXd F(M); // cm^2 * eV^2
    Eigen::VectorXd I(M); // eV
    Eigen::VectorXd x(M); // 1
    for (int m = 0; m <= M - 1; m++) {
      A(m) = subshells[m].A * 1.0e-14;
      B(m) = subshells[m].B * 1.0e-14;
      C(m) = subshells[m].C * 1.0e-14;
      D(m) = subshells[m].D * 1.0e-14;
      I(m) = subshells[m].E * 1.0e-14;
      x(m) = I(m) / (k_B * T_e); // 1
      F(m) = // cm^2 * eV^2
        + A(m) * (1.0 - x(m) * f_1(x(m)))                       // cm^2 * eV^2
        + B(m) * (1.0 + x(m) - x(m) * (2.0 + x(m)) * f_1(x(m))) // cm^2 * eV^2
        + C(m) * f_1(x(m))                                      // cm^2 * eV^2
        + D(m) * x(m) * f_2(x(m))                               // cm^2 * eV^2
      ;
    }

    for (int i = 0; i <= L(s) - 1; i++) {
      C_CI(i + K(s), L(s) + K(s)) = // cm^3 * s^{-1}
        + zeta / std::pow(k_B * T_e, 3.0 / 2.0) // eV^{-2} * cm * s^{-1}
        * fm::sum(0, M - 1, [&](int m) {        // cm^2 * eV^2
          return
            + std::exp(-x(m)) / x(m) // 1
            * F(m)                   // cm^2 eV^2
          ;
        })
      ;
    }
  }

  Eigen::MatrixXd R_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CI = n_e * n_a * C_CI;

  return R_CI;
}


}