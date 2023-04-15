#pragma once


namespace lss {


class Spectrum {
 public:
  virtual double operator()(double wavelength) = 0;

  virtual double max_wavelength() = 0;

  virtual double min_wavelength() = 0;
};


}