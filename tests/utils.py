import matplotlib.pyplot as plt
import numpy as np

import nlte


def calculate_b_factors(
    element,
    population_nlte_1,
    temperatures,
    electron_temperatures,
    electron_number_densities,
    optical_depth = 0.0,
    delta_time = 60.0,
    wavelengths_step = 0.5,
    transitions_types = [],
):
    b_factors = np.zeros((len(temperatures), len(element.keys)))
    population_nlte_2 = population_nlte_1
    for i, _ in enumerate(temperatures):
        population_lte = nlte.lte_population(element, temperatures[i])

        rates_matrix = np.zeros((len(element.keys), len(element.keys)))
        if "col_regemorter" in transitions_types:
            rates_matrix += nlte.col_regemorter_rates(
                element,
                temperatures[i],
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if "oxygen_1_col" in transitions_types:
            rates_matrix += nlte.oxygen_1_col_rates(
                element,
                temperatures[i],
                electron_number_densities[i],
            )
        if "oxygen_1_rbb_doppler" in transitions_types:
            rates_matrix += nlte.oxygen_1_rbb_doppler_rates(element)
        if "oxygen_1_rbb_voigt" in transitions_types:
            rates_matrix += nlte.oxygen_1_rbb_voigt_rates(element)
        if "oxygen_1_rbf" in transitions_types:
            rates_matrix += nlte.oxygen_1_rbf_rates(
                element,
                nlte.Sun.wavelengths,
                nlte.Sun.spectral_flux_density,
                optical_depth,
            )
        if "oxygen_1_spontaneous_emission" in transitions_types:
            rates_matrix += nlte.oxygen_1_spontaneous_emission_rates(element)
        if "photoexcitation" in transitions_types:
            rates_matrix += nlte.photoexcitation_rates(
                element,
                nlte.Sun.wavelengths,
                nlte.Sun.spectral_flux_density,
                optical_depth,
                temperatures[i],
                wavelengths_step,
            )
        if "photoionization" in transitions_types:
            rates_matrix += nlte.photoionization_rates(
                element,
                nlte.Sun.wavelengths,
                nlte.Sun.spectral_flux_density,
                optical_depth,
                temperatures[i],
                wavelengths_step,
            )
        population_nlte_2 = nlte.nlte_population(
            element,
            population_nlte_2,
            delta_time,
            rates_matrix,
        )
        b_factors[i] = population_nlte_2 / population_lte
    return b_factors