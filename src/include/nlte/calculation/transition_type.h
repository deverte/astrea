#pragma once


#include "../data/element.h"


namespace nlte {


inline bool is_ionization(Level& initial, Level& final) {
  if (final.term == initial.limit_term) {
    return true;
  }
  return false;
}


inline bool is_recombination(Level& initial, Level& final) {
  if (
    initial.term == final.limit_term &&
    final.term == initial.ground_state_term
  ) {
    return true;
  }
  return false;
}


inline bool is_excitation(Level& initial, Level& final) {
  return !(is_ionization(initial, final) || is_recombination(initial, final));
}


}