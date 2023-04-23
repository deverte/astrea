#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void O2Mashonkina(py::module_& m) {
  py::class_<lss::O2Mashonkina, lss::Element, std::shared_ptr<lss::O2Mashonkina>>
  o2_inasan(m, "O2Mashonkina");

  o2_inasan.def(py::init<>());
}


}