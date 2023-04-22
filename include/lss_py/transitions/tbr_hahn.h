#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void tbr_hahn_rates(py::module_& m) {
  m.def("tbr_hahn_rates", &lss::tbr_hahn_rates);
}


}