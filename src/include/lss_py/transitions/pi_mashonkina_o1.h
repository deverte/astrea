#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void pi_mashonkina_o1_rates(py::module_& m) {
  m.def("pi_mashonkina_o1_rates", &lss::pi_mashonkina_o1_rates);
}


}