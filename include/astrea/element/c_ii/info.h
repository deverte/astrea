/**
 * \file astrea/element/c_ii/info.h
 * C II information by Alexeeva+2015, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::c_ii {


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
  return 24.3793473419881;
}


/**
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 3.16228e-4;
}


}