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
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum,
  const double optical_depth,
  const double temperature,
  const Eigen::MatrixXd spontaneous_emission_rates
) {
  using astrea::units::si::angstrom;
  using astrea::units::si::dalton;
  using astrea::units::si::electronvolt;
  using astrea::units::si::nanometer;
  using astrea::units::si::irradiance;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::e;
  using boost::units::si::constants::codata::epsilon_0;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::constants::codata::m_e;
  using boost::units::si::area;
  using boost::units::si::energy;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  const auto Lambda = 6.6702e15 * pow<2>(angstrom) * pow<-1>(second);

  const auto chi = 21.0;

  const auto epsilon = 1.77245385;

  const auto kappa_0 = 0.1117;

  const auto kappa_1 = 4.421;

  const auto kappa_2 = -9.207;

  const auto kappa_3 = 5.674;

  const auto zeta_0 = 0.855;

  const auto zeta_1 = 3.42;

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
    return [&](int i, int j) -> double {
      return A_v(i + K(z), j + K(z));
    };
  };

  const auto T = temperature * kelvin;

  const auto& tau = optical_depth;

  const auto infty = c / (spectrum->min_wavelength() * nanometer);

  const auto F_lambda = [&](quantity<length> lambda) -> quantity<irradiance> {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E_v(K(Z));
  const auto E = [&](int z) {
    return [&](int i) -> quantity<energy>& { return E_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      E(z)(i) = elements[z]->levels()[i].energy * electronvolt;
    });
  });

  Eigen::VectorXd g_v(K(Z));
  const auto g = [&](int z) {
    return [&](int i) -> double& { return g_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      g(z)(i) = elements[z]->levels()[i].statistical_weight;
    });
  });

  const auto nu_0 = [&](int z) {
    return [&](int i, int j) {
      return abs(E(z)(j) - E(z)(i)) / h;
    };
  };

  const auto f = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> double {
        const auto lambda = c / nu;

        return
          + (
            + A(z)(i, j) * pow<-1>(second)
            + A(z)(j, i) * pow<-1>(second)
          )
          * g(z)(j) / g(z)(i)
          * pow<2>(lambda) / Lambda
        ;
      };
    };
  };

  const auto delta_nu_L = 3.0 * m_i * pow<3>(c) * epsilon_0 / pow<2>(e);

  const auto delta_nu_D = [&](int z) {
    return [&](int i, int j) -> quantity<frequency> {
      return nu_0(z)(i, j) * std::sqrt(2.0 * k_B * T / (m_i * pow<2>(c)));
    };
  };

  const auto x = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> double {
        return (nu - nu_0(z)(i, j)) / delta_nu_D(z)(i, j);
      };
    };
  };

  const auto zeta = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> double {
        return
          + (std::pow(x(z)(i, j)(nu), 2.0) - zeta_0)
          / (std::pow(x(z)(i, j)(nu), 2.0) + zeta_1)
        ;
      };
    };
  };

  const auto gamma = [&](int z) {
    return [&](int i, int j) {
      return delta_nu_L / (2.0 * delta_nu_D(z)(i, j));
    };
  };

  const auto q = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> double {
        return fm::cases<double>({
          {
            [=]() -> double {
              return
                + zeta(z)(i, j)(nu)
                * (1.0 + chi / std::pow(x(z)(i, j)(nu), 2.0))
                * gamma(z)(i, j)
                / (pi<double>() * (std::pow(x(z)(i, j)(nu), 2.0) + 1))
                * (
                  + kappa_0
                  + zeta(z)(i, j)(nu)
                  * (
                    + kappa_1
                    + zeta(z)(i, j)(nu)
                    * (kappa_2 + kappa_3 * zeta(z)(i, j)(nu))
                  )
                )
              ;
            },
            zeta(z)(i, j)(nu) > 0.0
          },
          {[]() -> double { return 0.0; }, zeta(z)(i, j)(nu) <= 0.0}
        });
      };
    };
  };

  const auto H = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> double {
        return
          + std::sqrt(pi<double>())
          * (
            + q(z)(i, j)(nu)
            + std::exp(-std::pow(x(z)(i, j)(nu), 2.0)) / epsilon
          )
        ;
      };
    };
  };

  const auto alpha = [&](int z) {
    return [&](int i, int j) {
      return [=](quantity<frequency> nu) -> quantity<area> {
        return
          + 1.0
          / (4.0 * pi<double>() * epsilon_0)
          * f(z)(i, j)(nu)
          * std::sqrt(pi<double>()) * pow<2>(e)
          / (m_e * c * delta_nu_D(z)(i, j))
          * H(z)(i, j)(nu)
        ;
      };
    };
  };

  Eigen::MatrixXd R_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto R_u = pow<-1>(second);
  const auto R = [&](int z) {
    return [&](int i, int j) -> double& { return R_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      fm::family(i + 1, k(z) - 1, [&](int j) {
        R(z)(i, j) = 4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
          [&](double nu) {
            const auto nu_ = nu * pow<-1>(second);
            const auto lambda = c / nu_;
            const auto F_nu = c / pow<2>(nu_) * F_lambda(lambda);

            return (
              + alpha(z)(i, j)(nu_)
              / (h * nu_)
              * F_nu
              * std::exp(-tau)
            ).value();
          },
          (nu_0(z)(i, j) / pow<-1>(second)).value(),
          (infty / pow<-1>(second)).value()
        ) * pow<-1>(second) / R_u;

        R(z)(j, i) = 4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
          [&](double nu) {
            const auto nu_ = nu * pow<-1>(second);
            const auto lambda = c / nu_;
            const auto F_nu = c / pow<2>(nu_) * F_lambda(lambda);

            return (
              + alpha(z)(j, i)(nu_)
              / (h * nu_)
              * ((2.0 * h * pow<3>(nu_) / pow<2>(c)) + F_nu)
              * std::exp(-(h * nu_) / (k_B * T))
              * std::exp(-tau)
            ).value();
          },
          (nu_0(z)(j, i) / pow<-1>(second)).value(),
          (infty / pow<-1>(second)).value()
        ) * pow<-1>(second) / R_u;
      });
    });
  });

  return R_v;
}


}