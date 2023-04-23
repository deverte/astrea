import matplotlib.pyplot as plt
import numpy as np

from .calculation import *


def plot_spectrum(spectrum, wavelengths = None):
    if wavelengths is None:
        wavelengths = np.linspace(spectrum.min_wavelength, spectrum.max_wavelength)

    spectral_flux_densities = np.array([spectrum(l) for l in wavelengths])

    if isinstance(spectrum, lss.BlackBodyPlanck):
        title = f"Black Body (Planck) ({spectrum.temperature} $K$, {spectrum.total_area} $W \cdot m^{{-2}}$)"
    if isinstance(spectrum, lss.SunGueymard):
        title = f"Sun (Gueymard)"
    if isinstance(spectrum, lss.Kelt9Fossati):
        title = "Kelt 9 (Fossati)"

    plt.plot(wavelengths, spectral_flux_densities)
    plt.title(title)
    plt.xlabel('Wavelength, $nm$')
    plt.ylabel('Spectral Irradiance, $W \cdot m^{{-2}} \cdot nm^{{-1}}$')
    plt.show()


def plot_population(
    elements,
    population = np.array([]),
    title = "Electrons population"
):
    energies = [level.ionization_energy for el in elements for level in el.levels]

    plt.bar(energies, population)

    plt.title(title)
    plt.xlabel("Level ionization energy, $eV$")
    plt.ylabel("Electrons population, $1$")
    plt.grid()
    plt.show()


def plot_b_factor_electron_number_density(
    elements,
    population_nlte_1 = np.array([]),
    spectrum = None,
    charge_transfer_elements = [],
    temperature = 0.0,
    electron_temperature = 0.0,
    electron_number_densities = np.array([]),
    optical_depth = 0.0,
    delta_time = 0.0,
    transitions_types = [],
    legend_1_loc = 'lower right',
    legend_2_loc = 'lower left',
):
    count = electron_number_densities.shape[0]

    temperatures = np.full(count, temperature)
    electron_temperatures = np.full(count, electron_temperature)

    b_factors = calculate_b_factors(
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
                electron_number_densities,
                b_factors.T[i + sum([len(el.keys) for el in elements][:s])],
                label=f"{key}, {'{:.1f}'.format(element.levels[i].ionization_energy)} eV",
            )

    title = []
    for transition_type in transitions_types:
        if transition_type == Transition.CBB_MASHONKINA_O1:
            title.append("CBB (Mashonkina)")
        if transition_type == Transition.CBB_REGEMORTER:
            title.append("CBB (Regemorter)")
        if transition_type == Transition.CI_ARNAUD_YOUNGER:
            title.append("CI (Arnaud, Younger)")
        if transition_type == Transition.CI_HAHN:
            title.append("CI (Hahn)")
        if transition_type == Transition.CTI_ARNAUD:
            title.append("CTI (Arnaud)")
        if transition_type == Transition.CTR_ARNAUD:
            title.append("CTR (Arnaud)")
        if transition_type == Transition.DR_BADNELL:
            title.append("DR (Badnell)")
        if transition_type == Transition.PI_MASHONKINA_O1:
            title.append("PI (Mashonkina)")
        if transition_type == Transition.PI_TASITSIOMI:
            title.append("PI (Tasitsiomi)")
        if transition_type == Transition.RBB_MASHONKINA_DOPPLER_O1:
            title.append("RBB (Mashonkina, Doppler)")
        if transition_type == Transition.RBB_MASHONKINA_VOIGT_O1:
            title.append("RBB (Mashonkina, Voigt)")
        if transition_type == Transition.RBB_TASITSIOMI:
            title.append("RBB (Tasitsiomi)")
        if transition_type == Transition.RR_BADNELL_VERNER:
            title.append("RR (Badnell, Verner)")
        if transition_type == Transition.RR_SEATON:
            title.append("RR (Seaton)")
        if transition_type == Transition.SE_NIST_O1:
            title.append("SE (NIST)")
        if transition_type == Transition.TBR_HAHN:
            title.append("TBR (Hahn)")

    legend_2_loc_x = 0.04
    legend_2_loc_y = 0.04
    if legend_2_loc == 'lower left':
        pass
    if legend_2_loc == 'lower right':
        legend_2_loc_x = 1.0 - legend_2_loc_x
    if legend_2_loc == 'upper left':
        legend_2_loc_y = 0.76
    if legend_2_loc == 'upper right':
        legend_2_loc_x = 1.0 - legend_2_loc_x
        legend_2_loc_y = 0.76

    info = []
    info.append(f"$T = ${'{:.1e}'.format(temperature)} $K$")
    info.append(f"$T_e = ${'{:.1e}'.format(electron_temperature)} $K$")
    info.append(f"$\\Delta t = ${'{:.1e}'.format(delta_time)} $s$")
    info.append(f"$N = ${'{:.1e}'.format(electron_number_densities.shape[0])}")
    if not optical_depth is None:
        info.append(f"$\\tau = ${'{:.1e}'.format(optical_depth)}")

    plt.title(" + ".join(title))
    plt.xscale("log")
    plt.yscale("log")
    plt.xlabel("Electron number density, $cm^{-3}$")
    plt.ylabel("b-factor, $1$")
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


