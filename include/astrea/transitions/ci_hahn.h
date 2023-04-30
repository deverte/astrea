/**
 * \file astrea/transitions/ci_hahn.h
 * Collisional ionization transitions rates using Hahn formula.
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
 * Collisional ionization transitions rates using Hahn formula
 * (doi-10.1016%2FS0375-9601(97)00287-9).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd ci_hahn_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::Ry;
  using astrea::units::si::transition_rate_coefficient;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  auto Gamma = [](double Z, double n) { return 1.0; }; // TODO: Gaunt factor
  auto n = elements[0]->atomic_number();
  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto N_Z = N_e;
  auto T_e = electron_temperature * kelvin;
  auto zeta = 2.2e-8 * pow<9>(centimeter) * pow<-1>(second);

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto I = [&](double s, double n) {
    return std::pow(s, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double s, double n) { return I(s, n) / (k_B * T_e); };

  auto C_CI_ij = [&](double s, double n) {
    return fm::cases<quantity<transition_rate_coefficient>>({
      {
        [&]() {
          return
            + zeta
            * N_e
            * N_Z
            * std::pow(k_B * T_e / Ry, 1.0 / 2.0)
            * std::pow(n, 4.0)
            * std::exp(-x(s, n))
            * Gamma(s, n) / std::pow(s, 4.0)
          ;
        },
        x(s, n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        [&]() {
          return
            + zeta
            * N_e
            * N_Z
            * std::pow(n, 2.0)
            * std::exp(-x(s, n))
            * Gamma(s, n)
            / (std::pow(s, 2.0) * std::pow(k_B * T_e / Ry, 1.0 / 2.0))
          ;
        },
        x(s, n) >= 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      C_CI(i + K(s), L(s) + K(s)) =
        C_CI_ij(s, n) / (pow<3>(centimeter) * pow<-1>(second))
      ;
    }
  }

  Eigen::MatrixXd R_CI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CI = C_CI * (N_e / pow<-3>(centimeter));

  return R_CI;
}


}