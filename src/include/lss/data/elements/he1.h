#pragma once


#include <string>
#include <vector>

#include "./element.h"


namespace lss {


/**
 * Helium (electrically neutral)
 */
class He1 : public Element {
 public:
  const std::vector<Level>& all_levels() override;

  const double atomic_number() override;

  const double ionization_stage() override;

  const double mass() override;

 private:
  static const std::vector<Level> all_levels_;

  const double atomic_number_ = 2.0; // 1

  const double ionization_stage_ = 0.0; // 1

  const double mass_ = 4.0; // u
};


inline const std::vector<Level>& He1::all_levels() {
  return all_levels_;
}


inline const double He1::atomic_number() {
  return atomic_number_;
}


inline const double He1::ionization_stage() {
  return ionization_stage_;
}


inline const double He1::mass() {
  return mass_;
}


inline const std::vector<Level> He1::all_levels_{};


}