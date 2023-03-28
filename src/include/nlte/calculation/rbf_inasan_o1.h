#pragma once


#include <cmath>
#include <memory>

#include <Eigen/Dense>

#include "../data/constants.h"
#include "../data/element.h"
#include "../data/rbf_inasan_o1.h"
#include "../interpolation/linear_interpolant.h"


namespace nlte {


/**
 * INASAN
 */
Eigen::MatrixXd rbf_inasan_o1_rates(
  std::shared_ptr<Element> element,
  std::vector<double> wavelengths /* nm */,
  std::vector<double> spectral_flux_densities /* W * m^{-2} * nm^{-1} */,
  double optical_depth /* 1 */
) {
  Eigen::MatrixXd P = // s^{-1}
  Eigen::MatrixXd::Zero(element->levels().size(), element->levels().size());
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& tau = optical_depth; // 1
  auto eV_to_J = 1.602177e-19;
  auto cm_to_m = 0.01;
  auto cm_to_nm = 1.0e7;
  auto hbar = REDUCED_PLANCK_CONSTANT * eV_to_J; // J * s = W * s^2

  for (int i = 0; i < element->levels().size(); i++) {
    auto& initial = element->levels()[i];
    for (int j = 0; j < element->levels().size(); j++) {
      auto& final = element->levels()[j];
      for (auto& transition : RbfInasanO1::transitions()) {
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
            auto& nu = RbfInasanO1::frequencies()[k]; // s^{-1}
            auto lambda = c / nu * cm_to_nm; // nm
            auto sigma =
              + RbfInasanO1::photoionization_cross_sections()[k]
              * std::pow(cm_to_m, 2); // m^2
            auto dnu =
              + std::abs(
                + RbfInasanO1::frequencies()[k + 1]
                - RbfInasanO1::frequencies()[k]
              ); // s^{-1}
            auto dlambda =
              + std::abs(
                + c / RbfInasanO1::frequencies()[k + 1]
                - c / RbfInasanO1::frequencies()[k]
              )
              * cm_to_nm; // nm

            P_ij += F(lambda) / (hbar * nu) * sigma * std::exp(-tau) * dlambda;
          }

          P(i, j) = P_ij;
        }
      }
    }
  }

  return P;
};


}