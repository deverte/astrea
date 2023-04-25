/**
 * \file lss/data/spectra/black_body_planck.h
 * Black body spectrum calculated using Planck's law.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <limits>

#include "./spectrum.h"
#include "../../physics/constants.h"


namespace lss {


/**
 * Black body spectrum calculated using Planck's law.
 */
class BlackBodyPlanck : public Spectrum {
 public:
  /**
   * Distance to radiation source.
   * 
   * \return Distance in \f$au\f$.
   */
  double distance();

  /**
   * Distance to radiation source.
   * 
   * \param distance Distance in \f$au\f$.
   */
  void distance(double value) override;

  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  double max_wavelength() override;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  double min_wavelength() override;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in \f$nm\f$.
   * \return Spectral irradiance in \f$W \cdot m^{-2} \cdot nm^{-1}\f$.
   */
  double spectral_irradiance(double wavelength) override;

  /**
   * Black body temperature.
   * 
   * \return Temperature in \f$K\f$.
   */
  double temperature();

  /**
   * Black body temperature.
   * 
   * \param value Temperature in \f$K\f$.
   */
  void temperature(double value);

  /**
   * Spectral irradiance total area.
   * 
   * \return Spectral irradiance area in \f$W \cdot m^{-2}\f$.
   */
  double total_area();

  /**
   * Spectral irradiance total area.
   * 
   * \param value Spectral irradiance area in \f$W \cdot m^{-2}\f$.
   */
  void total_area(double value);

 private:
  double distance_ = 1.0;

  double max_wavelength_ = 1.0e5;

  double min_wavelength_ = 1.0e-1;

  double temperature_ = 0.0;

  double total_area_ = 1.0;

  double total_area_temperature_ = 1.0;
};


inline double BlackBodyPlanck::distance() {
  return distance_;
}


inline void BlackBodyPlanck::distance(double value) {
  distance_ = value;
}


inline double BlackBodyPlanck::max_wavelength() {
  return max_wavelength_;
}


inline double BlackBodyPlanck::min_wavelength() {
  return min_wavelength_;
}


inline double BlackBodyPlanck::spectral_irradiance(double wavelength) {
  auto& c = SPEED_OF_LIGHT; // cm * s^{-1}
  auto& h = PLANCK_CONSTANT; // eV * s
  auto& k_B = BOLTZMANN_CONSTANT; // eV * K^{-1}
  auto& pi = PI; // 1

  auto cm_to_nm = 10000000.0;
  auto eV_to_J = 1.602177e-19;
  auto nm_to_m = 1.0e-9;

  auto D = distance_; // au
  auto E_e = total_area_; // W * m^{-2}
  auto J = total_area_temperature_; // W * m^{-2}
  auto lambda = wavelength; // nm
  auto lambda_0 = min_wavelength_; // nm
  auto lambda_infty = max_wavelength_; // nm
  auto T = temperature_; // K

  auto R_lambda = [&](double lambda, double T) {
    return // J * s^{-1} * m^{-2} * nm^{-1} * au^2 = W * m^{-2} * nm^{-1} * au^2
      + 2.0 * pi * h * eV_to_J * std::pow(c * cm_to_nm, 2.0)// J * nm^2 * s^{-1}
      / std::pow(lambda, 5.0)                                   // nm^{-5}
      / (std::exp(h * c * cm_to_nm / (lambda * k_B * T)) - 1.0) // 1
      * std::pow(nm_to_m, -2.0)
      * 1.0                                                     // au^2
    ;
  };

  auto E_e_lambda = [&](double lambda, double T) {// W * m^{-2} * nm^{-1} * au^2
    return E_e * R_lambda(lambda, T) / J;
  };

  auto E = E_e_lambda(lambda, T) / std::pow(D, 2.0); // W * m^{-2} * nm^{-1}

  return E;
}


inline double BlackBodyPlanck::temperature() {
  return temperature_;
}


inline void BlackBodyPlanck::temperature(double value) {
  temperature_ = value;

  auto sigma = 5.67040040e-8; // W * m^{-2} * K^{-4}
  auto T = temperature_; // K

  double J = sigma * std::pow(T, 4.0); // W * m^{-2}

  total_area_temperature_ = J;
}


inline double BlackBodyPlanck::total_area() {
  return total_area_;
}


inline void BlackBodyPlanck::total_area(double value) {
  total_area_ = value;
}


}