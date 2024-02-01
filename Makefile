PROJECT = astrea
VER = 0.7.2


.PHONY: update-version
update-version:
	python3 -c "import pathlib; import re; f = pathlib.Path('conanfile.py');\
f.write_text(re.sub('version = \".*\"', 'version = \"${VER}\"', f.read_text()))"


.PHONY: install
install:
	$(MAKE) update-version
	conan config install ./remotes.json
	conan create .


.PHONY: uninstall
uninstall:
	conan remove ${PROJECT}


.PHONY: publish
publish:
	conan upload --remote=astro ${PROJECT}/${VER}