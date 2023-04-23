project = "lss"
version = 0.1.0


.PHONY: install_py_dev
install_py_dev:
	poetry run pip install -e .


.PHONY: build_cxx
build_cxx:
	# conan create . --build=missing # build inside Conan cache (~/conan2/p)

	conan install . --build=missing # local build
	conan build .


.PHONY: build_py
build_py:
	poetry run python setup.py sdist bdist_wheel


.PHONY: build
build:
	$(MAKE) build_cxx
	$(MAKE) build_py
