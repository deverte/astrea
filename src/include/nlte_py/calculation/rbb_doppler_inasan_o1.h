#pragma once


#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include "nlte/nlte.h"


namespace py = pybind11;


namespace nlte_py {


inline void rbb_doppler_inasan_o1_rates(py::module_& m) {
  m.def("rbb_doppler_inasan_o1_rates", &nlte::rbb_doppler_inasan_o1_rates);
}


}