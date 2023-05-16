project = astrea
version = 0.2.6 # same as in conanfile.py


.PHONY: build
build:
	conan config install ./remotes.json
	conan create . --build=missing # build inside Conan cache (~/conan2/p)


.PHONY: publish
publish:
	conan upload --remote=astro ${project}/${version}