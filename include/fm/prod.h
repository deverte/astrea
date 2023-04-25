/**
 * \file fm/prod.h
 * Mathematical product of a sequence Pi-notation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <functional>


namespace fm {


/**
 * Mathematical product of a sequence Pi-notation.
 * 
 * \param lower_bound Lower bound index (including).
 * \param upper_bound Upper bound index (including).
 * \param f Indexed terms of the product.
 * \return Product evaluation result.
 */
inline double
prod(int lower_bound, int upper_bound, std::function<double(int)> f) {
  double res = 1.0;

  for (int i = lower_bound; i <= upper_bound; i++) {
    res *= f(i);
  }

  return res;
}


}