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
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_number_density
) {
  using astrea::units::si::centimeter;
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
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::MatrixXd C_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // cm^3 * s^{-1}
  for (int s = 0; s <= S - 1; s++) {

    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (int j = 0; j <= L(s) - 1; j++) {
        auto final = elements[s]->levels()[j];

        auto C_CE_CD_ij = [&](quantity<temperature_> temperature) {
          return cbb_mashonkina_o1.collision_rate_coefficient(
            initial.term,
            final.term,
            temperature / kelvin
          ) * pow<3>(centimeter) * pow<-1>(second);
        };

        C_CE_CD(i + K(s), j + K(s)) =
          C_CE_CD_ij(T) / (pow<3>(centimeter) * pow<-1>(second))
        ;
      }
    }
  }

  Eigen::MatrixXd R_CE_CD = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  R_CE_CD = (N_e / pow<-3>(centimeter)) * C_CE_CD;

  return R_CE_CD;
}


}