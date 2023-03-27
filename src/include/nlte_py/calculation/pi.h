#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void pi_rates(py::module_& m) {
  m.def("pi_rates", &nlte::pi_rates);
}


}