#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


inline void BlackBodyPlanck(py::module_& m) {
  py::class_<
    lss::BlackBodyPlanck, lss::Spectrum, std::shared_ptr<lss::BlackBodyPlanck>
  >
  black_body_planck(m, "BlackBodyPlanck");

  black_body_planck.def(py::init<>());

  black_body_planck.def_property(
    "temperature",
    py::overload_cast<>(&lss::BlackBodyPlanck::temperature),
    py::overload_cast<double>(&lss::BlackBodyPlanck::temperature)
  );

  black_body_planck.def_property(
    "total_area",
    py::overload_cast<>(&lss::BlackBodyPlanck::total_area),
    py::overload_cast<double>(&lss::BlackBodyPlanck::total_area)
  );
}


}