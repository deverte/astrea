/**
 * \file astrea/population/balance_equation.h
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
 * \param S_KK Transitions rates matrix in s-1.
 * \return Single transitions rates matrix in s-1.
 */
inline Eigen::MatrixXd Q_KK(const Eigen::MatrixXd& S_KK) {
  Eigen::MatrixXd Q_KK = S_KK.transpose();
  for (int i = 0; i < S_KK.rows(); i++) {
    for (int j = 0; j < S_KK.cols(); j++) {
      if (i == j) {
        Q_KK(i, j) = -(S_KK.row(i).sum() - S_KK(i, j));
      }
    }
  }
  return Q_KK;
}


/**
 * Calculates single transition operator using transition rates matrix.
 * 
 * \param Q_KK Transition rates matrix in s-1.
 * \param Delta_t Time difference in s.
 * \return Transition operator in s-1.
 */
inline Eigen::MatrixXd
P_KK(const Eigen::MatrixXd& Q_KK, const double& Delta_t) {
  Eigen::MatrixXd I_KK = Eigen::MatrixXd::Identity(Q_KK.rows(), Q_KK.cols());
  Eigen::MatrixXd P_KK = (I_KK - Q_KK * Delta_t).inverse();
  return P_KK;
}


/**
 * Calculates current electrons populations single vector using previous
 * electrons populations single vector and single transition operator P.
 * 
 * \param p_K Previous electrons population in 1.
 * \param P_KK Transition operator in s-1.
 * \return Single electrons population vector in 1.
 */
inline Eigen::VectorXd
p_t_plus_Delta_t_K(const Eigen::VectorXd& p_K, const Eigen::MatrixXd& P_KK) {
  Eigen::VectorXd p_t_plus_Delta_t_K = P_KK * p_K;
  return p_t_plus_Delta_t_K;
}


/**
 * Builds single electrons population vector p_t from set of n_t vectors.
 * 
 * \param n_ZK Previous electrons population in 1.
 * \return Single electrons population vector in 1.
 */
inline Eigen::VectorXd p_K(const std::vector<Eigen::VectorXd>& n_ZK) {
  int K = 0;
  for (const auto& n_K : n_ZK) {
    K += n_K.size();
  }

  Eigen::VectorXd p_K = Eigen::VectorXd::Zero(K);
  int idx = 0;
  for (const auto& n_K : n_ZK) {
    p_K.segment(idx, n_K.size()) = n_K;
    idx += n_K.size();
  }

  return p_K;
}


/**
 * Builds single transitions rates matrix S from set of R matrices.
 * 
 * \param R_ij_ZKK Excitation transitions rates in s-1.
 * \param R_ji_ZKK De-excitation transitions rates in s-1.
 * \param R_ik_ZK Ionization transitions rates in s-1.
 * \param R_ki_ZK Recombination transitions rates in s-1.
 * \return Single transitions rates matrix in s-1.
 */
inline Eigen::MatrixXd S_KK(
  const std::vector<Eigen::MatrixXd>& R_ij_ZKK,
  const std::vector<Eigen::MatrixXd>& R_ji_ZKK,
  const std::vector<Eigen::VectorXd>& R_ik_ZK,
  const std::vector<Eigen::VectorXd>& R_ki_ZK
) {
  int size = 0;
  for (const auto& R_ij_KK : R_ij_ZKK) {
    size += R_ij_KK.rows();
  }

  Eigen::MatrixXd S_KK = Eigen::MatrixXd::Zero(size, size);
  int idx = 0;
  for (int z = 0; z < R_ij_ZKK.size(); z++) {
    S_KK.block(idx, idx, R_ij_ZKK[z].rows(), R_ij_ZKK[z].cols()) =
      R_ij_ZKK[z] + R_ji_ZKK[z];
    idx += R_ij_ZKK[z].rows();
  }
  idx = 0;
  for (int z = 0; z < R_ik_ZK.size() - 1; z++) {
    S_KK.block(idx, idx + R_ik_ZK[z].size(), R_ik_ZK[z].size(), 1) = R_ik_ZK[z];
    S_KK.block(idx + R_ki_ZK[z].size(), idx, 1, R_ki_ZK[z].size()) =
      R_ki_ZK[z].transpose();
    idx += R_ik_ZK[z].rows();
  }

  return S_KK;
}


