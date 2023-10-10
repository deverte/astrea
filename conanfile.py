import os

from conan import ConanFile
from conan.tools.files import copy


class Astrea(ConanFile):
    name = "astrea"
    version = "0.5.0" # Makefile
    exports_sources = "include/*"
    no_copy_source = True

    def requirements(self):
        self.requires("eigen/3.4.0")

    def package(self):
        copy(self, "*.h", self.source_folder, self.package_folder)
        copy(self, "*.yaml", self.source_folder, self.package_folder)

    def package_info(self):
         self.cpp_info.bindirs = []
         self.cpp_info.libdirs = []