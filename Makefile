TS ?= tree-sitter

all install uninstall clean:
	$(MAKE) -C xml $@
	$(MAKE) -C dtd $@

test:
	$(TS) test

.PHONY: all install uninstall clean test
