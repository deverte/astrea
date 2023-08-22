/**
 * \file astrea/transitions/re_lorentz_rates.h
 * Radiative excitation (photoexcitation) transitions rates using Lorentz line
 * shape.
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
 * Radiative excitation (photoexcitation) transitions rates using Lorentz line
 * shape.
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \param spontaneous_emission_rates Spontaneous emission rates in s-1.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd re_lorentz_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum,
  const Eigen::MatrixXd spontaneous_emission_rates
) {
  using boost::units::pow;

  const auto ea = ElementsAdapter(elements);
  const auto F = SpectrumAdapter(spectrum);
  const auto A = TransitionsTensor(ea, spontaneous_emission_rates);

  const auto alpha = 1.0643661630026106e-22; // nm-4 J-1 s m2

  auto R = TransitionsTensor(ea);
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      for (int j = i + 1; j < ea.k(z); j++) {
        R(z, i, j) =
          + alpha
          * A(z, j, i)
          * ea.g(z, j) / ea.g(z, i)
          * pow<5>(ea.lambda_ij(z, i, j))
          * F.lambda(ea.lambda_ij(z, i, j))
        ;
      }
    }
  }

  return R.matrix();
}


}