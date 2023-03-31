cmake_minimum_required(VERSION 3.4...3.18)
project(lss LANGUAGES CXX)

add_subdirectory(include/pybind11)

include_directories(include)
include_directories(include/eigen)
include_directories(include/boost/math/include)

pybind11_add_module(lss src/lss_py.cxx)