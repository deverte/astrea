#pragma once


#include <cmath>
#include <limits>

#include "./spectrum.h"
#include "../../physics/constants.h"


namespace lss {


class BlackBodyPlanck : public Spectrum {
 public:
  double operator()(double wavelength) override;

  void temperature(double value);

  double max_wavelength() override;

  double min_wavelength() override;

 private:
  double max_wavelength_ = std::numeric_limits<double>::infinity();

  double min_wavelength_ = 0.0;

  double temperature_ = 0.0;
};


inline double /* W * m^{-2} * nm^{-1} */
BlackBodyPlanck::operator()(double wavelength /* nm */) {
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& h = PLANCK_CONSTANT; // eV * s
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI; // 1

  auto cm_to_nm = 10000000.0;
  auto eV_to_J = 1.602177e-19;
  auto nm_to_m = 1.0e-9;

  auto lambda = wavelength; // nm
  auto T = temperature_; // K

  auto B = [&](double lambda, double T) {
    return // J * s^{-1} * m^{-2} * nm^{-1} = W * m^{-2} * nm^{-1}
      + 2.0 * h * eV_to_J * std::pow(c * cm_to_nm, 2.0) // J * nm^2 * s^{-1}
      / std::pow(lambda, 5.0)                           // nm^{-5}
      / (std::exp(h * c / (lambda * k_B * T)) - 1.0)    // 1
      * std::pow(nm_to_m, -2.0)
    ;
  };

  auto F = [&](double lambda, double T) { // W * m^{-2} * nm^{-1}
    return pi * B(lambda, T); // W * m^{-2} * nm^{-1}
  };

  return F(lambda, T);
}


inline void BlackBodyPlanck::temperature(double value /* K */) {
  temperature_ = value;
}


inline double BlackBodyPlanck::max_wavelength() {
  return max_wavelength_;
}


inline double BlackBodyPlanck::min_wavelength() {
  return min_wavelength_;
}


}