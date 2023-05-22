/**
 * \file astrea/data/transitions/rbf_mashonkina_o1.h
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <ni/ni.h>

#include <algorithm>
#include <functional>
#include <string>
#include <vector>


namespace astrea {


/**
 * Radiative bound-free (photoionization, spontaneous and induced radiative
 * recombination) transition for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 */
struct IRBFMashonkinaO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Data start index.
   */
  const int start_index;
  /**
   * Data finish index.
   */
  const int finish_index;
};


/**
 * Radiative bound-free (photoionization, spontaneous and induced radiative
 * recombination) transition for electrically neutral oxygen using Mashonkina
 * data interface.
 */
struct IRBFMashonkinaO1 {
  /**
   * Transitions.
   */
  const std::vector<IRBFMashonkinaO1Transition> transitions;
  /**
   * Frequencies in \f$s^{-1}\f$.
   */
  const std::vector<double> frequencies;
  /**
   * Radiative bound-free cross sections in \f$cm^2\f$.
   */
  const std::vector<double> rbf_cross_sections;
};


/**
 * Radiative bound-free (photoionization, spontaneous and induced radiative
 * recombination) transition for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 */
class RBFMashonkinaO1 {
 public:
  /**
   * Radiative bound-free (photoionization, spontaneous and induced radiative
   * recombination) transition for electrically neutral oxygen using Mashonkina
   * data (from private communication).
   */
  RBFMashonkinaO1();

  /**
   * Maximum frequency.
   * 
   * \return Frequency in \f$s^{-1}\f$.
   */
  double max_frequency() const;

  /**
   * Minumum frequency.
   * 
   * \return Frequency in \f$s^{-1}\f$.
   */
  double min_frequency() const;

  /**
   * Radiative bound-free cross-section.
   * 
   * \param initial Initial term.
   * \param frequency Frequency in \f$s^{-1}\f$.
   * \return Radiative bound-free cross-section in \f$cm^2\f$.
   */
  double
  rbf_cross_section(const std::string initial, const double frequency) const;

 private:
  const IRBFMashonkinaO1 resource_ =
    #include "../../resources/transitions/rbf_mashonkina_o1.yaml"
  ;

  /**
   * Radiative bound-free cross section functions of frequency in \f$s^{-1}\f$,
   * returns result in \f$cm^2\f$.
   */
  std::vector<ni::LinearInterpolant> rbf_cross_sections_;
};


inline RBFMashonkinaO1::RBFMashonkinaO1() {
  rbf_cross_sections_.resize(resource_.transitions.size());

  for (int i = 0; i < resource_.transitions.size(); i++) {
    const std::vector<double> nu = {
      resource_.frequencies.begin() + resource_.transitions[i].start_index - 1,
      resource_.frequencies.begin() + resource_.transitions[i].finish_index - 1
    };
    const std::vector<double> sigma = {
      resource_.rbf_cross_sections.begin() +
      resource_.transitions[i].start_index - 1,
      resource_.rbf_cross_sections.begin() +
      resource_.transitions[i].finish_index - 1
    };

    rbf_cross_sections_[i].data_points(nu, sigma); // cm^2
  }
}


inline double RBFMashonkinaO1::max_frequency() const {
  return *std::max_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


inline double RBFMashonkinaO1::min_frequency() const {
  return *std::min_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


inline double RBFMashonkinaO1::rbf_cross_section(
  const std::string initial,
  const double frequency
) const {
  for (int i = 0; i < resource_.transitions.size(); i++) {
    const auto max_frequency =
      resource_.frequencies[resource_.transitions[i].finish_index - 1]
    ;
    const auto min_frequency =
      resource_.frequencies[resource_.transitions[i].start_index - 1]
    ;

    if (
      resource_.transitions[i].initial == initial &&
      frequency >= min_frequency &&
      frequency <= max_frequency
    ) {
      return rbf_cross_sections_[i](frequency);
    }
  }
  return 0.0;
}


}