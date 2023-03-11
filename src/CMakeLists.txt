cmake_minimum_required(VERSION 3.4...3.18)
project(nlte LANGUAGES CXX)

add_subdirectory(include/pybind11)

include_directories(include)
include_directories(include/eigen)

pybind11_add_module(nlte src/nlte_py.cxx)