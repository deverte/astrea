/**
 * \file astrea/data/transitions/ci_arnaud.h
 * Collisional ionization fit using Arnaud data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Collisional ionization fit using Arnaud data (bibcode-1985A&AS...60..425A,
 * https://www.pa.uky.edu/~verner/dima/col//ci.txt,
 * https://www.pa.uky.edu/~verner/dima/col//ci.dat).
 */
struct ICIArnaudFit {
  /**
   * Atomic number in \f$1\f$.
   */
  const double Z;
  /**
   * Number of electrons in \f$1\f$.
   */
  const double N;
  /**
   * Shell principal quantum number in \f$1\f$.
   */
  const double n;
  /**
   * Shell orbital quantum number in \f$1\f$.
   */
  const double l;
  /**
   * Ionization potential in \f$eV\f$.
   */
  const double E;
  /**
   * Numerical approximation constant \f$A\f$ in \f$1\f$.
   */
  const double A;
  /**
   * Numerical approximation constant \f$B\f$ in \f$1\f$.
   */
  const double B;
  /**
   * Numerical approximation constant \f$C\f$ in \f$1\f$.
   */
  const double C;
  /**
   * Numerical approximation constant \f$D\f$ in \f$1\f$.
   */
  const double D;
};


/**
 * Collisional ionization fit using Arnaud data interface.
 */
struct ICIArnaud {
  /**
   * Fit.
   */
  const std::vector<ICIArnaudFit> fit;
};


/**
 * Collisional ionization using Arnaud data (bibcode-1985A&AS...60..425A,
 * https://www.pa.uky.edu/~verner/dima/col//ci.txt,
 * https://www.pa.uky.edu/~verner/dima/col//ci.dat).
 */
class CIArnaud {
 public:
  /**
   * Transitions fit.
   * 
   * \return Transitions fit.
   */
  const std::vector<ICIArnaudFit>& fit();

 private:
  const ICIArnaud resource_ =
    #include "../../resources/transitions/ci_arnaud.yaml"
  ;
};


inline const std::vector<ICIArnaudFit>& CIArnaud::fit() {
  return resource_.fit;
}


}