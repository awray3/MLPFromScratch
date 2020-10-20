#include "read.h"
#include "layer.h"
#include "linalg.h"

#include <iostream>
#include <vector>
//#include <string>
//#include <sstream>
//#include <fstream>



int main()
{ 
	// holds the data
	//std::vector<double> x; 
	//std::vector<double> y;
	//std::vector<int> targets;

	//read::readData("data.txt", x, y, targets);
	
	//read::printVector(x, 5);

	//Layer layer_1(4, 6);

	//layer_1.dim();
	//layer_1.printWeights();

	// test dot product
	std::vector<double> mat{5.0, 4.0, 0.9, 0.0, 1.2, 0.0}; // 2 x 3
	std::vector<double> vec{1.0, 1.0, 1.0};

	read::printVector(matrixVectorMultiply(mat, vec)); 

	return 0;
}
