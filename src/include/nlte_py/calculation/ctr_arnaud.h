#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void ctr_arnaud_rates(py::module_& m) {
  m.def("ctr_arnaud_rates", &nlte::ctr_arnaud_rates);
}


}