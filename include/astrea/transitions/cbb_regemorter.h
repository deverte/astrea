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
#include <utility>
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
  using boost::units::si::energy;
  using boost::units::si::frequency;
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
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      E(i + K(s)) = elements[s]->levels()[i].energy * electronvolt;
    });
  });
  Eigen::VectorXd g(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    });
  });

  std::pair<Eigen::MatrixXd, quantity<transition_rate_coefficient>> C_CBB;
  C_CBB.first = Eigen::MatrixXd::Zero(K(S), K(S));
  C_CBB.second = pow<3>(centimeter) * pow<-1>(second);
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      fm::family(0, L(s) - 1, [&](int j) {
        C_CBB.first(i + K(s), j + K(s)) =
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
                    - (E(j + K(s)) - E(i + K(s)))
                    / (k_B * T)
                  )
                ;
              },
              E(i + K(s)) < E(j + K(s))
            },
            {[]() { return 0.0 * pow<3>(centimeter) * pow<-1>(second); }, true},
          }) / C_CBB.second
        ;
      });
    });
  });

  std::pair<Eigen::MatrixXd, frequency> R_CBB;
  R_CBB.second = pow<-1>(second);
  R_CBB.first = N_e * C_CBB.second / R_CBB.second * C_CBB.first;

  return R_CBB.first;
}


}