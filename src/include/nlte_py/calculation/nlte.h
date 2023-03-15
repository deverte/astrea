#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void nlte_population(py::module_& m) {
  m.def("nlte_population", &nlte::nlte_population);
}


}