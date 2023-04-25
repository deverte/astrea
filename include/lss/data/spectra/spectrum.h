/**
 * \file lss/data/spectra/spectrum.h
 * Spectrum base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


namespace lss {


/**
 * Spectrum base class.
 */
class Spectrum {
 public:
  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  virtual double max_wavelength() = 0;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  virtual double min_wavelength() = 0;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in \f$nm\f$.
   * \return Spectral irradiance in \f$W \cdot m^{-2} \cdot nm^{-1}\f$.
   */
  virtual double spectral_irradiance(double wavelength) = 0;
};


}