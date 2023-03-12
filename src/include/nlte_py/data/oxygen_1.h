#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void Oxygen(py::module_& m) {
  py::class_<nlte::Oxygen> oxygen(m, "Oxygen");

  oxygen.def(py::init());

  oxygen.def_property_readonly_static(
    "keys",
    [&](py::object /* self */) { return nlte::Oxygen::keys(); }
  );
}


}