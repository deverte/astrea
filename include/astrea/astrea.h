/**
 * \file astrea/astrea.h
 * Statistical equilibrium (LTE and NLTE) calculation header-only library.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./cooling/cooling_rate_approximation.h"
#include "./cooling/cooling_rate.h"
#include "./cooling/heating_rate.h"
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
#include "./optics/absorption_coefficient.h"
#include "./optics/optical_depth.h"
#include "./math/interp1d_linear.h"
#include "./math/interp1d_nearest.h"
#include "./math/trapezoid.h"
#include "./population/balance_equation.h"
#include "./population/boltzmann_distribution.h"
#include "./spectrum/kelt_9_fossati.h"
#include "./transition/cd.h"
#include "./transition/ce_regemorter.h"
#include "./transition/ce.h"
#include "./transition/rd.h"
#include "./transition/re_lorentz.h"
#include "./transition/ri.h"