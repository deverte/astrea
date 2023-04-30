/**
 * \file astrea/data/transitions/dr_badnell.h
 * Dielectronic recombination fit using Badnell data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Dielectronic recombination fit using Badnell data (doi-10.1086%2F508465,
 * http://amdpp.phys.strath.ac.uk/tamoc/DR/).
 */
struct IDRBadnellFit {
  /**
   * Nuclear charge in \f$1\f$.
   */
  const double Z;
  /**
   * Isoelectronic sequence N in \f$1\f$ (where N=1,2 ... is the number of
   * electrons of the initial target ion).
   */
  const double N;
  /**
   * Initial metastable levels M in \f$1\f$ (where M=1 for the ground level
   * etc.) of the ground and metastable terms.
   */
  const double M;
  /**
   * Numerical constant \f$W\f$ in \f$1\f$.
   */
  const double W;
  /**
   * Numerical constants \f$C\f$ in \f$1\f$.
   */
  const std::vector<double> C;
  /**
   * Numerical constants \f$E\f$ in \f$1\f$.
   */
  const std::vector<double> E;
};


/**
 * Dielectronic recombination using Badnell data interface.
 */
struct IDRBadnell {
  /**
   * Fit.
   */
  std::vector<IDRBadnellFit> fit;
};


/**
 * Dielectronic recombination using Badnell data (doi-10.1086%2F508465,
 * http://amdpp.phys.strath.ac.uk/tamoc/DR/).
 */
class DRBadnell {
 public:
  /**
   * Transitions fit.
   * 
   * \return Transitions fit.
   */
  const std::vector<IDRBadnellFit>& fit();

 private:
  IDRBadnell resource_ =
    #include "../../resources/transitions/dr_badnell.yaml"
  ;
};


inline const std::vector<IDRBadnellFit>& DRBadnell::fit() {
  return resource_.fit;
}


}