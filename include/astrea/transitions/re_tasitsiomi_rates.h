/**
 * \file astrea/transitions/re_tasitsiomi_rates.h
 * Radiative excitation (photoexcitation) transitions rates using Tasitsiomi
 * formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"
#include "../data/spectra/spectrum.h"
#include "../data/spectra/spectrum_adapter.h"
#include "../data/transitions/transitions_tensor.h"
#include "../units/units.h"


namespace astrea {


/**
 * Radiative excitation (photoexcitation) transitions rates using Tasitsiomi
 * formula.
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param temperature Temperature in K.
 * \param velocity Velocity in km s-1.
 * \param spontaneous_emission_rates Spontaneous emission rates in s-1.
 * \return Transitions rates in s-1 K1/2.
 */
inline Eigen::MatrixXd re_tasitsiomi_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum,
  const double temperature,
  const double velocity,
  const Eigen::MatrixXd spontaneous_emission_rates
) {
  using boost::units::pow;
  using boost::units::static_rational;

  const auto ea = ElementsAdapter(elements);
  const auto F = SpectrumAdapter(spectrum);
  const auto& T = temperature; // K
  const auto& v = velocity; // km2 s-2
  const auto A = TransitionsTensor(ea, spontaneous_emission_rates);

  const auto rho = 8.763475587242509e-16; // Da-1/2 kg-1 nm-4 s3 K1/2
  const auto epsilon = 60.136177500762315; // Da-1 km-2 s2 K

  auto R = TransitionsTensor(ea);
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      for (int j = i + 1; j < ea.k(z); j++) {
        R(z, i, j) =
          + rho
          * pow<5>(ea.lambda_ij(z, i, j))
          * A(z, j, i)
          * ea.g(z, j) / ea.g(z, i)
          * pow<static_rational<1, 2>>(ea.m_i(z) / T)
          * std::exp(- epsilon * ea.m_i(z) * pow<2>(v) / T)
          * F.lambda(ea.lambda_ij(z, i, j))
        ;
      }
    }
  }

  return R.matrix();
}


}