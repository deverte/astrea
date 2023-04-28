/**
 * \file lss/physics/constants.h
 * Physical (and some mathematical) constants.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>


namespace lss::units {


boost::units::quantity<boost::units::si::length> astronomical_unit =
  1.495978707e11 * boost::units::si::meter
;

boost::units::quantity<boost::units::si::length> angstrom =
  1.0e-10 * boost::units::si::meter
;

boost::units::quantity<boost::units::si::length> centimeter =
  1.0e-2 * boost::units::si::meter
;

boost::units::quantity<boost::units::si::mass> dalton =
  1.0 * boost::units::si::constants::codata::m_u
;

boost::units::quantity<boost::units::si::energy> electronvolt =
  boost::units::si::constants::codata::e * 1.0 * boost::units::si::volt
;

boost::units::quantity<boost::units::si::length> nanometer =
  1.0e-9 * boost::units::si::meter
;

boost::units::quantity<boost::units::si::mass> unified_atomic_mass_unit =
  dalton
;


auto Ry =
  boost::units::si::constants::codata::h 
  * boost::units::si::constants::codata::c
  * boost::units::si::constants::codata::R_infinity
;


// /**
//  * Bohr radius in \f$cm\f$.
//  */
// const double BOHR_RADIUS = 5.2917721090380e-9;
// /**
//  * Boltzmann constant in \f$eV \cdot K^{-1}\f$.
//  */
// const double BOLTZMANN_CONSTANT = 8.617333262e-5;
// /**
//  * Electron mass in \f$cm^{-2} \cdot eV \cdot s^2\f$.
//  */
// const double ELECTRON_MASS = 5.68563010362509e-16;
// /**
//  * Elementary charge in \f$statC\f$.
//  */
// const double ELEMENTARY_CHARGE = 4.8032042510e-10;
// /**
//  * Pi number in \f$1\f$.
//  */
// const double PI = 3.14159265358979323846;
// /**
//  * Planck constant in \f$eV \cdot s\f$.
//  */
// const double PLANCK_CONSTANT = 4.135667696e-15;
// /**
//  * Reduced Planck constant in \f$eV \cdot s\f$.
//  */
// const double REDUCED_PLANCK_CONSTANT = 6.58211951440e-16;
// /**
//  * Rydberg energy in \f$eV\f$.
//  */
// const double RYDBERG_ENERGY = 13.60569312299426;
// /**
//  * Speed of light in \f$cm \cdot s^{-1}\f$.
//  */
// const double SPEED_OF_LIGHT = 2.99792458e10;
// /**
//  * Vacuum permittivity in \f$F \cdot m^{-1}\f$.
//  */
// const double VACUUM_PERMITTIVITY = 8.85418781762039e-12;


}