#pragma once


#include <memory>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


class PySpectrum : public lss::Spectrum {
 public:
  using lss::Spectrum::Spectrum;

  double operator()(double wavelength) override {
    PYBIND11_OVERRIDE_PURE_NAME(
      double,
      lss::Spectrum,
      "__call__",
      operator(),
      wavelength
    );
  }

  double max_wavelength() override {
    PYBIND11_OVERRIDE_PURE(
      double,
      lss::Spectrum,
      max_wavelength
    );
  }

  double min_wavelength() override {
    PYBIND11_OVERRIDE_PURE(
      double,
      lss::Spectrum,
      min_wavelength
    );
  }
};


inline void Spectrum(py::module_& m) {
  py::class_<lss::Spectrum, PySpectrum, std::shared_ptr<lss::Spectrum>>
  spectrum(m, "Spectrum");

  spectrum.def(py::init<>());

  spectrum.def("__call__", &lss::Spectrum::operator());

  spectrum.def_property_readonly(
    "max_wavelength",
    &lss::Spectrum::max_wavelength
  );

  spectrum.def_property_readonly(
    "min_wavelength",
    &lss::Spectrum::min_wavelength
  );
}


}