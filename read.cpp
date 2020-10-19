#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

namespace read
{ 
	void print_vec(std::vector<double> a, int num_outputs = 0)
	{
		int i=0;
		int stop_counter = num_outputs ? std::min(num_outputs, (int)a.size()) : a.size();

		for (i=0; i < stop_counter; ++i)
		{
			std::cout << a[i] << '\n';
		}
	}

	void readData(std::string filename,
			std::vector<double>& x,
			std::vector<double>& y,
			std::vector<int>& targets
			)
	{ 

		
		std::ifstream in(filename); // create the input file stream object
		std::string line; // a string variable that will hold a line

		// a vector of a vector of doubles. This will basically act like a
		// matrix.
		std::vector< std::vector<double> > v;  
		int i = 0; // keeps track of the rows of v

		// while loop over the lines of the input file
		while (std::getline(in, line))
		{
			double value; // for the double being read in

			std::stringstream ss(line); // creates a stream out of the line

			v.push_back(std::vector<double>()); // adds space to v

			// loop reading values from the current line
			while (ss >> value)
			{
				v[i].push_back(value); // add the value to this vector.
			}
			++i;
		}


		x.reserve(v.size());
		y.reserve(v.size());
		targets.reserve(v.size());



		// store values from v in x, y, and targets
		for (i=0; i < v.size(); ++i) {
			x.push_back(v[i][0]);
			y.push_back(v[i][1]);
			targets.push_back(v[i][2]);
		}
	}
}
