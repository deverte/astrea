#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void He2(py::module_& m) {
  py::class_<lss::He2, lss::Element, std::shared_ptr<lss::He2>> he2(m, "He2");

  he2.def(py::init<>());
}


}