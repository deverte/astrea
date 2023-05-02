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

#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>
#include <ni/ni.h>

#include "./spectrum.h"
#include "../../units/units.h"


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
  boost::units::quantity<boost::units::si::length> distance_;

  ni::LinearInterpolant interpolant_;

  boost::units::quantity<boost::units::si::length> max_wavelength_;

  boost::units::quantity<boost::units::si::length> min_wavelength_;

  ISpectrum resource_ =
    #include "../../resources/spectra/kelt_9_fossati.yaml"
  ;
};


inline Kelt9Fossati::Kelt9Fossati() {
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


inline double Kelt9Fossati::distance() {
  return distance_ / astrea::units::si::astronomical_unit;
}


inline void Kelt9Fossati::distance(double value) {
  distance_ = value * astrea::units::si::astronomical_unit;
}


inline double Kelt9Fossati::max_wavelength() {
  return max_wavelength_ / astrea::units::si::nanometer;
}


inline double Kelt9Fossati::min_wavelength() {
  return min_wavelength_ / astrea::units::si::nanometer;
}


inline double Kelt9Fossati::spectral_irradiance(double wavelength) {
  using astrea::units::si::angstrom;
  using astrea::units::si::astronomical_unit;
  using astrea::units::si::centimeter;
  using astrea::units::si::erg;
  using astrea::units::si::nanometer;
  using boost::units::si::meter;
  using boost::units::si::second;
  using boost::units::si::watt;
  using boost::units::pow;

  auto E_e_lambda =
    + interpolant_(wavelength)
    * erg * pow<-1>(second) * pow<-2>(centimeter) * pow<-1>(angstrom)
    * pow<2>(astronomical_unit)
  ;
  auto D = distance_;

  auto E = E_e_lambda / pow<2>(D);

  return E / (watt * pow<-2>(meter) * pow<-1>(nanometer));
}


}