#pragma once


#include <string>
#include <vector>

#include "./element.h"


namespace lss {


/**
 * Oxygen (not ionized)
 * 
 * data: INASAN
 */
class O2Inasan : public Element {
 public:
  const std::vector<Level>& all_levels() override;

  const double atomic_number() override;

  const double ionization_stage() override;

  const double mass() override;

  const int number_of_ionization_stages() override;

 private:
  static const std::vector<Level> all_levels_;

  const double atomic_number_ = 8.0; // 1

  const double ionization_stage_ = 0.0; // 1

  const double mass_ = 16.0; // u

  const int number_of_ionization_stages_ = 2; // 1
};


inline const std::vector<Level>& O2Inasan::all_levels() {
  return all_levels_;
}


inline const double O2Inasan::atomic_number() {
  return atomic_number_;
}


inline const double O2Inasan::ionization_stage() {
  return ionization_stage_;
}


inline const double O2Inasan::mass() {
  return mass_;
}


inline const int O2Inasan::number_of_ionization_stages() {
  return number_of_ionization_stages_;
}


inline const std::vector<Level> O2Inasan::all_levels_{
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