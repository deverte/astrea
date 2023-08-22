/**
 * \file astrea/data/transitions/rr_badnell.h
 * Radiative recombination fit using Badnell data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Radiative recombination fit using Badnell data (doi-10.1086%2F508465,
 * https://iopscience.iop.org/article/10.1086/508465/fulltext/,
 * http://amdpp.phys.strath.ac.uk/tamoc/RR/).
 */
struct IRRBadnellFit {
  /**
   * Nuclear charge in 1.
   */
  const double Z;
  /**
   * Number of ion electrons before recombination in 1.
   */
  const double N;
  /**
   * Total RR rate coefficient "A" in cm3 s-1.
   */
  const double A;
  /**
   * Total RR rate coefficient "B" in 1.
   */
  const double B;
  /**
   * Total RR rate coefficient "T_0_" in K.
   */
  const double T0;
  /**
   * Total RR rate coefficient "T_1_" in K.
   */
  const double T1;
  /**
   * Total RR rate coefficient "C" in 1.
   */
  const double C = 0.0;
  /**
   * Total RR rate coefficient "T_2_" in K.
   */
  const double T2 = 0.0;
};


/**
 * Radiative recombination fit using Badnell data interface.
 */
struct IRRBadnell {
  /**
   * Fit.
   */
  const std::vector<IRRBadnellFit> fit;
};


/**
 * Radiative recombination using Badnell data (doi-10.1086%2F508465,
 * https://iopscience.iop.org/article/10.1086/508465/fulltext/,
 * http://amdpp.phys.strath.ac.uk/tamoc/RR/).
 */
class RRBadnell {
 public:
  /**
   * Transitions fit.
   * 
   * \return Transitions fit.
   */
  const std::vector<IRRBadnellFit>& fit();

 private:
  const IRRBadnell resource_ =
    #include "../../resources/transitions/rr_badnell.yaml"
  ;
};


inline const std::vector<IRRBadnellFit>& RRBadnell::fit() {
  return resource_.fit;
}


}