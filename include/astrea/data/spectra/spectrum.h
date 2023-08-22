/**
 * \file astrea/data/spectra/spectrum.h
 * Spectrum base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <vector>


namespace astrea {


/**
 * Spectrum interface.
 */
struct ISpectrum {
  /**
   * Distance in au.
   */
  double distance;
  /**
   * Spectral irradiance in W m-2 nm-1.
   */
  std::vector<double> spectral_irradiance;
  /**
   * Wavelengths in nm.
   */
  std::vector<double> wavelengths;
};


/**
 * Spectrum base class.
 */
class Spectrum {
 public:
  /**
   * Distance to radiation source.
   * 
   * \return Distance in au.
   */
  virtual double distance() const = 0;

  /**
   * Distance to radiation source.
   * 
   * \param distance Distance in au.
   */
  virtual void distance(const double value) = 0;

  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in nm.
   */
  virtual double max_wavelength() const = 0;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in nm.
   */
  virtual double min_wavelength() const = 0;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in nm.
   * \return Spectral irradiance in W m-2 nm-1.
   */
  virtual double spectral_irradiance(const double wavelength) const = 0;
};


}