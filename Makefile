project = astrea
version = 0.5.4 # conanfile.py


.PHONY: build
build:
	conan config install ./remotes.json
	# conan create . --build=missing # build inside Conan cache (~/conan2/p)
	conan create .


.PHONY: publish
publish:
	conan upload --remote=astro ${project}/${version}