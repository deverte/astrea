/**
 * \file fm/sum.h
 * Mathematical summation of a sequence Sigma-notation.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <functional>


namespace fm {


/**
 * Mathematical summation of a sequence Sigma-notation.
 * 
 * \param lower_bound Lower bound index (including).
 * \param upper_bound Upper bound index (including).
 * \param f Indexed terms of the sum.
 * \return Summation evaluation result.
 */
inline double
sum(int lower_bound, int upper_bound, std::function<double(int)> f) {
  double res = 0.0;

  for (int i = lower_bound; i <= upper_bound; i++) {
    res += f(i);
  }

  return res;
}


}