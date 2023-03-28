#pragma once


#include <cmath>
#include <memory>
#include <numbers>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/element.h"
#include "../data/rbb_doppler_inasan_o1.h"


namespace nlte {


/**
 * Radiative bound-bound transitions using Doppler profile (INASAN)
 */
Eigen::MatrixXd rbb_doppler_inasan_o1_rates(std::shared_ptr<Element> element) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s

  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
  }
  for (int i = 0; i < element->levels().size(); i++) {
    g(i) = element->levels()[i].statistical_weight;
  }

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];
      for (auto& transition : RbbDopplerInasanO1::transitions()) {
        if (
          transition.initial == initial.term && transition.final == final.term
        ) {
          auto& f_ij = transition.oscillator_strength; // 1

          // 0.66702 Constant from
          // https://www.nist.gov/pml/atomic-spectroscopy-compendium-basic-ideas-notation-data-and-formulas/atomic-spectroscopy
          P(i, j) =
            + 0.66702 / std::pow(c / (std::abs(E(i) - E(j)) / hbar), 2)
            * (g(j) / g(i)) * f_ij;
        }
      }
    }
  }

  return P;
};


}