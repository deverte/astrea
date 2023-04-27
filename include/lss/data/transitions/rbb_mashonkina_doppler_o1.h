/**
 * \file lss/data/transitions/rbb_mashonkina_doppler_o1.h
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Doppler profile using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <string>
#include <vector>


namespace lss {


/**
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Doppler profile using Mashonkina data (from private communication).
 */
struct IRBBMashonkinaDopplerO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Final level.
   */
  const std::string final;
  /**
   * Oscillator strength in \f$1\f$.
   */
  const double oscillator_strength;
};


/**
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Doppler profile using Mashonkina data interface.
 */
struct IRBBMashonkinaDopplerO1 {
  /**
   * Transitions.
   */
  std::vector<IRBBMashonkinaDopplerO1Transition> transitions;
};


/**
 * Radiative bound-bound transitions for electrically neutral oxygen using
 * Doppler profile using Mashonkina data (from private communication).
 */
class RBBMashonkinaDopplerO1 {
 public:
  /**
   * Radiative bound-bound transitions using Doppler profile.
   * 
   * \return Radiative bound-bound transitions.
   */
  const std::vector<IRBBMashonkinaDopplerO1Transition>& transitions();

 private:
  IRBBMashonkinaDopplerO1 resource_ =
    #include "../../resources/transitions/rbb_mashonkina_doppler_o1.yaml"
  ;
};


inline const std::vector<IRBBMashonkinaDopplerO1Transition>&
RBBMashonkinaDopplerO1::transitions() {
  return resource_.transitions;
}


}