#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void cti_arnaud_rates(py::module_& m) {
  m.def("cti_arnaud_rates", &lss::cti_arnaud_rates);
}


}