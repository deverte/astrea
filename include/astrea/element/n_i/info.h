/**
 * \file astrea/element/n_i/info.h
 * N I information by Mashonkina+2024, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::n_i {


/**
 * State of ionization in 1.
 */
inline constexpr double i() {
  return 0.0;
}


/**
 * Atomic number in 1.
 */
inline constexpr double Z() {
  return 7.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 14.0;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 14.534134552992018;
}


/**
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 7.24436e-5;
}


}