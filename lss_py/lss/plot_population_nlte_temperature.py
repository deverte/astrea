import matplotlib.pyplot as plt
import numpy as np

from .calculate_populations_nlte import calculate_populations_nlte
from . import plot_utils


def plot_population_nlte_temperature(
    elements,
    population_nlte_1 = np.array([]),
    spectrum = None,
    charge_transfer_elements = [],
    temperatures = np.array([]),
    electron_number_density = 0.0,
    optical_depth = 0.0,
    delta_time = 0.0,
    transitions_types = [],
    legend_1_loc = 'lower right',
    legend_2_loc = 'lower left',
):
    count = temperatures.shape[0]

    electron_temperatures = temperatures
    electron_number_densities = np.full(count, electron_number_density)

    populations_nlte = calculate_populations_nlte(
        elements,
        population_nlte_1,
        spectrum = spectrum,
        charge_transfer_elements = charge_transfer_elements,
        temperatures = temperatures,
        electron_temperatures = electron_temperatures,
        electron_number_densities = electron_number_densities,
        optical_depth = optical_depth,
        delta_time = delta_time,
        transitions_types = transitions_types,
    )


    fig, ax = plt.subplots()

    for s, element in enumerate(elements):
        for i, key in enumerate(element.keys):
            plt.plot(
                temperatures,
                populations_nlte
                    .T[i + sum([len(el.keys) for el in elements][:s])],
                label=(
                    f"{key}, "
                    f"{'{:.1f}'.format(element.levels[i].ionization_energy)} eV"
                ),
            )

    title = plot_utils.plot_title(transitions_types)

    legend_2_loc_x, legend_2_loc_y = (
        plot_utils.plot_legend_2_loc_xy(legend_2_loc)
    )

    info = []
    info.append(
        f"$N_e = ${'{:.1e}'.format(electron_number_density)} $cm^{{-3}}$"
    )
    info.append(f"$\\Delta t = ${'{:.1e}'.format(delta_time)} $s$")
    info.append(f"$N = ${'{:.1e}'.format(temperatures.shape[0])}")
    if not optical_depth is None:
        info.append(f"$\\tau = ${'{:.1e}'.format(optical_depth)}")

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