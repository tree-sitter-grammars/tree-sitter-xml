all install uninstall clean:
	$(MAKE) -C xml $@
	$(MAKE) -C dtd $@

test:
	$(TS) test

update: VERSION := $(shell awk -F '"' '/^  "version"/{print $$4}' package.json)
update:
	sed -i common/common.mak -e 's/^VERSION := .*/VERSION := $(VERSION)/'
	sed -i Cargo.toml -e 's/^version = .*/version = "$(VERSION)"/'
	sed -i pyproject.toml -e 's/^version = .*/version = "$(VERSION)"/'
	git add package.json package-lock.json Cargo.toml pyproject.toml common/common.mak

.PHONY: all install uninstall clean test update
