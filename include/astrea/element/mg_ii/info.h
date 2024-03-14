/**
 * \file astrea/element/mg_ii/info.h
 * Mg II information by Alexeeva+2018, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::mg_ii {


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
  return 15.03327604684507;
}


/**
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 3.46737e-5;
}


}