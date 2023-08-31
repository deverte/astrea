/**
 * \file astrea/data/elements/elements_adapter.h
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

#include "./element.h"


namespace astrea {


/**
 * Element base class.
 */
class ElementsAdapter {
 public:
  ElementsAdapter();

  ElementsAdapter(std::vector<std::shared_ptr<Element>> elements);

  /**
   * Number of elements (ionization degrees).
   * 
   * \return Number of elements.
   */
  virtual const int Z() const;

  /**
   * Number of element levels of the exact ionization degree.
   * 
   * \return Number of element levels of the exact ionization degree.
   */
  virtual const int k(int z) const;

  /**
   * Summary number of element levels of the exact and prevo=ious ionization
   * degrees.
   * 
   * \return Summary number of element levels of the exact and prevo=ious
   * ionization degrees.
   */
  virtual const int K(int z) const;

  /**
   * Ion mass in Da.
   * 
   * \return Ion mass in Da.
   */
  virtual const double m_i(int z) const;

  /**
   * Energy in eV.
   * 
   * \return Energy in eV.
   */
  virtual const double E(int z, int i) const;

  /**
   * Ionization energy in eV.
   * 
   * \return Energy in eV.
   */
  virtual const double I(int z, int i) const;

  /**
   * Statistical weight.
   * 
   * \return Statistical weight.
   */
  virtual const double g(int z, int i) const;

  /**
   * Term.
   * 
   * \return Term.
   */
  virtual const std::string term(int z, int i) const;

  /**
   * Absolute energy difference in eV.
   * 
   * \return Absolute energy difference in eV.
   */
  virtual const double E_ij(int z, int i, int j) const;

  /**
   * Line center frequency in s-1.
   * 
   * \return Line center frequency in s-1.
   */
  virtual const double nu_ij(int z, int i, int j) const;

  /**
   * Line center wavelength in nm.
   * 
   * \return Line center wavelength in nm.
   */
  virtual const double lambda_ij(int z, int i, int j) const;

 private:
  int Z_;
  Eigen::VectorXi k_;
  Eigen::VectorXi K_;
  Eigen::VectorXd m_i_;
  Eigen::VectorXd E_;
  Eigen::VectorXd I_;
  Eigen::VectorXd g_;
  std::vector<std::string> terms_;
};


inline ElementsAdapter::ElementsAdapter() {}


inline ElementsAdapter::ElementsAdapter(
  std::vector<std::shared_ptr<Element>> elements
) {
  Z_ = elements.size();

  k_.resize(Z_);
  for (int z = 0; z < Z_; z++) {
    k_(z) = elements[z]->levels().size();
  }

  K_.resize(Z_ + 1);
  for (int z = 0; z < Z_ + 1; z++) {
    K_(z) = 0;
    for (int i = 0; i < z; i++) {
      K_(z) += k_(i);
    }
  }

  m_i_.resize(Z_);
  for (int z = 0; z < Z_; z++) {
    m_i_(z) = elements[z]->mass();
  }

  E_.resize(K_(Z_));
  for (int z = 0; z < Z_; z++) {
    for (int i = 0; i < k_(z); i++) {
      E_(i + K_(z)) = elements[z]->levels()[i].energy;
    }
  }

  I_.resize(K_(Z_));
  for (int z = 0; z < Z_; z++) {
    for (int i = 0; i < k_(z); i++) {
      I_(i + K_(z)) = elements[z]->levels()[i].ionization_energy;
    }
  }

  g_.resize(K_(Z_));
  for (int z = 0; z < Z_; z++) {
    for (int i = 0; i < k_(z); i++) {
      g_(i + K_(z)) = elements[z]->levels()[i].statistical_weight;
    }
  }

  terms_.resize(K_(Z_));
  for (int z = 0; z < Z_; z++) {
    for (int i = 0; i < k_(z); i++) {
      terms_[i + K_(z)] = elements[z]->levels()[i].term;
    }
  }
}


inline const int ElementsAdapter::Z() const {
  return Z_;
}


inline const int ElementsAdapter::k(int z) const {
  return k_(z);
}


inline const int ElementsAdapter::K(int z) const {
  return K_(z);
}


inline const double ElementsAdapter::m_i(int z) const {
  return m_i_(z);
}


inline const double ElementsAdapter::E(int z, int i) const {
  return E_(i + K(z));
}


inline const double ElementsAdapter::I(int z, int i) const {
  return I_(i + K(z));
}


inline const double ElementsAdapter::g(int z, int i) const {
  return g_(i + K(z));
}


inline const std::string ElementsAdapter::term(int z, int i) const {
  return terms_[i + K(z)];
}


inline const double ElementsAdapter::E_ij(int z, int i, int j) const {
  return std::abs(E(z, j) - E(z, i));
}


inline const double ElementsAdapter::nu_ij(int z, int i, int j) const {
  return E_ij(z, i, j) / 4.135667669e-15;
}


inline const double ElementsAdapter::lambda_ij(int z, int i, int j) const {
  return 2.99792458e17 / nu_ij(z, i, j);
}


}