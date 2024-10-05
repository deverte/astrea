project := "astrea"
ver := "0.7.7"

build-nix:
  nix build

update-version:
  #!/usr/bin/env python3
  import pathlib
  import re

  cmake = pathlib.Path('CMakeLists.txt')
  pattern = 'VERSION .* # managed'
  repl = 'VERSION {{ver}} # managed'
  cmake.write_text(re.sub(pattern, repl, cmake.read_text()))

  conanfile = pathlib.Path('conanfile.py')
  pattern = 'version = ".*" # managed'
  repl = 'version = "{{ver}}" # managed'
  conanfile.write_text(re.sub(pattern, repl, conanfile.read_text()))

  flake = pathlib.Path('flake.nix')
  pattern = 'version = ".*"; # managed'
  repl = 'version = "{{ver}}"; # managed'
  flake.write_text(re.sub(pattern, repl, flake.read_text()))

  readme = pathlib.Path('README.md')
  pattern = '\/archive\/.*\.tar\.gz'
  repl = '/archive/v{{ver}}.tar.gz'
  readme.write_text(re.sub(pattern, repl, readme.read_text()))
  pattern = '\-\-requires\=astrea\/.*'
  repl = '--requires=astrea/{{ver}}'
  readme.write_text(re.sub(pattern, repl, readme.read_text()))

install-conan:
  just update-version
  conan config install ./remotes.json
  conan create .

uninstall-conan:
  conan remove {{project}}

publish-conan:
  conan upload --remote=astro {{project}}/{{ver}}