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
   * Radiative bound-free cross section function of frequency in \f$s^{-1}\f$,
   * returns result in \f$cm^2\f$.
   */
  ni::LinearInterpolant rbf_cross_section;
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
  std::vector<IRBFMashonkinaO1Transition> transitions;
  /**
   * Frequencies in \f$s^{-1}\f$.
   */
  std::vector<double> frequencies;
  /**
   * Radiative bound-free cross sections in \f$cm^2\f$.
   */
  std::vector<double> rbf_cross_sections;
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
  double max_frequency();

  /**
   * Minumum frequency.
   * 
   * \return Frequency in \f$s^{-1}\f$.
   */
  double min_frequency();

  /**
   * Radiative bound-free cross-section.
   * 
   * \param initial Initial term.
   * \param frequency Frequency in \f$s^{-1}\f$.
   * \return Radiative bound-free cross-section in \f$cm^2\f$.
   */
  double rbf_cross_section(std::string initial, double frequency);

 private:
  IRBFMashonkinaO1 resource_ =
    #include "../../resources/transitions/rbf_mashonkina_o1.yaml"
  ;
};


RBFMashonkinaO1::RBFMashonkinaO1() {
  for (auto& transition : resource_.transitions) {
    std::vector<double> nu = {
      resource_.frequencies.begin() + transition.start_index - 1,
      resource_.frequencies.begin() + transition.finish_index - 1
    };
    std::vector<double> sigma = {
      resource_.rbf_cross_sections.begin() +
      transition.start_index - 1,
      resource_.rbf_cross_sections.begin() +
      transition.finish_index - 1
    };

    transition.rbf_cross_section.data_points(nu, sigma); // cm^2
  }
}


double RBFMashonkinaO1::max_frequency() {
  return *std::max_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


double RBFMashonkinaO1::min_frequency() {
  return *std::min_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


double RBFMashonkinaO1::rbf_cross_section(
  std::string initial,
  double frequency
) {
  for (auto transition : resource_.transitions) {
    auto max_frequency = resource_.frequencies[transition.finish_index - 1];
    auto min_frequency = resource_.frequencies[transition.start_index - 1];

    if (
      transition.initial == initial &&
      frequency >= min_frequency &&
      frequency <= max_frequency
    ) {
      return transition.rbf_cross_section(frequency);
    }
  }
  return 0.0;
}


}