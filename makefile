CXX=g++
CXXFLAGS=-std=c++17 -pedantic

SRC=$(wildcard *.cpp)

all: $(SRC)
	$(CXX) -o main $(SRC) $(CXXFLAGS)
	./main
clean:
	rm main
