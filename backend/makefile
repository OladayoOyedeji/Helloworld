.PHONY: p program e exe b build a asan

# ifeq ($(OS), Windows_NT)
# 	PLATFORM := windows
# else
# 	UNAME_S := $(shell uname -s)
# 	ifeq ($(UNAME_S), Darwin)
# 		PLATFOR

EXECUTABLE := ./build/logisimp
REMOVE_BUILD := rm -rf build

p program e exe: build
	cmake --build build

b build:
	cmake -S . -B build

a asan:
	cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
	cmake --build build --config Debug

r run: p
	${EXECUTABLE}

c clean:
	${REMOVE_BUILD}
