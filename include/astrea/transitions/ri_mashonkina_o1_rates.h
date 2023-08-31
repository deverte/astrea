/**
 * \file astrea/transitions/pi_mashonkina_o1_rates.h
 * Radiative ionization (photoionization) transition for electrically neutral
 * oxygen using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"
#include "../data/spectra/spectrum.h"
#include "../data/spectra/spectrum_adapter.h"
#include "../data/transitions/rbf_mashonkina_o1.h"
#include "../data/transitions/transitions_tensor.h"


namespace astrea {


/**
 * Radiative ionization (photoionization) transition for electrically neutral
 * oxygen using Mashonkina data.
 * 
 * \param elements Elements.
 * \param spectrum Spectrum.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd ri_mashonkina_o1_rates(
  const std::vector<std::shared_ptr<Element>> elements,
  const std::shared_ptr<Spectrum> spectrum
) {
  const auto alpha = 1.5091901796421518e+29; // cm-2 s-2 W-1 m2

  const auto ea = ElementsAdapter(elements);
  const auto F = SpectrumAdapter(spectrum);

  const auto rbf_mashonkina_o1 = RBFMashonkinaO1();
  const auto infty = rbf_mashonkina_o1.max_frequency(); // s-1
  const auto nu_0 = rbf_mashonkina_o1.min_frequency(); // s-1
  const auto number_of_points_per_transition = 1.0e3;
  const auto d_nu = (infty - nu_0) / number_of_points_per_transition; // s-1

  auto R = TransitionsTensor(ea); // s-1
  for (int z = 0; z < ea.Z() - 1; z++) {
    for (int i = 0; i < ea.k(z); i++) {
      // integration using trapezoidal rule
      for (double nu = nu_0; nu < infty - d_nu; nu += d_nu) {
        const auto& nu_a = nu; // s-1
        const auto nu_b = nu + d_nu; // s-1

        const auto sigma_a = rbf_mashonkina_o1.rbf_cross_section( // cm2
          ea.term(z, i),
          nu_a
        );
        const auto sigma_b = rbf_mashonkina_o1.rbf_cross_section( // cm2
          ea.term(z, i),
          nu_b
        );

        const auto C_a = sigma_a * F.nu(nu_a) / nu_a; // m-2 W cm2 s2
        const auto C_b = sigma_b * F.nu(nu_b) / nu_b; // m-2 W cm2 s2

        R(z, i, ea.k(z)) += alpha * (C_a + C_b) / 2.0 * d_nu;
      }
    }
  }

  return R.matrix();
}


}