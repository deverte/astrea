/**
 * \file astrea/astrea.h
 * Statistical equilibrium (LTE and NLTE) calculation header-only library.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./element/o_i_mashonkina.h"
#include "./element/o_ii_mashonkina.h"
#include "./population/boltzmann_distribution.h"
#include "./population/balance_equation.h"
#include "./spectrum/kelt_9_fossati.h"
#include "./transition/cd_regemorter.h"
#include "./transition/ce_regemorter.h"
#include "./transition/re_lorentz.h"
#include "./transition/ri.h"