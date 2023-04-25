export project = lss
export version = 0.1.2


.PHONY: build
build:
	conan create . --build=missing # build inside Conan cache (~/conan2/p)


.PHONY: publish
publish:
	conan upload --remote=astro ${project}/${version}