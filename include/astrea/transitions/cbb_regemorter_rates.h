/**
 * \file astrea/transitions/cbb_regemorter_rates.h
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
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
  const double electron_temperature,
  const double electron_number_density
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

  // effective electron collision strength
  const auto gamma = [](int i, int j) { return 1.0; };

  const auto zeta =
    + 8.62913210858377e-6
    * pow<3>(centimeter)
    * pow<-1>(second)
    * pow<static_rational<1, 2>>(kelvin)
  ;

  const auto N_e = electron_number_density * pow<-3>(centimeter);

  const auto T = temperature * kelvin;

  const auto T_e = electron_temperature * kelvin;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) -> int {
    return fm::sum<int>(0, z - 1, [&](int z_) -> int { return k(z_); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E_v(K(Z));
  const auto E = [&](int z) {
    return [&, z](int i) -> quantity<energy>& { return E_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      E(z)(i) = elements[z]->levels()[i].energy * electronvolt;
    });
  });

  Eigen::VectorXd g_v(K(Z));
  const auto g = [&](int z) {
    return [&, z](int i) -> double& { return g_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      g(z)(i) = elements[z]->levels()[i].statistical_weight;
    });
  });

  Eigen::MatrixXd q_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto q_u = pow<3>(centimeter) * pow<-1>(second);
  const auto q = [&](int z) {
    return [&, z](int i, int j) -> double& { return q_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      fm::family(i + 1, k(z) - 1, [&, z, i](int j) {
        q(z)(i, j) =
          + zeta
          * pow<static_rational<-1, 2>>(T_e)
          * gamma(i, j) / g(z)(i)
          * std::exp(-(E(z)(j) - E(z)(i)) / (k_B * T))
          / q_u
        ;

        q(z)(j, i) =
          + zeta
          * pow<static_rational<-1, 2>>(T_e)
          * gamma(i, j) / g(z)(j)
          / q_u
        ;
      });
    });
  });

  const auto C_u = pow<-1>(second);
  Eigen::MatrixXd C_v = N_e * q_u / C_u * q_v;

  return C_v;
}


}