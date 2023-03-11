#include <pybind11/pybind11.h>

#include "nlte_py/nlte_py.h"


PYBIND11_MODULE(nlte, m) {
  nlte_py::oxygen_lte_population(m);
  nlte_py::oxygen_nlte_population(m);
  nlte_py::Sun(m);
}