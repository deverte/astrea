/**
 * \file astrea/element/c_iii/info.h
 * C III information from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::c_iii {


/**
 * State of ionization in 1.
 */
inline constexpr double i() {
  return 2.0;
}


/**
 * Atomic number in 1.
 */
inline constexpr double Z() {
  return 6.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 12.0;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 47.8881366396517;
}


}