#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/oxygen_1.h"


namespace nlte {


Eigen::VectorXd oxygen_lte_population(double temperature /* K */) {
  Eigen::VectorXd E(Oxygen::levels().size()); // eV
  Eigen::VectorXd g(Oxygen::levels().size()); // 1
  Eigen::VectorXd n(Oxygen::levels().size()); // 1
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& T = temperature; // K

  for (int i = 0; i < Oxygen::levels().size(); i++) {
    E(i) = Oxygen::levels()[i].energy;
    g(i) = Oxygen::levels()[i].statistical_weight;
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