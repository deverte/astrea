/**
 * \file lss/data/transitions/rbb_mashonkina_voigt_o1.h
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Voigt profile using Mashonkina data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <string>
#include <vector>


namespace lss {


/**
 * Radiative bound-bound transition for electrically neutral oxygen using
 * Voigt profile using Mashonkina data (from private communication).
 */
struct RBBMashonkinaVoigtO1Transition {
  /**
   * Initial level.
   */
  const std::string initial;
  /**
   * Final level.
   */
  const std::string final;
  /**
   * Oscillator strength in \f$1\f$.
   */
  const double oscillator_strength;
  /**
   * Van-der-Waals constant in \f$1\f$.
   */
  const double van_der_waals_constant;
  /**
   * Quadratic Stark constant in \f$1\f$.
   */
  const double quadratic_stark_constant;
  /**
   * Radiative dumping constant in \f$1\f$.
   */
  const double radiative_damping_constant;
};


/**
 * Radiative bound-bound transitions for electrically neutral oxygen using
 * Voigt profile using Mashonkina data (from private communication).
 */
class RBBMashonkinaVoigtO1 {
 public:
  /**
   * Radiative bound-bound transitions using Voigt profile.
   * 
   * \return Radiative bound-bound transitions.
   */
  static const std::vector<RBBMashonkinaVoigtO1Transition>& transitions();

 private:
  static const std::vector<RBBMashonkinaVoigtO1Transition> transitions_;

};


inline const std::vector<RBBMashonkinaVoigtO1Transition>&
RBBMashonkinaVoigtO1::transitions() {
  return transitions_;
}


inline const std::vector<RBBMashonkinaVoigtO1Transition>
RBBMashonkinaVoigtO1::transitions_{
  {
    .initial = "12P3P4",
    .final = "13S3S",
    .oscillator_strength = 5.111e-02,
    .van_der_waals_constant = -31.72,
    .quadratic_stark_constant = -5.70,
    .radiative_damping_constant = 5.621e+08,
  },
  {
    .initial = "12P3P4",
    .final = "14S3S",
    .oscillator_strength = 9.089e-03,
    .van_der_waals_constant = -30.94,
    .quadratic_stark_constant = -4.82,
    .radiative_damping_constant = 2.040e+09,
  },
  {
    .initial = "12P3P4",
    .final = "13S5S",
    .oscillator_strength = 9.599e-07,
    .van_der_waals_constant = -31.80,
    .quadratic_stark_constant = -5.70,
    .radiative_damping_constant = 1.701e+03,
  },
  {
    .initial = "13S5S",
    .final = "13P5P",
    .oscillator_strength = 9.780e-01,
    .van_der_waals_constant = -30.97,
    .quadratic_stark_constant = -5.54,
    .radiative_damping_constant = 3.310e+07,
  },
  {
    .initial = "13S3S",
    .final = "13P3P",
    .oscillator_strength = 1.050e+00,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.43,
    .radiative_damping_constant = 5.889e+08,
  },
  {
    .initial = "13P5P",
    .final = "13D5D",
    .oscillator_strength = 9.267e-01,
    .van_der_waals_constant = -30.87,
    .quadratic_stark_constant = -4.94,
    .radiative_damping_constant = 7.410e+07,
  },
  {
    .initial = "12P3P4",
    .final = "15S3S",
    .oscillator_strength = 3.278e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 7.981e+07,
  },
  {
    .initial = "12P3P4",
    .final = "16S3S",
    .oscillator_strength = 1.567e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 4.080e+07,
  },
  {
    .initial = "12P3P4",
    .final = "17S3S",
    .oscillator_strength = 8.689e-04,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 2.344e+07,
  },
  {
    .initial = "12P3P4",
    .final = "18S3S",
    .oscillator_strength = 5.333e-04,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 1.467e+07,
  },
  {
    .initial = "12P3P4",
    .final = "19S3S",
    .oscillator_strength = 3.511e-04,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 9.792e+06,
  },
  {
    .initial = "12P3P4",
    .final = "13S3DP",
    .oscillator_strength = 5.422e-02,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 2.213e+08,
  },
  {
    .initial = "12P3P4",
    .final = "14D3D",
    .oscillator_strength = 1.544e-02,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 7.351e+07,
  },
  {
    .initial = "12P3P4",
    .final = "15D3D",
    .oscillator_strength = 6.267e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 3.126e+07,
  },
  {
    .initial = "12P3P4",
    .final = "13D3D",
    .oscillator_strength = 1.889e-02,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 1.018e+08,
  },
  {
    .initial = "12P3P4",
    .final = "16D3D",
    .oscillator_strength = 3.611e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 1.821e+07,
  },
  {
    .initial = "12P3P4",
    .final = "17D3D",
    .oscillator_strength = 2.278e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 1.156e+07,
  },
  {
    .initial = "12P3P4",
    .final = "18D3D",
    .oscillator_strength = 1.533e-03,
    .van_der_waals_constant = -31.32,
    .quadratic_stark_constant = -5.90,
    .radiative_damping_constant = 7.819e+06,
  },
};


}