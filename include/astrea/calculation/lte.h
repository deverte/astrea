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
  const std::vector<std::shared_ptr<Element>> elements,
  const Eigen::VectorXd elements_population,
  const double temperature
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

  const auto T = temperature * kelvin;

  const int Z = elements.size();

  const auto& N_ = elements_population;

  Eigen::VectorXd N = N_ / N_.sum();

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

  // Boltzmann distribution
  Eigen::VectorXd n_v(K(Z));
  const auto n = [&](int z) {
    return [&, z](int i) -> double& { return n_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      n(z)(i) =
        + g(z)(i)
        * std::exp(-E(z)(i) / (k_B * T))
        / fm::sum<double>(0, k(z) - 1, [&, z](int j) -> double {
          return g(z)(j) * std::exp(-E(z)(j) / (k_B * T));
        })
        * N(z)
      ;
    });
  });

  return n_v;
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
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
  const double electron_temperature,
  const double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::electronvolt;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::energy;
  using boost::units::si::kelvin;
  using boost::units::si::volume;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

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

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> I(Z);
  fm::family(0, Z - 1, [&](int z) {
    I(z) = elements[z]->levels()[0].ionization_energy * electronvolt;
  });

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

  const auto tilde_lambda = pow<static_rational<1, 2>>(
    pow<2>(h) / (2.0 * pi<double>() * m_e * k_B * T_e)
  );

  // Saha Equation
  Eigen::Vector<quantity<volume>, Eigen::Dynamic> Phi_v(Z - 1);
  const auto Phi_u = pow<3>(centimeter);
  const auto Phi = [&](int z) -> quantity<volume>& { return Phi_v(z); };
  fm::family(0, Z - 2, [&](int z) {
    Phi(z) =
      + fm::sum<double>(0, k(z) - 1, [&, z](int i) -> double {
        return g(z)(i) * std::exp(-E(z)(i) / (k_B * T));
      })
      / fm::sum<double>(0, k(z + 1) - 1, [&, z](int i) -> double {
        return g(z + 1)(i) * std::exp(-E(z + 1)(i) / (k_B * T));
      })
      * pow<3>(tilde_lambda) / 2.0
      * std::exp(I(z) / (k_B * T_e))
    ;
  });

  Eigen::VectorXd N(Z);
  fm::family(0, Z - 1, [&](int z) {
    N(z) =
      + fm::prod<double>(z, Z - 2, [&](int i) -> double {
        return N_e * Phi(i);
      })
      / fm::sum<double>(0, Z - 1, [&](int k) -> double {
        return fm::prod<double>(k, Z - 2, [&](int i) -> double {
          return N_e * Phi(i);
        });
      })
    ;
  });

  // Boltzmann distribution
  Eigen::VectorXd n_v(K(Z));
  const auto n = [&](int z) {
    return [&, z](int i) -> double& { return n_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      n(z)(i) =
        + g(z)(i)
        * std::exp(-E(z)(i) / (k_B * T))
        / fm::sum<double>(0, k(z) - 1, [&, z](int j) -> double {
          return g(z)(j) * std::exp(-E(z)(j) / (k_B * T));
        })
        * N(z)
      ;
    });
  });

  return n_v;
}


}