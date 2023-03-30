#pragma once


#include <memory>
#include <vector>
#include <string>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


class PyElement : public nlte::Element {
 public:
  using nlte::Element::Element;

  const std::vector<nlte::Level>& all_levels() override {
    PYBIND11_OVERRIDE_PURE(
      const std::vector<nlte::Level>&,
      nlte::Element,
      all_levels
    );
  }

  const double atomic_number() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      nlte::Element,
      atomic_number
    );
  }

  const double ionization_stage() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      nlte::Element,
      ionization_stage
    );
  }

  const double mass() override {
    PYBIND11_OVERRIDE_PURE(
      const double,
      nlte::Element,
      mass
    );
  }
};


inline void Element(py::module_& m) {
  py::class_<nlte::Element, PyElement, std::shared_ptr<nlte::Element>>
  element(m, "Element");

  element.def(py::init<>());

  element.def_property(
    "all_keys",
    &nlte::Element::all_keys,
    nullptr
  );

  element.def_property(
    "keys",
    py::overload_cast<>(&nlte::Element::keys),
    py::overload_cast<std::vector<std::string>>(&nlte::Element::keys)
  );
}


}