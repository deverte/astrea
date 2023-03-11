/**
 * \file vayu/framework/math/interpolation/interpolant.h
 * Interpolant abstract class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <cstdlib>
#include <stdexcept>
#include <utility>
#include <vector>


/**
 * Interpolant abstract class.
 */
class Interpolant {
 public:
  virtual ~Interpolant() = default;

  /**
   * Gets \f$y\f$ value corresponding to \f$x\f$ value of new \f${x, y}\f$ data
   * point.
   * 
   * \param x \f$x\f$ value of new data point.
   * \return \f$y\f$ value of new data point.
   */
  virtual double operator()(const double& x) const = 0;

  /**
   * Data points.
   * 
   * \exception length_error Interpolation data points must have same size.
   */
  void data_points(const std::vector<std::pair<double, double>>& data_points)
  noexcept;

  void data_points(
    const std::vector<double>& xs,
    const std::vector<double>& ys
  );

 protected:
  std::vector<std::pair<double, double>> data_points_;
};


inline void Interpolant::data_points(
  const std::vector<std::pair<double, double>>& data_points
) noexcept {
  data_points_ = data_points;
}


inline void Interpolant::data_points(
  const std::vector<double>& xs,
  const std::vector<double>& ys
) {
  if (xs.size() != ys.size()) {
    throw std::length_error(
      "vayu::math::Interpolant::data_points error: "
      "Interpolation data points must have same size."
    );
  }

  for (std::size_t i = 0; i < xs.size(); i++) {
    data_points_.push_back({xs[i], ys[i]});
  }
}