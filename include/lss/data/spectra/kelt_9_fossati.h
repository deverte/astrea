/**
 * \file lss/data/spectra/kelt_9_fossati.h
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

#include <libInterpolate/Interpolate.hpp>

#include "./spectrum.h"


namespace lss {


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
  double distance_ = 0.03; // to Kelt-9 b
  // double distance_ = 42181800.36; // to Earth

  std::function<double(double)>
  interpolant_ = _1D::LinearInterpolator<double>();

  double max_wavelength_ = 0.0;

  double min_wavelength_ = 0.0;

  ISpectrum resource_ =
    #include "../../resources/spectra/kelt_9_fossati.yaml"
  ;
};


inline Kelt9Fossati::Kelt9Fossati() {
  distance_ = resource_.distance;

  interpolant_.target<_1D::LinearInterpolator<double>>()
    ->setData(resource_.wavelengths, resource_.spectral_irradiance);

  max_wavelength_ =
  *std::max_element(resource_.wavelengths.begin(), resource_.wavelengths.end());
  min_wavelength_ =
  *std::min_element(resource_.wavelengths.begin(), resource_.wavelengths.end());
}


inline double Kelt9Fossati::distance() {
  return distance_;
}


inline void Kelt9Fossati::distance(double value) {
  distance_ = value;
}


inline double Kelt9Fossati::max_wavelength() {
  return max_wavelength_;
}


inline double Kelt9Fossati::min_wavelength() {
  return min_wavelength_;
}


inline double Kelt9Fossati::spectral_irradiance(double wavelength) {
  auto A_to_nm = 0.1;
  auto cm_to_m = 0.01;
  auto erg_to_J = 1.0e-7;

  auto E_e_lambda = // W * m^{-2} * nm^{-1} * au^2
    + interpolant_(wavelength)//erg*s^{-1} * cm^{-2} * A^{-1} * au^2
    * erg_to_J
    / std::pow(cm_to_m, 2.0)
    / A_to_nm
  ;
  auto D = distance_; // au

  auto E = E_e_lambda / std::pow(D, 2.0); // W * m^{-2} * nm^{-1}

  return E;
}


}