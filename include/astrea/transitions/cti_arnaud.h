/**
 * \file astrea/transitions/cti_arnaud.h
 * Charge transfer ionization transitions rates using Arnaud formula and data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/cti_arnaud.h"
#include "../units/units.h"


namespace astrea {


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
  using astrea::units::si::centimeter;
  using astrea::units::si::electronvolt;
  using astrea::units::si::transition_rate_coefficient;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  auto cti_arnaud = CTIArnaud();

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto s_B = recombining_element->ionization_stage();
  auto T = temperature * kelvin;
  auto T_4 = T / (1.0e4 * kelvin);
  auto Z_A = elements[0]->atomic_number();
  auto Z_B = recombining_element->atomic_number();

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::MatrixXd C_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    auto a = 0.0 * pow<3>(centimeter) * pow<-1>(second);
    auto b = 0.0;
    auto c = 0.0;
    auto delta_E = 0.0 * electronvolt;
    auto T_max = 0.0 * kelvin;
    auto T_min = 0.0 * kelvin;
    for (auto fit : cti_arnaud.fit()) {
      if (
        fit.atomic_number == Z_A &&
        fit.ionization_stage == s &&
        fit.recombining_element_atomic_number == Z_B &&
        fit.recombining_element_ionization_stage == s_B
      ) {
        if (fit.temperatures_range.size() == 1) {
          T_min =
            + (fit.temperatures_range[0] - std::sqrt(fit.temperatures_range[0]))
            * kelvin
          ;
          T_max =
            + (fit.temperatures_range[0] + std::sqrt(fit.temperatures_range[0]))
            * kelvin
          ;
        }
        else if (fit.temperatures_range.size() == 2) {
          T_min = fit.temperatures_range[0] * kelvin;
          T_max = fit.temperatures_range[1] * kelvin;
        }

        a = fit.a * 1.0e-9 * pow<3>(centimeter) * pow<-1>(second);
        b = fit.b;
        c = fit.c;
        delta_E = fit.delta_E * electronvolt;

        break;
      }
    }

    auto C_CTI_iN = fm::cases<quantity<transition_rate_coefficient>>({
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
      C_CTI(i + K(s), L(s) + K(s)) =
        + C_CTI_iN
        / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }
  }

  Eigen::MatrixXd R_CTI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CTI = (N_e / pow<-3>(centimeter)) * C_CTI;

  return R_CTI;
}


}