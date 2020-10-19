#include "read.h"
#include "layer.h"

#include <iostream>
#include <vector>
//#include <string>
//#include <sstream>
//#include <fstream>



int main()
{ 
	// holds the data
	std::vector<double> x; 
	std::vector<double> y;
	std::vector<int> targets;

	read::readData("data.txt", x, y, targets);
	
	read::print_vec(x, 5);

	//Layer layer_1(4, 10);

	//layer_1.dim();
	//layer_1.print_weights();
	
	

	return 0;
}
