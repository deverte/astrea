/**
 * \file astrea/population/saha_ionization_equation.h
 * LTE elements population calculation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <vector>

#include <Eigen/Dense>


namespace astrea::population::saha_ionization_equation {


/**
 * Saha equation helper function.
 * 
 * \param T Temperature in K.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Helper quantities in 1.
 */
inline Eigen::VectorXd Sigma_Z(
  const double& T,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto& Z = g_ZK.size(); // 1

  Eigen::VectorXd Sigma_Z = Eigen::VectorXd::Zero(Z); // 1
  for (int z = 0; z < Z; z++) {
    const auto& K = g_ZK[z].size(); // 1
    for (int k = 0; k < K; k++) {
      Sigma_Z(z) += g_ZK[z](k) * std::exp(-E_ZK[z](k) / (k_B * T));
    }
  }

  return Sigma_Z;
}


/**
 * Elements population relations N_z / N_{z + 1}.
 * 
 * \param T Temperature in K.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Relative elements populations in cm3.
 */
inline Eigen::VectorXd Phi_Z(
  const double& T,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto pi = 3.141592653589793;
  const auto c = 2.99792458e10; // cm s-1
  const auto h = 4.135667696e-15; // eV s
  const auto m_e = 0.51099895e6 / std::pow(c, 2.0); // eV cm-2 s2
  const auto k_B = 8.617333262e-5; // eV K-1

  const auto& Z = I_Z.size(); // 1

  const auto Lambda = // cm
    std::sqrt(std::pow(h, 2.0) / (2.0 * pi * m_e * k_B * T));

  const auto Sigma_Z_ = Sigma_Z(T, g_ZK, E_ZK);

  Eigen::VectorXd Phi_Z = Eigen::VectorXd::Zero(Z); // cm3
  for (int z = 0; z < Z - 1; z++) {
    const auto& K = g_ZK[z].size(); // 1
    for (int k = 0; k < K; k++) {
      Phi_Z(z) =
        + Sigma_Z_(z)
        / Sigma_Z_(z + 1)
        * std::pow(Lambda, 3.0)
        / 2.0
        * std::exp(I_Z(z) / (k_B * T))
      ;
    }
  }

  return Phi_Z;
}


/**
 * Saha equation helper function.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Helper quantities in 1.
 */
inline Eigen::VectorXd Pi_Z(
  const double& T,
  const double& N_e,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = I_Z.size(); // 1

  const auto Phi_Z_ = Phi_Z(T, I_Z, g_ZK, E_ZK); // cm3

  Eigen::VectorXd Pi_Z = Eigen::VectorXd::Ones(Z); // 1
  for (int ze = 0; ze < Z; ze++) {
    for (int zi = ze; zi < Z - 1; zi++) {
      Pi_Z(ze) *= N_e * Phi_Z_(zi);
    }
  }

  return Pi_Z;
}


/**
 * Saha equation helper function.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Helper quantity in 1.
 */
inline double Sigma_Pi(
  const double& T,
  const double& N_e,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = I_Z.size(); // 1

  const auto Pi_Z_ = Pi_Z(T, N_e, I_Z, g_ZK, E_ZK); // 1

  auto Sigma_Pi = 0.0; // 1
  for (int ze = 0; ze < Z; ze++) {
    for (int zi = ze; zi < Z - 1; zi++) {
      Sigma_Pi += Pi_Z_(zi);
    }
  }

  return Sigma_Pi;
}


/**
 * Calculates LTE elements population using Saha equation.
 * 
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Elements populations in 1.
 */
inline Eigen::VectorXd N_Z(
  const double& T,
  const double& N_e,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = I_Z.size(); // 1

  const auto Pi_Z_ = Pi_Z(T, N_e, I_Z, g_ZK, E_ZK); // 1
  const auto Sigma_Pi_ = Sigma_Pi(T, N_e, I_Z, g_ZK, E_ZK); // 1

  Eigen::VectorXd N_Z = Eigen::VectorXd::Zero(Z); // 1
  for (int z = 0; z < Z; z++) {
    N_Z(z) = Pi_Z_(z) / Sigma_Pi_;
  }

  return N_Z;
}


/**
 * Calculates LTE electrons population using Saha equation.
 * 
 * \param n_ZK Per element electrons populations in 1.
 * \param T Temperature in K.
 * \param N_e Electron number density in cm-3.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Electrons populations in 1.
 */
inline std::vector<Eigen::VectorXd> n_ZK(
  const std::vector<Eigen::VectorXd>& n_ZK,
  const double& T,
  const double& N_e,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& Z = I_Z.size(); // 1

  const auto N_Z_ = N_Z(T, N_e, I_Z, g_ZK, E_ZK); // 1

  std::vector<Eigen::VectorXd> ns_ZK(Z); // 1
  for (int z = 0; z < Z; z++) {
    ns_ZK[z] = N_Z_(z) * n_ZK[z];
  }

  return n_ZK;
}


/**
 * Calculates LTE electrons population using Saha equation.
 * 
 * \param n_XZK Per element electrons populations in 1.
 * \param T_X Temperature in K.
 * \param N_e_X Electron number density in cm-3.
 * \param I_Z Ionization energies in eV.
 * \param g_ZK Statistical weights in 1.
 * \param E_ZK Energies in eV.
 * \return Electrons populations in 1.
 */
inline std::vector<std::vector<Eigen::VectorXd>> n_XZK(
  const std::vector<std::vector<Eigen::VectorXd>>& n_XZK,
  const Eigen::VectorXd& T_X,
  const Eigen::VectorXd& N_e_X,
  const Eigen::VectorXd& I_Z,
  const std::vector<Eigen::VectorXd>& g_ZK,
  const std::vector<Eigen::VectorXd>& E_ZK
) {
  const auto& X = T_X.size(); // 1
  std::vector<std::vector<Eigen::VectorXd>> ns_XZK(X);
  for (int x = 0; x < X; x++) {
    ns_XZK[x] = n_ZK(n_XZK[x], T_X(x), N_e_X(x), I_Z, g_ZK, E_ZK);
  }
  return ns_XZK;
}


}