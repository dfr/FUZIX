# Set one of these depending.
export PICO_SDK_FETCH_FROM_GIT = yes
#export PICO_SDK_PATH = /home/dg/src/pico/pico-sdk

build/fuzix.elf build/fuzix.uf2: ../version.c build/Makefile
	$(MAKE) -C build

../version.c:
	$(MAKE) -C .. TARGET=rpipico version.c

build/Makefile: CMakeLists.txt $(wildcard ../*.[chS]) $(wildcard ../*/*.[chS])
	mkdir -p build
	(cd build && cmake ..)

image:: diskimage

IMAGES = $(FUZIX_ROOT)/Images/$(TARGET)

diskimage:: build/fuzix.uf2 world uf2conv
	cp build/fuzix.uf2 $(IMAGES)
	(cd $(FUZIX_ROOT)/Standalone/filesystem-src; ./build-filesystem-ng -f $(IMAGES)/filesystem.img -g 64 2547 -p platform-rpipico)
	$(FUZIX_ROOT)/Standalone/mkftl -s 1952 -e 0x1000 -g 10 -o filesystem.ftl $(IMAGES)/filesystem.img
	arm-none-eabi-objcopy -I binary -O elf32-littlearm --change-section-vma .data=0x10018000 filesystem.ftl filesystem.elf
	./uf2conv filesystem.ftl $(IMAGES)/filesystem.uf2 0x10018000

clean:
	rm -rf build
	rm -f filesystem.ftl filesystem.elf uf2conv
	$(MAKE) -C ../../Library/libs -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/util -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/V7/cmd -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/V7/cmd/sh -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/games -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/levee -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/cave -f Makefile.armm0 clean
	$(MAKE) -C ../../Applications/cursesgames -f Makefile.armm0 clean
	$(MAKE) -C ../../Standalone clean

world: build/fuzix.elf
	$(MAKE) -C ../../Library/libs -f Makefile.armm0
	$(MAKE) -C ../../Applications/util -f Makefile.armm0
	$(MAKE) -C ../../Applications/V7/cmd -f Makefile.armm0
	$(MAKE) -C ../../Applications/V7/cmd/sh -f Makefile.armm0
	$(MAKE) -C ../../Applications/games -f Makefile.armm0
	$(MAKE) -C ../../Applications/levee -f Makefile.armm0
	$(MAKE) -C ../../Applications/cave -f Makefile.armm0
	$(MAKE) -C ../../Applications/cursesgames -f Makefile.armm0
	$(MAKE) -C ../../Standalone

uf2conv: tools/uf2conv.c
	cc -O -g -o $@ $<

