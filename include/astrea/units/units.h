/**
 * \file astrea/physics/constants.h
 * Physical (and some mathematical) constants.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <boost/units/systems/si/codata_constants.hpp>
#include <boost/units/systems/si.hpp>


namespace astrea::units::si::units {


using irradiance = decltype(
  boost::units::si::power() * boost::units::pow<-3>(boost::units::si::length())
);


using irradiance_area = decltype(
  boost::units::si::power() * boost::units::pow<-2>(boost::units::si::length())
);


using transition_rate_coefficient = decltype(
  + boost::units::pow<3>(boost::units::si::length())
  * boost::units::pow<-1>(boost::units::si::time())
);


}


namespace astrea::units::si::quantities {


const boost::units::quantity<boost::units::si::length> astronomical_unit =
  1.495978707e11 * boost::units::si::meter
;

const boost::units::quantity<boost::units::si::length> angstrom =
  1.0e-10 * boost::units::si::meter
;

const boost::units::quantity<boost::units::si::length> centimeter =
  1.0e-2 * boost::units::si::meter
;

const boost::units::quantity<boost::units::si::mass> dalton =
  1.0 * boost::units::si::constants::codata::m_u
;

const boost::units::quantity<boost::units::si::energy> electronvolt =
  boost::units::si::constants::codata::e * 1.0 * boost::units::si::volt
;

const boost::units::quantity<boost::units::si::energy> erg =
  1.0e-7 * boost::units::si::joule
;

const boost::units::quantity<boost::units::si::length> nanometer =
  1.0e-9 * boost::units::si::meter
;

const boost::units::quantity<boost::units::si::mass> unified_atomic_mass_unit =
  dalton
;


}


namespace astrea::units::si::constants {


const auto Ry =
  boost::units::si::constants::codata::h 
  * boost::units::si::constants::codata::c
  * boost::units::si::constants::codata::R_infinity
;


}


namespace astrea::units::si {


using namespace astrea::units::si::quantities;
using namespace astrea::units::si::constants;
using namespace astrea::units::si::units;


}