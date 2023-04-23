from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake, cmake_layout


class LssPy(ConanFile):
    name = "lss_py"
    version = "0.1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps"

    exports_sources = "CMakeLists.txt", "src/*", "include/*"

    def requirements(self):
        self.requires(f"lss/{self.version}")
        self.requires("pybind11/2.10.1")
        self.requires("eigen/3.4.0")

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
