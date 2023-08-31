/**
 * \file astrea/data/spectra/sun_gueymard.h
 * Solar spectrum using Gueymard data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>
#include <functional>
#include <memory>
#include <vector>

#include <ni/ni.h>

#include "./spectrum.h"


namespace astrea {


/**
 * Solar spectrum using Gueymard data
 * (https://www.nrel.gov/grid/solar-resource/spectra.html).
 */
class SunGueymard : public Spectrum {
 public:
  /**
   * Solar spectrum using Gueymard data
   * (https://www.nrel.gov/grid/solar-resource/spectra.html).
   */
  SunGueymard();

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

 private:
  double distance_; // au
  ni::LinearInterpolant interpolant_;
  double max_wavelength_; // nm
  double min_wavelength_; // nm
  const ISpectrum resource_ =
    #include "../../resources/spectra/sun_gueymard.yaml"
  ;
};


inline SunGueymard::SunGueymard() {
  distance_ = resource_.distance; // au

  interpolant_.data_points(
    resource_.wavelengths,
    resource_.spectral_irradiance
  );

  max_wavelength_ =
    *std::max_element(
      resource_.wavelengths.begin(),
      resource_.wavelengths.end()
    )
  ;
  min_wavelength_ =
    *std::min_element(
      resource_.wavelengths.begin(),
      resource_.wavelengths.end()
    )
  ;
}


inline double SunGueymard::distance() const {
  return distance_;
}


inline void SunGueymard::distance(const double value) {
  distance_ = value;
}


inline double SunGueymard::max_wavelength() const {
  return max_wavelength_;
}


inline double SunGueymard::min_wavelength() const {
  return min_wavelength_;
}


inline double SunGueymard::spectral_irradiance(const double wavelength) const {
  const auto lambda = wavelength; // nm

  const auto E_e_lambda = interpolant_(lambda); // W nm-2 m-1 au2
  const auto D = distance_; // au

  const auto E = E_e_lambda / std::pow(D, 2.0); // W nm-2 m-1

  return E;
}


}