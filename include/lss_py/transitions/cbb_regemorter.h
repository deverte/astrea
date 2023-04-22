#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void cbb_regemorter_rates(py::module_& m) {
  m.def("cbb_regemorter_rates", &lss::cbb_regemorter_rates);
}


}