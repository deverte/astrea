/**
 * \file astrea/element/fe_iii/info.h
 * Fe III information from NIST
 * (https://www.nist.gov/pml/atomic-spectra-database).
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace astrea::element::fe_iii {


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
  return 30.59894486405585;
}


/**
 * Element solar abundance relative to H.
 */
inline constexpr double A_H_sun() {
  return 3.01995e-5;
}


}