src = $(wildcard src/*.cc) $(wildcard src/sdl/*.cc)
obj = $(src:.cc=.o)
dep = $(obj:.o=.d)
bin = wserver

dbg = -g
opt = -O0
inc = -Isrc -I../libwinnie/src

include ../backend.mk

CXX = g++
CXXFLAGS = -pedantic -Wall $(dbg) $(opt) $(inc) $(def) `pkg-config freetype2 --cflags`
LDFLAGS = -L../libwinnie $(libs) `pkg-config freetype2 --libs` -lrt -lwinnie -ldl

$(bin): $(obj)
	$(CXX) -o $@ $(obj) $(LDFLAGS) -Wl,-rpath=../libwinnie

-include $(dep)

%.d: %.cc
	@$(CPP) $(CXXFLAGS) $< -MM -MT $(@:.d=.o) >$@

.PHONY: clean
clean:
	rm -f $(obj) $(bin) $(dep)

