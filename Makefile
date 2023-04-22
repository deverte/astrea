project = "lss"
version = 0.1.0


.PHONY: build
build:
	mkdir -p build
	cd build;\
		cmake ../src;\
		make;\
		cp lss* ../lss;
	poetry build
