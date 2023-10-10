/**
 * \file astrea/population/nlte.h
 * NLTE electrons population calculation using balance equation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::population::balance_equation {


/**
 * Builds single transitions rates matrix Q from S.
 * 
 * \param S_x Transitions rates matrix at coordinate x in s-1.
 * \return Single transitions rates matrix at coordinate x in s-1.
 */
inline Eigen::MatrixXd Q_x(const Eigen::MatrixXd& S_x) {
  Eigen::MatrixXd Q_x = S_x.transpose();
  for (int i = 0; i < S_x.rows(); i++) {
    for (int j = 0; j < S_x.cols(); j++) {
      if (i == j) {
        Q_x(i, j) = -(S_x.row(i).sum() - S_x(i, j));
      }
    }
  }
  return Q_x;
}


/**
 * Calculates single transition operator using transition rates matrix.
 * 
 * \param Q_x Transition rates matrix in s-1.
 * \param Delta_t Time difference in s.
 * \return Transition operator at coordinate x in s-1.
 */
inline Eigen::MatrixXd P_x(const Eigen::MatrixXd& Q_x, const double Delta_t) {
  Eigen::MatrixXd I = Eigen::MatrixXd::Identity(Q_x.rows(), Q_x.cols());
  Eigen::MatrixXd P_x = (I - Q_x * Delta_t).inverse();
  return P_x;
}


/**
 * Calculates current electrons populations single vector using previous
 * electrons populations single vector and single transition operator P.
 * 
 * \param p_x_t Previous electrons population at coordinate x in 1.
 * \param P_x Transition operator in s-1.
 * \return Single electrons population vector at coordinate x in 1.
 */
inline Eigen::VectorXd
p_x_t_plus_Delta_t(const Eigen::VectorXd& p_x_t, const Eigen::MatrixXd& P_x) {
  Eigen::VectorXd p_x_t_plus_Delta_t = P_x * p_x_t;
  return p_x_t_plus_Delta_t;
}


/**
 * Builds single electrons population vector p_t from set of n_t vectors.
 * 
 * \param n_x_t Previous electrons population at coordinate x in 1.
 * \return Single electrons population vector at coordinate x in 1.
 */
inline Eigen::VectorXd p_x_t(const std::vector<Eigen::VectorXd>& n_x_t) {
  int size = 0;
  for (const auto& n : n_x_t) {
    size += n.size();
  }

  Eigen::VectorXd p_x_t = Eigen::VectorXd::Zero(size);
  int idx = 0;
  for (const auto& n_x : n_x_t) {
    p_x_t.segment(idx, n_x.size()) = n_x;
    idx += n_x.size();
  }

  return p_x_t;
}


/**
 * Builds single transitions rates matrix S from set of R matrices.
 * 
 * \param R_x_ij Excitation transitions rates at coordinate x in s-1.
 * \param R_x_ji De-excitation transitions rates at coordinate x in s-1.
 * \param R_x_ik Ionization transitions rates at coordinate x in s-1.
 * \param R_x_ki Recombination transitions rates at coordinate x in s-1.
 * \return Single transitions rates matrix at coordinate x in s-1.
 */
inline Eigen::MatrixXd S_x(
  const std::vector<Eigen::MatrixXd>& R_x_ij,
  const std::vector<Eigen::MatrixXd>& R_x_ji,
  const std::vector<Eigen::VectorXd>& R_x_ik,
  const std::vector<Eigen::VectorXd>& R_x_ki
) {
  int size = 0;
  for (const auto& R_x : R_x_ij) {
    size += R_x.rows();
  }

  Eigen::MatrixXd S_x = Eigen::MatrixXd::Zero(size, size);
  int idx = 0;
  for (int i = 0; i < R_x_ij.size(); i++) {
    S_x.block(idx, idx, R_x_ij[i].rows(), R_x_ij[i].cols()) =
      R_x_ij[i] + R_x_ji[i];
    idx += R_x_ij[i].rows();
  }
  idx = 0;
  for (int i = 0; i < R_x_ik.size() - 1; i++) {
    S_x.block(idx, idx + R_x_ik[i].size(), R_x_ik[i].size(), 1) = R_x_ik[i];
    S_x.block(idx + R_x_ki[i].size(), idx, 1, R_x_ki[i].size()) =
      R_x_ki[i].transpose();
    idx += R_x_ik[i].rows();
  }

  return S_x;
}


/**
 * Calculates NLTE electrons population using balance equation.
 * 
 * \param n_x_t Previous electrons population at coordinate x.
 * \param R_x_ij Excitation transitions rates at coordinate x in s-1.
 * \param R_x_ji De-excitation transitions rates at coordinate x in s-1.
 * \param R_x_ik Ionization transitions rates at coordinate x in s-1.
 * \param R_x_ki Recombination transitions rates at coordinate x in s-1.
 * \param Delta_t Time difference in s.
 * \return Electrons population at coordinate x in 1.
 */
inline std::vector<Eigen::VectorXd> n_x_t_plus_Delta_t(
  const std::vector<Eigen::VectorXd>& n_x_t,
  const std::vector<Eigen::MatrixXd>& R_x_ij,
  const std::vector<Eigen::MatrixXd>& R_x_ji,
  const std::vector<Eigen::VectorXd>& R_x_ik,
  const std::vector<Eigen::VectorXd>& R_x_ki,
  const double Delta_t
) {
  const Eigen::VectorXd p_x_t_ = p_x_t(n_x_t);
  const Eigen::MatrixXd S_x_ = S_x(R_x_ij, R_x_ji, R_x_ik, R_x_ki);
  const Eigen::MatrixXd Q_x_ = Q_x(S_x_);
  const Eigen::MatrixXd P_x_ = P_x(Q_x_, Delta_t);
  const Eigen::VectorXd p_x_t_plus_Delta_t_ = p_x_t_plus_Delta_t(p_x_t_, P_x_);

  auto n_x_t_plus_Delta_t_ = n_x_t;
  int idx = 0;
  for (auto& n_x : n_x_t_plus_Delta_t_) {
    n_x = p_x_t_plus_Delta_t_.segment(idx, n_x.size());
    idx += n_x.size();
  }

  return n_x_t_plus_Delta_t_;
}


}