/**
 * Calculates NLTE electrons population using balance equation.
 * 
 * \param n_ZK Previous electrons population in 1.
 * \param R_ij_ZKK Excitation transitions rates in s-1.
 * \param R_ji_ZKK De-excitation transitions rates in s-1.
 * \param R_ik_ZK Ionization transitions rates in s-1.
 * \param R_ki_ZK Recombination transitions rates in s-1.
 * \param Delta_t Time difference in s.
 * \return Electrons population in 1.
 */
inline std::vector<Eigen::VectorXd> n_t_plus_Delta_t_ZK(
  const std::vector<Eigen::VectorXd>& n_ZK,
  const std::vector<Eigen::MatrixXd>& R_ij_ZKK,
  const std::vector<Eigen::MatrixXd>& R_ji_ZKK,
  const std::vector<Eigen::VectorXd>& R_ik_ZK,
  const std::vector<Eigen::VectorXd>& R_ki_ZK,
  const double& Delta_t
) {
  const Eigen::VectorXd p_K_ = p_K(n_ZK);
  const Eigen::MatrixXd S_KK_ = S_KK(R_ij_ZKK, R_ji_ZKK, R_ik_ZK, R_ki_ZK);
  const Eigen::MatrixXd Q_KK_ = Q_KK(S_KK_);
  const Eigen::MatrixXd P_KK_ = P_KK(Q_KK_, Delta_t);
  const Eigen::VectorXd p_t_plus_Delta_t_K_ = p_t_plus_Delta_t_K(p_K_, P_KK_);

  auto n_t_plus_Delta_t_ZK_ = n_ZK;
  int idx = 0;
  for (auto& n_t_plus_Delta_t_K_ : n_t_plus_Delta_t_ZK_) {
    n_t_plus_Delta_t_K_ =
      p_t_plus_Delta_t_K_.segment(idx, n_t_plus_Delta_t_K_.size());
    idx += n_t_plus_Delta_t_K_.size();
  }

  return n_t_plus_Delta_t_ZK_;
}


/**
 * Calculates NLTE electrons population using balance equation across all
 * spatial points.
 * 
 * \param x_X Any vector with shape corresponding to spatial points.
 * \param n_t_XZK Previous electrons population.
 * \param R_ij_XZKK Excitation transitions rates.
 * \param R_ji_XZKK De-excitation transitions rates.
 * \param R_ik_XZK Ionization transitions rates.
 * \param R_ki_XZK Recombination transitions rates.
 * \param Delta_t Time difference in s.
 * \return Electrons population in 1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> n_t_plus_Delta_t_XZK(
  const Eigen::VectorXd& x_X,
  const std::vector<std::vector<Eigen::VectorXd>>& n_t_XZK,
  const std::vector<std::vector<Eigen::MatrixXd>>& R_ij_XZKK,
  const std::vector<std::vector<Eigen::MatrixXd>>& R_ji_XZKK,
  const std::vector<std::vector<Eigen::VectorXd>>& R_ik_XZK,
  const std::vector<std::vector<Eigen::VectorXd>>& R_ki_XZK,
  const double& Delta_t
) {
  const auto& X = x_X.size();
  std::vector<std::vector<Eigen::VectorXd>> n_t_plus_Delta_t_XZK(X);
  for (int x = 0; x < X; x++) {
    n_t_plus_Delta_t_XZK[x] = n_t_plus_Delta_t_ZK(
      n_t_XZK[x],
      R_ij_XZKK[x],
      R_ji_XZKK[x],
      R_ik_XZK[x],
      R_ki_XZK[x],
      Delta_t
    );
  }
  return n_t_plus_Delta_t_XZK;
}


}