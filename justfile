project := "astrea"
version := "0.8.0"


install:
  mkdir build
  cd build; \
    cmake ..; \
    sudo make install


update-version:
  #!/usr/bin/env python3
  import pathlib
  import re

  cmake = pathlib.Path('CMakeLists.txt')
  pattern = 'VERSION .* # managed'
  repl = 'VERSION {{version}} # managed'
  cmake.write_text(re.sub(pattern, repl, cmake.read_text()))

  flake = pathlib.Path('flake.nix')
  pattern = 'version = ".*"; # managed'
  repl = 'version = "{{version}}"; # managed'
  flake.write_text(re.sub(pattern, repl, flake.read_text()))

  readme = pathlib.Path('README.md')
  pattern = '\/archive\/refs\/tags\/.*\.tar\.gz'
  repl = '/archive/refs/tags/v{{version}}.tar.gz'
  readme.write_text(re.sub(pattern, repl, readme.read_text()))
