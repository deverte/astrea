/**
 * \file astrea/transitions/tbr_mashonkina_o1_rate_coefficients.h
 * Three-body recombination rate coefficients for electrically neutral oxygen
 * using Mashonkina data (with photoionization cross sections).
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
 * Three-body recombination rate coefficients for electrically neutral oxygen
 * using Mashonkina data (from private communication).
 * 
 * \param elements Elements.
 * \param electron_temperature Electron temperature in \f$K\f$.
 * \param electron_number_density Electron number density in \f$cm^{-3}\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd tbr_mashonkina_o1_rate_coefficients(
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
  using boost::units::si::area;
  using boost::units::si::energy;
  using boost::units::si::kelvin;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::velocity;
  using boost::units::si::volume;
  using boost::units::pow;
  using boost::units::quantity;
  using boost::units::static_rational;

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  const auto infty = [&]() {
    const auto nu = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto N_e = electron_number_density * pow<-3>(centimeter);

  const auto v_0 = [&]() {
    const auto nu = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);
    const auto E = h * nu;
    return pow<static_rational<1, 2>>(2.0 * E / m_e);
  };

  const auto T = temperature * kelvin;

  const auto T_e = electron_temperature * kelvin;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) -> int {
    return fm::sum<int>(0, z - 1, [&](int z_) { return k(z_); });
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

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> I_v(K(Z));
  const auto I = [&](int z) {
    return [&, z](int i) -> quantity<energy>& { return I_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      I(z)(i) = elements[z]->levels()[i].ionization_energy * electronvolt;
    });
  });

  const auto f = [&](quantity<velocity> v)
    -> quantity<decltype(pow<-1>(velocity()))> {
    return
      + pow<static_rational<1, 2>>(m_e / (2.0 * pi<double>() * k_B * T_e))
      * std::exp(-(m_e * pow<2>(v)) / (2.0 * k_B * T_e))
    ;
  };

  const auto sigma = [&](int z) {
    return [&, z](int i) {
      return [&, z, i, rbf_mashonkina_o1](quantity<velocity> v)
        -> quantity<area> {
        const auto E = m_e * pow<2>(v) / 2.0;
        const auto nu = E / h;

        return rbf_mashonkina_o1.rbf_cross_section(
          elements[z]->levels()[i].term,
          nu / pow<-1>(second)
        ) * pow<2>(centimeter);
      };
    };
  };

  const auto tilde_lambda = pow<static_rational<1, 2>>(
    pow<2>(h) / (2.0 * pi<double>() * m_e * k_B * T_e)
  );

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
      * std::exp(I(z)(0) / (k_B * T_e))
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

  Eigen::MatrixXd C_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto C_u = pow<-1>(second);
  const auto C = [&](int z) {
    return [&, z](int i, int j) -> double& { return C_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      C(z)(k(z), i) =
        N_e * boost::math::quadrature::trapezoidal(
          [&, z, i](double v) -> double {
            const auto v_ = v * meter * pow<-1>(second);

            return (
              + N(z + 1) / N(z)
              * sigma(z)(i)(v_)
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

  Eigen::MatrixXd alpha_TBR_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto alpha_TBR_u = pow<3>(centimeter) * pow<-1>(second);
  const auto alpha_TBR = [&](int z) {
    return [&, z](int i, int j) -> double& {
      return alpha_TBR_v(i + K(z), j + K(z));
    };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&, z](int i) {
      alpha_TBR(z)(k(z), i) =
        + 1.0 / N_e * (N(z) / N(z + 1)) * C(z)(k(z), i) * C_u
        / alpha_TBR_u
      ;
    });
  });

  return alpha_TBR_v;
}


}