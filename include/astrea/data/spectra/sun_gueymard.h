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

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <ni/ni.h>

#include "./spectrum.h"
#include "../../units/units.h"


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
   * \return Distance in \f$au\f$.
   */
  double distance() const override;

  /**
   * Distance to radiation source.
   * 
   * \param distance Distance in \f$au\f$.
   */
  void distance(const double value) override;

  /**
   * Maximal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  double max_wavelength() const override;

  /**
   * Minimal wavelength of the spectrum.
   * 
   * \return Wavelength in \f$nm\f$.
   */
  double min_wavelength() const override;

  /**
   * Spectral irradiance.
   * 
   * \param wavelength Wavelength in \f$nm\f$.
   * \return Spectral irradiance in \f$W \cdot m^{-2} \cdot nm^{-1}\f$.
   */
  double spectral_irradiance(const double wavelength) const override;

 private:
  boost::units::quantity<boost::units::si::length> distance_;

  ni::LinearInterpolant interpolant_;

  boost::units::quantity<boost::units::si::length> max_wavelength_;

  boost::units::quantity<boost::units::si::length> min_wavelength_;

  const ISpectrum resource_ =
    #include "../../resources/spectra/sun_gueymard.yaml"
  ;
};


inline SunGueymard::SunGueymard() {
  distance_ = resource_.distance * astrea::units::si::astronomical_unit;

  interpolant_.data_points(
    resource_.wavelengths,
    resource_.spectral_irradiance
  );

  max_wavelength_ =
    + *std::max_element(
        resource_.wavelengths.begin(),
        resource_.wavelengths.end()
      )
    * astrea::units::si::nanometer
  ;
  min_wavelength_ =
    + *std::min_element(
        resource_.wavelengths.begin(),
        resource_.wavelengths.end()
      )
    * astrea::units::si::nanometer
  ;
}


inline double SunGueymard::distance() const {
  return distance_ / astrea::units::si::astronomical_unit;
}


inline void SunGueymard::distance(const double value) {
  distance_ = value * astrea::units::si::astronomical_unit;;
}


inline double SunGueymard::max_wavelength() const {
  return max_wavelength_ / astrea::units::si::nanometer;
}


inline double SunGueymard::min_wavelength() const {
  return min_wavelength_ / astrea::units::si::nanometer;
}


inline double SunGueymard::spectral_irradiance(const double wavelength) const {
  using astrea::units::si::astronomical_unit;
  using astrea::units::si::nanometer;
  using boost::units::si::meter;
  using boost::units::si::watt;
  using boost::units::pow;

  const auto lambda = wavelength * nanometer;

  const auto E_e_lambda =
    + interpolant_((lambda / nanometer).value())
    * watt * pow<-2>(meter) * pow<-1>(nanometer) * pow<2>(astronomical_unit)
    * pow<2>(astronomical_unit)
  ;
  const auto D = distance_;

  const auto E = E_e_lambda / pow<2>(D);

  return
    E / (watt * pow<-2>(meter) * pow<-1>(nanometer) * pow<2>(astronomical_unit))
  ;
}


}