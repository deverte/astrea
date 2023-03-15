#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void lte_population(py::module_& m) {
  m.def("lte_population", &nlte::lte_population);
}


}