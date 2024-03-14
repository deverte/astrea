/**
 * \file astrea/element/h_i/info.h
 * H I information by Mashonkina+2008, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::h_i {


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
  return 1.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 1.0;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 13.598434599702;
}


/**
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 1.0;
}


}