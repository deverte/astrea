#pragma once


#include <cmath>
#include <limits>

#include "./spectrum.h"
#include "../../physics/constants.h"


namespace lss {


class BlackBodyPlanck : public Spectrum {
 public:
  double operator()(double wavelength) override;

  double temperature();

  void temperature(double value);

  double total_area();

  void total_area(double value);

  double max_wavelength() override;

  double min_wavelength() override;

 private:
  double max_wavelength_ = 1.0e5; // nm

  double min_wavelength_ = 1.0e-1; // nm

  double temperature_ = 0.0; // K

  double total_area_ = 1.0; // W * m^{-2}

  double total_area_temperature_ = 1.0; // W * m^{-2}
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

  auto E_e = total_area_; // W * m^{-2}
  auto J = total_area_temperature_; // W * m^{-2}
  auto lambda = wavelength; // nm
  auto lambda_0 = min_wavelength_; // nm
  auto lambda_infty = max_wavelength_; // nm
  auto T = temperature_; // K

  auto R_lambda = [&](double lambda, double T) {
    return // J * s^{-1} * m^{-2} * nm^{-1} = W * m^{-2} * nm^{-1}
      + 2.0 * pi * h * eV_to_J * std::pow(c * cm_to_nm, 2.0)// J * nm^2 * s^{-1}
      / std::pow(lambda, 5.0)                           // nm^{-5}
      / (std::exp(h * c * cm_to_nm / (lambda * k_B * T)) - 1.0) // 1
      * std::pow(nm_to_m, -2.0)
    ;
  };

  auto E_e_lambda = [&](double lambda, double T) {
    return E_e * R_lambda(lambda, T) / J;
  };

  return E_e_lambda(lambda, T);
}


inline double BlackBodyPlanck::temperature() {
  return temperature_;
}


inline void BlackBodyPlanck::temperature(double value /* K */) {
  temperature_ = value;

  auto sigma = 5.67040040e-8; // W * m^{-2} * K^{-4}
  auto T = temperature_; // K

  double J = sigma * std::pow(T, 4.0); // W * m^{-2}

  total_area_temperature_ = J;
}


inline double BlackBodyPlanck::total_area() {
  return total_area_;
}


inline void BlackBodyPlanck::total_area(double value /* W * m^{-2} */) {
  total_area_ = value;
}


inline double BlackBodyPlanck::max_wavelength() {
  return max_wavelength_;
}


inline double BlackBodyPlanck::min_wavelength() {
  return min_wavelength_;
}


}