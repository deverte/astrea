/**
 * \file astrea/data/transitions/cti_arnaud.h
 * Charge transfer ionization fit using Arnaud data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Charge transfer ionization fit using Arnaud data (
 * bibcode-1985A&AS...60..425A).
 */
struct ICTIArnaudFit {
  /**
   * Recombining element atomic number in 1.
   */
  const double recombining_element_atomic_number;
  /**
   * Recombining element ionization stage in 1.
   */
  const double recombining_element_ionization_stage;
  /**
   * Atomic number in 1.
   */
  const double atomic_number;
  /**
   * Ionization stage in 1.
   */
  const double ionization_stage;
  /**
   * Temperatures range in K.
   */
  const std::vector<double> temperatures_range;
  /**
   * Numeric approximation constant a in 1.0e-9 cm3 s-1.
   */
  const double a;
  /**
   * Numeric approximation constant b in 1.
   */
  const double b;
  /**
   * Numeric approximation constant c in 1.
   */
  const double c;
  /**
   * Ionization energy in eV.
   */
  const double delta_E;
};


/**
 * Charge transfer ionization using Arnaud data interface.
 */
struct ICTIArnaud {
  /**
   * Fit.
   */
  const std::vector<ICTIArnaudFit> fit;
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
  const std::vector<ICTIArnaudFit>& fit();

 private:
  const ICTIArnaud resource_ =
    #include "../../resources/transitions/cti_arnaud.yaml"
  ;
};


inline const std::vector<ICTIArnaudFit>& CTIArnaud::fit() {
  return resource_.fit;
}


}