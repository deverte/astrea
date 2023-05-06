/**
 * \file astrea/calculation/lte.h
 * LTE electrons population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <stdexcept>
#include <vector>

#include <boost/math/constants/constants.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si/prefixes.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../units/units.h"


namespace astrea {


/**
 * Calculates LTE electrons population using Boltzmann distribution. Elements
 * population is set manually.
 * 
 * \param elements Elements.
 * \param elements_population Elements population in \f$1\f$.
 * \param temperature Temperature in \f$K\f$.
 * \exception length_error \p elements and \p elements_population must have the
 * same size.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd lte_boltzmann_population(
  std::vector<std::shared_ptr<Element>> elements,
  Eigen::VectorXd elements_population,
  double temperature
) {
  if (elements.size() != elements_population.size()) {
    throw std::length_error(
      "astrea::lte_boltzmann_population error: "
      "elements and elements_population must have the same size."
    );
  }

  using astrea::units::si::electronvolt;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::energy;
  using boost::units::si::kelvin;
  using boost::units::quantity;

  auto& N = elements_population;
  auto T = temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXd L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      E(i + K(s)) = elements[s]->levels()[i].energy * electronvolt;
    });
  });
  Eigen::VectorXd g(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    });
  });

  // Boltzmann distribution
  Eigen::VectorXd n(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      n(i + K(s)) =
        + g(i + K(s))
        * std::exp(-E(i + K(s)) / (k_B * T))
        / fm::sum<double>(0, L(s) - 1, [&](int j) {
          return
            g(j + K(s)) * std::exp(-E(j + K(s)) / (k_B * T))
          ;
        })
        * N(s)
      ;
    });
  });

  return n;
}


/**
 * Calculates LTE electrons and elements population using Boltzmann distribution
 * and Saha ionization equation.
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
  using astrea::units::si::centimeter;
  using astrea::units::si::electronvolt;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::energy;
  using boost::units::si::kelvin;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  auto N_e = electron_number_density * pow<-3>(centimeter);
  auto T = temperature * kelvin;
  auto T_e = electron_temperature * kelvin;

  int S = elements.size();
  Eigen::VectorXd L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> I(S);
  fm::family(0, S - 1, [&](int s) {
    I(s) = elements[s]->levels()[0].ionization_energy * electronvolt;
  });
  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      E(i + K(s)) = elements[s]->levels()[i].energy * electronvolt;
    });
  });
  Eigen::VectorXd g(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    });
  });

  auto tilde_lambda = pow<static_rational<1, 2>>(
    pow<2>(h) / (2.0 * pi<double>() * m_e * k_B * T_e)
  );

  // Saha Equation
  Eigen::VectorXd r(S - 1);
  fm::family(0, S - 2, [&](int s) {
    r(s) = 
      + N_e
      * fm::sum<double>(0, L(s) - 1, [&](auto i) {
        return g(i + K(s)) * std::exp(-E(i + K(s)) / (k_B * T));
      })
      / fm::sum<double>(0, L(s + 1) - 1, [&](auto i) {
        return
          + g(i + K(s))
          * std::exp(-E(i + K(s)) / (k_B * T))
        ;
      })
      * pow<3>(tilde_lambda) / 2.0
      * std::exp(I(s) / (k_B * T_e))
    ;
  });
  Eigen::VectorXd N(S);
  fm::family(0, S - 2, [&](int s) {
    N(s) =
      + fm::prod<double>(s, S - 2, [&](auto i) { return r(i); })
      / fm::sum<double>(0, S - 1, [&](auto k) {
        return fm::prod<double>(k, S - 2, [&](auto i) { return r(i);});
      })
    ;
  });

  // Boltzmann distribution
  Eigen::VectorXd n(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      n(i + K(s)) =
        + g(i + K(s))
        * std::exp(-E(i + K(s)) / (k_B * T))
        / fm::sum<double>(0, L(s) - 1, [&](int j) {
          return
            g(j + K(s)) * std::exp(-E(j + K(s)) / (k_B * T))
          ;
        })
        * N(s)
      ;
    });
  });

  return n;
}


}