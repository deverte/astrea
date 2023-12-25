project = astrea
version = 0.7.0


.PHONY: update-version
update-version:
	perl -i -pe 's/version\s=\s\".*\"/version = \"${version}\"/g' conanfile.py


.PHONY: install
install:
	$(MAKE) update-version
	conan config install ./remotes.json
	# conan create . --build=missing # build inside Conan cache (~/conan2/p)
	conan create .


.PHONY: uninstall
uninstall:
	conan remove ${project}


.PHONY: publish
publish:
	conan upload --remote=astro ${project}/${version}