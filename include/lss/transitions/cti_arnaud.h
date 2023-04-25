/**
 * \file lss/transitions/cti_arnaud.h
 * Charge transfer ionization transitions rates using Arnaud formula and data.
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
#include "../data/transitions/cti_arnaud.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Charge transfer ionization transitions rates using Arnaud formula and data
 * (bibcode-1985A&AS...60..425A).
 * 
 * \param elements Elements.
 * \param recombining_element Recombining element.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd cti_arnaud_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Element> recombining_element,
  double temperature,
  double electron_number_density
) {
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& N_e = electron_number_density; // cm^{-3}
  auto s_B = recombining_element->ionization_stage(); // 1
  auto& T = temperature; // K
  auto T_4 = T / 1.0e4; // 1
  auto Z_A = elements[0]->atomic_number(); // 1
  auto Z_B = recombining_element->atomic_number(); // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::MatrixXd C_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    auto a = 0.0; // cm^3 * s^{-1}
    auto b = 0.0; // 1
    auto c = 0.0; // 1
    auto delta_E = 0.0; // eV
    auto T_max = 0.0; // K
    auto T_min = 0.0; // K
    for (auto fit : CTIArnaud::fit()) {
      if (
        fit.atomic_number == Z_A &&
        fit.ionization_stage == s &&
        fit.recombining_element_atomic_number == Z_B &&
        fit.recombining_element_ionization_stage == s_B
      ) {
        if (fit.temperatures_range.size() == 1) {
          T_min =
          fit.temperatures_range[0] - std::sqrt(fit.temperatures_range[0]);
          T_max =
          fit.temperatures_range[0] + std::sqrt(fit.temperatures_range[0]);
        }
        else if (fit.temperatures_range.size() == 2) {
          T_min = fit.temperatures_range[0];
          T_max = fit.temperatures_range[1];
        }

        a = fit.a * 1.0e-9;
        b = fit.b;
        c = fit.c;
        delta_E = fit.delta_E;

        break;
      }
    }

    auto C_CTI_iN = fm::cases({ // cm^3 * s^{-1}
      {
        [&]() {
          return
            + a
            * std::exp(-delta_E / (k_B * T))
            * (1.0 - 0.93 * std::exp(-c * T_4))
          ;
        },
        (Z_A == 8.0) && (Z_B == 1.0)
      },
      {
        [&]() {
          return
            + a
            * std::pow(T_4, b)
            * std::exp(-c * T_4)
            * std::exp(-delta_E / (k_B * T))
          ;
        },
        true
      },
    });

    for (int i = 0; i <= L(s) - 1; i++) {
      C_CTI(i + K(s), L(s) + K(s)) = C_CTI_iN;
    }
  }

  Eigen::MatrixXd R_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CTI = N_e * C_CTI;

  return R_CTI;
}


}