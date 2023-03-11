/**
 * \file vayu/framework/math/interpolation/linear_interpolant.h
 * Linear interpolant class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <algorithm>
#include <cmath>
#include <iterator>

#include "./interpolant.h"


/**
 * Linear interpolant class.
 * 
 * If \f$F(x)\f$ is interpolant, \f$\{x_i, y_i\}\f$ - data points,
 * \f$\{x, y\}\f$ - new data point, then:
 * 
 * \f$y = F(x) = y_l + \frac{(y_l - y_r)}{(x_l - x_r)} (x - x_l)\f$,
 * \f$y_l < y < y_r\f$, \f$y_l \in \{y_i\}\f$, \f$y_r \in \{y_i\}\f$,
 * \f$x_l < x < x_r\f$, \f$x_l \in \{x_i\}\f$, \f$x_r \in \{x_i\}\f$.
 */
class LinearInterpolant : public Interpolant {
 public:
  using Interpolant::Interpolant;

  double operator()(const double& x) const override;

  using Interpolant::data_points;

 protected:
  using Interpolant::data_points_;
};


inline double LinearInterpolant::operator()(const double& x) const {
  auto nearest_index = std::distance(
    data_points_.begin(),
    std::min_element(
      data_points_.begin(),
      data_points_.end(),
      [=](auto& first, auto& smallest) {
        return std::abs(first.first - x) < std::abs(smallest.first - x);
      }
    )
  );

  auto left_index = (
    data_points_[nearest_index].first <= x ? nearest_index : nearest_index - 1
  );
  if (x <= data_points_[0].first) {
    left_index = 0;
  }
  else if (x >= data_points_.end()[-2].first) {
    left_index = data_points_.size() - 2;
  }
  auto right_index = left_index + 1;

  double slope = (
    1.0
    * (data_points_[left_index].second - data_points_[right_index].second)
    / (data_points_[left_index].first - data_points_[right_index].first)
  );

  return (
    0.0
    + data_points_[left_index].second
    + slope * (x - data_points_[left_index].first)
  );
}