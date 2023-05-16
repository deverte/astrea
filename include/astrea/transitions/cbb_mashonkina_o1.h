/**
 * \file astrea/transitions/cbb_mashonkina_o1.h
 * Collisional bound-bound transitions rates for electrically neutral oxygen
 * using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/cbb_mashonkina_o1.h"
#include "../units/units.h"


namespace astrea {


/**
 * Collisional bound-bound transitions rates for electrically neutral oxygen
 * using Mashonkina data (from private communication).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd cbb_mashonkina_o1_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
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
  using temperature_ = boost::units::si::temperature;
  using boost::units::pow;
  using boost::units::quantity;

  const auto cbb_mashonkina_o1 = CBBMashonkinaO1();

  const auto N_e = electron_number_density * pow<-3>(centimeter);

  const auto T = temperature * kelvin;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [=](int z) -> int {
    return fm::sum<int>(0, z - 1, [=](int z_) -> int { return k(z_); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E_v(K(Z));
  const auto E = [&](int z) {
    return [&](int i) -> quantity<energy>& { return E_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      E(z)(i) = elements[z]->levels()[i].energy * electronvolt;
    });
  });

  Eigen::VectorXd g_v(K(Z));
  const auto g = [&](int z) {
    return [&](int i) -> double& { return g_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      g(z)(i) = elements[z]->levels()[i].statistical_weight;
    });
  });

  const auto q_ = [&](int z) {
    return [&](int i, int j) {
      return [&](quantity<temperature_> temperature)
        -> quantity<transition_rate_coefficient> {
        return cbb_mashonkina_o1.collision_rate_coefficient(
          elements[z]->levels()[i].term,
          elements[z]->levels()[j].term,
          temperature / kelvin
        ) * pow<3>(centimeter) * pow<-1>(second);
      };
    };
  };

  Eigen::MatrixXd q_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto q_u = pow<3>(centimeter) * pow<-1>(second);
  const auto q = [&](int z) {
    return [&](int i, int j) -> double& { return q_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      fm::family(i + 1, k(z) - 1, [=](int j) {
        q(z)(i, j) =
          + q_(z)(i, j)(T)
          / g(z)(i)
          / q_u
        ;

        q(z)(j, i) =
          + q_(z)(j, i)(T)
          / g(z)(j)
          * std::exp(-(E(z)(j) - E(z)(i)) / (k_B * T))
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