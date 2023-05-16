/**
 * \file astrea/transitions/rbb_mashonkina_doppler_o1.h
 * Radiative bound-bound transitions rates using Doppler profile using
 * Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>

#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/rbb_mashonkina_doppler_o1.h"
#include "../units/units.h"


namespace astrea {


/**
 * Radiative bound-bound transitions rates using Doppler profile using
 * Mashonkina data (from private communication).
 * 
 * \param elements Elements.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd rbb_mashonkina_doppler_o1_rates(
  const std::vector<std::shared_ptr<Element>> elements
) {
  using astrea::units::si::angstrom;
  using astrea::units::si::electronvolt;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::hbar;
  using boost::units::si::energy;
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  const auto rbb_mashonkina_doppler_o1 = RBBMashonkinaDopplerO1();

  const int Z = elements.size();

  const auto Lambda = 0.66702 * pow<2>(angstrom) * pow<-1>(second);

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [=](int z) -> int {
    return fm::sum<int>(0, z - 1, [=](int z_) -> int { return k(z_); });
  };

  Eigen::Vector<quantity<energy>, Eigen::Dynamic> E_v(K(Z));
  const auto E = [&](int z) {
    return [&](int i) -> quantity<energy>& { return E_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      E(z)(i) = elements[z]->levels()[i].energy * electronvolt;
    });
  });

  Eigen::VectorXd g_v(K(Z));
  const auto g = [&](int z) {
    return [&](int i) -> double& { return g_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      g(z)(i) = elements[z]->levels()[i].statistical_weight;
    });
  });

  const auto f = [&](int z) {
    return [&](int i, int j) -> double {
      for (const auto transition : rbb_mashonkina_doppler_o1.transitions()) {
        if (
          transition.initial == elements[z]->levels()[i].term &&
          transition.final == elements[z]->levels()[j].term
        ) {
          return transition.oscillator_strength;
        }
      }
      return 0.0;
    };
  };

  Eigen::MatrixXd R_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto R_u = pow<-1>(second);
  const auto R = [&](int z) {
    return [&](int i, int j) -> double& { return R_v(i + K(z), j + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      fm::family(i + 1, k(z) - 1, [=](int j) {
        R(z)(i, j) =
          + Lambda
          / pow<2>(c / (abs(E(z)(i) - E(z)(j)) / hbar))
          * (g(z)(j) / g(z)(i)) * f(z)(i, j)
          / R_u
        ;

        R(z)(j, i) =
          + Lambda
          / pow<2>(c / (abs(E(z)(j) - E(z)(i)) / hbar))
          * (g(z)(i) / g(z)(j)) * f(z)(j, i)
          / R_u
        ;
      });
    });
  });

  return R_v;
}


}