#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void H1(py::module_& m) {
  py::class_<lss::H1, lss::Element, std::shared_ptr<lss::H1>> h1(m, "H1");

  h1.def(py::init<>());
}


}