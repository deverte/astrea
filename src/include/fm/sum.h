#pragma once


#include <functional>


namespace fm {


inline double
sum(int lower_bound, int upper_bound, std::function<double(int)> f) {
  double res = 0.0;

  for (int i = lower_bound; i < upper_bound; i++) {
    res += f(i);
  }

  return res;
}


}