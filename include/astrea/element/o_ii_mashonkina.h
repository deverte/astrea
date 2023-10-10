/**
 * \file astrea/element/o_ii_mashonkina.h
 * 1-ionized oxygen data by Mashonkina (private communication).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <Eigen/Dense>


namespace astrea::element::o_ii_mashonkina {


/**
 * State of ionization in 1.
 */
inline constexpr double i() {
  return 1.0;
}


/**
 * Atomic number in 1.
 */
inline constexpr double Z() {
  return 8.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 16.0;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 35.12112;
}


/**
 * Term symbol.
 */
enum class TERM {
  LS_1s2_2s2_2p3_4S,
};


/**
 * Terms' energies in eV.
 */
inline const Eigen::Vector<double, 1> E() {
  Eigen::Vector<double, 1> E = Eigen::Vector<double, 1>::Zero();
  E(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 0.0;
  return E;
}


/**
 * Terms' principal quantum numbers in 1.
 */
inline const Eigen::Vector<double, 1> n() {
  Eigen::Vector<double, 1> n = Eigen::Vector<double, 1>::Zero();
  n(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 2.0;
  return n;
}


/**
 * Terms' statistical weights in 1.
 */
inline const Eigen::Vector<double, 1> g() {
  Eigen::Vector<double, 1> g = Eigen::Vector<double, 1>::Zero();
  g(static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)) = 4.0;
  return g;
}


/**
 * Terms' spontaneous emission rates in s-1.
 */
inline const Eigen::Matrix<double, 1, 1> A() {
  Eigen::Matrix<double, 1, 1> A = Eigen::Matrix<double, 1, 1>::Zero();
  A(
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4S),
    static_cast<int>(TERM::LS_1s2_2s2_2p3_4S)
  ) = 0.0;
  return A;
}


}