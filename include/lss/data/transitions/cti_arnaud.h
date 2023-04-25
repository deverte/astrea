/**
 * \file lss/data/transitions/cti_arnaud.h
 * Charge transfer ionization fit using Arnaud data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace lss {


/**
 * Charge transfer ionization fit using Arnaud data (
 * bibcode-1985A&AS...60..425A).
 */
struct CTIArnaudFit {
  /**
   * Recombining element atomic number in \f$1\f$.
   */
  const double recombining_element_atomic_number;
  /**
   * Recombining element ionization stage in \f$1\f$.
   */
  const double recombining_element_ionization_stage;
  /**
   * Atomic number in \f$1\f$.
   */
  const double atomic_number;
  /**
   * Ionization stage in \f$1\f$.
   */
  const double ionization_stage;
  /**
   * Temperatures range in \f$K\f$.
   */
  const std::vector<double> temperatures_range;
  /**
   * Numeric approximation constant \f$a\f$ in
   * \f$1.0e-9 \cdot cm^3 \cdot s^{-1}\f$.
   */
  const double a;
  /**
   * Numeric approximation constant \f$b\f$ in \f$1\f$.
   */
  const double b;
  /**
   * Numeric approximation constant \f$c\f$ in \f$1\f$.
   */
  const double c;
  /**
   * Ionization energy in \f$eV\f$.
   */
  const double delta_E;
};


/**
 * Charge transfer ionization using Arnaud data (bibcode-1985A&AS...60..425A).
 */
class CTIArnaud {
 public:
  /**
   * Transitions fit.
   * 
   * \return Transitions fit.
   */
  static const std::vector<CTIArnaudFit>& fit();

 private:
  static const std::vector<CTIArnaudFit> fit_;
};


inline const std::vector<CTIArnaudFit>& CTIArnaud::fit() {
  return fit_;
}


inline const std::vector<CTIArnaudFit> CTIArnaud::fit_{
  {
    .recombining_element_atomic_number = 1.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 8.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e2, 1.0e5},
    .a = 0.91,
    .b = 0.0,
    .c = 10.0,
    .delta_E = 19.6e-3,
  },
  {
    .recombining_element_atomic_number = 1.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 12.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 7.6e-5,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 1.44,
  },
  {
    .recombining_element_atomic_number = 1.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e4},
    .a = 1.0e-2,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 0.03,
  },
  {
    .recombining_element_atomic_number = 1.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 1.0,
    .temperatures_range = {5.0e3, 1.0e5},
    .a = 1.7,
    .b = 0.32,
    .c = 0.0,
    .delta_E = 2.74,
  },
  {
    .recombining_element_atomic_number = 1.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e4},
    .a = 1.0,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 0.0,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 6.0,
    .ionization_stage = 1.0,
    .temperatures_range = {5.0e3, 5.0e4},
    .a = 5.0e-3,
    .b = 2.0,
    .c = 7.0e-2,
    .delta_E = 6.29,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 7.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 3.7e-3,
    .b = 2.1,
    .c = 6.3e-2,
    .delta_E = 1.44,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 0.15,
    .b = 0.24,
    .c = 0.0,
    .delta_E = 6.91,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 2.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 1.15,
    .b = 0.44,
    .c = 0.0,
    .delta_E = 8.88,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 2.8e-2,
    .b = 1.2,
    .c = 3.6e-2,
    .delta_E = 9.2,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 2.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 1.4e-2,
    .b = 1.6,
    .c = 4.6e-2,
    .delta_E = 10.5,
  },
  {
    .recombining_element_atomic_number = 2.0,
    .recombining_element_ionization_stage = 1.0,
    .atomic_number = 18.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 0.11,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 3.04,
  },
};


}