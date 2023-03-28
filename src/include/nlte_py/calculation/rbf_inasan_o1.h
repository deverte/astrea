#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void rbf_inasan_o1_rates(py::module_& m) {
  m.def("rbf_inasan_o1_rates", &nlte::rbf_inasan_o1_rates);
}


}