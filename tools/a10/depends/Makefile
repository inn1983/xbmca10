include depends.mk

all clean:
	if [ ! -e $(TMP) ]; then mkdir $(TMP); fi
	if [ ! -e $(TARBALLS) ]; then mkdir -p $(TARBALLS); fi
	(cd opengles; $(MAKE) $@)
	(cd cedarv; $(MAKE) $@)
	(cd taglib; $(MAKE) $@)
	@echo "\nmake $@ for dependencies done.\n"
