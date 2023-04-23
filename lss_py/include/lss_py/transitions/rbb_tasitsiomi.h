#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void rbb_tasitsiomi_rates(py::module_& m) {
  m.def("rbb_tasitsiomi_rates", &lss::rbb_tasitsiomi_rates);
}


}