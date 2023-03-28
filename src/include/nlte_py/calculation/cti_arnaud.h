#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void cti_arnaud_rates(py::module_& m) {
  m.def("cti_arnaud_rates", &nlte::cti_arnaud_rates);
}


}