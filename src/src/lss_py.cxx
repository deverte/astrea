#include <pybind11/pybind11.h>

#include <lss_py/lss_py.h>


PYBIND11_MODULE(lss, m) {
  lss_py::lte_population(m);
  lss_py::nlte_population(m);

  lss_py::Level(m);
  lss_py::Element(m);
  lss_py::H1(m);
  lss_py::H2(m);
  lss_py::He1(m);
  lss_py::He2(m);
  lss_py::O1Mashonkina(m);
  lss_py::O2Mashonkina(m);

  lss_py::Spectrum(m);
  lss_py::BlackBodyPlanck(m);
  lss_py::Kelt9Fossati(m);
  lss_py::SunGueymard(m);

  lss_py::cbb_mashonkina_o1_rates(m);
  lss_py::cbb_regemorter_rates(m);
  lss_py::ci_arnaud_younger_rates(m);
  lss_py::ci_hahn_rates(m);
  lss_py::cti_arnaud_rates(m);
  lss_py::ctr_arnaud_rates(m);
  lss_py::dr_badnell_rates(m);
  lss_py::pi_mashonkina_o1_rates(m);
  lss_py::pi_tasitsiomi_rates(m);
  lss_py::rbb_mashonkina_doppler_o1_rates(m);
  lss_py::rbb_mashonkina_voigt_o1_rates(m);
  lss_py::rbb_tasitsiomi_rates(m);
  lss_py::rr_badnell_verner_rates(m);
  lss_py::rr_seaton_rates(m);
  lss_py::se_nist_o1_rates(m);
  lss_py::tbr_hahn_rates(m);
}