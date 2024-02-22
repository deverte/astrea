cmake_minimum_required(VERSION 3.10)
project(
    astrea
    VERSION 0.7.3 # managed by justfile
    LANGUAGES CXX
)

include(GNUInstallDirs)

add_library(astrea INTERFACE)
target_include_directories(
    astrea
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_compile_features(astrea INTERFACE cxx_std_17)

install(
    TARGETS astrea
    EXPORT astrea_Targets
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "astreaConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
    "${PROJECT_SOURCE_DIR}/cmake/astreaConfig.cmake.in"
    "${PROJECT_BINARY_DIR}/astreaConfig.cmake"
    INSTALL_DESTINATION
    ${CMAKE_INSTALL_DATAROOTDIR}/astrea/cmake
)

install(
    EXPORT astrea_Targets
    FILE astreaTargets.cmake
    NAMESPACE astrea::
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/astrea/cmake
)

install(
    FILES "${PROJECT_BINARY_DIR}/astreaConfig.cmake"
    "${PROJECT_BINARY_DIR}/astreaConfigVersion.cmake"
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/astrea/cmake
)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/astrea DESTINATION include)