/**
 * \file lss/transitions/tbr_hahn.h
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
#include "../physics/units.h"


namespace lss {


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
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using boost::units::pow;
  using lss::units::centimeter;
  using lss::units::Ry;

  // TODO: calculate Gaunt factor
  auto Gamma = [](double Z, double n) { return 1.0; };
  auto n = elements[0]->atomic_number();
  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto N_s = N_e; // TODO: different number
  auto T_e = electron_temperature * kelvin;
  auto zeta = 7.2e-32 * pow<6>(centimeter) * pow<-1>(second);

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

  auto C_TBR_Nj = [&](double s, double n) {
    return fm::cases<double>({
      {
        [&]() {
          return
            + zeta
            * pow<2>(N_e)
            * N_s
            * std::pow(n, 6.0)
            * Gamma(s, n) / (std::pow(s, 4.0) * (k_B * T_e) / Ry)
            / (pow<-3>(centimeter) * pow<-1>(second))
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
            / (pow<-3>(centimeter) * pow<-1>(second))
          ;
        },
        x(s, n) < 1.0 /* && T > 1.0e4 */
      },
    });
  };

  Eigen::MatrixXd C_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      C_TBR(L(s) + K(s), j + K(s)) = C_TBR_Nj(s, n);
    }
  }

  Eigen::MatrixXd R_TBR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_TBR = C_TBR / (N_e / pow<-3>(centimeter));

  return R_TBR;
}


}