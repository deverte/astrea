import matplotlib.pyplot as plt
import numpy as np


def plot_population(
    elements,
    population = np.array([]),
    title = "Electrons population"
):
    energies = [
        level.ionization_energy
        for el in elements
        for level in el.levels
    ]

    plt.bar(energies, population)

    plt.title(title)
    plt.xlabel("Level ionization energy, $eV$")
    plt.ylabel("Electrons population, $1$")
    plt.grid()
    plt.show()