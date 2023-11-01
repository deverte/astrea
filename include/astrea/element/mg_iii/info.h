/**
 * \file astrea/element/mg_iii/info.h
 * Mg III information from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::mg_iii {


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
  return 65.099544777729;
}


}