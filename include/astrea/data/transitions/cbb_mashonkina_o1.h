/**
 * \file astrea/data/transitions/cbb_mashonkina_o1.h
 * Collisional bound-bound transition for electrically neutral oxygen using
 * Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <ni/ni.h>

#include <functional>
#include <string>
#include <vector>


namespace astrea {


/**
 * Collisional bound-bound transition for electrically neutral oxygen using
 * Mashonkina data (from private communication) interface.
 */
struct ICBBMashonkinaO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Final level.
   */
  const std::string final;
  /**
   * Collision rate coefficients in cm3 s-1.
   */
  const std::vector<double> collision_rate_coefficients;
  /**
   * Temperatures in K.
   */
  const std::vector<double> temperatures;
};


/**
 * Collisional bound-bound transitions for electrically neutral oxygen using
 * Mashonkina data (from private communication) interface.
 */
struct ICBBMashonkinaO1 {
  /**
   * Transitions.
   */
  const std::vector<ICBBMashonkinaO1Transition> transitions;
};


/**
 * Collisional bound-bound transitions for electrically neutral oxygen using
 * Mashonkina data (from private communication).
 */
class CBBMashonkinaO1 {
 public:
  /**
 * Collisional bound-bound transitions for electrically neutral oxygen using
 * Mashonkina data (from private communication).
 */
  CBBMashonkinaO1();

  /**
   * Collisional rate coefficient.
   * 
   * \param initial Initial term.
   * \param final Final term.
   * \param temperature Temperature in K.
   * \return Collisional rate coefficient in cm3 s-1.
   */
  double collision_rate_coefficient(
    const std::string initial,
    const std::string final,
    const double temperature
  ) const;

 private:
  const ICBBMashonkinaO1 resource_ =
    #include "../../resources/transitions/cbb_mashonkina_o1.yaml"
  ;

  /**
   * Collision rate coefficient function of temperature in K, returns result in
   * cm3 s-1.
   */
  std::vector<ni::LinearInterpolant> collision_rate_coefficients_;
};


inline CBBMashonkinaO1::CBBMashonkinaO1() {
  collision_rate_coefficients_.resize(resource_.transitions.size());

  for (int i = 0; i < resource_.transitions.size(); i++) {
    const auto T = resource_.transitions[i].temperatures;
    const auto C = resource_.transitions[i].collision_rate_coefficients;

    collision_rate_coefficients_[i].data_points(T, C); // cm^3 * s^{-1}
  }
}


inline double CBBMashonkinaO1::collision_rate_coefficient(
  const std::string initial,
  const std::string final,
  const double temperature
) const {
  for (int i = 0; i < resource_.transitions.size(); i++) {
    if (
      resource_.transitions[i].initial == initial &&
      resource_.transitions[i].final == final
    ) {
      return collision_rate_coefficients_[i](temperature);
    }
  }
  return 0.0;
}


}