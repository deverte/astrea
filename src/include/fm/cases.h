#pragma once


#include <functional>
#include <utility>
#include <vector>


namespace fm {


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