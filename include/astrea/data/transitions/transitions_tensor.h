/**
 * \file astrea/data/transitions/transitions_tensor.h
 * Element base class.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>
#include <string>

#include <Eigen/Dense>
#include <fm/fm.h>

#include "../elements/elements_adapter.h"


namespace astrea {


/**
 * Element base class.
 */
class TransitionsTensor {
 public:
  TransitionsTensor(ElementsAdapter ea);

  TransitionsTensor(ElementsAdapter ea, Eigen::MatrixXd matrix);

  /**
   * Number of elements (ionization degrees).
   * 
   * \return Number of elements.
   */
  virtual const double& operator()(int z, int i, int j) const;

  virtual double& operator()(int z, int i, int j);

  virtual Eigen::MatrixXd matrix() const;

 private:
  ElementsAdapter ea_;
  Eigen::MatrixXd matrix_;
};


inline TransitionsTensor::TransitionsTensor(ElementsAdapter ea) {
  ea_ = ea;
  matrix_.resize(ea_.K(ea_.Z()), ea_.K(ea_.Z()));
  matrix_ = Eigen::MatrixXd::Zero(ea_.K(ea_.Z()), ea_.K(ea_.Z()));
}


inline TransitionsTensor::TransitionsTensor(
  ElementsAdapter ea,
  Eigen::MatrixXd matrix
) {
  ea_ = ea;
  matrix_.resize(ea_.K(ea_.Z()), ea_.K(ea_.Z()));
  matrix_ = matrix;
}


inline const double&
TransitionsTensor::operator()(int z, int i, int j) const {
  return matrix_(i + ea_.K(z), j + ea_.K(z));
}


inline double& TransitionsTensor::operator()(int z, int i, int j) {
  return matrix_(i + ea_.K(z), j + ea_.K(z));
}


inline Eigen::MatrixXd TransitionsTensor::matrix() const {
  return matrix_;
}


}