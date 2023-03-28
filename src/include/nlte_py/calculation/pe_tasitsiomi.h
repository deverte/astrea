#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void pe_tasitsiomi_rates(py::module_& m) {
  m.def("pe_tasitsiomi_rates", &nlte::pe_tasitsiomi_rates);
}


}