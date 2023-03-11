#pragma once


#include <pybind11/pybind11.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void oxygen_lte_population(py::module_& m) {
  m.def("oxygen_lte_population", &nlte::oxygen_lte_population);
}


}