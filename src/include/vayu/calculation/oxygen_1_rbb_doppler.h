#pragma once


#include <cmath>
#include <numbers>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/oxygen_1_rbb_doppler.h"
#include "../data/oxygen_1.h"


Eigen::MatrixXd oxygen_rbb_doppler_rates() {
  Oxygen oxygen;
  OxygenRbbDoppler rbb;

  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(oxygen.levels.size(), oxygen.levels.size());
  Eigen::VectorXd E(oxygen.levels.size()); // eV
  Eigen::VectorXd g(oxygen.levels.size()); // 1
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s

  for (int i = 0; i < oxygen.levels.size(); i++) {
    E(i) = oxygen.levels[i].energy;
  }
  for (int i = 0; i < oxygen.levels.size(); i++) {
    g(i) = oxygen.levels[i].statistical_weight;
  }

  for (int i = 0; i < oxygen.levels.size(); i++) {
    auto& initial = oxygen.levels[i];
    for (int j = 0; j < oxygen.levels.size(); j++) {
      auto& final = oxygen.levels[j];
      for (auto& transition : rbb.transitions) {
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