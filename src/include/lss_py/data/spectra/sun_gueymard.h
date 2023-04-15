#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void SunGueymard(py::module_& m) {
  py::class_<lss::SunGueymard, lss::Spectrum, std::shared_ptr<lss::SunGueymard>>
  sun_gueymard(m, "SunGueymard");

  sun_gueymard.def(py::init<>());
}


}