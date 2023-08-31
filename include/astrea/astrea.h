/**
 * \file astrea/astrea.h
 * Statistical equilibrium (LTE and NLTE) calculation header-only library.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include "./calculation/lte.h"
#include "./calculation/nlte.h"
#include "./data/elements/element.h"
#include "./data/elements/h1.h"
#include "./data/elements/h2.h"
#include "./data/elements/he1.h"
#include "./data/elements/he2.h"
#include "./data/elements/o1_mashonkina.h"
#include "./data/elements/o2_mashonkina.h"
#include "./data/spectra/black_body_planck.h"
#include "./data/spectra/kelt_9_fossati.h"
#include "./data/spectra/spectrum.h"
#include "./data/spectra/sun_gueymard.h"
#include "./transitions/cd_regemorter_rates.h"
#include "./transitions/ce_regemorter_rates.h"
#include "./transitions/ci_mashonkina_o1_rate_coefficients.h"
#include "./transitions/cr_mashonkina_o1_rate_coefficients.h"
#include "./transitions/rd_nist_o1_rates.h"
#include "./transitions/re_lorentz_rates.h"
#include "./transitions/ri_mashonkina_o1_rates.h"
#include "./transitions/rr_mashonkina_o1_rate_coefficients.h"