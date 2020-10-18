CXX=g++
CXXFLAGS=-std=c++17 -pedantic

SRC=$(wildcard *.cpp)

all: $(SRC)
	$(CXX) -o main $(SRC)
	./main
clean:
	rm main
