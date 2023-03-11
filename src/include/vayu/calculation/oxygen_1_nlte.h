#pragma once


#include <vector>

#include <Eigen/Dense>

#include "./oxygen_1_col.h"
#include "./oxygen_1_rbb_doppler.h"
#include "./oxygen_1_rbb_voigt.h"
#include "./oxygen_1_rbf.h"


Eigen::MatrixXd oxygen_nlte_transition_operator(
  double temperature /* K */,
  double electron_number_density /* cm^{-3} */,
  std::vector<double> spectral_flux_densities /*  */,
  std::vector<double> wavelengths /* cm */
) {
  auto P_col = oxygen_col_rates(temperature, electron_number_density); // s^{-1}
  auto P_rbb_doppler = oxygen_rbb_doppler_rates(); // s^{-1}
  auto P_rbb_voigt = oxygen_rbb_voigt_rates(); // s^{-1}
  auto P_rbf = oxygen_rbf_rates(wavelengths, spectral_flux_densities); // s^{-1}

  auto P = // s^{-1}
    Eigen::MatrixXd::Zero(P_col.rows(), P_col.cols())
    + P_col
    + P_rbb_doppler
    + P_rbb_voigt
    + P_rbf;

  Eigen::MatrixXd R = Eigen::MatrixXd::Zero(P.rows(), P.cols()); // s^{-1}
  for (int i = 0; i < R.rows(); i++) {
    for (int j = 0; j < R.cols(); j++) {
      if (i == j) {
        for (int k = 0; k < R.cols(); k++) {
          if (i != k) {
            R(i, j) += -P(k, i);
          }
        }
      }
      else {
        R(i, j) = P(j, i);
      }
    }
  }

  return R;
};


Eigen::VectorXd oxygen_nlte(
  Eigen::VectorXd population /* 1 */,
  double delta_time /* s */,
  Eigen::MatrixXd transition_operator /* s^{-1} */
) {
  auto& R = transition_operator; // s^{-1}
  auto I = Eigen::MatrixXd::Identity(R.rows(), R.cols()); // 1
  auto& dt = delta_time; // s
  auto& n_t = population; // 1

  auto n_t_plus_dt = (I - R * dt).inverse() * n_t; // 1

  return n_t_plus_dt;
}