/**
 * \file astrea/transitions/rbb_tasitsiomi_rates.h
 * Radiative bound-bound transitions rates using Tasitsiomi formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "./se_nist_o1_rates.h"
#include "../data/elements/element.h"
#include "../data/spectra/spectrum.h"
#include "../units/units.h"


namespace astrea {


/**
 * Radiative bound-bound transitions rates using Tasitsiomi formula
 * (doi-10.1086%2F504460).
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param optical_depth Optical depth in \f$1\f$.
 * \param temperature Temperature in \f$K\f$.
 * \param spontaneous_emission_rates Spontaneous emission rates in \f$s^{-1}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd rbb_tasitsiomi_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum,
  const double optical_depth,
  const double temperature,
  const Eigen::MatrixXd spontaneous_emission_rates
) {
  using astrea::units::si::dalton;
  using astrea::units::si::electronvolt;
  using astrea::units::si::nanometer;
  using astrea::units::si::irradiance;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::alpha;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::energy;
  using boost::units::si::kelvin;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) {
    return fm::sum<int>(0, z - 1, [&](int z_) -> int { return k(z_); });
  };

  const auto m_i = elements[0]->mass() * dalton;

  const auto& A_v = spontaneous_emission_rates;
  const auto A = [&](int z) {
    return [&, z](int i, int j) -> double {
      return A_v(i + K(z), j + K(z));
    };
  };

  const auto T = temperature * kelvin;

  const auto& tau = optical_depth;

  const auto zero_lambda = spectrum->min_wavelength() * nanometer;

  const auto F_lambda = [&](quantity<length> lambda) -> quantity<irradiance> {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
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

  const auto lambda_0 = [&](int z) {
    return [&, z](int i, int j) {
      return h * c / abs(E(z)(j) - E(z)(i));
    };
  };

  Eigen::MatrixXd R_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto R_u = pow<-1>(second);
  const auto R = [&](int z) {
    return [&, z](int i, int j) -> double& { return R_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      fm::family(i + 1, k(z) - 1, [&, z, i](int j) {
        R(z)(i, j) =
          // Resonant Broadening
          + 1.0
          / (
            + 8.0
            * pow<static_rational<1, 2>>(2)
            * pow<static_rational<3, 2>>(pi<double>())
            * h * c * pow<static_rational<1, 2>>(k_B)
          )
          * pow<static_rational<-1, 2>>(T)
          * pow<static_rational<1, 2>>(m_i)
          * pow<3>(lambda_0(z)(i, j))
          * A(z)(j, i)
          * g(z)(j) / g(z)(i)
          * boost::math::quadrature::trapezoidal(
            [&](double lambda) {
              auto lambda_ = lambda * nanometer;
              return
                + lambda_
                * F_lambda(lambda_)
                * std::exp(
                  - pow<2>(c) / (2.0 * k_B) * pow<-1>(T) * m_i
                  * pow<2>(lambda_0(z)(i, j) - lambda_) / pow<2>(lambda_)
                )
                / (watt * pow<-2>(meter))
              ;
            },
            (zero_lambda / nanometer).value(),
            (lambda_0(z)(i, j) / nanometer).value()
          )
          * watt * pow<-2>(meter) * nanometer
          // Natural Broadening
          + 3.0
          / (32.0 * pow<2>(pi<double>()) * pow<2>(h) * c * alpha)
          * m_i
          * pow<4>(lambda_0(z)(j, i))
          * A(z)(j, i)
          * g(z)(j) / g(z)(i)
          * boost::math::quadrature::trapezoidal(
            [&](double lambda) {
              auto lambda_ = lambda * nanometer;
              return
                + F_lambda(lambda_)
                * pow<3>(lambda_)
                / pow<2>(lambda_0(z)(i, j) - lambda_)
                / (watt * pow<-2>(meter))
              ;
            },
            (zero_lambda / nanometer).value(),
            // 0.1 because lambda << lambda_0
            ((zero_lambda + lambda_0(z)(i, j)) * 0.1 / nanometer).value()
          )
          * watt * pow<-2>(meter) * nanometer
        ;

        R(z)(j, i) =
          // Resonant broadening
          + 1.0
          / (
            + 8.0
            * pow<static_rational<1, 2>>(2)
            * pow<static_rational<3, 2>>(pi<double>())
            * h * c * pow<static_rational<1, 2>>(k_B)
          )
          * pow<static_rational<-1, 2>>(T)
          * pow<static_rational<1, 2>>(m_i)
          * pow<3>(lambda_0(z)(i, j))
          * A(z)(j, i)
          * g(z)(j) / g(z)(i)
          * boost::math::quadrature::trapezoidal(
            [&](double lambda) {
              auto lambda_ = lambda * nanometer;
              return
                + lambda_
                * F_lambda(lambda_)
                * std::exp(
                  - pow<2>(c) / (2.0 * k_B) * pow<-1>(T) * m_i
                  * pow<2>(lambda_0(z)(j, i) - lambda_) / pow<2>(lambda_)
                )
                / (watt * pow<-2>(meter))
              ;
            },
            (zero_lambda / nanometer).value(),
            (lambda_0(z)(j, i) / nanometer).value()
          )
          * watt * pow<-2>(meter) * nanometer
          + c
          / (
            + 4.0
            * pow<static_rational<1, 2>>(2)
            * pow<static_rational<3, 2>>(pi<double>())
            * pow<static_rational<1, 2>>(k_B)
          )
          * pow<static_rational<-1, 2>>(T)
          * pow<static_rational<1, 2>>(m_i)
          * pow<3>(lambda_0(z)(j, i))
          * A(z)(j, i)
          * g(z)(j) / g(z)(i)
          * boost::math::quadrature::trapezoidal(
            [&](double lambda) {
              auto lambda_ = lambda * nanometer;
              return
                + 1.0 / pow<4>(lambda_)
                * std::exp(
                  - pow<2>(c) / (2.0 * k_B) * pow<-1>(T) * m_i
                  * pow<2>(lambda_0(z)(j, i) - lambda_) / pow<2>(lambda_)
                )
                / pow<-4>(nanometer)
              ;
            },
            (zero_lambda / nanometer).value(),
            (lambda_0(z)(j, i) / nanometer).value()
          )
          * pow<-3>(nanometer)
          // Natural broadening
          // + 3.0
          // / (32.0 * pow<2>(pi<double>()) * pow<2>(h) * c * alpha)
          // * m_i
          // * pow<4>(lambda_0(z)(j, i))
          // * A(z)(j, i)
          // * g(z)(j) / g(z)(i)
          // * boost::math::quadrature::trapezoidal(
          //   [&](double lambda) {
          //     auto lambda_ = lambda * nanometer;
          //     return
          //       + F_lambda(lambda_0(z)(j, i))
          //       * pow<3>(lambda_)
          //       / pow<2>(lambda_0(z)(j, i) - lambda_)
          //       / (watt * pow<-2>(meter))
          //     ;
          //   },
          //   (zero_lambda / nanometer).value(),
          //   // 0.1 because lambda << lambda_0
          //   ((zero_lambda + lambda_0(z)(j, i)) * 0.1 / nanometer).value()
          // )
          // * watt * pow<-2>(meter) * nanometer
          // + 3.0 * c
          // / (16.0 * pow<2>(pi<double>()) * h * alpha)
          // * m_i
          // * pow<4>(lambda_0(z)(j, i))
          // * A(z)(j, i)
          // * g(z)(j) / g(z)(i)
          // * boost::math::quadrature::trapezoidal(
          //   [&](double lambda) {
          //     auto lambda_ = lambda * nanometer;
          //     return
          //       + 1.0
          //       / (pow<2>(lambda_) * pow<2>(lambda_0(z)(j, i) - lambda_))
          //       / (pow<-4>(nanometer))
          //     ;
          //   },
          //   (zero_lambda / nanometer).value(),
          //   // 0.1 because lambda << lambda_0
          //   ((zero_lambda + lambda_0(z)(j, i)) * 0.1 / nanometer).value()
          // )
          // * (pow<-3>(nanometer))
        ;
      });
    });
  });

  return R_v;
}


}