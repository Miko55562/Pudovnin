CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = $(wildcard *.cpp)

all: clean format build

build:
	$(CXX) $(CXXFLAGS) $(SRC) -o neftyanka

format:
	clang-format -i -style=Google $(wildcard ./**/*.h ./**/*.tpp ./**/*.cpp)

clean:
	rm -f neftyanka