#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void rr_badnell_verner_rates(py::module_& m) {
  m.def("rr_badnell_verner_rates", &lss::rr_badnell_verner_rates);
}


}