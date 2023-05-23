/**
 * \file astrea/transitions/pi_mashonkina_o1.h
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data.
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
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param optical_depth Optical depth in \f$1\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd pi_mashonkina_o1_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum,
  const double optical_depth
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::irradiance;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::area;
  using boost::units::si::frequency;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  const auto infty = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);

  const auto nu_0 = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);

  const auto& tau = optical_depth;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) -> int {
    return fm::sum<int>(0, z - 1, [&](int z_) -> int { return k(z_); });
  };

  const auto F_lambda = [&](quantity<length> lambda) -> quantity<irradiance> {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
  };

  const auto alpha = [&](int z) {
    return [&](int i) {
      return [=](quantity<frequency> frequency) -> quantity<area> {
        return rbf_mashonkina_o1.rbf_cross_section(
          elements[z]->levels()[i].term,
          frequency / pow<-1>(second)
        ) * pow<2>(centimeter);
      };
    };
  };

  Eigen::MatrixXd R_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto R_u = pow<-1>(second);
  const auto R = [&](int z) {
    return [&](int i, int j) -> double& { return R_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 2, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      R(z)(i, k(z)) =
        4.0 * pi<double>() * boost::math::quadrature::trapezoidal(
          [&](double nu) -> double {
            const auto nu_ = nu * pow<-1>(second);
            const auto lambda = c / nu_;
            const auto F_nu = c / pow<2>(nu_) * F_lambda(lambda);

            return (
              + alpha(z)(i)(nu_)
              / (h * nu_)
              * F_nu
              * std::exp(-tau)
            ).value();
          },
          (nu_0 / pow<-1>(second)).value(),
          (infty / pow<-1>(second)).value()
        )
      ;
    });
  });

  return R_v;
}


}