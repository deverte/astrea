#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void rr_seaton_rates(py::module_& m) {
  m.def("rr_seaton_rates", &nlte::rr_seaton_rates);
}


}