/**
 * \file astrea/calculation/nlte.h
 * NLTE electrons population calculation.
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


namespace astrea {


/**
 * Calculates NLTE transition operator.
 * 
 * \param rates_matrix Rates matrix in \f$s^{-1}\f$.
 * \return Transition operator in \f$1\f$.
 */
inline Eigen::MatrixXd
nlte_transition_operator(const Eigen::MatrixXd rates_matrix) {
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  const Eigen::MatrixXd R = rates_matrix;
  const auto R_u = pow<-1>(second);

  const auto K = R.cols();

  Eigen::MatrixXd Q = Eigen::MatrixXd(K, K);
  const auto Q_u = pow<-1>(second);
  fm::family(0, K - 1, [&](int i) {
    fm::family(0, K - 1, [&](int j) {
      Q(i, j) = fm::cases<quantity<frequency>>({
        {
          [=]() -> quantity<frequency> {
            return
              - fm::sum<quantity<frequency>>(0, K - 1, [=](int k) {
                return fm::cases<quantity<frequency>>({
                  {[=]() { return R(i, k) * R_u; }, i != k},
                  {[]() { return 0.0 * pow<-1>(second); }, i == k},
                });
              })
            ;
          },
          i == j
        },
        {
          [=]() -> quantity<frequency> { return R(j, i) * R_u; },
          i != j
        },
      }) / Q_u;
    });
  });

  return Q;
}


/**
 * Calculates NLTE electrons population.
 * Previous electrons population is set manually. Current elements population
 * is calculated automatically.
 * 
 * \param electrons_population Previous electrons population in \f$1\f$.
 * \param delta_time Time step in \f$s\f$.
 * \param rates_matrix Rates matrix in \f$s^{-1}\f$.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd nlte_population_full(
  const Eigen::VectorXd electrons_population,
  const double delta_time,
  const Eigen::MatrixXd rates_matrix
) {
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;

  const Eigen::MatrixXd Q = nlte_transition_operator(rates_matrix);
  const auto Q_u = pow<-1>(second);

  const auto dt = delta_time * second;

  const auto I = Eigen::MatrixXd::Identity(Q.rows(), Q.cols());

  const auto& n_t = electrons_population;

  const auto P = (I - Q * (dt * Q_u)).inverse();

  const auto n_t_plus_dt_ = P * n_t;

  const auto n_t_plus_dt = n_t_plus_dt_ / n_t_plus_dt_.sum();

  return n_t_plus_dt;
}


/**
 * Calculates NLTE electrons population.
 * Previuos electrons population is set manually. Current elements population
 * is set manually.
 * 
 * \param elements Elements.
 * \param elements_population Elements population in \f$1\f$.
 * \param electrons_population Previous electrons population in \f$1\f$.
 * \param delta_time Time step in \f$s\f$.
 * \param rates_matrix Rates matrix in \f$s^{-1}\f$.
 * \exception length_error \p elements and \p elements_population must have the
 * same size.
 * \return Electrons population in \f$1\f$.
 */
inline Eigen::VectorXd nlte_population_per_elements(
  const std::vector<std::shared_ptr<Element>> elements,
  const Eigen::VectorXd elements_population,
  const Eigen::VectorXd electrons_population,
  const double delta_time,
  const Eigen::MatrixXd rates_matrix
) {
  if (elements.size() != elements_population.size()) {
    throw std::length_error(
      "astrea::lte_boltzmann_population error: "
      "elements and elements_population must have the same size."
    );
  }

  using boost::units::si::second;

  const int Z = elements.size();

  Eigen::VectorXi k(Z);
  fm::family(0, Z - 1, [&](int z) {
    k(z) = elements[z]->levels().size();
  });

  const auto K = [=](int z) {
    return fm::sum<int>(0, z - 1, [=](int z_) -> int { return k(z_); });
  };

  const auto& N = elements_population;

  const Eigen::MatrixXd Q = nlte_transition_operator(rates_matrix);
  const auto Q_u = pow<-1>(second);

  const auto dt = delta_time * second;

  const auto I = Eigen::MatrixXd::Identity(Q.rows(), Q.cols());

  const auto& n_t = electrons_population;

  const auto P = (I - Q * (dt * Q_u)).inverse();

  const auto n_t_plus_dt_ = P * n_t;

  const auto n_t_plus_dt__ = [&](int z) {
    return [&](int i) -> double {
      return n_t_plus_dt_(i + K(z));
    };
  };

  Eigen::VectorXd n_t_plus_dt_v(K(Z));
  const auto n_t_plus_dt = [&](int z) {
    return [&](int i) -> double& { return n_t_plus_dt_v(i + K(z)); };
  };
  fm::family(0, Z - 1, [=](int z) {
    fm::family(0, k(z) - 1, [=](int i) {
      n_t_plus_dt(z)(i) =
        + n_t_plus_dt__(z)(i)
        / fm::sum<double>(0, k(z) - 1, [=](int j) {
          return n_t_plus_dt__(z)(j);
        })
        * N(z)
      ;
    });
  });

  // double epsilon bypass
  for (int z = 0; z < Z - 1; z++) {
    for (int i = 0; i < k(z) - 1; i++) {
      if (n_t_plus_dt(z)(i) < 1.0e-100) {
        n_t_plus_dt(z)(i) = 0.0;
      }
    }
  }

  return n_t_plus_dt_v;
}


}