/**
 * \file lss/data/spectra/sun_gueymard.h
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

#include <libInterpolate/Interpolate.hpp>

#include "./spectrum.h"


namespace lss {


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

 private:
  double distance_ = 1.0;

  std::function<double(double)>
  interpolant_ = _1D::LinearInterpolator<double>();

  double max_wavelength_ = 0.0;

  double min_wavelength_ = 0.0;

  ISpectrum resource_ =
    #include "../../resources/spectra/sun_gueymard.yaml"
  ;
};


inline SunGueymard::SunGueymard() {
  distance_ = resource_.distance;

  interpolant_.target<_1D::LinearInterpolator<double>>()
    ->setData(resource_.wavelengths, resource_.spectral_irradiance);

  max_wavelength_ =
  *std::max_element(resource_.wavelengths.begin(), resource_.wavelengths.end());
  min_wavelength_ =
  *std::min_element(resource_.wavelengths.begin(), resource_.wavelengths.end());
}


inline double SunGueymard::distance() {
  return distance_;
}


inline void SunGueymard::distance(double value) {
  distance_ = value;
}


inline double SunGueymard::max_wavelength() {
  return max_wavelength_;
}


inline double SunGueymard::min_wavelength() {
  return min_wavelength_;
}


inline double SunGueymard::spectral_irradiance(double wavelength) {
  auto E_e_lambda = interpolant_(wavelength);//W*m^{-2}*nm^{-1}*au^2
  auto D = distance_; // au

  auto E = E_e_lambda / std::pow(D, 2.0); // W * m^{-2} * nm^{-1}

  return E;
}


}