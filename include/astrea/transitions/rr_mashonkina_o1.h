/**
 * \file astrea/transitions/rr_mashonkina_o1.h
 * Radiative recombination transitions rates using Mashonkina data.
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
 * Radiative recombination recombination transitions rates using Mashonkina data
 * (from private communication).
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param temperature Temperature in \f$K\f$.
 * \param optical_depth Optical depth in \f$1\f$.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd rr_mashonkina_o1_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double temperature,
  double optical_depth
) {
  using astrea::units::si::centimeter;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::frequency;
  using boost::units::si::kelvin;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  auto rbf_mashonkina_o1 = RBFMashonkinaO1();

  auto infty = rbf_mashonkina_o1.max_frequency() * pow<-1>(second);
  auto nu_0 = rbf_mashonkina_o1.min_frequency() * pow<-1>(second);

  auto T = temperature * kelvin;
  auto& tau = optical_depth;

  int S = elements.size();
  Eigen::VectorXi L(S);
  fm::family(0, S - 1, [&](int s) {
    L(s) = elements[s]->levels().size();
  });
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto F_lambda = [&](quantity<length> lambda) {
    return
      + spectrum->spectral_irradiance(lambda / nanometer)
      * watt * pow<-2>(meter) * pow<-1>(nanometer)
    ;
  };

  std::pair<Eigen::MatrixXd, frequency> R_RR;
  R_RR.first = Eigen::MatrixXd::Zero(K(S), K(S));
  R_RR.second = pow<-1>(second);
  for (int s = 0; s <= S - 2; s++) {
    for (int j = 0; j <= L(s) - 1; j++) {
      auto final = elements[s]->levels()[j];

      auto sigma = [&](quantity<frequency> frequency) {
        return rbf_mashonkina_o1.rbf_cross_section(
          final.term,
          frequency / pow<-1>(second)
        ) * pow<2>(centimeter);
      };

      R_RR.first(L(s) + K(s), j + K(s)) =
        4.0 * pi<double>() * boost::math::quadrature::trapezoidal( // s^{-1}
          [&](double nu) -> double {
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
        )
      ;
    }
  }

  return R_RR.first;
}


}