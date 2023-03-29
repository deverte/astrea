import matplotlib.pyplot as plt
import numpy as np

import nlte


def calculate_b_factors(
    element,
    population_nlte_1,
    temperatures = None,
    electron_temperatures = None,
    electron_number_densities = None,
    optical_depth = 0.0,
    delta_time = 60.0,
    transitions_types = [],
):
    b_factors = np.zeros((len(temperatures), len(element.keys)))
    population_nlte_2 = population_nlte_1
    for i, _ in enumerate(temperatures):
        population_lte = nlte.lte_population(element, temperatures[i])

        rates_matrix = np.zeros((len(element.keys), len(element.keys)))
        if "ce_inasan_o1" in transitions_types:
            rates_matrix += nlte.ce_inasan_o1_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "ce_regemorter" in transitions_types:
            rates_matrix += nlte.ce_regemorter_rates(
                element,
                temperatures[i],
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if "cti_arnaud" in transitions_types:
            rates_matrix += nlte.cti_arnaud_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "ctr_arnaud" in transitions_types:
            rates_matrix += nlte.ctr_arnaud_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "dr_badnell" in transitions_types:
            rates_matrix += nlte.dr_badnell_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "pe_tasitsiomi" in transitions_types:
            rates_matrix += nlte.pe_tasitsiomi_rates(
                element,
                nlte.SunGueymard.wavelengths,
                nlte.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
            )
        if "pi_tasitsiomi" in transitions_types:
            rates_matrix += nlte.pi_tasitsiomi_rates(
                element,
                nlte.SunGueymard.wavelengths,
                nlte.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
            )
        if "rbb_doppler_inasan_o1" in transitions_types:
            rates_matrix += nlte.rbb_doppler_inasan_o1_rates(element)
        if "rbb_voigt_inasan_o1" in transitions_types:
            rates_matrix += nlte.rbb_voigt_inasan_o1_rates(element)
        if "rbf_inasan_o1" in transitions_types:
            rates_matrix += nlte.rbf_inasan_o1_rates(
                element,
                nlte.SunGueymard.wavelengths,
                nlte.SunGueymard.spectral_flux_density,
                optical_depth,
            )
        if "rr_badnell" in transitions_types:
            rates_matrix += nlte.rr_badnell_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "se_nist_o1" in transitions_types:
            rates_matrix += nlte.se_nist_o1_rates(element)
        population_nlte_2 = nlte.nlte_population(
            element,
            population_nlte_2,
            delta_time,
            rates_matrix,
        )
        b_factors[i] = population_nlte_2 / population_lte
    return b_factors