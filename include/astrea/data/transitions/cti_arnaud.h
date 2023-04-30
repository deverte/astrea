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
 * Charge transfer ionization using Arnaud data interface.
 */
struct ICTIArnaud {
  /**
   * Fit.
   */
  std::vector<ICTIArnaudFit> fit;
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
  ICTIArnaud resource_ =
    #include "../../resources/transitions/cti_arnaud.yaml"
  ;
};


inline const std::vector<ICTIArnaudFit>& CTIArnaud::fit() {
  return resource_.fit;
}


}