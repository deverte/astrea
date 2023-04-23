from enum import Enum

import matplotlib.pyplot as plt
import numpy as np

import lss


class Transition(Enum):
    CBB_MASHONKINA_O1 = 1
    CBB_REGEMORTER = 2
    CI_ARNAUD_YOUNGER = 3
    CI_HAHN = 4
    CTI_ARNAUD = 5
    CTR_ARNAUD = 6
    DR_BADNELL = 7
    PI_MASHONKINA_O1 = 8
    PI_TASITSIOMI = 9
    RBB_MASHONKINA_DOPPLER_O1 = 10
    RBB_MASHONKINA_VOIGT_O1 = 11
    RBB_TASITSIOMI = 12
    RR_BADNELL_VERNER = 13
    RR_SEATON = 14
    SE_NIST_O1 = 15
    TBR_HAHN = 16


def calculate_rates_matrix(
    elements,
    spectrum = None,
    charge_transfer_elements = [],
    temperature = None,
    electron_temperature = None,
    electron_number_density = None,
    optical_depth = 0.0,
    transitions_types = [],
):
    rates_matrix = np.zeros((
        sum([len(el.keys) for el in elements]),
        sum([len(el.keys) for el in elements])
    ))
    if Transition.CBB_MASHONKINA_O1 in transitions_types:
        rates_matrix += lss.cbb_mashonkina_o1_rates(
            elements,
            temperature,
            electron_number_density,
        )
    if Transition.CBB_REGEMORTER in transitions_types:
        rates_matrix += lss.cbb_regemorter_rates(
            elements,
            temperature,
            electron_temperature,
            electron_number_density,
        )
    if Transition.CI_ARNAUD_YOUNGER in transitions_types:
        rates_matrix += lss.ci_arnaud_younger_rates(
            elements,
            electron_temperature,
            electron_number_density,
        )
    if Transition.CI_HAHN in transitions_types:
        rates_matrix += lss.ci_hahn_rates(
            elements,
            electron_temperature,
            electron_number_density,
        )
    if Transition.CTI_ARNAUD in transitions_types:
        for charge_transfer_element in charge_transfer_elements:
            rates_matrix += lss.cti_arnaud_rates(
                elements,
                charge_transfer_element,
                temperature,
                electron_number_density,
            )
    if Transition.CTR_ARNAUD in transitions_types:
        for charge_transfer_element in charge_transfer_elements:
            rates_matrix += lss.ctr_arnaud_rates(
                elements,
                charge_transfer_element,
                temperature,
                electron_number_density,
            )
    if Transition.DR_BADNELL in transitions_types:
        rates_matrix += lss.dr_badnell_rates(
            elements,
            temperature,
            electron_number_density,
        )
    if Transition.PI_MASHONKINA_O1 in transitions_types:
        rates_matrix += lss.pi_mashonkina_o1_rates(
            elements,
            spectrum,
            optical_depth,
        )
    if Transition.PI_TASITSIOMI in transitions_types:
        rates_matrix += lss.pi_tasitsiomi_rates(
            elements,
            spectrum,
            optical_depth,
            temperature,
            lss.se_nist_o1_rates(elements),
        )
    if Transition.RBB_MASHONKINA_DOPPLER_O1 in transitions_types:
        rates_matrix += lss.rbb_mashonkina_doppler_o1_rates(elements)
    if Transition.RBB_MASHONKINA_VOIGT_O1 in transitions_types:
        rates_matrix += lss.rbb_mashonkina_voigt_o1_rates(elements)
    if Transition.RBB_TASITSIOMI in transitions_types:
        rates_matrix += lss.rbb_tasitsiomi_rates(
            elements,
            spectrum,
            optical_depth,
            temperature,
            lss.se_nist_o1_rates(elements),
        )
    if Transition.RR_BADNELL_VERNER in transitions_types:
        rates_matrix += lss.rr_badnell_verner_rates(
            elements,
            temperature,
            electron_number_density,
        )
    if Transition.RR_SEATON in transitions_types:
        rates_matrix += lss.rr_seaton_rates(
            elements,
            electron_temperature,
            electron_number_density,
        )
    if Transition.SE_NIST_O1 in transitions_types:
        rates_matrix += lss.se_nist_o1_rates(elements)
    if Transition.TBR_HAHN in transitions_types:
        rates_matrix += lss.tbr_hahn_rates(
            elements,
            electron_temperature,
            electron_number_density,
        )
    return rates_matrix


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


def calculate_populations_lte(
    elements,
    temperatures = None,
    electron_temperatures = None,
    electron_number_densities = None,
):
    populations_lte = np.zeros(
        (len(temperatures), sum([len(el.keys) for el in elements]))
    )
    for i, _ in enumerate(temperatures):
        populations_lte[i] = lss.lte_population(
            elements,
            temperatures[i],
            electron_temperatures[i],
            electron_number_densities[i],
        )
    return populations_lte


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