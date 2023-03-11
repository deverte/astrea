/**
 * \file vayu/framework/math/interpolation/common_logarithmic_interpolant.h
 * Common logarithmic (logarithm with base 10) interpolant class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once

#include <cmath>
#include <utility>
#include <vector>

#include "./interpolant.h"
#include "./linear_interpolant.h"


/**
 * Common logarithmic (logarithm with base 10) interpolant class.
 * 
 * Acts like vayu::math::LinearInterpolant, but for
 * \f$\{x_i, \log_{10}(y_i)\}\f$ data points and
 * \f$F(x) = \log_{10}(y)^{10} = y\f$ output.
 */
class CommonLogarithmicInterpolant : public Interpolant {
 public:
  using Interpolant::Interpolant;

  double operator()(const double& x) const override;

  using Interpolant::data_points;

 protected:
  using Interpolant::data_points_;
};


inline double CommonLogarithmicInterpolant::operator()(const double& x) const {
  std::vector<std::pair<double, double>> log10_data_points;
  for (auto [x, y] : data_points_) {
    log10_data_points.push_back({x, std::log10(y)});
  }
  LinearInterpolant linear_interpolant;
  linear_interpolant.data_points(log10_data_points);
  double log10_y = linear_interpolant(x);
  return std::pow(10, log10_y);
}