#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void nlte_population(py::module_& m) {
  m.def("nlte_population", &lss::nlte_population);
}


}