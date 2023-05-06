/**
 * \file astrea/transitions/tbr_hahn.h
 * Three-body recombination transitions rates using Hahn formula.
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
 * Three-body recombination transitions rates using Hahn formula
 * (doi-10.1016%2FS0375-9601(97)00287-9).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd tbr_hahn_rates(
  std::vector<std::shared_ptr<Element>> elements,
  double electron_temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::Ry;
  using astrea::units::si::transition_rate_coefficient;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  // TODO: calculate Gaunt factor
  auto Gamma = [](double Z, double n) { return 1.0; };
  auto n = elements[0]->atomic_number();
  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto N_s = N_e; // TODO: different number
  auto T_e = electron_temperature * kelvin;
  auto zeta = 7.2e-32 * pow<12>(centimeter) * pow<-1>(second);

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto I = [&](double s, double n) {
    return std::pow(s, 2.0) / std::pow(n, 2.0) * Ry;
  };

  auto x = [&](double s, double n) { return I(s, n) / (k_B * T_e); };

  auto C_TBR_Nj = [&](double s, double n) {
    return fm::cases<quantity<transition_rate_coefficient>>({
      {
        [&]() {
          return
            + zeta
            * pow<2>(N_e)
            * N_s
            * std::pow(n, 6.0)
            * Gamma(s, n) / (std::pow(s, 4.0) * (k_B * T_e) / Ry)
          ;
        },
        x(s, n) >= 1.0 /* && T <= 1.0e4 */
      },
      {
        [&]() {
          return
            + zeta
            * pow<2>(N_e)
            * N_s
            * std::pow(n, 4.0)
            * Gamma(s, n)
            / (std::pow((k_B * T_e) / Ry, 2.0) * std::pow(s, 2.0))
          ;
        },
        x(s, n) < 1.0 /* && T > 1.0e4 */
      },
    });
  };

  std::pair<Eigen::MatrixXd, quantity<transition_rate_coefficient>> C_TBR;
  C_TBR.first = Eigen::MatrixXd::Zero(K(S), K(S));
  C_TBR.second = pow<3>(centimeter) * pow<-1>(second);
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_TBR.first(L(s) + K(s), j + K(s)) = C_TBR_Nj(s, n) / C_TBR.second;
    }
  }

  std::pair<Eigen::MatrixXd, frequency> R_TBR;
  R_TBR.second = pow<-1>(second);
  R_TBR.first = N_e * C_TBR.second / R_TBR.second * C_TBR.first;

  return R_TBR.first;
}


}