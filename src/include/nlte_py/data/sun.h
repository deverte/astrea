#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void Sun(py::module_& m) {
  py::class_<nlte::Sun> sun(m, "Sun");

  sun.def(py::init<>());

  sun.def_property_readonly_static(
    "wavelengths",
    [&](py::object /* self */) { return nlte::Sun::wavelengths(); }
  );

  sun.def_property_readonly_static(
    "spectral_flux_density",
    [&](py::object /* self */) { return nlte::Sun::spectral_flux_density(); }
  );
}


}