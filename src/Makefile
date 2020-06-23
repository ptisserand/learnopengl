CUR_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

include $(CUR_DIR)/../Makefile.common

main: main.cpp shader.cpp Makefile
	$(CXX) main.cpp shader.cpp glad.c  -o $@ $(INCFLAGS) $(LDFLAGS)
