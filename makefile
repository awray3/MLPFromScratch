build: main.cpp read.cpp 
	g++ -o main main.cpp read.cpp 
	./main
clean:
	rm main
