#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void SunGueymard(py::module_& m) {
  py::class_<lss::SunGueymard> sun_gueymard(m, "SunGueymard");

  sun_gueymard.def(py::init<>());

  sun_gueymard.def_property_readonly_static(
    "wavelengths",
    [&](py::object /* self */) { return lss::SunGueymard::wavelengths(); }
  );

  sun_gueymard.def_property_readonly_static(
    "spectral_flux_density",
    [&](py::object /* self */) {
      return lss::SunGueymard::spectral_flux_density();
    }
  );
}


}