/**
 * \file astrea/transitions/ctr_arnaud.h
 * Charge transfer recombination transitions rates using Arnaud formula and
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/ctr_arnaud.h"
#include "../units/units.h"


namespace astrea {


/**
 * Charge transfer recombination transitions rates using Arnaud formula and data
 * (bibcode-1985A&AS...60..425A).
 * 
 * \param elements Elements.
 * \param ionizing_element Ionizing element.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd ctr_arnaud_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Element> ionizing_element,
  double temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;

  auto ctr_arnaud = CTRArnaud();

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto s_B = ionizing_element->ionization_stage();
  auto T = temperature * kelvin;
  auto T_4 = T / (1.0e4 * kelvin);
  auto Z_A = elements[0]->atomic_number();
  auto Z_B = ionizing_element->atomic_number();

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::MatrixXd R_CTR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  Eigen::MatrixXd C_CTR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    auto a = 0.0 * pow<3>(centimeter) * pow<-1>(second);
    auto b = 0.0;
    auto c = 0.0;
    auto d = 0.0;
    auto T_max = 0.0 * kelvin;
    auto T_min = 0.0 * kelvin;
    for (auto fit : ctr_arnaud.fit()) {
      if (
        fit.atomic_number == Z_A &&
        fit.ionization_stage == s &&
        fit.ionizing_element_atomic_number == Z_B,
        fit.ionizing_element_ionization_stage == s_B
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
        d = fit.d;

        break;
      }
    }
    if (T < T_min || T > T_max) {
      return R_CTR;
    }

    auto C_CTR_Nj =
      a * std::pow(T_4, b) * (1.0 + c * std::exp(d * T_4))
    ;

    for (int j = 0; j <= L(s) - 1; j++) {
      C_CTR(L(s) + K(s), j + K(s)) =
        + C_CTR_Nj
        / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }
  }

  R_CTR = (N_e / pow<-3>(centimeter)) * C_CTR;

  return R_CTR;
}


}