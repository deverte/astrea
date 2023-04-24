#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/rbb_mashonkina_voigt_o1.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative bound-bound transitions using Voigt profiles
 * 
 * data: INASAN
 * inverse process: this
 */
inline Eigen::MatrixXd
rbb_mashonkina_voigt_o1_rates(std::vector<std::shared_ptr<Element>> elements) {
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& hbar = REDUCED_PLANCK_CONSTANT; // eV * s

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  Eigen::VectorXd E(K(S)); // eV
  Eigen::VectorXd g(K(S)); // 1
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      E(i + K(s)) = elements[s]->levels()[i].energy;
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    }
  }

  Eigen::MatrixXd R_PE = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (int j = 0; j < L(s); j++) {
        auto final = elements[s]->levels()[j];

        for (auto transition : RBBMashonkinaVoigtO1::transitions()) {
          if (
            transition.initial == initial.term &&
            transition.final == final.term
          ) {
            auto& f_ij = transition.oscillator_strength; // 1

            // 0.66702 Constant from
            // https://www.nist.gov/pml/atomic-spectroscopy-compendium-basic-ideas-notation-data-and-formulas/atomic-spectroscopy
            R_PE(i + K(s), j + K(s)) =
              + 0.66702
              / std::pow(
                c / (std::abs(E(i + K(s)) - E(j + K(s))) / hbar),
                2.0
              )
              * (g(j + K(s)) / g(i + K(s))) * f_ij;
          }
        }
      }
    }
  }

  return R_PE;
}


}