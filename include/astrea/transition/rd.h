/**
 * \file astrea/transitions/rd.h
 * Radiative de-excitation transitions rates.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>

#include <Eigen/Dense>


namespace astrea::transition::rd {


/**
 * Radiative de-excitation transition rates.
 * 
 * \param x Any vector with shape corresponding to spatial points.
 * Axis 0: Coordinate index.
 * \param A Spontaneous emission rates in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 * \return Transition rate in s-1.
 * Axis 0: Coordinate index.
 * Axis 1: Initial term.
 * Axis 2: Final term.
 */
inline std::vector<std::vector<Eigen::MatrixXd>> R(
  const Eigen::VectorXd& x,
  const std::vector<Eigen::MatrixXd>& A
) {
  const auto& X = x.size();
  std::vector<std::vector<Eigen::MatrixXd>> R(X);
  for (int i = 0; i < X; i++) {
    R[i] = A;
  }
  return R;
}


}