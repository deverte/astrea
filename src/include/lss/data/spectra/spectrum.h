#pragma once


namespace lss {


class Spectrum {
 public:
  virtual double operator()(double wavelength) = 0;

  /**
   * nm
    */
  virtual double max_wavelength() = 0;

  /**
   * nm
    */
  virtual double min_wavelength() = 0;
};


}