#pragma once


#include <cmath>
#include <numbers>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/oxygen_1_rbb_doppler.h"
#include "../data/oxygen_1.h"


namespace nlte {


Eigen::MatrixXd oxygen_rbb_doppler_rates() {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(Oxygen::levels().size(), Oxygen::levels().size());
  Eigen::VectorXd E(Oxygen::levels().size()); // eV
  Eigen::VectorXd g(Oxygen::levels().size()); // 1
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s

  for (int i = 0; i < Oxygen::levels().size(); i++) {
    E(i) = Oxygen::levels()[i].energy;
  }
  for (int i = 0; i < Oxygen::levels().size(); i++) {
    g(i) = Oxygen::levels()[i].statistical_weight;
  }

  for (int i = 0; i < Oxygen::levels().size(); i++) {
    auto& initial = Oxygen::levels()[i];
    for (int j = 0; j < Oxygen::levels().size(); j++) {
      auto& final = Oxygen::levels()[j];
      for (auto& transition : OxygenRbbDoppler::transitions()) {
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