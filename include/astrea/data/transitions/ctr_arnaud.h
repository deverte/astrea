/**
 * \file astrea/data/transitions/ctr_arnaud.h
 * Charge transfer recombination fit using Arnaud data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Charge transfer recombination fit using Arnaud data
 * (bibcode-1985A&AS...60..425A).
 */
struct ICTRArnaudFit {
  /**
   * Ionizing element atomic number in \f$1\f$.
   */
  const double ionizing_element_atomic_number;
  /**
   * Ionizing element ionization stage in \f$1\f$.
   */
  const double ionizing_element_ionization_stage;
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
   * Numeric approximation constant \f$d\f$ in \f$1\f$.
   */
  const double d;
};


/**
 * Charge transfer recombination using Arnaud data interface.
 */
struct ICTRArnaud {
  /**
   * Fit.
   */
  std::vector<ICTRArnaudFit> fit;
};


/**
 * Charge transfer recombination using Arnaud data
 * (bibcode-1985A&AS...60..425A).
 */
class CTRArnaud {
 public:
  /**
   * Transitions fit.
   * 
   * \return Transitions fit.
   */
  const std::vector<ICTRArnaudFit>& fit();

 private:
  ICTRArnaud resource_ =
    #include "../../resources/transitions/ctr_arnaud.yaml"
  ;
};


inline const std::vector<ICTRArnaudFit>& CTRArnaud::fit() {
  return resource_.fit;
}


}