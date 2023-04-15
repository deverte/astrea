#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/interpolators/barycentric_rational.hpp>
#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/transitions/rbf_inasan_o1.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative bound-free transitions
 * 
 * data: INASAN
 * inverse process: this
 */
inline Eigen::MatrixXd rbf_inasan_o1_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double optical_depth /* 1 */
) {
  auto eV_to_J = 1.602177e-19;
  auto cm_to_m = 0.01;
  auto cm_to_nm = 1.0e7;

  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto hbar = REDUCED_PLANCK_CONSTANT * eV_to_J; // J * s = W * s^2

  auto& tau = optical_depth; // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto F = [&](double /* nm */ lambda) {
    return spectrum->operator()(lambda);
  }; // W * m^{-2} * nm^{-1}

  Eigen::MatrixXd R_PI_RR_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (auto transition : RbfInasanO1::transitions()) {
        if (transition.initial == initial.term) {

          auto R_ij = 0.0;
          for (
            int k = transition.start_index - 1;
            k <= transition.finish_index - 3;
            k++
          ) {
            auto nu = RbfInasanO1::frequencies()[k]; // s^{-1}
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

            R_ij += F(lambda) / (hbar * nu) * sigma * std::exp(-tau) * dlambda;
          }

          R_PI_RR_DR(i + K(s), L(s) + K(s)) = R_ij;
        }
      }
    }
  }

  return R_PI_RR_DR;
}


}