#pragma once


#include <string>
#include <vector>


namespace nlte {


/**
 * Charge transfer ionization.
 * Arnaud, M. ; Rothenflug, R. Astronomy and Astrophysics Supplement, Vol.60, NO. 3/JUN, P. 425, 1985 (Sect. 4, Tables IIIA, IIIB). 
 */
class OxygenCti {
 public:
  /**
   * cm^3 / s
   */
  static const double& a();

  /**
   * one
   */
  static const double& b();

  /**
   * one
   */
  static const double& c();

  /**
   * eV
   */
  static const double& delta_E();

 private:
  static const double a_ = 0.91;

  static const double b_ = 0.0;

  static const double c_ = 10.0;

  static const double delta_E_ = 19.6e-3;
};


inline const double& OxygenCti::a() {
  return a_;
}


inline const double& OxygenCti::b() {
  return b_;
}


inline const double& OxygenCti::c() {
  return c_;
}


inline const double& OxygenCti::delta_E() {
  return delta_E_;
}


}