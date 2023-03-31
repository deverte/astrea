#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../physics/constants.h"


namespace lss {


inline Eigen::VectorXd lte_population(
  std::shared_ptr<Element> element,
  double temperature /* K */
) {
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}

  auto& T = temperature; // K

  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
    g(i) = element->levels()[i].statistical_weight;
  }

  Eigen::VectorXd n(element->levels().size()); // 1
  for (int i = 0; i < E.size(); i++) {
    n(i) =
      + g(i)
      * std::exp(-E(i) / (k * T))
      / fm::sum(0, E.size(), [&](int j) {
        return g(j) * std::exp(-E(j) / (k * T));
      })
    ;
  }

  return n;
}


}