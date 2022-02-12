fuzix.bin::
	+$(MAKE) -C platform-rpipico image
	cp platform-rpipico/build/fuzix.uf2 $@

