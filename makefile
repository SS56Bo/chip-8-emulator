CXX = g++
CXXFLAGS = -Wall -Wextra -O2 `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs`

all: test build

test: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o test $(LDFLAGS)

build: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o chip8 $(LDFLAGS)

clean:
	rm -f test chip8
