/**
 * \file astrea/element/o_ii/info.h
 * O II information by Sitnova2012, Sitnova2017, NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::o_ii {


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
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 5.37032e-4;
}


}