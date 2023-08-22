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
   * Ionizing element atomic number in 1.
   */
  const double ionizing_element_atomic_number;
  /**
   * Ionizing element ionization stage in 1.
   */
  const double ionizing_element_ionization_stage;
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
   * Numeric approximation constant d in 1.
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
  const std::vector<ICTRArnaudFit> fit;
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
  const ICTRArnaud resource_ =
    #include "../../resources/transitions/ctr_arnaud.yaml"
  ;
};


inline const std::vector<ICTRArnaudFit>& CTRArnaud::fit() {
  return resource_.fit;
}


}