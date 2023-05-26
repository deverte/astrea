/**
 * \file astrea/transitions/ci_mashonkina_o1_seaton_rates.h
 * Collisional ionization rates for electrically neutral oxygen using Mashonkina
 * data and Seaton formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/spectra/spectrum.h"
#include "../data/transitions/rbf_mashonkina_o1.h"
#include "../units/units.h"


namespace astrea {


/**
 * Collisional ionization rates for electrically neutral oxygen using Mashonkina
 * data (from private communication) and Seaton formula (isbn-9780120814503).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd ci_mashonkina_o1_seaton_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const double electron_temperature,
  const double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::electronvolt;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::alpha;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::hbar;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::area;
  using boost::units::si::energy;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::velocity;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  const auto g = 1.0; // Gaunt factor // TODO: calculate

  const auto infty = [=]() {
    const auto nu = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto N_e = electron_number_density * pow<-3>(centimeter);

  const auto v_0 = [=]() {
    const auto nu = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto T_e = electron_temperature * kelvin;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [=](int z) -> int {
    return fm::sum<int>(0, z - 1, [=](int z_) { return k(z_); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> I_v(K(Z));
  const auto I = [&](int z) {
    return [&](int i) -> quantity<energy>& { return I_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      I(z)(i) = elements[z]->levels()[i].ionization_energy * electronvolt;
    });
  });

  const auto f = [=](quantity<velocity> v)
    -> quantity<decltype(pow<-1>(velocity()))> {
    return
      + pow<static_rational<1, 2>>(m_e / (2.0 * pi<double>() * k_B * T_e))
      * std::exp(-(m_e * pow<2>(v)) / (2.0 * k_B * T_e))
    ;
  };

  const auto a = [=](int z) {
    return [=](int i) {
      return [=](quantity<energy> E) -> quantity<area> {
        const auto nu = E / h;

        return rbf_mashonkina_o1.rbf_cross_section(
          elements[z]->levels()[i].term,
          nu / pow<-1>(second)
        ) * pow<2>(centimeter);
      };
    };
  };

  const auto sigma = [=](int z) {
    return [=](int i) {
      return [=](quantity<velocity> v) -> quantity<area> {
        const auto E = m_e * pow<2>(v) / 2.0;
        const auto nu = E / h;
        const auto lambda = c / nu;
        const auto k_i = 2.0 * pi<double>() / lambda;

        return
          // + 2.0 / (pow<2>(k_i) * alpha * std::sqrt(3)) // TODO: ???
          + 2.0 / (alpha * std::sqrt(3))
          * boost::math::quadrature::trapezoidal(
            [=](double E_kappa) -> double {
              const auto E_kappa_ = E_kappa * electronvolt;

              return (
                + a(z)(i)(E_kappa_)
                * g
                / (I(z)(i) + E_kappa_)
                / (pow<2>(centimeter) / electronvolt)
              ).value();
            },
            0.0,
            (
              + (1.0 / 2.0 * pow<2>(hbar * k_i) / (2.0 * m_e) - I(z)(i))
              / electronvolt
            ).value()
          )
          * pow<2>(centimeter)
        ;
      };
    };
  };

  Eigen::MatrixXd C_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto C_u = pow<-1>(second);
  const auto C = [&](int z) {
    return [&](int i, int j) -> double& { return C_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 2, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      C(z)(i, k(z)) =
        N_e * boost::math::quadrature::trapezoidal(
          [=](double v) -> double {
            const auto v_ = v * meter * pow<-1>(second);

            return (
              + sigma(z)(i)(v_)
              * v_
              * f(v_)
              / pow<2>(centimeter)
            ).value();
          },
          (v_0() / (meter * pow<-1>(second))).value(),
          (infty() / (meter * pow<-1>(second))).value()
        ) * (pow<3>(centimeter) * pow<-1>(second)) / C_u
      ;
    });
  });

  return C_v;
}


}