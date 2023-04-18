#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void H2(py::module_& m) {
  py::class_<lss::H2, lss::Element, std::shared_ptr<lss::H2>> h2(m, "H2");

  h2.def(py::init<>());
}


}