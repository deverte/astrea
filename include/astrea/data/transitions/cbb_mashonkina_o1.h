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
   * Collision rate coefficients in \f$cm^3 * s^{-1}\f$.
   */
  const std::vector<double> collision_rate_coefficients;
  /**
   * Temperatures in \f$K\f$.
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
  std::vector<ICBBMashonkinaO1Transition> transitions;
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
   * \param temperature Temperature in \f$K\f$.
   * \return Collisional rate coefficient in \f$cm^3 * s^{-1}\f$.
   */
  double collision_rate_coefficient(
    std::string initial,
    std::string final,
    double temperature
  );

 private:
  ICBBMashonkinaO1 resource_ =
    #include "../../resources/transitions/cbb_mashonkina_o1.yaml"
  ;

  /**
   * Collision rate coefficient function of temperature in \f$K\f$, returns
   * result in \f$cm^3 * s^{-1}\f$.
   */
  std::vector<ni::LinearInterpolant> collision_rate_coefficients_;
};


CBBMashonkinaO1::CBBMashonkinaO1() {
  collision_rate_coefficients_.resize(resource_.transitions.size());

  for (int i = 0; i < resource_.transitions.size(); i++) {
    auto T = resource_.transitions[i].temperatures;
    auto C = resource_.transitions[i].collision_rate_coefficients;

    collision_rate_coefficients_[i].data_points(T, C); // cm^3 * s^{-1}
  }
}


double CBBMashonkinaO1::collision_rate_coefficient(
  std::string initial,
  std::string final,
  double temperature
) {
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