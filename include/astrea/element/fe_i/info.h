/**
 * \file astrea/element/fe_i/info.h
 * Fe I information by Mashonkina+2011, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::fe_i {


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
  return 26.0;
}


/**
 * Mass number in 1 (mass in Da).
 */
inline constexpr double M() {
  return 55.845;
}


/**
 * Ionization energy in eV.
 */
inline constexpr double I() {
  return 7.852419912103682;
}


}