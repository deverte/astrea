/**
 * \file astrea/data/transitions/se_nist_o1.h
 * Spontaneous emission transition for electrically neutral oxygen using NIST
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <string>
#include <vector>


namespace astrea {


/**
 * Spontaneous emission transition for electrically neutral oxygen using NIST
 * data.
 */
struct ISENistO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Final level.
   */
  const std::string final;
  /**
   * Rate in \f$s^{-1}\f$.
   */
  const double rate;
  /**
   * Initial total angular momentum quantum number in \f$1\f$.
   */
  const double initial_total_angular_momentum_quantum_number;
  /**
   * Final total angular momentum quantum number in \f$1\f$.
   */
  const double final_total_angular_momentum_quantum_number;
};


/**
 * Spontaneous emission transition for electrically neutral oxygen using NIST
 * data interface.
 */
struct ISENistO1 {
  /**
   * Transitions.
   */
  const std::vector<ISENistO1Transition> transitions;
};


/**
 * Spontaneous emission transitions for electrically neutral oxygen using NIST
 * data.
 */
class SENistO1 {
 public:
  /**
   * Spontaneous emission transitions.
   * 
   * \return Spontaneous emission transitions.
   */
  const std::vector<ISENistO1Transition>& transitions() const;

 private:
  const ISENistO1 resource_ =
    #include "../../resources/transitions/se_nist_o1.yaml"
  ;
};


inline const std::vector<ISENistO1Transition>& SENistO1::transitions() const {
  return resource_.transitions;
}


}