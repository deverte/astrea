/**
 * \file astrea/transitions/se_nist_o1.h
 * Spontaneous emission transitions rates using NIST data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <Eigen/Dense>
#include <fm/fm.h>

#include "../data/elements/element.h"
#include "../data/transitions/se_nist_o1.h"


namespace astrea {


/**
 * Spontaneous emission transitions rates using NIST data.
 * 
 * \param elements Elements.
 * \return Transitions rates in \f$s^{-1}\f$.
 */
inline Eigen::MatrixXd
se_nist_o1_rates(const std::vector<std::shared_ptr<Element>> elements) {
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  const auto se_nist_o1 = SENistO1();

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [&](int z) {
    return fm::sum<int>(0, z - 1, [&](int z_) -> int { return k(z_); });
  };

  const auto M = [&](int z) {
    return [=](int i, int j) {
      int size = 0;
      for (const auto transition : se_nist_o1.transitions()) {
        if (
          (transition.initial == elements[z]->levels()[i].term) &&
          (transition.final == elements[z]->levels()[j].term)
        ) {
          size++;
        }
      }

      return size;
    };
  };

  const auto A_ = [&](int z) {
    return [&](int j, int i) {
      return [=](int m) {
        std::vector<ISENistO1Transition> transitions;
        for (const auto transition : se_nist_o1.transitions()) {
          if (
            (transition.initial == elements[z]->levels()[j].term) &&
            (transition.final == elements[z]->levels()[i].term)
          ) {
            transitions.push_back(transition);
          }
        }

        const auto M_ = transitions.size();

        Eigen::Vector<quantity<frequency>, Eigen::Dynamic> vec(M_);
        for (int m_ = 0; m_ <= M_ - 1; m_++) {
          vec(m_) = transitions[m_].rate * pow<-1>(second);
        }

        return vec(m);
      };
    };
  };

  const auto J = [&](int z) {
    return [&](int i, int j) {
      return [=](int m) {
        std::vector<ISENistO1Transition> transitions;
        for (const auto transition : se_nist_o1.transitions()) {
          if (
            (transition.initial == elements[z]->levels()[i].term) &&
            (transition.final == elements[z]->levels()[j].term)
          ) {
            transitions.push_back(transition);
          }
        }

        const auto M_ = transitions.size();

        Eigen::VectorXd vec(M_);
        for (int m_ = 0; m_ <= M_ - 1; m_++) {
          vec(m_) =
            transitions[m_].initial_total_angular_momentum_quantum_number
          ;
        }

        return vec(m);
      };
    };
  };

  Eigen::MatrixXd A_v = Eigen::MatrixXd::Zero(K(Z), K(Z));
  const auto A_u = pow<-1>(second);
  const auto A = [&](int z) {
    return [&](int j, int i) -> double& {
      return A_v(j + K(z), i + K(z));
    };
  };

  fm::family(0, Z - 1, [&](int z) {
    fm::family(0, k(z) - 1, [&](int i) {
      fm::family(i + 1, k(z) - 1, [&](int j) {
        A(z)(j, i) = fm::cases<quantity<frequency>>({
          {
            [&]() {
              return
                + fm::sum<quantity<frequency>>(0, M(z)(j, i) - 1, [&](int m) {
                  return A_(z)(j, i)(m) * (2.0 * J(z)(j, i)(m) + 1.0);
                })
                / fm::sum<double>(0, M(z)(j, i) - 1, [&](int m) {
                  return 2.0 * J(z)(j, i)(m) + 1.0;
                })
              ;
            },
            M(z)(j, i) - 1 > 0,
          },
          { []() { return 0.0 * pow<-1>(second); }, true },
        }) / A_u;
      });
    });
  });

  return A_v;
}


}