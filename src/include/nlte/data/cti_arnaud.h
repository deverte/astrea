#pragma once


#include <vector>


namespace nlte {


/**
 * Charge transfer ionization.
 * Arnaud, M. ; Rothenflug, R. Astronomy and Astrophysics Supplement,
 * Vol.60, NO. 3/JUN, P. 425, 1985 (Sect. 4, Tables IIIA, IIIB). 
 */
class CTIArnaudFit {
 public:
  const double ionization_with_element_atomic_number; // 1
  const double ionization_with_element_ionization_stage; // 1
  const double atomic_number; // 1
  const double ionization_stage; // 1
  const std::vector<double> temperatures_range; // K
  const double a; // cm^3 * s^{-1}
  const double b; // 1
  const double c; // 1
  const double delta_E; // eV
};


class CTIArnaud {
 public:
  static const std::vector<CTIArnaudFit>& fit();

 private:
  static const std::vector<CTIArnaudFit> fit_;
};


inline const std::vector<CTIArnaudFit>& CTIArnaud::fit() {
  return fit_;
}


inline const std::vector<CTIArnaudFit> CTIArnaud::fit_{
  {
    .ionization_with_element_atomic_number = 1.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 8.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e2, 1.0e5},
    .a = 0.91,
    .b = 0.0,
    .c = 10.0,
    .delta_E = 19.6e-3,
  },
  {
    .ionization_with_element_atomic_number = 1.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 12.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 7.6e-5,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 1.44,
  },
  {
    .ionization_with_element_atomic_number = 1.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e4},
    .a = 1.0e-2,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 0.03,
  },
  {
    .ionization_with_element_atomic_number = 1.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 1.0,
    .temperatures_range = {5.0e3, 1.0e5},
    .a = 1.7,
    .b = 0.32,
    .c = 0.0,
    .delta_E = 2.74,
  },
  {
    .ionization_with_element_atomic_number = 1.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 0.0,
    .temperatures_range = {1.0e4},
    .a = 1.0,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 0.0,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 6.0,
    .ionization_stage = 1.0,
    .temperatures_range = {5.0e3, 5.0e4},
    .a = 5.0e-3,
    .b = 2.0,
    .c = 7.0e-2,
    .delta_E = 6.29,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 7.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 3.7e-3,
    .b = 2.1,
    .c = 6.3e-2,
    .delta_E = 1.44,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 0.15,
    .b = 0.24,
    .c = 0.0,
    .delta_E = 6.91,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 14.0,
    .ionization_stage = 2.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 1.15,
    .b = 0.44,
    .c = 0.0,
    .delta_E = 8.88,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 2.8e-2,
    .b = 1.2,
    .c = 3.6e-2,
    .delta_E = 9.2,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 16.0,
    .ionization_stage = 2.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 1.4e-2,
    .b = 1.6,
    .c = 4.6e-2,
    .delta_E = 10.5,
  },
  {
    .ionization_with_element_atomic_number = 2.0,
    .ionization_with_element_ionization_stage = 1.0,
    .atomic_number = 18.0,
    .ionization_stage = 1.0,
    .temperatures_range = {1.0e4, 3.0e5},
    .a = 0.11,
    .b = 0.0,
    .c = 0.0,
    .delta_E = 3.04,
  },
};


}