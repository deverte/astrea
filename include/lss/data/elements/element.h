/**
 * \file lss/data/elements/element.h
 * Element base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>
#include <string>


namespace lss {


/**
 * Element's level.
 */
struct Level {
  /**
   * Level term.
   */
  const std::string term;
  /**
   * Limit term.
   */
  const std::string limit_term;
  /**
   * Ground state term.
   */
  const std::string ground_state_term;
  /**
   * Principal quantum number in \f$1\f$.
   */
  const double principal_quantum_number;
  /**
   * Statistical weight in \f$1\f$.
   */
  const double statistical_weight;
  /**
   * Level energy in \f$eV\f$.
   */
  const double energy;
  /**
   * Level ionization energy in \f$eV\f$.
   */
  const double ionization_energy;
};


/**
 * Element base class.
 */
class Element {
 public:
  virtual ~Element() = default;

  /**
   * All element's levels terms (keys).
   * 
   * \return Terms (keys).
   */
  virtual const std::vector<std::string> all_keys();

  /**
   * All element's levels.
   * 
   * \return Levels.
   */
  virtual const std::vector<Level>& all_levels() = 0;

  /**
   * Atomic number.
   * 
   * \return Atomic number in \f$1\f$.
   */
  virtual const double atomic_number() = 0;

  /**
   * Ionization stage.
   * 
   * \return Ionization stage in \f$1\f$.
   */
  virtual const double ionization_stage() = 0;

  /**
   * Element's levels terms (keys) selection for calculation.
   * 
   * \return Terms (keys).
   */
  std::vector<std::string> keys();

  /**
   * Element's levels terms (keys) selection for calculation.
   * 
   * \param value Terms (keys).
   */
  void keys(std::vector<std::string> value);

  /**
   * Element's levels selection for calculation.
   * 
   * \return Levels.
   */
  std::vector<Level> levels();

  /**
   * Mass.
   * 
   * \return Mass in \f$u\f$ (\f$Da\f$).
   */
  virtual const double mass() = 0;

 private:
  std::vector<std::string> keys_;

  std::vector<Level> levels_;
};


inline const std::vector<std::string> Element::all_keys() {
  auto keys = std::vector<std::string>();
  for (auto& level : all_levels()) {
    keys.push_back(level.term);
  }
  return keys;
}


inline std::vector<std::string> Element::keys() {
  return keys_;
}


inline void Element::keys(std::vector<std::string> value) {
  keys_.clear();
  levels_.clear();
  for (auto& key : value) {
    for (auto& level : all_levels()) {
      if (level.term == key) {
        keys_.push_back(key);
        levels_.push_back(level);
      }
    }
  }
}


inline std::vector<Level> Element::levels() {
  return levels_;
}


}