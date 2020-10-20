#ifndef READ_H
#define READ_H

#include <vector>

namespace read {
	void printVector(std::vector<double> a, int num_outputs=0);
	void readData(std::string filename,
			std::vector<double>& x,
			std::vector<double>& y,
			std::vector<int>& targets);
}


#endif 
