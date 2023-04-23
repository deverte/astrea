#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void dr_badnell_rates(py::module_& m) {
  m.def("dr_badnell_rates", &lss::dr_badnell_rates);
}


}