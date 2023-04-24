import numpy as np

from .calculate_populations_nlte import calculate_populations_nlte
from .calculate_populations_lte import calculate_populations_lte


def calculate_b_factors(
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
    b_factors = np.zeros(
        (len(temperatures), sum([len(el.keys) for el in elements]))
    )
    populations_nlte = calculate_populations_nlte(
        elements,
        population_nlte_1,
        spectrum=spectrum,
        charge_transfer_elements=charge_transfer_elements,
        temperatures=temperatures,
        electron_temperatures=electron_temperatures,
        electron_number_densities=electron_number_densities,
        optical_depth=optical_depth,
        delta_time=delta_time,
        transitions_types=transitions_types,
    )
    populations_lte = calculate_populations_lte(
        elements,
        temperatures,
        electron_temperatures,
        electron_number_densities,
    )
    for i, _ in enumerate(temperatures):
        b_factors[i] = populations_nlte[i] / populations_lte[i]
    return b_factors