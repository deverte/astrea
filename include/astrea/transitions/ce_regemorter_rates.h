/**
 * \file astrea/transitions/ce_regemorter_rates.h
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"
#include "../data/transitions/transitions_tensor.h"


namespace astrea {


/**
 * Collisional excitation transitions rates using Regemorter formula.
 * 
 * \param elements Elements.
 * \param temperature Temperature in K.
 * \param electron_number_density in cm-3.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd ce_regemorter_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const double temperature,
  const double electron_number_density
) {
  using boost::units::pow;
  using boost::units::static_rational;

  const auto ea = ElementsAdapter(elements);
  const auto& T = temperature; // K
  const auto& N_e = electron_number_density; // cm-3

  const auto zeta = 8.62913210858377e-6; // cm3 s-1 K1/2
  const auto k_B = 8.617333262e-5; // eV K-1

  auto R = TransitionsTensor(ea);
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      for (int j = i + 1; j < ea.k(z); j++) {
        R(z, i, j) =
          + zeta * N_e * pow<static_rational<-1, 2>>(T) / ea.g(z, i)
          * std::exp(-ea.E_ij(z, j, i) / (k_B * T))
        ;
      }
    }
  }

  return R.matrix();
}


}