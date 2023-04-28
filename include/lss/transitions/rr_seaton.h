/**
 * \file lss/transitions/rr_seaton.h
 * Radiative recombination transitions rates using Seaton formula.
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
#include "../physics/units.h"


namespace lss {


/**
 * Radiative recombination transitions rates using Seaton formula
 * (doi-10.1093%2Fmnras%2F119.2.81).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
Eigen::MatrixXd rr_seaton_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using lss::units::centimeter;

  auto n_e = electron_number_density * pow<-3>(centimeter);
  auto T_e = electron_temperature * kelvin;
  auto Z = elements[0]->atomic_number();

  auto D = 5.197e-14 * pow<3>(centimeter) * pow<-1>(second);
  auto E = 0.4288;
  auto F = 0.5; // or 0.4 * log(lambda) ?
  auto G = 0.469;

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto lambda = (157890.0 * kelvin) * std::pow(Z, 2.0) / T_e;

  auto C_RR_Nj =
    + D
    * Z
    * std::pow(lambda, 1.0 / 2.0)
    * (
      + E
      + F * std::log(lambda)
      + G * std::pow(lambda, -1.0 / 3.0)
    )
  ;

  Eigen::MatrixXd C_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_RR(L(s) + K(s), j + K(s)) =
        C_RR_Nj / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }
  }

  Eigen::MatrixXd R_RR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_RR = (n_e / pow<-3>(centimeter)) * C_RR;

  return R_RR;
}


}