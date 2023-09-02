CC := gcc-13
CFLAGS := -std=c90 -ansi -Wall -Wextra -pedantic

SRCS := $(wildcard src/*.c)

build:
	mkdir build

compile: build/konane

build/konane: ${SRCS} build
	$(CC) $(CFLAGS) -o $@  $(SRCS)

.PHONY: clean
clean:
	rm -rf build
