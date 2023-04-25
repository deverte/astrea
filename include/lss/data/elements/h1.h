/**
 * \file lss/data/elements/h1.h
 * Hydrogen (electrically neutral) atom.
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
 * Hydrogen (electrically neutral) atom.
 */
class H1 : public Element {
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

  const double atomic_number_ = 1.0;

  const double ionization_stage_ = 0.0;

  const double mass_ = 1.0;
};


inline const std::vector<Level>& H1::all_levels() {
  return all_levels_;
}


inline const double H1::atomic_number() {
  return atomic_number_;
}


inline const double H1::ionization_stage() {
  return ionization_stage_;
}


inline const double H1::mass() {
  return mass_;
}


inline const std::vector<Level> H1::all_levels_{};


}