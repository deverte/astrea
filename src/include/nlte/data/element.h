#pragma once


#include <vector>
#include <string>


namespace nlte {


class Level {
 public:
  const std::string term;
  const std::string limit_term;
  const std::string ground_state_term;
  const double principal_quantum_number; // one
  const double statistical_weight; // one
  const double energy; // eV
  const double ionization_energy; // eV
};


class Element {
 public:
  virtual ~Element() = default;

  virtual const std::vector<std::string> all_keys();

  virtual const std::vector<Level>& all_levels() = 0;

  std::vector<std::string> keys();

  void keys(std::vector<std::string> value);

  std::vector<Level> levels();

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