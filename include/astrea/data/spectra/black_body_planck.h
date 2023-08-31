/**
 * \file astrea/data/spectra/black_body_planck.h
 * Black body spectrum calculated using Planck's law.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <limits>

#include "./spectrum.h"


namespace astrea {


/**
 * Black body spectrum calculated using Planck's law.
 */
class BlackBodyPlanck : public Spectrum {
 public:
  /**
   * Distance to radiation source.
   * 
   * \return Distance in au.
   */
  double distance() const override;

  /**
   * Distance to radiation source.
   * 
   * \param distance Distance in au.
   */
  void distance(const double value) override;

  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in nm.
   */
  double max_wavelength() const override;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in nm.
   */
  double min_wavelength() const override;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in nm.
   * \return Spectral irradiance in W m-2 nm-1.
   */
  double spectral_irradiance(const double wavelength) const override;

  /**
   * Black body temperature.
   * 
   * \return Temperature in K.
   */
  double temperature() const;

  /**
   * Black body temperature.
   * 
   * \param value Temperature in K.
   */
  void temperature(const double value);

  /**
   * Spectral irradiance total area.
   * 
   * \return Spectral irradiance area in W m-2.
   */
  double total_area() const;

  /**
   * Spectral irradiance total area.
   * 
   * \param value Spectral irradiance area in W m-2.
   */
  void total_area(const double value);

 private:
  double distance_ = 1.0; // au
  const double max_wavelength_ = 1.0e5; // nm
  const double min_wavelength_ = 1.0e-1; // nm
  double temperature_ = 0.0; // K
  double total_area_ = 1.0; // W m-2
  double total_area_temperature_ = 1.0; // W m-2
};


inline double BlackBodyPlanck::distance() const {
  return distance_;
}


inline void BlackBodyPlanck::distance(const double value) {
  distance_ = value;
}


inline double BlackBodyPlanck::max_wavelength() const {
  return max_wavelength_;
}


inline double BlackBodyPlanck::min_wavelength() const {
  return min_wavelength_;
}


inline double
BlackBodyPlanck::spectral_irradiance(const double wavelength) const {
  const auto alpha = 3.741771851490289e+20; // kg s-3 nm4 au2
  const auto beta = 14387768.775039338; // nm K

  const auto& D = distance_; // au
  const auto& E_e = total_area_; // W m-2
  const auto& J = total_area_temperature_; // W m-2
  const auto& lambda = wavelength; // nm
  const auto& T = temperature_; // K

  const auto R_lambda = // W m-2 nm-1 au2
    alpha / std::pow(lambda, 5.0) / (std::exp(beta / (lambda * T)) - 1.0)
  ;

  const auto E_e_lambda = E_e * R_lambda / J; // W m-2 nm-1 au2

  return E_e_lambda / std::pow(D, 2.0); // W m-2 nm-1
}


inline double BlackBodyPlanck::temperature() const {
  return temperature_;
}


inline void BlackBodyPlanck::temperature(const double value) {
  const auto sigma = 5.67040040e-8; // W m-2 K-4
  const auto& T = temperature_; // K

  temperature_ = value; // K

  const auto J = sigma * std::pow(T, 4.0); // W m-2

  total_area_temperature_ = J;
}


inline double BlackBodyPlanck::total_area() const {
  return total_area_;
}


inline void BlackBodyPlanck::total_area(const double value) {
  total_area_ = value;
}


}