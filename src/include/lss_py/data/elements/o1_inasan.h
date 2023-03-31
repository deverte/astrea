#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void O1Inasan(py::module_& m) {
  py::class_<lss::O1Inasan, lss::Element, std::shared_ptr<lss::O1Inasan>>
  o1_inasan(m, "O1Inasan");

  o1_inasan.def(py::init<>());
}


}