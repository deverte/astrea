/**
 * \file astrea/data/transitions/rd_nist_o1.h
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
struct IRDNistO1Transition {
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
};


/**
 * Spontaneous emission transition for electrically neutral oxygen using NIST
 * data interface.
 */
struct IRDNistO1 {
  /**
   * Transitions.
   */
  const std::vector<IRDNistO1Transition> transitions;
};


/**
 * Spontaneous emission transitions for electrically neutral oxygen using NIST
 * data.
 */
class RDNistO1 {
 public:
  /**
   * Spontaneous emission transitions.
   * 
   * \return Spontaneous emission transitions.
   */
  const std::vector<IRDNistO1Transition>& transitions() const;

 private:
  const IRDNistO1 resource_ =
    #include "../../resources/transitions/rd_nist_o1.yaml"
  ;
};


inline const std::vector<IRDNistO1Transition>& RDNistO1::transitions() const {
  return resource_.transitions;
}


}