/**
 * \file astrea/transitions/dr_badnell.h
 * Dielectronic recombination transitions rates using Badnell formula and data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <utility>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/dr_badnell.h"
#include "../units/units.h"


namespace astrea {


/**
 * Dielectronic recombination transitions rates using Badnell formula and data
 * (doi-10.1086%2F508465).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd dr_badnell_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::transition_rate_coefficient;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  auto dr_badnell = DRBadnell();

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;
  auto Z = elements[0]->atomic_number();

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  std::pair<Eigen::MatrixXd, quantity<transition_rate_coefficient>> C_DR;
  C_DR.first = Eigen::MatrixXd::Zero(K(S), K(S));
  C_DR.second = pow<3>(centimeter) * pow<-1>(second);
  for (int s = 0; s <= S - 2; s++) {
    std::vector<double> C; // cm^3 * s^{-1} * K^{3/2}
    std::vector<double> E; // K
    for (auto fit : dr_badnell.fit()) {
      if (fit.Z == Z && fit.N == Z - s - 1.0) {
        C = fit.C;
        E = fit.E;

        break;
      }
    }
    auto M = C.size();

    auto C_DR_Nj = fm::sum<quantity<transition_rate_coefficient>>(
      0,
      M - 1,
      [&](int i) {
        return
          + pow<static_rational<-3, 2>>(T)
          * (
            + C[i]
            * pow<3>(centimeter)
            * pow<-1>(second)
            * pow<static_rational<3, 2>>(kelvin)
          )
          * std::exp(-(E[i] * kelvin) / T)
        ;
      }
    );

    for (int j = 0; j <= L(s) - 1; j++) {
      C_DR.first(L(s) + K(s), j + K(s)) = C_DR_Nj / C_DR.second;
    }
  }

  std::pair<Eigen::MatrixXd, frequency> R_DR;
  R_DR.second = pow<-1>(second);
  R_DR.first = N_e * C_DR.second / R_DR.second * C_DR.first;

  return R_DR.first;
}


}