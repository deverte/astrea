#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void He1(py::module_& m) {
  py::class_<lss::He1, lss::Element, std::shared_ptr<lss::He1>> he1(m, "He1");

  he1.def(py::init<>());
}


}