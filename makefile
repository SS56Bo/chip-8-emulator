CXX = g++
CXXFLAGS = -Wall -Wextra -O2 `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs`

all: test

test: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o test $(LDFLAGS)

clean:
	rm -f test
