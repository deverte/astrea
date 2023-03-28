#pragma once


#include <string>
#include <vector>


namespace nlte {


/**
 * Charge transfer recombination.
 * Arnaud, M. ; Rothenflug, R. Astronomy and Astrophysics Supplement, Vol.60, NO. 3/JUN, P. 425, 1985 (Sect. 4, Tables IIIA, IIIB). 
 */
class OxygenCtr {
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
   * one
   */
  static const double& d();

 private:
  static const double a_ = 1.0;

  static const double b_ = 0.0;

  static const double c_ = -0.66;

  static const double d_ = -9.3;
};


inline const double& OxygenCtr::a() {
  return a_;
}


inline const double& OxygenCtr::b() {
  return b_;
}


inline const double& OxygenCtr::c() {
  return c_;
}


inline const double& OxygenCtr::d() {
  return d_;
}


}