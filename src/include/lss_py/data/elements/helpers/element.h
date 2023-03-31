#pragma once


#include <memory>
#include <vector>
#include <string>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <lss/lss.h>


namespace py = pybind11;


namespace lss_py {


class PyElement : public lss::Element {
 public:
  using lss::Element::Element;

  const std::vector<lss::Level>& all_levels() override {
    PYBIND11_OVERRIDE_PURE(
      const std::vector<lss::Level>&,
      lss::Element,
      all_levels
    );
  }

  const double atomic_number() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      lss::Element,
      atomic_number
    );
  }

  const double ionization_stage() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      lss::Element,
      ionization_stage
    );
  }

  const double mass() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      lss::Element,
      mass
    );
  }
};


inline void Element(py::module_& m) {
  py::class_<lss::Element, PyElement, std::shared_ptr<lss::Element>>
  element(m, "Element");

  element.def(py::init<>());

  element.def_property(
    "all_keys",
    &lss::Element::all_keys,
    nullptr
  );

  element.def_property(
    "keys",
    py::overload_cast<>(&lss::Element::keys),
    py::overload_cast<std::vector<std::string>>(&lss::Element::keys)
  );
}


}