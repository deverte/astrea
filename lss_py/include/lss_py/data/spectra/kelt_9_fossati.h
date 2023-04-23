#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void Kelt9Fossati(py::module_& m) {
  py::class_<
    lss::Kelt9Fossati, lss::Spectrum, std::shared_ptr<lss::Kelt9Fossati>
  >
  kelt_9_fossati(m, "Kelt9Fossati");

  kelt_9_fossati.def(py::init<>());
}


}