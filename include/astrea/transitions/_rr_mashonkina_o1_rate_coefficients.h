/**
 * \file astrea/transitions/rr_mashonkina_o1_rate_coefficients.h
 * Radiative recombination transitions rate coefficients using Mashonkina data.
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
 * Radiative recombination transitions rate coefficients using Mashonkina data.
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param temperature Temperature in \f$K\f$.
 * \param optical_depth Optical depth in \f$1\f$.
 * \return Rate coefficients in \f$cm^3 \times s^{-1}\f$.
 */
inline Eigen::MatrixXd rr_mashonkina_o1_rate_coefficients(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
  const double electron_temperature,
  const double electron_number_density
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::electronvolt;
  using astrea::units::si::irradiance;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
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
  using boost::units::si::volume;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  const auto infty = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);

  const auto nu_0 = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);

  const auto T = temperature * kelvin;

  const auto T_e = electron_temperature * kelvin;

  const auto N_e = electron_number_density * pow<-3>(centimeter);

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) -> int {
    return fm::sum<int>(0, z - 1, [&](int z_) -> int { return k(z_); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E_v(K(Z));
  const auto E = [&](int z) {
    // Warning: unsafe indices (E(z + 1)(i) != E(z)(k(z) + i))
    return [&](int i) -> quantity<energy>& { return E_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      E(z)(i) = elements[z]->levels()[i].energy * electronvolt;
    });
  });

  Eigen::VectorXd g_v(K(Z));
  const auto g = [&](int z) {
    // Warning: unsafe indices (g(z + 1)(i) != g(z)(k(z) + i))
    return [&](int i) -> double& { return g_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      g(z)(i) = elements[z]->levels()[i].statistical_weight;
    });
  });

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> I_v(Z);
  const auto I = [&](int z) {
    // Warning: unsafe indices (I(z + 1)(i) != I(z)(k(z) + i))
    return [&](int i) -> quantity<energy>& { return I_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      I(i)(z) = elements[z]->levels()[i].ionization_energy * electronvolt;
    });
  });

  const auto alpha = [&](int z) {
    // Warning: unsafe indices (alpha(z + 1)(i) != alpha(z)(k(z) + i))
    return [&](int j) {
      return [=](quantity<frequency> frequency) ->
        quantity<area> {
        return rbf_mashonkina_o1.rbf_cross_section(
          elements[z]->levels()[j].term,
          frequency / pow<-1>(second)
        ) * pow<2>(centimeter);
      };
    };
  };

  Eigen::MatrixXd R_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto R = [&](int z) {
    return [&](int i, int j) -> double& { return R_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      R(z)(k(z), i) =
        4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
          [&](double nu) -> double {
            const auto nu_ = nu * pow<-1>(second);

            return (
              + alpha(z)(i)(nu_)
              / (h * nu_)
              * (2.0 * h * pow<3>(nu_) / pow<2>(c))
              * std::exp(-(h * nu_) / (k_B * T))
            ).value();
          },
          (nu_0 / pow<-1>(second)).value(),
          (infty / pow<-1>(second)).value()
        )
      ;
    });
  });

  const auto tilde_lambda = pow<static_rational<1, 2>>(
    pow<2>(h) / (2.0 * pi<double>() * m_e * k_B * T_e)
  );

  Eigen::Vector<quantity<volume>, Eigen::Dynamic> Phi_v(K(Z));
  const auto Phi = [&](int z) {
    return [&](int i) -> quantity<volume>& {
      return Phi_v(i + K(z));
    };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      Phi(z)(i) =
        + pow<3>(tilde_lambda) / 2.0
        * g(z)(i) / g(z + 1)(0) // g(z + 1)(0) != g(z)(k(z)), but must be
        * std::exp((I(z)(0) - E(z)(i)) / (k_B * T))
      ;
    });
  });

  Eigen::MatrixXd alpha_RR_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto alpha_RR = [&](int z) {
    return [&](int i, int j) -> double& {
      return alpha_RR_v(i + K(z), j + K(z));
    };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      alpha_RR(z)(k(z), i) = Phi(z)(i) * R(z)(k(z), i);
    });
  });

  return alpha_RR_v;
}


}