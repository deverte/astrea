#include <pybind11/pybind11.h>

#include "nlte_py/nlte_py.h"


PYBIND11_MODULE(nlte, m) {
  nlte_py::ce_inasan_o1_rates(m);
  nlte_py::ce_regemorter_rates(m);
  nlte_py::dr_badnell_rates(m);
  nlte_py::lte_population(m);
  nlte_py::nlte_population(m);
  nlte_py::pe_tasitsiomi_rates(m);
  nlte_py::pi_tasitsiomi_rates(m);
  nlte_py::rbb_doppler_inasan_o1_rates(m);
  nlte_py::rbb_voigt_inasan_o1_rates(m);
  nlte_py::rbf_inasan_o1_rates(m);
  nlte_py::rr_badnell_rates(m);
  nlte_py::se_nist_o1_rates(m);

  nlte_py::Element(m);
  nlte_py::O1Inasan(m);
  nlte_py::SunGueymard(m);
}