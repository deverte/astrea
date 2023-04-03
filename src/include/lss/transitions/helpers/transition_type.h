#pragma once


#include "../../data/elements/element.h"


namespace lss {


inline bool is_ionization(Level& initial, Level& final) {
  if (initial.limit_term == final.term) {
    return true;
  }
  return false;
}


inline bool is_recombination(Level& initial, Level& final) {
  if (
    true
    && initial.term == final.limit_term
    // && final.term == final.ground_state_term
  ) {
    return true;
  }
  return false;
}


inline bool is_excitation(Level& initial, Level& final) {
  if (initial.term == final.term) {
    return false;
  }
  if (initial.term[0] != final.term[0]) { // different ionization stages
    return false;
  }
  return !(is_ionization(initial, final) || is_recombination(initial, final));
}


}