from .transition import Transition


def plot_title(transitions_types):
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

    return " + ".join(title)


def plot_legend_2_loc_xy(legend_2_loc):
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

    return legend_2_loc_x, legend_2_loc_y