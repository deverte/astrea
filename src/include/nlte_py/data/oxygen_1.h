#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void Oxygen1(py::module_& m) {
  py::class_<nlte::Oxygen1, nlte::Element, std::shared_ptr<nlte::Oxygen1>>
  oxygen_1(m, "Oxygen1");

  oxygen_1.def(py::init<>());
}


}