#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void Sun(py::module_& m) {
  py::class_<nlte::Sun> sun(m, "Sun");

  sun.def(py::init());

  sun.def_readonly("wavelengths", &nlte::Sun::wavelengths);

  sun.def_readonly("spectral_flux_density", &nlte::Sun::spectral_flux_density);
}


}