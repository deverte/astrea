#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void O1Inasan(py::module_& m) {
  py::class_<nlte::O1Inasan, nlte::Element, std::shared_ptr<nlte::O1Inasan>>
  o1_inasan(m, "O1Inasan");

  o1_inasan.def(py::init<>());
}


}