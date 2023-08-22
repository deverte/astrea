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
   * Atomic number in 1.
   */
  const double Z;
  /**
   * Number of electrons in 1.
   */
  const double N;
  /**
   * Shell principal quantum number in 1.
   */
  const double n;
  /**
   * Shell orbital quantum number in 1.
   */
  const double l;
  /**
   * Ionization potential in eV.
   */
  const double E;
  /**
   * Numerical approximation constant A in 1.
   */
  const double A;
  /**
   * Numerical approximation constant B in 1.
   */
  const double B;
  /**
   * Numerical approximation constant C in 1.
   */
  const double C;
  /**
   * Numerical approximation constant D in 1.
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