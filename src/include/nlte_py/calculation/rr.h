#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void rr_rates(py::module_& m) {
  m.def("rr_rates", &nlte::rr_rates);
}


}