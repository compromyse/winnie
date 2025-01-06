src = $(wildcard src/*.cc)
obj = $(src:.cc=.o)
dep = $(obj:.o=.d)
lib_so = winnie_clock.so

dbg = -g
opt = -O0
inc = -Isrc -I../libwinnie/src

include ../backend.mk

CXX = g++
CXXFLAGS = -pedantic -Wall -Wextra -O2 $(dbg) $(opt) $(inc) $(def) `pkg-config freetype2 --cflags`
LDFLAGS = -L../libwinnie/ $(libs) `pkg-config freetype2 --libs` -lrt -lwinnie -ldl

$(lib_so): $(obj)
	$(CXX) -o $@ -shared $(obj) $(LDFLAGS) -Wl,-rpath=../libwinnie

-include $(dep)

%.d: %.cc
	@$(CPP) $(CXXFLAGS) $< -MM -MT $(@:.d=.o) >$@

.PHONY: clean
clean:
	rm -f $(obj) $(lib_so) $(dep)

