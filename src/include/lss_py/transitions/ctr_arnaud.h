#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void ctr_arnaud_rates(py::module_& m) {
  m.def("ctr_arnaud_rates", &lss::ctr_arnaud_rates);
}


}