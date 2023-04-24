import matplotlib.pyplot as plt
import numpy as np

from .calculate_populations_lte import calculate_populations_lte
from . import plot_utils


def plot_population_lte_electron_number_density(
    elements,
    temperature = 0.0,
    electron_temperature = 0.0,
    electron_number_densities = np.array([]),
    legend_1_loc = 'lower right',
    legend_2_loc = 'lower left',
):
    count = electron_number_densities.shape[0]

    temperatures = np.full(count, temperature)
    electron_temperatures = np.full(count, electron_temperature)

    populations_lte = calculate_populations_lte(
        elements,
        temperatures = temperatures,
        electron_temperatures = electron_temperatures,
        electron_number_densities = electron_number_densities,
    )


    fig, ax = plt.subplots()

    for s, element in enumerate(elements):
        for i, key in enumerate(element.keys):
            plt.plot(
                electron_number_densities,
                populations_lte
                    .T[i + sum([len(el.keys) for el in elements][:s])],
                label=(
                    f"{key}, "
                    f"{'{:.1f}'.format(element.levels[i].ionization_energy)} eV"
                ),
            )

    title = "LTE"

    legend_2_loc_x, legend_2_loc_y = (
        plot_utils.plot_legend_2_loc_xy(legend_2_loc)
    )

    info = []
    info.append(f"$T = ${'{:.1e}'.format(temperature)} $K$")
    info.append(f"$T_e = ${'{:.1e}'.format(electron_temperature)} $K$")
    info.append(f"$N = ${'{:.1e}'.format(electron_number_densities.shape[0])}")

    plt.title(title)
    plt.xscale("log")
    plt.yscale("log")
    plt.xlabel("Electron number density, $cm^{-3}$")
    plt.ylabel("Electron population, $1$")
    plt.legend(loc=legend_1_loc)
    plt.text(
        legend_2_loc_x,
        legend_2_loc_y,
        "\n".join(info),
        transform = ax.transAxes,
        bbox={'facecolor': 'white', 'alpha': 0.8, 'edgecolor': (0.8, 0.8, 0.8)}
    )
    plt.grid()
    plt.show()