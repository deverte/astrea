import os

from conan import ConanFile
from conan.tools.files import copy


class Astrea(ConanFile):
    name = "astrea"
    version = "0.2.6" # same as in Makefile
    exports_sources = "include/*"
    no_copy_source = True

    def requirements(self):
        self.requires("boost-math/1.82.0")
        self.requires("boost-units/1.82.0")
        self.requires("eigen/3.4.0")
        self.requires("fm/0.1.3")
        self.requires("ni/0.1.1")

    def package(self):
        copy(self, "*.h", self.source_folder, self.package_folder)
        copy(self, "*.yaml", self.source_folder, self.package_folder)

    def package_info(self):
         self.cpp_info.bindirs = []
         self.cpp_info.libdirs = []