/**
 * \file astrea/data/spectra/spectrum_adapter.h
 * Element base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cmath>
#include <memory>
#include <vector>
#include <string>

#include <Eigen/Dense>

#include "./spectrum.h"


namespace astrea {


/**
 * Element base class.
 */
class SpectrumAdapter {
 public:
  SpectrumAdapter(const std::shared_ptr<Spectrum> spectrum);

  /**
   * Spectral flux density in W m-2 nm-1.
   * 
   * \param lambda_ in nm.
   * 
   * \return Spectral flux density in W m-2 nm-1.
   */
  virtual const double lambda(double lambda_) const;

  /**
   * Spectral flux density in W m-2 s.
   * 
   * \param nu_ in s-1.
   * 
   * \return Spectral flux density in W m-2 s.
   */
  virtual const double nu(double nu_) const;

 private:
  std::shared_ptr<Spectrum> spectrum_;
};


inline
SpectrumAdapter::SpectrumAdapter(const std::shared_ptr<Spectrum> spectrum) {
  spectrum_ = spectrum;
}


inline const double SpectrumAdapter::lambda(double lambda_) const {
  return spectrum_->spectral_irradiance(lambda_);
}


inline const double SpectrumAdapter::nu(double nu_) const {
  const auto c = 2.99792458e17; // nm s-1
  const auto lambda_ = c / nu_; // nm
  return c / std::pow(nu_, 2.0) * spectrum_->spectral_irradiance(lambda_);
}


}