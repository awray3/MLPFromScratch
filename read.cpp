#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

namespace read
{ 
	void print_vec(std::vector<float> a, int num_outputs = 0)
	{
		int i=0;
		int stop_counter = num_outputs ? std::min(num_outputs, (int)a.size()) : a.size();

		for (i=0; i < stop_counter; ++i)
		{
			std::cout << a[i] << '\n';
		}
	}

	std::vector< std::vector<float> > readData(std::string filename) { 
		// read in the data.  
		
		std::ifstream in(filename); // create the input file stream object
		std::string line; // a string variable that will hold a line

		// a vector of a vector of floats. This will basically act like a
		// matrix.
		std::vector< std::vector<float> > v;  
		int i = 0; // keeps track of the rows of v

		// while loop over the lines of the input file
		while (std::getline(in, line))
		{
			float value; // for the float being read in

			std::stringstream ss(line); // creates a stream out of the line

			v.push_back(std::vector<float>()); // adds space to v

			// loop reading values from the current line
			while (ss >> value)
			{
				v[i].push_back(value); // add the value to this vector.
			}
			++i;
		}

		return v;
	}
}
