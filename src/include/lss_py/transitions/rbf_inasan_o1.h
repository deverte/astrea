#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void rbf_inasan_o1_rates(py::module_& m) {
  m.def("rbf_inasan_o1_rates", &lss::rbf_inasan_o1_rates);
}


}