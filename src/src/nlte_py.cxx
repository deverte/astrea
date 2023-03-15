#include <pybind11/pybind11.h>

#include "nlte_py/nlte_py.h"


PYBIND11_MODULE(nlte, m) {
  nlte_py::col_regemorter_rates(m);
  nlte_py::lte_population(m);
  nlte_py::nlte_population(m);
  nlte_py::oxygen_1_col_rates(m);
  nlte_py::oxygen_1_rbb_doppler_rates(m);
  nlte_py::oxygen_1_rbb_voigt_rates(m);
  nlte_py::oxygen_1_rbf_rates(m);

  nlte_py::Element(m);
  nlte_py::Oxygen1(m);
  nlte_py::Sun(m);
}