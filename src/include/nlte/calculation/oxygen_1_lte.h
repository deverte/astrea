#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/oxygen_1.h"


namespace nlte {


Eigen::VectorXd oxygen_lte_population(double temperature /* K */) {
  Eigen::VectorXd E(Oxygen::levels().size()); // eV
  Eigen::VectorXd n(Oxygen::levels().size()); // 1
  auto& k = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& T = temperature; // K
  auto sum_n = 1.0; // 1

  for (int i = 0; i < Oxygen::levels().size(); i++) {
    E(i) = Oxygen::levels()[i].energy;
  }

  auto sum_exp_E_kT = 0.0; // 1
  for (int j = 0; j < E.size(); j++) {
    sum_exp_E_kT += std::exp(-E(j) / (k * T));
  }

  for (int i = 0; i < E.size(); i++) {
    n(i) = std::exp(-E(i) / (k * T)) / sum_exp_E_kT * sum_n;
  }

  return n;
};


}