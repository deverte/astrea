/**
 * \file astrea/data/transitions/rbb_mashonkina_voigt_o1.h
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Voigt profile using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <string>
#include <vector>


namespace astrea {


/**
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Voigt profile using Mashonkina data (from private communication).
 */
struct RBBMashonkinaVoigtO1Transition {
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
  /**
   * Van-der-Waals constant in \f$1\f$.
   */
  const double van_der_waals_constant;
  /**
   * Quadratic Stark constant in \f$1\f$.
   */
  const double quadratic_stark_constant;
  /**
   * Radiative dumping constant in \f$1\f$.
   */
  const double radiative_damping_constant;
};


/**
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Voigt profile using Mashonkina data interface.
 */
struct IRBBMashonkinaVoigtO1 {
  /**
   * Transitions.
   */
  const std::vector<RBBMashonkinaVoigtO1Transition> transitions;
};


/**
 * Radiative bound-bound transitions for electrically neutral oxygen using
 * Voigt profile using Mashonkina data (from private communication).
 */
class RBBMashonkinaVoigtO1 {
 public:
  /**
   * Radiative bound-bound transitions using Voigt profile.
   * 
   * \return Radiative bound-bound transitions.
   */
  const std::vector<RBBMashonkinaVoigtO1Transition>& transitions() const;

 private:
  const IRBBMashonkinaVoigtO1 resource_ =
    #include "../../resources/transitions/rbb_mashonkina_voigt_o1.yaml"
  ;
};


inline const std::vector<RBBMashonkinaVoigtO1Transition>&
RBBMashonkinaVoigtO1::transitions() const {
  return resource_.transitions;
}


}