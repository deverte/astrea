/**
 * \file fm/cases.h
 * Mathematical definition by cases function.
 * 
 * \copyright GPL
 * \author Artem Shepelin (4.shepelin@gmail.com)
 */
#pragma once


#include <functional>
#include <utility>
#include <vector>


namespace fm {


/**
 * Mathematical definition by cases (piecewise-defined function, hybrid
 * function).
 * 
 * \param pairs Sub-function - condition (subdomain) pairs.
 * \return Function evaluation result.
 */
inline double
cases(std::vector<std::pair<std::function<double()>, bool>> pairs) {
  for (auto& pair : pairs) {
    if (pair.second) {
      return pair.first();
    }
  }

  return 0.0;
}


}