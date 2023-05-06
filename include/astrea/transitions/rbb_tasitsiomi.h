/**
 * \file astrea/transitions/rbb_tasitsiomi.h
 * Radiative bound-bound transitions rates using Tasitsiomi formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>
#include <memory>
#include <utility>
#include <vector>

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "./se_nist_o1.h"
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
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double optical_depth,
  double temperature,
  Eigen::MatrixXd spontaneous_emission_rates
) {
  using astrea::units::si::angstrom;
  using astrea::units::si::dalton;
  using astrea::units::si::electronvolt;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::e;
  using boost::units::si::constants::codata::epsilon_0;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::energy;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  auto Lambda = 6.6702e15 * pow<2>(angstrom) * pow<-1>(second);

  auto chi = 21.0;
  auto epsilon = 1.77245385;
  auto kappa_0 = 0.1117;
  auto kappa_1 = 4.421;
  auto kappa_2 = -9.207;
  auto kappa_3 = 5.674;
  auto zeta_0 = 0.855;
  auto zeta_1 = 3.42;

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto m_i = elements[0]->mass() * dalton;
  auto& R_SE = spontaneous_emission_rates;
  auto T = temperature * kelvin;
  auto& tau = optical_depth;
  auto infty = c / (spectrum->min_wavelength() * nanometer);

  auto F_lambda = [&](quantity<length> lambda) {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
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

  std::pair<Eigen::MatrixXd, frequency> R_RBB;
  R_RBB.first = Eigen::MatrixXd::Zero(K(S), K(S));
  R_RBB.second = pow<-1>(second);
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      for (int j = 0; j <= L(s) - 1; j++) {
        auto nu_0 = abs(E(j + K(s)) - E(i + K(s))) / h;

        auto f_ij = [&](quantity<frequency> nu) {
          auto lambda = c / nu;

          return
            + (
              + R_SE(i + K(s), j + K(s)) * pow<-1>(second)
              + R_SE(j + K(s), i + K(s)) * pow<-1>(second)
            )
            * g(j + K(s)) / g(i + K(s))
            * pow<2>(lambda) / Lambda
          ;
        };

        auto delta_nu_L = [&]() {
          return 3.0 * m_i * pow<3>(c) * epsilon_0 / pow<2>(e);
        };

        auto delta_nu_D = [&]() {
          return nu_0 * std::sqrt(2.0 * k_B * T / (m_i * pow<2>(c)));
        };

        auto x = [&](quantity<frequency> nu) {
          return (nu - nu_0) / delta_nu_D();
        };

        auto z = [&](quantity<frequency> nu) {
          return
            + (std::pow(x(nu), 2.0) - zeta_0)
            / (std::pow(x(nu), 2.0) + zeta_1)
          ;
        };

        auto alpha = [&]() {
          return delta_nu_L() / (2.0 * delta_nu_D());
        };

        auto q = [&](quantity<frequency> nu) {
          return fm::cases<double>({
            {
              [&]() {
                return
                  + z(nu)
                  * (1.0 + chi / std::pow(x(nu), 2.0))
                  * alpha()
                  / (pi<double>() * (std::pow(x(nu), 2.0) + 1))
                  * (
                    + kappa_0
                    + z(nu)
                    * (
                      + kappa_1
                      + z(nu)
                      * (kappa_2 + kappa_3 * z(nu))
                    )
                  )
                ;
              },
              z(nu) > 0.0
            },
            {[]() { return 0.0; }, z(nu) <= 0.0}
          });
        };

        auto H = [&](quantity<frequency> nu) {
          return
            + std::sqrt(pi<double>())
            * (
              + q(nu)
              + std::exp(-std::pow(x(nu), 2.0)) / epsilon
            )
          ;
        };

        auto sigma = [&](quantity<frequency> nu) {
          return
            + 1.0
            / (4.0 * pi<double>() * epsilon_0)
            * f_ij(nu)
            * std::sqrt(pi<double>()) * pow<2>(e)
            / (m_e * c * delta_nu_D())
            * H(nu)
          ;
        };

        R_RBB.first(i + K(s), j + K(s)) = fm::cases<quantity<frequency>>({
          {
            [&]() {
              return 4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
                [&](double nu) { // s^{-1}
                  auto nu_ = nu * pow<-1>(second);
                  auto lambda = c / nu_;
                  auto F_nu = c / pow<2>(nu_) * F_lambda(lambda);

                  return (
                    + sigma(nu_)
                    / (h * nu_)
                    * F_nu
                    * std::exp(-tau)
                  ).value();
                },
                (nu_0 / pow<-1>(second)).value(),
                (infty / pow<-1>(second)).value()
              ) * pow<-1>(second);
            },
            i < j
          },
          {
            [&]() {
              return 4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
                [&](double nu) { // s^{-1}
                  auto nu_ = nu * pow<-1>(second);
                  auto lambda = c / nu_;
                  auto F_nu = c / pow<2>(nu_) * F_lambda(lambda);

                  return (
                    + sigma(nu_)
                    / (h * nu_)
                    * ((2.0 * h * pow<3>(nu_) / pow<2>(c)) + F_nu)
                    * std::exp(-(h * nu_) / (k_B * T))
                    * std::exp(-tau)
                  ).value();
                },
                (nu_0 / pow<-1>(second)).value(),
                (infty / pow<-1>(second)).value()
              ) * pow<-1>(second);
            },
            i > j
          },
          {[]() { return 0.0 * pow<-1>(second); }, i == j},
        }) / R_RBB.second;
      }
    }
  }

  return R_RBB.first;
}


}