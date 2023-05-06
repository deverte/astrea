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
 * Pphotoionization transition for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param optical_depth Optical depth in \f$1\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd pi_mashonkina_o1_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double optical_depth
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::frequency;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  auto infty = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);
  auto nu_0 = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);

  auto& tau = optical_depth;

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto F_lambda = [&](quantity<length> lambda) {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
  };

  Eigen::MatrixXd R_PI = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      auto sigma = [&](quantity<frequency> frequency) {
        return rbf_mashonkina_o1.rbf_cross_section(
          initial.term,
          frequency / pow<-1>(second)
        ) * pow<2>(centimeter);
      };

      R_PI(i + K(s), L(s) + K(s)) =
        4.0 * pi<double>() * boost::math::quadrature::trapezoidal( // s^{-1}
          [&](double nu) -> double {
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
        )
      ;
    }
  }

  return R_PI;
}


}