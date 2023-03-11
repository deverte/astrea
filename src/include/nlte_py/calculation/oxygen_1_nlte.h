#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void oxygen_nlte_population(py::module_& m) {
  m.def("oxygen_nlte_population", &nlte::oxygen_nlte_population);
}


}