/**
 * \file lss/calculation/lte.h
 * LTE electrons population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/constants/constants.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si/prefixes.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../physics/units.h"


namespace lss {


/**
 * Calculates LTE electrons population using Boltzmann distribution.
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd lte_boltzmann_population(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature
) {
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using lss::units::electronvolt;

  auto T = temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXd L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  // Boltzmann distribution
  Eigen::VectorXd n(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      n(i + K(s)) =
        + g(i + K(s))
        * std::exp(-E(i + K(s)) * electronvolt / (k_B * T))
        / fm::sum<double>(0, L(s) - 1, [&](int j) {
          return
            g(j + K(s)) * std::exp(-E(j + K(s)) * electronvolt / (k_B * T))
          ;
        })
        * 1.0
      ;
    }
  }

  return n;
}


/**
 * Calculates LTE electrons population using Boltzmann distribution and Saha
 * ionization equation.
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd lte_boltzmann_saha_population(
  std::vector<std::shared_ptr<Element>> elements,
  double temperature,
  double electron_temperature,
  double electron_number_density
) {
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::kelvin;
  using boost::units::pow;
  using boost::units::static_rational;
  using lss::units::centimeter;
  using lss::units::electronvolt;

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;
  auto T_e = electron_temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXd L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::VectorXd I(S); // eV
  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    I(s) = elements[s]->levels()[0].ionization_energy;
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  auto tilde_lambda = pow<static_rational<1, 2>>(
    pow<2>(h) / (2.0 * pi<double>() * m_e * k_B * T_e)
  );

  // Saha Equation
  Eigen::VectorXd N(S); // 1
  Eigen::VectorXd r(S - 1); // 1
  for (int s = 0; s <= S - 2; s++) {
    r(s) = 
      + N_e
      * fm::sum<double>(0, L(s) - 1, [&](auto i) {
        return g(i + K(s)) * std::exp(-E(i + K(s)) * electronvolt / (k_B * T));
      })
      / fm::sum<double>(0, L(s + 1) - 1, [&](auto i) {
        return
          + g(i + K(s))
          * std::exp(-E(i + K(s)) * electronvolt / (k_B * T))
        ;
      })
      * pow<3>(tilde_lambda) / 2.0
      * std::exp(I(s) * electronvolt / (k_B * T_e))
    ;
  }
  for (int s = 0; s <= S - 1; s++) {
    N(s) =
      + fm::prod<double>(s, S - 2, [&](auto i) { return r(i); })
      / fm::sum<double>(0, S - 1, [&](auto k) {
        return fm::prod<double>(k, S - 2, [&](auto i) { return r(i);});
      })
    ;
  }

  // Boltzmann distribution
  Eigen::VectorXd n(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      n(i + K(s)) =
        + g(i + K(s))
        * std::exp(-E(i + K(s)) * electronvolt / (k_B * T))
        / fm::sum<double>(0, L(s) - 1, [&](int j) {
          return
            g(j + K(s)) * std::exp(-E(j + K(s)) * electronvolt / (k_B * T))
          ;
        })
        * N(s)
      ;
    }
  }

  return n;
}


}