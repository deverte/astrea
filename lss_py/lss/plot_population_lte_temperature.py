import matplotlib.pyplot as plt
import numpy as np

from .calculate_populations_lte import calculate_populations_lte
from . import plot_utils


def plot_population_lte_temperature(
    elements,
    temperatures = np.array([]),
    electron_number_density = 0.0,
    legend_1_loc = 'lower right',
    legend_2_loc = 'lower left',
):
    count = temperatures.shape[0]

    electron_temperatures = temperatures
    electron_number_densities = np.full(count, electron_number_density)

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
                temperatures,
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
    info.append(
        f"$N_e = ${'{:.1e}'.format(electron_number_density)} $cm^{{-3}}$"
    )
    info.append(f"$N = ${'{:.1e}'.format(temperatures.shape[0])}")

    plt.title(title)
    plt.xscale("log")
    plt.yscale("log")
    plt.xlabel("Temperature, $K$")
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