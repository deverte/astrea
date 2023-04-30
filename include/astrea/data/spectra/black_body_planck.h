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

#include <boost/math/constants/constants.hpp>
#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/pow.hpp>

#include "./spectrum.h"
#include "../../units/units.h"


namespace astrea {


/**
 * Black body spectrum calculated using Planck's law.
 */
class BlackBodyPlanck : public Spectrum {
 public:
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

  /**
   * Black body temperature.
   * 
   * \return Temperature in \f$K\f$.
   */
  double temperature();

  /**
   * Black body temperature.
   * 
   * \param value Temperature in \f$K\f$.
   */
  void temperature(double value);

  /**
   * Spectral irradiance total area.
   * 
   * \return Spectral irradiance area in \f$W \cdot m^{-2}\f$.
   */
  double total_area();

  /**
   * Spectral irradiance total area.
   * 
   * \param value Spectral irradiance area in \f$W \cdot m^{-2}\f$.
   */
  void total_area(double value);

 private:
  boost::units::quantity<boost::units::si::length> distance_ =
    1.0 * astrea::units::si::astronomical_unit
  ;

  boost::units::quantity<boost::units::si::length> max_wavelength_ =
    1.0e5 * astrea::units::si::nanometer
  ;

  boost::units::quantity<boost::units::si::length> min_wavelength_ =
    1.0e-1 * astrea::units::si::nanometer
  ;

  boost::units::quantity<boost::units::si::temperature> temperature_ =
    0.0 * boost::units::si::kelvin
  ;

  boost::units::quantity<astrea::units::si::irradiance_area> total_area_ =
    + 1.0
    * boost::units::si::watt * boost::units::pow<-2>(boost::units::si::meter)
  ;

  boost::units::quantity<astrea::units::si::irradiance_area>
  total_area_temperature_ =
    + 1.0
    * boost::units::si::watt * boost::units::pow<-2>(boost::units::si::meter)
  ;
};


inline double BlackBodyPlanck::distance() {
  return distance_ / astrea::units::si::astronomical_unit;
}


inline void BlackBodyPlanck::distance(double value) {
  distance_ = value * astrea::units::si::astronomical_unit;
}


inline double BlackBodyPlanck::max_wavelength() {
  return max_wavelength_ / astrea::units::si::nanometer;
}


inline double BlackBodyPlanck::min_wavelength() {
  return min_wavelength_ / astrea::units::si::nanometer;
}


inline double BlackBodyPlanck::spectral_irradiance(double wavelength) {
  using astrea::units::si::astronomical_unit;
  using astrea::units::si::nanometer;
  using boost::math::constants::pi;
  using boost::units::si::constants::codata::c;
  using boost::units::si::constants::codata::h;
  using boost::units::si::constants::codata::k_B;
  using boost::units::si::kelvin;
  using boost::units::si::length;
  using boost::units::si::meter;
  using boost::units::si::temperature;
  using boost::units::si::watt;
  using boost::units::pow;
  using boost::units::quantity;

  auto D = distance_;
  auto E_e = total_area_;
  auto J = total_area_temperature_;
  auto lambda = wavelength * nanometer;
  auto T = temperature_;

  auto R_lambda = [&](quantity<length> lambda, quantity<temperature> T) {
    return
      + 2.0 * pi<double>() * h * pow<2>(c)
      / pow<5>(lambda)
      / (std::exp(h * c / (lambda * k_B * T)) - 1.0)
      * 1.0 * pow<2>(astronomical_unit)
    ;
  };

  auto E_e_lambda = [&](quantity<length> lambda, quantity<temperature> T) {
    return E_e * R_lambda(lambda, T) / J;
  };

  return
    + E_e_lambda(lambda, T) / pow<2>(D)
    / (watt * pow<-2>(meter) * pow<-1>(nanometer))
  ;
}


inline double BlackBodyPlanck::temperature() {
  return temperature_ / boost::units::si::kelvin;
}


inline void BlackBodyPlanck::temperature(double value) {
  using boost::units::si::kelvin;
  using boost::units::si::meter;
  using boost::units::si::watt;
  using boost::units::pow;

  temperature_ = value * kelvin;

  auto sigma = 5.67040040e-8 * watt * pow<-2>(meter) * pow<-4>(kelvin);
  auto T = temperature_;

  auto J = sigma * pow<4>(T);

  total_area_temperature_ = J;
}


inline double BlackBodyPlanck::total_area() {
  return
    + total_area_
    / (boost::units::si::watt * boost::units::pow<-2>(boost::units::si::meter))
  ;
}


inline void BlackBodyPlanck::total_area(double value) {
  total_area_ =
    + value
    * boost::units::si::watt * boost::units::pow<-2>(boost::units::si::meter)
  ;
}


}