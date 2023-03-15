#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/element.h"


namespace nlte {


Eigen::VectorXd lte_population(
  std::shared_ptr<Element> element,
  double temperature /* K */
) {
  Eigen::VectorXd E(element->levels().size()); // eV
  Eigen::VectorXd g(element->levels().size()); // 1
  Eigen::VectorXd n(element->levels().size()); // 1
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& T = temperature; // K

  for (int i = 0; i < element->levels().size(); i++) {
    E(i) = element->levels()[i].energy;
    g(i) = element->levels()[i].statistical_weight;
  }

  auto sum_g_exp_E_kT = 0.0; // 1
  for (int j = 0; j < E.size(); j++) {
    sum_g_exp_E_kT += g(j) * std::exp(-E(j) / (k * T));
  }

  for (int i = 0; i < E.size(); i++) {
    n(i) = g(i) * std::exp(-E(i) / (k * T)) / sum_g_exp_E_kT;
  }

  return n;
};


}