#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

#include "read.h"

int main()
{

	std::vector< std::vector<float> > v = read::readData("data.txt");

	std::vector<float> x;
	std::vector<float> y;
	std::vector<int> targets;

	int i=0;

	// store values from v in x, y, and targets
	for (i=0; i<v.size(); ++i) {
		x.push_back(v[i][0]);
		y.push_back(v[i][1]);
		targets.push_back(v[i][2]);
	}

	read::print_vec(y, 5);





	return 0;
}
