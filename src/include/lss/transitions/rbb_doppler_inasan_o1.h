#pragma once


#include <cmath>
#include <memory>
#include <numbers>

#include <Eigen/Dense>

#include "./helpers/transition_type.h"
#include "../data/elements/element.h"
#include "../data/transitions/rbb_doppler_inasan_o1.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative bound-bound transitions using Doppler profile
 * 
 * data: INASAN
 * inverse process: this
 */
inline Eigen::MatrixXd
rbb_doppler_inasan_o1_rates(std::shared_ptr<Element> element) {
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s

  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
    g(i) = element->levels()[i].statistical_weight;
  }

  Eigen::MatrixXd R_PE = // s^{-1}
    Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  for (int i = 0; i < element->levels().size(); i++) {
    auto initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto final = element->levels()[j];
      for (auto transition : RbbDopplerInasanO1::transitions()) {
        if (
          transition.initial == initial.term &&
          transition.final == final.term
        ) {
          auto& f_ij = transition.oscillator_strength; // 1

          // 0.66702 Constant from
          // https://www.nist.gov/pml/atomic-spectroscopy-compendium-basic-ideas-notation-data-and-formulas/atomic-spectroscopy
          R_PE(i, j) =
            + 0.66702 / std::pow(c / (std::abs(E(i) - E(j)) / hbar), 2)
            * (g(j) / g(i)) * f_ij;
        }
      }
    }
  }

  return R_PE;
}


}