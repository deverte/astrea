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

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"


namespace astrea {


/**
 * Calculates NLTE transition operator.
 * 
 * \param rates_matrix Rates matrix in s-1.
 * \return Transition operator in 1.
 */
inline Eigen::MatrixXd
nlte_transition_operator(const Eigen::MatrixXd rates_matrix) {
  const Eigen::MatrixXd R = rates_matrix; // s-1

  const auto K = R.cols();

  Eigen::MatrixXd Q = Eigen::MatrixXd::Zero(K, K);
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < K; j++) {
      if (i == j) {
        for (int k = 0; k < K; k++) {
          if (i != k) {
            Q(i, j) -= R(i, k);
          }
        }
      }
      else {
        Q(i, j) = R(j, i);
      }
    }
  }

  return Q;
}


/**
 * Calculates NLTE electrons population.
 * Previous electrons population is set manually. Current elements population
 * is calculated automatically.
 * 
 * \param electrons_population Previous electrons population in 1.
 * \param delta_time Time step in s.
 * \param rates_matrix Rates matrix in s-1.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd nlte_population_full(
  const Eigen::VectorXd electrons_population,
  const double delta_time,
  const Eigen::MatrixXd rates_matrix
) {
  const Eigen::MatrixXd Q = nlte_transition_operator(rates_matrix);

  const auto& delta_t = delta_time; // s
  const auto& n_t = electrons_population; // 1

  const auto I = Eigen::MatrixXd::Identity(Q.rows(), Q.cols());

  const auto P = (I - Q * (delta_t)).inverse();

  const auto n_t_plus_delta_t_ = P * n_t;

  const auto n_t_plus_delta_t = n_t_plus_delta_t_ / n_t_plus_delta_t_.sum();

  return n_t_plus_delta_t;
}


/**
 * Calculates NLTE electrons population.
 * Previuos electrons population is set manually. Current elements population
 * is set manually.
 * 
 * \param elements Elements.
 * \param elements_population Elements population in 1.
 * \param electrons_population Previous electrons population in 1.
 * \param delta_time Time step in s.
 * \param rates_matrix Rates matrix in s-1.
 * \exception length_error \p elements and \p elements_population must have the
 * same size.
 * \return Electrons population in 1.
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

  const auto ea = ElementsAdapter(elements);

  const auto& N = elements_population; // 1
  const auto& delta_t = delta_time; // s
  const auto& n_t = electrons_population; // 1

  const Eigen::MatrixXd Q = nlte_transition_operator(rates_matrix);

  const Eigen::MatrixXd I = Eigen::MatrixXd::Identity(Q.rows(), Q.cols());

  const auto P = (I - Q * delta_t).inverse();

  const auto n_t_plus_delta_t_ = P * n_t;

  Eigen::VectorXd n_t_plus_delta_t(ea.K(ea.Z()));
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      auto sum = 0.0;
      for (int j = 0; j < ea.k(z); j++) {
        sum += n_t_plus_delta_t_(j + ea.K(z));
      }

      n_t_plus_delta_t(i + ea.K(z)) =
        n_t_plus_delta_t_(i + ea.K(z)) / sum * N(z)
      ;
    }
  }

  return n_t_plus_delta_t;
}


/**
 * Calculates NLTE electrons population.
 * Previuos electrons population is set manually. Current elements population
 * is set manually.
 * 
 * \param elements Elements.
 * \param elements_population Elements population in 1.
 * \param electrons_population Previous electrons population in 1.
 * \param rates_matrix Rates matrix in s-1.
 * \exception length_error \p elements and \p elements_population must have the
 * same size.
 * \return Electrons population in 1.
 */
inline Eigen::VectorXd nlte_population_per_elements_explicit(
  const std::vector<std::shared_ptr<Element>> elements,
  const Eigen::VectorXd elements_population,
  const Eigen::VectorXd electrons_population,
  const Eigen::MatrixXd rates_matrix
) {
  if (elements.size() != elements_population.size()) {
    throw std::length_error(
      "astrea::lte_boltzmann_population error: "
      "elements and elements_population must have the same size."
    );
  }

  const auto ea = ElementsAdapter(elements);

  const auto& N = elements_population; // 1
  const auto& n_t = electrons_population; // 1

  const Eigen::MatrixXd Q = nlte_transition_operator(rates_matrix);

  const auto n_t_plus_delta_t_ = Q * n_t;

  Eigen::VectorXd n_t_plus_delta_t(ea.K(ea.Z()));
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      auto sum = 0.0;
      for (int j = 0; j < ea.k(z); j++) {
        sum += n_t_plus_delta_t_(j + ea.K(z));
      }

      n_t_plus_delta_t(i + ea.K(z)) =
        n_t_plus_delta_t_(i + ea.K(z)) / sum * N(z)
      ;
    }
  }

  return n_t_plus_delta_t;
}


}