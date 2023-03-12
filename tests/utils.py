import matplotlib.pyplot as plt
import numpy as np

import nlte


def calculate_b_factors(
    population_nlte_1,
    temperatures,
    electron_number_densities,
    delta_time = 60.0,
):
    b_factors = np.zeros((len(temperatures), len(nlte.Oxygen.keys)))
    population_nlte_2 = population_nlte_1
    for i, _ in enumerate(temperatures):
        population_lte = nlte.oxygen_lte_population(temperatures[i])
        population_nlte_2 = nlte.oxygen_nlte_population(
            population_nlte_2,
            delta_time,
            temperatures[i],
            electron_number_densities[i],
            nlte.Sun.spectral_flux_density,
            nlte.Sun.wavelengths,
        )
        b_factors[i] = population_nlte_2 / population_lte
    return b_factors


def plot_b_factors(b_factors, key):
    i = nlte.Oxygen.keys.index(key)
    plt.plot(b_factors.T[i], label=key)
    plt.legend()
    plt.show()