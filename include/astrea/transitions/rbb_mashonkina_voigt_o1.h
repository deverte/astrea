/**
 * \file astrea/transitions/rbb_mashonkina_voigt_o1.h
 * Radiative bound-bound transitions rates using Voigt profile using
 * Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <utility>
#include <vector>

#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/rbb_mashonkina_voigt_o1.h"
#include "../units/units.h"


namespace astrea {


/**
 * Radiative bound-bound transitions rates using Voigt profile using
 * Mashonkina data (from private communication).
 * 
 * \param elements Elements.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd
rbb_mashonkina_voigt_o1_rates(std::vector<std::shared_ptr<Element>> elements) {
  using astrea::units::si::angstrom;
  using astrea::units::si::electronvolt;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::hbar;
  using boost::units::si::energy;
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  auto rbb_mashonkina_voigt = RBBMashonkinaVoigtO1();

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) -> int {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      E(i + K(s)) = elements[s]->levels()[i].energy * electronvolt;
    });
  });
  Eigen::VectorXd g(K(S));
  fm::family(0, S - 1, [&](int s) {
    fm::family(0, L(s) - 1, [&](int i) {
      g(i + K(s)) = elements[s]->levels()[i].statistical_weight;
    });
  });

  std::pair<Eigen::MatrixXd, frequency> R_RBB;
  R_RBB.first = Eigen::MatrixXd::Zero(K(S), K(S));
  R_RBB.second = pow<-1>(second);
  for (int s = 0; s <= S - 1; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      auto initial = elements[s]->levels()[i];

      for (int j = 0; j < L(s); j++) {
        auto final = elements[s]->levels()[j];

        for (auto transition : rbb_mashonkina_voigt.transitions()) {
          if (
            transition.initial == initial.term &&
            transition.final == final.term
          ) {
            auto& f_ij = transition.oscillator_strength; // 1

            R_RBB.first(i + K(s), j + K(s)) =
              + (0.66702 * pow<2>(angstrom) * pow<-1>(second))
              / pow<2>(c / (abs(E(i + K(s)) - E(j + K(s))) / hbar))
              * (g(j + K(s)) / g(i + K(s))) * f_ij
              / R_RBB.second
            ;
          }
        }
      }
    }
  }

  return R_RBB.first;
}


}