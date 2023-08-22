/**
 * \file astrea/data/elements/element.h
 * Element base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>
#include <string>


namespace astrea {


/**
 * Element's level interface.
 */
struct ILevel {
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
   * Principal quantum number in 1.
   */
  const double principal_quantum_number;
  /**
   * Statistical weight in 1.
   */
  const double statistical_weight;
  /**
   * Level energy in eV.
   */
  const double energy;
  /**
   * Level ionization energy in eV.
   */
  const double ionization_energy;
};


/**
 * Element interface.
 */
struct IElement {
  /**
   * Atomic number in 1.
   */
  double atomic_number;
  /**
   * Mass in u (Da).
   */
  double mass;
  /**
   * Ionization stage in 1.
   */
  double ionization_stage;
  /**
   * All element's levels.
   */
  std::vector<ILevel> all_levels;
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
  virtual const std::vector<ILevel>& all_levels();

  /**
   * Atomic number.
   * 
   * \return Atomic number in 1.
   */
  virtual const double atomic_number();

  /**
   * Ionization stage.
   * 
   * \return Ionization stage in 1.
   */
  virtual const double ionization_stage();

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
  std::vector<ILevel> levels();

  /**
   * Mass.
   * 
   * \return Mass in u (Da).
   */
  virtual const double mass();

  /**
   * Resource.
   * 
   * \return Element resource.
   */
  virtual const IElement& resource() = 0;

 private:
  std::vector<std::string> keys_;

  std::vector<ILevel> levels_;
};


inline const std::vector<std::string> Element::all_keys() {
  auto keys = std::vector<std::string>();
  for (auto& level : all_levels()) {
    keys.push_back(level.term);
  }
  return keys;
}


inline const std::vector<ILevel>& Element::all_levels() {
  return resource().all_levels;
}


inline const double Element::atomic_number() {
  return resource().atomic_number;
}


inline const double Element::ionization_stage() {
  return resource().ionization_stage;
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


inline std::vector<ILevel> Element::levels() {
  return levels_;
}


inline const double Element::mass() {
  return resource().mass;
}


}