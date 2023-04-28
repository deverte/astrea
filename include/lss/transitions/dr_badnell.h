/**
 * \file lss/transitions/dr_badnell.h
 * Dielectronic recombination transitions rates using Badnell formula and data.
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
#include "../data/transitions/dr_badnell.h"
#include "../physics/units.h"


namespace lss {


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
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::static_rational;
  using lss::units::centimeter;

  auto dr_badnell = DRBadnell();

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;
  auto Z = elements[0]->atomic_number();

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::MatrixXd C_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
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

    auto C_DR_Nj = fm::sum<double>(0, M - 1, [&](int i) { // cm^3 * s^{-1}
      return
        + std::pow(T / kelvin, -3.0 / 2.0) * pow<static_rational<-3, 2>>(kelvin)
        * C[i]
        * pow<3>(centimeter)
        * pow<-1>(second)
        * pow<static_rational<3, 2>>(kelvin)
        * std::exp(-E[i] * kelvin / T)
        / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }) * pow<3>(centimeter) * pow<-1>(second);

    for (int j = 0; j <= L(s) - 1; j++) {
      C_DR(L(s) + K(s), j + K(s)) =
        C_DR_Nj / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }
  }

  Eigen::MatrixXd R_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_DR = (N_e / pow<-3>(centimeter)) * C_DR;

  return R_DR;
}


}