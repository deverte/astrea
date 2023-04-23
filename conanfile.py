from conan import ConanFile
from conan.tools.files import copy


class Lss(ConanFile):
    name = "lss"
    version = "0.1.0"
    exports_sources = "include/*"
    no_copy_source = True

    def requirements(self):
        self.requires("boost/1.81.0")
        self.requires("eigen/3.4.0")

    def package(self):
        copy(self, "*.h", self.source_folder, self.package_folder)

    def package_info(self):
         self.cpp_info.bindirs = []
         self.cpp_info.libdirs = []