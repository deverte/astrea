project = "lss"
version = 0.1.0


.PHONY: build_cxx
build_cxx:
	# conan create . --build=missing # build inside Conan cache (~/conan2/p)

	conan install . --build=missing # local build
	conan build .

	cd build/Release;\
		cp lss* ../../lss;


.PHONY: build_py
build_py:
	poetry build


.PHONY: build
build:
	$(MAKE) build_cxx
	# $(MAKE) build_py
