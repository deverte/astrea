#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void rr_seaton_rates(py::module_& m) {
  m.def("rr_seaton_rates", &lss::rr_seaton_rates);
}


}