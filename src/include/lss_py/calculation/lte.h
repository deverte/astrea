#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void lte_population(py::module_& m) {
  m.def("lte_population", &lss::lte_population);
}


}