/**
 * \file astrea/astrea.h
 * Statistical equilibrium (LTE and NLTE) calculation header-only library.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element/c_i.h"
#include "./element/c_ii.h"
#include "./element/c_iii.h"
#include "./element/fe_i.h"
#include "./element/fe_ii.h"
#include "./element/fe_iii.h"
#include "./element/mg_i.h"
#include "./element/mg_ii.h"
#include "./element/mg_iii.h"
#include "./element/o_i.h"
#include "./element/o_ii.h"
#include "./math/cauchy_lorentz_distribution.h"
#include "./math/interp1d_linear.h"
#include "./math/interp1d_nearest.h"
#include "./math/maxwell_boltzmann_distribution.h"
#include "./math/normal_distribution.h"
#include "./math/trapezoid.h"
#include "./math/voigt_function_tasitsiomi.h"
#include "./math/voigt_function.h"
#include "./math/voigt_profile.h"
#include "./optics/absorption_coefficient.h"
#include "./optics/doppler_line_width.h"
#include "./optics/natural_line_width.h"
#include "./optics/optical_depth.h"
#include "./population/balance_equation.h"
#include "./population/boltzmann_distribution.h"
#include "./population/saha_ionization_equation.h"
#include "./spectrum/kelt_9_fossati.h"
#include "./thermodynamics/cooling_function.h"
#include "./thermodynamics/cooling_rate_approximation.h"
#include "./thermodynamics/cooling_rate.h"
#include "./thermodynamics/heating_rate.h"
#include "./transition/collisional_deexcitation.h"
#include "./transition/collisional_excitation.h"
#include "./transition/collisional_ionization.h"
#include "./transition/photoexcitation_lorentz.h"
#include "./transition/photoionization.h"
#include "./transition/radiative_recombination.h"
#include "./transition/spontaneous_emission.h"
#include "./transition/three_body_recombination.h"