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
   * Distance in \f$au\f$.
   */
  double distance;
  /**
   * Spectral irradiance in \f$W \cdot m^{-2} \cdot nm^{-1}\f$.
   */
  std::vector<double> spectral_irradiance;
  /**
   * Wavelengths in \f$nm\f$.
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
   * \return Distance in \f$au\f$.
   */
  virtual double distance() const = 0;

  /**
   * Distance to radiation source.
   * 
   * \param distance Distance in \f$au\f$.
   */
  virtual void distance(double value) = 0;

  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  virtual double max_wavelength() const = 0;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  virtual double min_wavelength() const = 0;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in \f$nm\f$.
   * \return Spectral irradiance in \f$W \cdot m^{-2} \cdot nm^{-1}\f$.
   */
  virtual double spectral_irradiance(double wavelength) const = 0;
};


}