#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void dr_rates(py::module_& m) {
  m.def("dr_rates", &nlte::dr_rates);
}


}