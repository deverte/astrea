#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void col_regemorter_rates(py::module_& m) {
  m.def("col_regemorter_rates", &nlte::col_regemorter_rates);
}


}