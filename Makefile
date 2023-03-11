project = "nlte"
version = 0.1.0


.PHONY: build
build:
	mkdir -p build
	cd build;\
		cmake ../src;\
		make;\
		cp nlte* ../tests;

.PHONY: run
run:
	cd tests;\
		python main.py;
