include def.mk

.PHONY: all clean veryclean doc

MAKE = make

all: dbg-libmat rls-libmat dbg-liblat rls-liblat dbg-ltool rls-ltool doc

dbg-libmat:
	$(MAKE) -C libmat debug

rls-libmat:
	$(MAKE) -C libmat release

dbg-liblat:
	$(MAKE) -C liblat debug

rls-liblat:
	$(MAKE) -C liblat release

dbg-ltool:
	$(MAKE) -C ltool debug

rls-ltool:
	$(MAKE) -C ltool release

stat-ltool:
	$(MAKE) -C ltool static

doc:
	$(DOXYGEN) doxyfile


clean:
	$(MAKE) -C libmat clean
	$(MAKE) -C liblat clean
	$(MAKE) -C ltool clean

veryclean:
	$(MAKE) -C libmat veryclean
	$(MAKE) -C liblat veryclean
	$(MAKE) -C ltool veryclean
	$(RM) doc/*
