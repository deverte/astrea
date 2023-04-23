project = "lss"
version = 0.1.0


.PHONY: install_py_dev
install_py_dev:
	poetry run python lss_py/setup.py develop


.PHONY: build_h
build_h:
	conan create . --build=missing # build inside Conan cache (~/conan2/p)


.PHONY: build_py
build_py:
	cd lss_py;\
		conan install . --build=missing;\
		conan build .;\

	poetry run python lss_py/setup.py sdist bdist_wheel


.PHONY: build
build:
	$(MAKE) build_h
	$(MAKE) build_py
