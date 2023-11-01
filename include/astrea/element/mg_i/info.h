/**
 * \file astrea/element/mg_i/info.h
 * Mg I information by Alexeeva+2018, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::mg_i {


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
  return 12.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 24.304;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 7.6451952529134;
}


}