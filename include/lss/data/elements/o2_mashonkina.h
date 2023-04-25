/**
 * \file lss/data/elements/o2_mashonkina.h
 * Oxygen (1-ion) ion using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <string>
#include <vector>

#include "./element.h"


namespace lss {


/**
 * Oxygen (1-ion) ion using Mashonkina data (from private communication).
 */
class O2Mashonkina : public Element {
 public:
  /**
   * All element's levels terms (keys).
   * 
   * \return Terms (keys).
   */
  const std::vector<Level>& all_levels() override;

  /**
   * Atomic number.
   * 
   * \return Atomic number in \f$1\f$.
   */
  const double atomic_number() override;

  /**
   * Ionization stage.
   * 
   * \return Ionization stage in \f$1\f$.
   */
  const double ionization_stage() override;

  /**
   * Mass.
   * 
   * \return Mass in \f$u\f$ (\f$Da\f$).
   */
  const double mass() override;

 private:
  static const std::vector<Level> all_levels_;

  const double atomic_number_ = 8.0;

  const double ionization_stage_ = 1.0;

  const double mass_ = 16.0;
};


inline const std::vector<Level>& O2Mashonkina::all_levels() {
  return all_levels_;
}


inline const double O2Mashonkina::atomic_number() {
  return atomic_number_;
}


inline const double O2Mashonkina::ionization_stage() {
  return ionization_stage_;
}


inline const double O2Mashonkina::mass() {
  return mass_;
}


inline const std::vector<Level> O2Mashonkina::all_levels_{
  {
    .term = "22P4S",
    .limit_term = "NONE",
    .ground_state_term = "22P4S",
    .principal_quantum_number = 2.0,
    .statistical_weight = 4.0,
    .energy = 0.0,
    .ionization_energy = 35.12111507716314,
  },
};


}