/**
 * \file lss/data/transitions/pi_mashonkina_o1.h
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <libInterpolate/Interpolate.hpp>

#include <algorithm>
#include <functional>
#include <string>
#include <vector>


namespace lss {


/**
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 */
struct IPIMashonkinaO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Photoionization cross section function of frequency in \f$s^{-1}\f$,
   * returns result in \f$cm^2\f$.
   */
  std::function<double(double)> photoionization_cross_section;
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
 * Photoionization transition for electrically neutral oxygen using Mashonkina
 * data interface.
 */
struct IPIMashonkinaO1 {
  /**
   * Transitions.
   */
  std::vector<IPIMashonkinaO1Transition> transitions;
  /**
   * Frequencies in \f$s^{-1}\f$.
   */
  std::vector<double> frequencies;
  /**
   * Photoionization cross sections in \f$cm^2\f$.
   */
  std::vector<double> photoionization_cross_sections;
};


/**
 * Photoionization transitions for electrically neutral oxygen using Mashonkina
 * data (from private communication).
 */
class PIMashonkinaO1 {
 public:
  /**
   * Photoionization transitions for electrically neutral oxygen using Mashonkina
   * data (from private communication).
   */
  PIMashonkinaO1();

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
   * Photoionization cross-section.
   * 
   * \param initial Initial term.
   * \param frequency Frequency in \f$s^{-1}\f$.
   * \return Photoionization cross-section in \f$cm^2\f$.
   */
  double photoionization_cross_section(std::string initial, double frequency);

 private:
  IPIMashonkinaO1 resource_ =
    #include "../../resources/transitions/pi_mashonkina_o1.yaml"
  ;
};


PIMashonkinaO1::PIMashonkinaO1() {
  for (auto& transition : resource_.transitions) {
    std::vector<double> nu = {
      resource_.frequencies.begin() + transition.start_index - 1,
      resource_.frequencies.begin() + transition.finish_index - 1
    };
    std::vector<double> sigma = {
      resource_.photoionization_cross_sections.begin() +
      transition.start_index - 1,
      resource_.photoionization_cross_sections.begin() +
      transition.finish_index - 1
    };

    transition.photoionization_cross_section = // cm^2
      _1D::LinearInterpolator<double>()
    ;
    transition.photoionization_cross_section
      .target<_1D::LinearInterpolator<double>>()->setData(nu, sigma);
  }
}


double PIMashonkinaO1::max_frequency() {
  return *std::max_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


double PIMashonkinaO1::min_frequency() {
  return *std::min_element(
    resource_.frequencies.begin(),
    resource_.frequencies.end()
  );
}


double PIMashonkinaO1::photoionization_cross_section(
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
      return transition.photoionization_cross_section(frequency);
    }
  }
  return 0.0;
}


}