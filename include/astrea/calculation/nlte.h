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
inline Eigen::MatrixXd nlte_transition_operator(Eigen::MatrixXd rates_matrix) {
  using boost::units::si::frequency;
  using boost::units::si::second;
  using boost::units::pow;
  using boost::units::quantity;

  auto& R = rates_matrix; // s^{-1}

  Eigen::MatrixXd Q = Eigen::MatrixXd::Zero(R.rows(), R.cols()); // s^{-1}
  auto K = Q.cols();

  for (int i = 0; i <= K - 1; i++) {
    for (int j = 0; j <= K - 1; j++) {
      Q(i, j) = fm::cases<quantity<frequency>>({
        {
          [&]() {
            return
              - fm::sum<quantity<frequency>>(0, K - 1, [&](int k) {
                return fm::cases<quantity<frequency>>({
                  {[&]() { return R(i, k) * pow<-1>(second); }, i != k},
                  {[]() { return 0.0 * pow<-1>(second); }, i == k},
                });
              })
            ;
          },
          i == j
        },
        {[&]() { return R(j, i) * pow<-1>(second); }, i != j},
      }) / pow<-1>(second);
    }
  }

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
  Eigen::VectorXd electrons_population,
  double delta_time,
  Eigen::MatrixXd rates_matrix
) {
  using boost::units::si::second;

  auto Q_tot = nlte_transition_operator(rates_matrix); // s^{-1}
  auto dt = delta_time * second;
  auto I = Eigen::MatrixXd::Identity(Q_tot.rows(), Q_tot.cols()); // 1
  auto& n_t = electrons_population;

  auto P = (I - Q_tot * (dt / second)).inverse(); // 1

  auto n_t_plus_dt = P * n_t; // 1

  auto norm_n_t_plus_dt = n_t_plus_dt / n_t_plus_dt.sum();

  return norm_n_t_plus_dt;
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
  std::vector<std::shared_ptr<Element>> elements,
  Eigen::VectorXd elements_population,
  Eigen::VectorXd electrons_population,
  double delta_time,
  Eigen::MatrixXd rates_matrix
) {
  if (elements.size() != elements_population.size()) {
    throw std::length_error(
      "astrea::lte_boltzmann_population error: "
      "elements and elements_population must have the same size."
    );
  }

  using boost::units::si::second;

  int S = elements.size();
  Eigen::VectorXi L(S);
  for (int s = 0; s <= S - 1; s++) {
    L(s) = elements[s]->levels().size();
  }
  auto K = [&](int s) {
    return fm::sum<int>(0, s - 1, [&](int z) { return L(z); });
  };

  auto& N = elements_population;
  auto n_t_plus_dt = nlte_population_full(
    electrons_population,
    delta_time,
    rates_matrix
  );

  Eigen::VectorXd norm_n_t_plus_dt(K(S));
  for (int s = 0; s <= S; s++) {
    for (int i = 0; i <= L(s) - 1; i++) {
      norm_n_t_plus_dt(i + K(s)) =
        + n_t_plus_dt(i + K(s))
        / n_t_plus_dt(Eigen::seq(K(s), K(s + 1) - 1)).sum()
        * N(s)
      ;
    }
  }

  return norm_n_t_plus_dt;
}


}