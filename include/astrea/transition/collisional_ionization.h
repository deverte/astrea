/**
 * \file astrea/transition/collisional_ionization.h
 * Collisional ionization transition.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>

#include "astrea/math/interp1d_log10xy.h"
#include "astrea/math/trapezoid.h"


namespace astrea::transition::collisional_ionization {


/**
 * Collisional ionization transition rate.
 * 
 * \param sigma_vs_v Collisional ionization cross section.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Cross
 * section in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param f_vs_v Velocities distribution.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Velocities
 * distribution in km-1 s.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param v_ij Velocity corresponding to line center in km s-1.
 * \param N_e Electrons number density in cm-3.
 * \return Transition rates in s-1.
 */
inline double R_ik(
  const Eigen::Matrix2Xd& sigma_vs_v,
  const Eigen::Matrix2Xd& f_vs_v,
  const double& v_ij,
  const double& N_e
) {
  const auto a = 1.0e5; // km-1 cm

  const auto& v_E1 = sigma_vs_v.row(0); // km s-1
  const auto& sigma_E1 = sigma_vs_v.row(1); // cm2
  const auto& v_E2 = f_vs_v.row(0); // km s-1
  const auto& f_E2 = f_vs_v.row(1); // km-1 s

  const auto E = std::max(v_E1.cols(), v_E2.cols()); // 1

  const auto v_infty = std::min(v_E1.maxCoeff(), v_E2.maxCoeff()); // km s-1

  const Eigen::VectorXd v_E = // km s-1
    Eigen::VectorXd::LinSpaced(E, v_ij, v_infty);

  const Eigen::VectorXd sigma_E = // cm2
    astrea::math::interp1d_log10xy::f_X(v_E1, sigma_E1, v_E);
  const Eigen::VectorXd f_E = // km-1 s
    astrea::math::interp1d_log10xy::f_X(v_E2, f_E2, v_E);

  const auto R_ik = // s-1
    + a
    * N_e
    * astrea::math::trapezoid::F(
      sigma_E.array() * v_E.array() * f_E.array(),
      v_E
    )
  ;

  return R_ik;
}


/**
 * Collisional ionization transition rates.
 * 
 * \param sigma_vs_v_K Collisional ionization cross section.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Cross
 * section in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param f_vs_v Velocities distribution.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Velocities
 * distribution in km-1 s.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param v_K Velocities corresponding to line centers in km s-1.
 * \param N_e Electrons number density in cm-3.
 * \return Transition rates in s-1.
 */
inline Eigen::VectorXd R_K(
  const std::vector<Eigen::Matrix2Xd>& sigma_vs_v_K,
  const Eigen::Matrix2Xd& f_vs_v,
  const Eigen::VectorXd& v_K,
  const double& N_e
) {
  const auto& K = sigma_vs_v_K.size();
  Eigen::VectorXd R_K = Eigen::VectorXd::Zero(K);
  for (int k = 0; k < K; k++) {
    R_K(k) = R_ik(sigma_vs_v_K[k], f_vs_v, v_K(k), N_e);
  }
  return R_K;
}


/**
 * Collisional ionization transition rate.
 * 
 * \param sigma_vs_v_ZK Collisional ionization cross section.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Cross
 * section in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param f_vs_v Velocities distribution.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Velocities
 * distribution in km-1 s.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param v_ZK Velocities corresponding to line centers in km s-1.
 * \param N_e Electrons number density in cm-3.
 * \return Transition rates in s-1.
 */
inline std::vector<Eigen::VectorXd> R_ZK(
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_v_ZK,
  const Eigen::Matrix2Xd& f_vs_v,
  const std::vector<Eigen::VectorXd>& v_ZK,
  const double& N_e
) {
  const auto& Z = sigma_vs_v_ZK.size();
  std::vector<Eigen::VectorXd> R_ZK(Z);
  for (int z = 0; z < Z - 1; z++) {
    R_ZK[z] = R_K(sigma_vs_v_ZK[z], f_vs_v, v_ZK[z], N_e);
  }
  return R_ZK;
}


/**
 * Collisional ionization transition rate.
 * 
 * \param sigma_vs_v_ZK Collisional ionization cross section.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Cross
 * section in cm2.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param f_vs_v Velocities distribution.
 * Axis 0: Bivariate data (row). Row 0: Velocities in km s-1. Row 1: Velocities
 * distribution in km-1 s.
 * Axis 1: Bivariate pair index (column).
 * Must be sorted in ascending order over velocities.
 * \param v_ZK Velocities corresponding to line centers in km s-1.
 * \param N_e_X Electrons number densities in cm-3.
 * \return Transition rates in s-1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> R_XZK(
  const std::vector<std::vector<Eigen::Matrix2Xd>>& sigma_vs_v_ZK,
  const Eigen::Matrix2Xd& f_vs_v,
  const std::vector<Eigen::VectorXd>& v_ZK,
  const Eigen::VectorXd& N_e_X
) {
  const auto& X = N_e_X.size();
  std::vector<std::vector<Eigen::VectorXd>> R_XZK(X);
  for (int x = 0; x < X; x++) {
    R_XZK[x] = R_ZK(sigma_vs_v_ZK, f_vs_v, v_ZK, N_e_X(x));
  }
  return R_XZK;
}


}