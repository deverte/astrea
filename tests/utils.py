from enum import Enum

import matplotlib.pyplot as plt
import numpy as np

import lss


class Transition(Enum):
    CE_INASAN_O1 = 1
    CE_REGEMORTER = 2
    CI_ARNAUD_YOUNGER = 3
    CI_HAHN = 4
    CTI_ARNAUD = 5
    CTR_ARNAUD = 6
    DR_BADNELL = 7
    PE_TASITSIOMI = 8
    PI_TASITSIOMI = 9
    RBB_DOPPLER_INASAN_O1 = 10
    RBB_VOIGT_INASAN_O1 = 11
    RBF_INASAN_O1 = 12
    RR_BADNELL_VERNER = 13
    RR_SEATON = 14
    SE_NIST_O1 = 15
    TBR_HAHN = 16


def calculate_populations_nlte(
    elements,
    population_nlte_1,
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
        rates_matrix = np.zeros((
            sum([len(el.keys) for el in elements]),
            sum([len(el.keys) for el in elements])
        ))
        if Transition.CE_INASAN_O1 in transitions_types:
            rates_matrix += lss.ce_inasan_o1_rates(
                elements,
                temperatures[i],
                electron_number_densities[i],
            )
        if Transition.CE_REGEMORTER in transitions_types:
            rates_matrix += lss.ce_regemorter_rates(
                elements,
                temperatures[i],
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if Transition.CI_ARNAUD_YOUNGER in transitions_types:
            rates_matrix += lss.ci_arnaud_younger_rates(
                elements,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if Transition.CI_HAHN in transitions_types:
            rates_matrix += lss.ci_hahn_rates(
                elements,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if Transition.CTI_ARNAUD in transitions_types:
            rates_matrix += lss.cti_arnaud_rates(
                elements,
                temperatures[i],
                electron_number_densities[i],
            )
        if Transition.CTR_ARNAUD in transitions_types:
            rates_matrix += lss.ctr_arnaud_rates(
                elements,
                temperatures[i],
                electron_number_densities[i],
            )
        if Transition.DR_BADNELL in transitions_types:
            rates_matrix += lss.dr_badnell_rates(
                elements,
                temperatures[i],
                electron_number_densities[i],
            )
        if Transition.PE_TASITSIOMI in transitions_types:
            rates_matrix += lss.pe_tasitsiomi_rates(
                elements,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
                lss.se_nist_o1_rates(elements),
            )
        if Transition.PI_TASITSIOMI in transitions_types:
            rates_matrix += lss.pi_tasitsiomi_rates(
                elements,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
                temperatures[i],
                lss.se_nist_o1_rates(elements),
            )
        if Transition.RBB_DOPPLER_INASAN_O1 in transitions_types:
            rates_matrix += lss.rbb_doppler_inasan_o1_rates(elements)
        if Transition.RBB_VOIGT_INASAN_O1 in transitions_types:
            rates_matrix += lss.rbb_voigt_inasan_o1_rates(elements)
        if Transition.RBF_INASAN_O1 in transitions_types:
            rates_matrix += lss.rbf_inasan_o1_rates(
                elements,
                lss.SunGueymard.wavelengths,
                lss.SunGueymard.spectral_flux_density,
                optical_depth,
            )
        if Transition.RBF_INASAN_O1 in transitions_types:
            rates_matrix += lss.rr_badnell_verner_rates(
                elements,
                temperatures[i],
                electron_number_densities[i],
            )
        if Transition.RR_BADNELL_VERNER in transitions_types:
            rates_matrix += lss.rr_seaton_rates(
                elements,
                electron_temperatures[i],
                electron_number_densities[i],
            )
        if Transition.SE_NIST_O1 in transitions_types:
            rates_matrix += lss.se_nist_o1_rates(elements)
        if Transition.TBR_HAHN in transitions_types:
            rates_matrix += lss.tbr_hahn_rates(
                elements,
                electron_temperatures[i],
                electron_number_densities[i],
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
        temperatures,
        electron_temperatures,
        electron_number_densities,
        optical_depth,
        delta_time,
        transitions_types,
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