/**
 * \file astrea/transitions/rd_nist_o1_rates.h
 * Radiative de-excitation (spontaneous emission) transitions rates using NIST
 * data.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <memory>
#include <vector>

#include <Eigen/Dense>

#include "../data/elements/element.h"
#include "../data/elements/elements_adapter.h"
#include "../data/transitions/rd_nist_o1.h"
#include "../data/transitions/transitions_tensor.h"


namespace astrea {


/**
 * Radiative de-excitation (spontaneous emission) transitions rates using NIST
 * data.
 * 
 * \param elements Elements.
 * \return Transitions rates in s-1.
 */
inline Eigen::MatrixXd
rd_nist_o1_rates(const std::vector<std::shared_ptr<Element>> elements) {
  auto ea = ElementsAdapter(elements);

  const auto rd_nist_o1 = RDNistO1();

  auto A = TransitionsTensor(ea);
  for (int z = 0; z < ea.Z(); z++) {
    for (int i = 0; i < ea.k(z); i++) {
      for (int j = i + 1; j < ea.k(z); j++) {
        for (const auto transition : rd_nist_o1.transitions()) {
          if (
            (transition.initial == elements[z]->levels()[j].term) &&
            (transition.final == elements[z]->levels()[i].term)
          ) {
            A(z, j, i) = transition.rate;
          }
        }
      }
    }
  }

  return A.matrix();
}


}