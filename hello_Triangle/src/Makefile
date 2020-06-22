CUR_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

include $(CUR_DIR)/../Makefile.common

main: main.cpp Makefile
	$(CXX) main.cpp glad.c -o $@ $(INCFLAGS) $(LDFLAGS)