def plot_b_factor_temperature(
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

    b_factors = calculate_b_factors(
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
                b_factors.T[i + sum([len(el.keys) for el in elements][:s])],
                label=f"{key}, {'{:.1f}'.format(element.levels[i].ionization_energy)} eV",
            )

    title = []
    for transition_type in transitions_types:
        if transition_type == Transition.CBB_MASHONKINA_O1:
            title.append("CBB (Mashonkina)")
        if transition_type == Transition.CBB_REGEMORTER:
            title.append("CBB (Regemorter)")
        if transition_type == Transition.CI_ARNAUD_YOUNGER:
            title.append("CI (Arnaud, Younger)")
        if transition_type == Transition.CI_HAHN:
            title.append("CI (Hahn)")
        if transition_type == Transition.CTI_ARNAUD:
            title.append("CTI (Arnaud)")
        if transition_type == Transition.CTR_ARNAUD:
            title.append("CTR (Arnaud)")
        if transition_type == Transition.DR_BADNELL:
            title.append("DR (Badnell)")
        if transition_type == Transition.PI_MASHONKINA_O1:
            title.append("PI (Mashonkina)")
        if transition_type == Transition.PI_TASITSIOMI:
            title.append("PI (Tasitsiomi)")
        if transition_type == Transition.RBB_MASHONKINA_DOPPLER_O1:
            title.append("RBB (Mashonkina, Doppler)")
        if transition_type == Transition.RBB_MASHONKINA_VOIGT_O1:
            title.append("RBB (Mashonkina, Voigt)")
        if transition_type == Transition.RBB_TASITSIOMI:
            title.append("RBB (Tasitsiomi)")
        if transition_type == Transition.RR_BADNELL_VERNER:
            title.append("RR (Badnell, Verner)")
        if transition_type == Transition.RR_SEATON:
            title.append("RR (Seaton)")
        if transition_type == Transition.SE_NIST_O1:
            title.append("SE (NIST)")
        if transition_type == Transition.TBR_HAHN:
            title.append("TBR (Hahn)")

    legend_2_loc_x = 0.04
    legend_2_loc_y = 0.04
    if type(legend_2_loc) is str:
        if legend_2_loc == 'lower left':
            pass
        if legend_2_loc == 'lower right':
            legend_2_loc_x = 1.0 - legend_2_loc_x
        if legend_2_loc == 'upper left':
            legend_2_loc_y = 0.76
        if legend_2_loc == 'upper right':
            legend_2_loc_x = 1.0 - legend_2_loc_x
            legend_2_loc_y = 0.76
    if type(legend_2_loc) is list:
        legend_2_loc_x, legend_2_loc_y = legend_2_loc

    info = []
    info.append(f"$N_e = ${'{:.1e}'.format(electron_number_density)} $cm^{{-3}}$")
    info.append(f"$\\Delta t = ${'{:.1e}'.format(delta_time)} $s$")
    info.append(f"$N = ${'{:.1e}'.format(temperatures.shape[0])}")
    if not optical_depth is None:
        info.append(f"$\\tau = ${'{:.1e}'.format(optical_depth)}")

    plt.title(" + ".join(title))
    plt.xscale("log")
    plt.yscale("log")
    plt.xlabel("Temperature, $K$")
    plt.ylabel("b-factor, $1$")
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