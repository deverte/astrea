import matplotlib.pyplot as plt
import numpy as np

import lss


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
        population_lte = lss.lte_population(element, temperatures[i])

        rates_matrix = np.zeros((len(element.keys), len(element.keys)))
        if "ce_inasan_o1" in transitions_types:
            rates_matrix += lss.ce_inasan_o1_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "ce_regemorter" in transitions_types:
            rates_matrix += lss.ce_regemorter_rates(
                element,
                temperatures[i],
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if "ci_arnaud_younger" in transitions_types:
            rates_matrix += lss.ci_arnaud_younger_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "ci_hahn" in transitions_types:
            rates_matrix += lss.ci_hahn_rates(
                element,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if "cti_arnaud" in transitions_types:
            rates_matrix += lss.cti_arnaud_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "ctr_arnaud" in transitions_types:
            rates_matrix += lss.ctr_arnaud_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "dr_badnell" in transitions_types:
            rates_matrix += lss.dr_badnell_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "pe_tasitsiomi" in transitions_types:
            rates_matrix += lss.pe_tasitsiomi_rates(
                element,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
            )
        if "pi_tasitsiomi" in transitions_types:
            rates_matrix += lss.pi_tasitsiomi_rates(
                element,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
            )
        if "rbb_doppler_inasan_o1" in transitions_types:
            rates_matrix += lss.rbb_doppler_inasan_o1_rates(element)
        if "rbb_voigt_inasan_o1" in transitions_types:
            rates_matrix += lss.rbb_voigt_inasan_o1_rates(element)
        if "rbf_inasan_o1" in transitions_types:
            rates_matrix += lss.rbf_inasan_o1_rates(
                element,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
            )
        if "rr_badnell_verner" in transitions_types:
            rates_matrix += lss.rr_badnell_verner_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "rr_seaton" in transitions_types:
            rates_matrix += lss.rr_seaton_rates(
                element,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if "se_nist_o1" in transitions_types:
            rates_matrix += lss.se_nist_o1_rates(element)
        if "tbr_hahn" in transitions_types:
            rates_matrix += lss.tbr_hahn_rates(
                element,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        population_nlte_2 = lss.nlte_population(
            element,
            population_nlte_2,
            delta_time,
            rates_matrix,
        )
        b_factors[i] = population_nlte_2 / population_lte
    return b_factors