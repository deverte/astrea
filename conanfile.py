from conans import ConanFile
from conans import Meson


class Vayu(ConanFile):
    name = "vayu"
    version = "0.2"
    settings = "os", "compiler", "build_type", "arch"
    generators = "pkg_config"
    exports_sources = "src/*"

    def requirements(self):
        self.requires("eigen/3.4.0")

    def package(self):
        self.copy("*.h", src="src/include", dst="include")
