#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void pe_tasitsiomi_rates(py::module_& m) {
  m.def("pe_tasitsiomi_rates", &lss::pe_tasitsiomi_rates);
}


}