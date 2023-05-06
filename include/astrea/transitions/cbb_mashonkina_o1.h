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
#include <utility>
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
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::transition_rate_coefficient;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::second;
  using temperature_ = boost::units::si::temperature;
  using boost::units::pow;
  using boost::units::quantity;

  auto cbb_mashonkina_o1 = CBBMashonkinaO1();

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  std::pair<Eigen::MatrixXd, quantity<transition_rate_coefficient>> C_CBB;
  C_CBB.first = Eigen::MatrixXd::Zero(K(S), K(S));
  C_CBB.second = pow<3>(centimeter) * pow<-1>(second);
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      fm::family(0, L(s) - 1, [&](int j) {
        auto C_CBB_ij = [&](quantity<temperature_> temperature) {
          return cbb_mashonkina_o1.collision_rate_coefficient(
            elements[s]->levels()[i].term,
            elements[s]->levels()[j].term,
            temperature / kelvin
          ) * pow<3>(centimeter) * pow<-1>(second);
        };

        C_CBB.first(i + K(s), j + K(s)) = C_CBB_ij(T) / C_CBB.second;
      });
    });
  });

  std::pair<Eigen::MatrixXd, frequency> R_CBB;
  R_CBB.second = pow<-1>(second);
  R_CBB.first = N_e * C_CBB.second / R_CBB.second * C_CBB.first;

  return R_CBB.first;
}


}