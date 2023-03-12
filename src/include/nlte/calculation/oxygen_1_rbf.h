#pragma once


#include <cmath>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/oxygen_1_rbf.h"
#include "../data/oxygen_1.h"
#include "../interpolation/linear_interpolant.h"


namespace nlte {


Eigen::MatrixXd oxygen_rbf_rates(
  std::vector<double> wavelengths /* nm */,
  std::vector<double> spectral_flux_densities /* W * m^{-2} * nm^{-1} */
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(Oxygen::levels().size(), Oxygen::levels().size());
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto eV_to_J = 1.602177e-19;
  auto cm_to_m = 0.01;
  auto cm_to_nm = 1.0e7;
  auto hbar = REDUCED_PLANCK_CONSTANT * eV_to_J; // J * s = W * s^2

  for (int i = 0; i < Oxygen::levels().size(); i++) {
    auto& initial = Oxygen::levels()[i];
    for (int j = 0; j < Oxygen::levels().size(); j++) {
      auto& final = Oxygen::levels()[j];
      for (auto& transition : OxygenRbf::transitions()) {
        if (
          transition.initial == initial.term && final.term == initial.limit_term
        ) {
          LinearInterpolant F; // W * m^{-2} * nm^{-1}
          F.data_points(wavelengths, spectral_flux_densities);

          auto P_ij = 0.0;
          for (
            int k = transition.start_index - 1;
            k < transition.finish_index - 2;
            k++
          ) {
            auto& nu = OxygenRbf::frequencies()[k]; // s^{-1}
            auto lambda = c / nu * cm_to_nm; // nm
            auto sigma =
              + OxygenRbf::photoionization_cross_sections()[k]
              * std::pow(cm_to_m, 2); // m^2
            auto dnu =
              + std::abs(
                OxygenRbf::frequencies()[k + 1] - OxygenRbf::frequencies()[k]
              ); // s^{-1}
            auto dlambda =
              + std::abs(
                + c / OxygenRbf::frequencies()[k + 1]
                - c / OxygenRbf::frequencies()[k]
              )
              * cm_to_nm; // nm

            P_ij += F(lambda) / (hbar * nu) * sigma * dlambda;
          }

          P(i, j) = P_ij;
        }
      }
    }
  }

  return P;
};


}