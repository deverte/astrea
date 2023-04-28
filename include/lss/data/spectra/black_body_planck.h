/**
 * \file lss/data/spectra/black_body_planck.h
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
#include "../../physics/units.h"


namespace lss {


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
  double distance_ = 1.0;

  double max_wavelength_ = 1.0e5;

  double min_wavelength_ = 1.0e-1;

  double temperature_ = 0.0;

  double total_area_ = 1.0;

  double total_area_temperature_ = 1.0;
};


inline double BlackBodyPlanck::distance() {
  return distance_;
}


inline void BlackBodyPlanck::distance(double value) {
  distance_ = value;
}


inline double BlackBodyPlanck::max_wavelength() {
  return max_wavelength_;
}


inline double BlackBodyPlanck::min_wavelength() {
  return min_wavelength_;
}


inline double BlackBodyPlanck::spectral_irradiance(double wavelength) {
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
  using lss::units::astronomical_unit;
  using lss::units::nanometer;

  auto D = distance_ * astronomical_unit;
  auto E_e = total_area_ * watt * pow<-2>(meter);
  auto J = total_area_temperature_ * watt * pow<-2>(meter);
  auto lambda = wavelength * nanometer;
  auto lambda_0 = min_wavelength_ * nanometer;
  auto lambda_infty = max_wavelength_ * nanometer;
  auto T = temperature_ * kelvin;

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

  auto E =
    + E_e_lambda(lambda, T) / pow<2>(D)
    / (watt * pow<-2>(meter) * pow<-1>(nanometer))
  ;

  return E;
}


inline double BlackBodyPlanck::temperature() {
  return temperature_;
}


inline void BlackBodyPlanck::temperature(double value) {
  using boost::units::si::kelvin;
  using boost::units::si::meter;
  using boost::units::si::watt;
  using boost::units::pow;

  temperature_ = value;

  auto sigma = 5.67040040e-8 * watt * pow<-2>(meter) * pow<-4>(kelvin);
  auto T = temperature_ * kelvin;

  auto J = sigma * pow<4>(T) / (watt * pow<-2>(meter));

  total_area_temperature_ = J;
}


inline double BlackBodyPlanck::total_area() {
  return total_area_;
}


inline void BlackBodyPlanck::total_area(double value) {
  total_area_ = value;
}


}