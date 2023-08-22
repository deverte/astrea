/**
 * \file astrea/transitions/ci_mashonkina_o1_rates.h
 * Collisional ionization rates for electrically neutral oxygen using Mashonkina
 * data (with photoionization cross sections).
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
 * data (from private communication).
 * 
 * \param elements Elements.
 * \param temperature Temperature in \f$K\f$.
 * \return Transitions rates in \f$s^{-1} \cdot cm^3\f$.
 */
inline Eigen::MatrixXd ci_mashonkina_o1_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature
) {
  using astrea::units::si::centimeter;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::area;
  using boost::units::si::kelvin;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::velocity;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  const auto infty = [&]() {
    const auto nu = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto v_0 = [&]() {
    const auto nu = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto T = temperature * kelvin;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  for (int z = 0; z < Z; z++) {
    k(z) = elements[z]->levels().size();
  }

  const auto K = [&](int z) -> int {
    return fm::sum<int>(0, z - 1, [&](int z_) { return k(z_); });
  };

  const auto f = [&](quantity<velocity> v)
    -> quantity<decltype(pow<-1>(velocity()))> {
    return
      + pow<static_rational<1, 2>>(m_e / (2.0 * pi<double>() * k_B * T))
      * std::exp(-(m_e * pow<2>(v)) / (2.0 * k_B * T))
    ;
  };

  const auto sigma = [&](int z) { // cm^2
    return [&, z](int i) {
      return [&, z, i, rbf_mashonkina_o1](quantity<velocity> v) -> double {
        const auto E = m_e * pow<2>(v) / 2.0;
        const auto nu = E / h;

        return rbf_mashonkina_o1.rbf_cross_section(
          elements[z]->levels()[i].term,
          nu / pow<-1>(second)
        );
      };
    };
  };

  Eigen::MatrixXd q_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto q = [&](int z) {
    return [&, z](int i, int j) -> double& { return q_v(i + K(z), j + K(z)); };
  };
  for (int z = 0; z <  Z - 1; z++) {
    for (int i = 0; i < k(z); i++) {
      q(z)(i, k(z)) =
        boost::math::quadrature::trapezoidal(
          [&, z, i](double v) -> double {
            const auto v_ = v * meter * pow<-1>(second);

            return (
              + sigma(z)(i)(v_)
              * v_
              * f(v_)
              / (pow<2>(centimeter))
            ).value();
          },
          (v_0() / (meter * pow<-1>(second))).value(),
          (infty() / (meter * pow<-1>(second))).value()
        )
      ;
    }
  }

  return q_v;
}


}