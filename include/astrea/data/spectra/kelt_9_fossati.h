/**
 * \file astrea/data/spectra/kelt_9_fossati.h
 * Kelt 9 spectrum using Fossati data.
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
 * Kelt 9 spectrum using Fossati data (from private communication).
 */
class Kelt9Fossati : public Spectrum {
 public:
  /**
   * Kelt 9 spectrum using Fossati data (from private communication).
   */
  Kelt9Fossati();

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
  ni::LinearInterpolant interpolant_; // s-1 cm-2 A-1 au2
  double max_wavelength_; // nm
  double min_wavelength_; // nm
  const ISpectrum resource_ =
    #include "../../resources/spectra/kelt_9_fossati.yaml"
  ;
};


inline Kelt9Fossati::Kelt9Fossati() {
  distance_ = resource_.distance;

  interpolant_.data_points( // s-1 cm-2 A-1 au2
    resource_.wavelengths,
    resource_.spectral_irradiance
  );

  max_wavelength_ =
    + *std::max_element(
        resource_.wavelengths.begin(),
        resource_.wavelengths.end()
      ) // A
    / 1.0e1 // nm
  ;
  min_wavelength_ =
    + *std::min_element(
        resource_.wavelengths.begin(),
        resource_.wavelengths.end()
      ) // A
    / 1.0e1 // nm
  ;
}


inline double Kelt9Fossati::distance() const {
  return distance_;
}


inline void Kelt9Fossati::distance(const double value) {
  distance_ = value;
}


inline double Kelt9Fossati::max_wavelength() const {
  return max_wavelength_;
}


inline double Kelt9Fossati::min_wavelength() const {
  return min_wavelength_;
}


inline double Kelt9Fossati::spectral_irradiance(const double wavelength) const {
  const auto alpha_1 = 1.9864458571489286e-11; // m-2 A s W cm2
  const auto alpha_2 = 1.0e1; // nm-1 A

  const auto& D = distance_; // au
  const auto& lambda = wavelength; // nm

  // W m-2 nm-1 au2
  const auto E_e_lambda = alpha_1 / lambda * interpolant_(alpha_2 * lambda);

  const auto E = E_e_lambda / std::pow(D, 2.0); // W m-2 nm-1

  return E; // W m-2 nm-1
}


}