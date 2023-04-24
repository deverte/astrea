import numpy as np

import lss

from .calculate_rates_matrix import calculate_rates_matrix


def calculate_populations_nlte(
    elements,
    population_nlte_1,
    spectrum = None,
    charge_transfer_elements = [],
    temperatures = None,
    electron_temperatures = None,
    electron_number_densities = None,
    optical_depth = 0.0,
    delta_time = 60.0,
    transitions_types = [],
):
    populations_nlte = np.zeros(
        (len(temperatures), sum([len(el.keys) for el in elements]))
    )
    population_nlte_2 = population_nlte_1
    for i, _ in enumerate(temperatures):
        rates_matrix = calculate_rates_matrix(
            elements,
            spectrum=spectrum,
            charge_transfer_elements=charge_transfer_elements,
            temperature=temperatures[i],
            electron_temperature=electron_temperatures[i],
            electron_number_density=electron_number_densities[i],
            optical_depth=optical_depth,
            transitions_types=transitions_types,
        )
        population_nlte_2 = lss.nlte_population(
            population_nlte_2,
            delta_time,
            rates_matrix,
        )
        populations_nlte[i] = population_nlte_2
    return populations_nlte