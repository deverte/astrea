import os

from conan import ConanFile
from conan.tools.files import copy


class Astrea(ConanFile):
    name = "astrea"
    version = "0.2.0" # same as in Makefile
    exports_sources = "include/*"
    no_copy_source = True

    def requirements(self):
        self.requires("boost/1.81.0", override=True)
        self.requires("eigen/3.4.0", override=True)
        self.requires("fm/0.1.2")
        self.requires("libinterpolate/2.6.2")

    def package(self):
        copy(self, "*.h", self.source_folder, self.package_folder)
        copy(self, "*.yaml", self.source_folder, self.package_folder)

    def package_info(self):
         self.cpp_info.bindirs = []
         self.cpp_info.libdirs = []