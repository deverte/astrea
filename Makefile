project = "vayu"
version = 0.3.0


.PHONY: test
test:
	mkdir -p build_tests;
	cd build_tests; \
		conan source ../tests; \
		conan install ../tests $(project)-test/v$(version) --build=missing; \
		conan build ../tests;

# Creates header-only library and puts it to Conan packages (~/.conan/data).
.PHONY: build
build:
	conan remove vayu -f
	conan create . _/_ --build=missing;

.PHONY: pull-submodules
pull-submodules:
	git submodule update --init --recursive --remote

.PHONY: docs
docs:
	rm -r -f -- docs/html;
	rm -r -f -- docs/latex;
	rm -f -- docs/*.aux;
	rm -f -- docs/*.doc*;
	cd docs; \
		doxygen;
	@echo ${PWD}/docs/html/index.html

# Prepare

.PHONY: docker_build_dev_image
docker_build_dev_image:
	docker build -t vayu/core/build:$(version) --file ./.docker/_build/Dockerfile ./.docker/_build

# Project

.PHONY: docker_create
docker_create:
	docker run -d --name vayu_core_dev -v $(pwd):/vayu vayu/core/build:0.2 tail -f /dev/null

.PHONY: docker_start
docker_start:
	docker start vayu_core_dev

.PHONY: docker_bash
docker_bash:
	docker exec -it -w /vayu vayu_core_dev /bin/bash

.PHONY: docker_stop
docker_stop:
	docker stop vayu_core_dev

.PHONY: docker_remove
docker_remove:
	docker rm vayu_core_dev
