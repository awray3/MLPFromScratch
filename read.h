#ifndef READ_H
#define READ_H

#include <vector>

namespace read {
	void print_vec(std::vector<float> a, int num_outputs=0);
	std::vector< std::vector<float> > readData(std::string filename);
}


#endif 
