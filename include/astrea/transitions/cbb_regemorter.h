/**
 * \file astrea/transitions/cbb_regemorter.h
 * Collisional bound-bound transitions rates using Regemorter formula.
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
#include "../units/units.h"


namespace astrea {


/**
 * Collisional bound-bound transitions rates using Regemorter formula
 * (doi-10.1086%2F147445).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd cbb_regemorter_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_temperature,
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
  using boost::units::static_rational;

  auto gamma_ij = 1.0; // effective electron collision strength
  auto zeta =
    + 8.62913210858377e-6
    * pow<3>(centimeter)
    * pow<-1>(second)
    * pow<static_rational<1, 2>>(kelvin)
  ;

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;
  auto T_e = electron_temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  Eigen::MatrixXd C_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      for (int j = 0; j <= L(s) - 1; j++) {
        C_CE_CD(i + K(s), j + K(s)) =
          fm::cases<quantity<transition_rate_coefficient>>({
            {
              [&]() {
                return
                  + zeta
                  * pow<static_rational<-1, 2>>(T_e)
                  * gamma_ij / g(i + K(s))
                ;
              },
              E(i + K(s)) > E(j + K(s))
            },
            {
              [&]() {
                return
                  + zeta
                  * pow<static_rational<-1, 2>>(T_e)
                  * gamma_ij / g(i + K(s))
                  * std::exp(
                    - (E(j + K(s)) * electronvolt - E(i + K(s)) * electronvolt)
                    / (k_B * T)
                  )
                ;
              },
              E(i + K(s)) < E(j + K(s))
            },
            {[]() { return 0.0 * pow<3>(centimeter) * pow<-1>(second); }, true},
          }) / (pow<3>(centimeter) * pow<-1>(second))
        ;
      }
    }
  }

  Eigen::MatrixXd R_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CE_CD = (N_e / pow<-3>(centimeter)) * C_CE_CD;

  return R_CE_CD;
}


}