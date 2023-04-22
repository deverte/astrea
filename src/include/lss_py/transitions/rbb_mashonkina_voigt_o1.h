#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void rbb_mashonkina_voigt_o1_rates(py::module_& m) {
  m.def("rbb_mashonkina_voigt_o1_rates", &lss::rbb_mashonkina_voigt_o1_rates);
}


}