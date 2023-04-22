#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/math/interpolators/barycentric_rational.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/transitions/pi_mashonkina_o1.h"
#include "../physics/constants.h"


namespace lss {


/**
 * Radiative bound-free transitions
 * 
 * data: INASAN
 * inverse process: this
 */
inline Eigen::MatrixXd pi_mashonkina_o1_rates(
  std::vector<std::shared_ptr<Element>> elements,
  std::shared_ptr<Spectrum> spectrum,
  double optical_depth /* 1 */
) {
  auto eV_to_J = 1.602177e-19;
  auto cm_to_m = 0.01;
  auto cm_to_nm = 1.0e7;

  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto h = PLANCK_CONSTANT; // eV * s
  auto& pi = PI; // 1

  auto& tau = optical_depth; // 1

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return int(fm::sum(0, s - 1, [&](int z) { return L(z); }));
  };

  auto F_lambda = [&](double lambda /* nm */) { // W * m^{-2} * nm^{-1}
    return spectrum->operator()(lambda);
  };

  Eigen::MatrixXd R_PI_RR_DR = Eigen::MatrixXd::Zero(K(S), K(S)); // s^{-1}
  for (int s = 0; s <= S - 2; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (auto transition : PIMashonkinaO1::transitions()) {
        if (transition.initial == initial.term) {

          std::vector<double> frequencies = { // s^{-1}
            PIMashonkinaO1::frequencies().begin() + transition.start_index - 1,
            PIMashonkinaO1::frequencies().begin() + transition.finish_index - 3
          };
          std::vector<double> photoionization_cross_sections = { // cm^2
            PIMashonkinaO1::photoionization_cross_sections().begin()
            + transition.start_index - 1,
            PIMashonkinaO1::photoionization_cross_sections().begin()
            + transition.finish_index - 3
          };

          auto nu_0 = // s^{-1}
            PIMashonkinaO1::frequencies()[transition.start_index - 1]
          ;
          auto infty = // s^{-1}
            PIMashonkinaO1::frequencies()[transition.finish_index - 3]
          ;
          auto sigma = // cm^2
            boost::math::interpolators::barycentric_rational<double>(
              std::move(frequencies),
              std::move(photoionization_cross_sections),
              1
            )
          ;

          R_PI_RR_DR(i + K(s), L(s) + K(s)) =
            4.0 * pi * boost::math::quadrature::trapezoidal( // s^{-1}
              [&](double nu /* s^{-1} */) {
                auto lambda = c / nu * cm_to_nm; // nm
                auto F_nu = // W * m^{-2} * s
                  + (c * cm_to_nm)    // nm * s^{-1}
                  / std::pow(nu, 2.0) // s^2
                  * F_lambda(lambda)  // W * m^{-2} * nm^{-1}
                ;

                return
                  + (sigma(nu) * std::pow(cm_to_m, 2.0)) // m^2
                  / ((h * eV_to_J) * nu)             // J^{-1} = W^{-1} * s^{-1}
                  * F_nu                                 // W * m^{-2} * s
                  * std::exp(-tau)                       // 1
                  // * dnu                               // s^{-1}
                ;
              },
              nu_0,
              infty
            )
          ;

          frequencies = sigma.return_x();
          photoionization_cross_sections = sigma.return_y();
        }
      }
    }
  }

  return R_PI_RR_DR;
}


}