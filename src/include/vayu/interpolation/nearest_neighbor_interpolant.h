/**
 * \file vayu/framework/math/interpolation/nearest_neighbor_interpolant.h
 * Nearest-neighbor interpolant class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>

#include "./interpolant.h"


/**
 * Nearest neighbor interpolant class.
 * 
 * If \f$F(x)\f$ is interpolant, \f$\{x_i, y_i\}\f$ - data points,
 * \f$\{x, y\}\f$ - new data point, then:
 * 
 * \f$F(x) = y = y_i\f$ if \f$|x - x_i| < |x - x_{i+1}|\f$,
 * \f$F(x) = y = y_{i+1}\f$ otherwise.
 */
class NearestNeighborInterpolant : public Interpolant {
 public:
  using Interpolant::Interpolant;

  double operator()(const double& x) const override;

  using Interpolant::data_points;

 protected:
  using Interpolant::data_points_;
};


inline double NearestNeighborInterpolant::operator()(const double& x) const {
  return std::min_element(
    data_points_.begin(),
    data_points_.end(),
    [&](auto first, auto smallest) {
      return std::abs(first.first - x) < std::abs(smallest.first - x);
    }
  )->second;
}