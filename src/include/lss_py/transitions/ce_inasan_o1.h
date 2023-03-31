#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void ce_inasan_o1_rates(py::module_& m) {
  m.def("ce_inasan_o1_rates", &lss::ce_inasan_o1_rates);
}


}