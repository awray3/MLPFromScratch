#include "read.h"

#include <iostream>
#include <vector>
//#include <string>
//#include <sstream>
//#include <fstream>


class Layer
{
	private: 
		int m_numNodes; // number of nodes in each hidden layer
		int m_inputSize; // dimension of the inputs to the layer

		// weights will be a dynamically allocated array of weights,
		// which will be a matrix of size (m_numNodes, m_inputSize)
		std::vector<double> weights;

	public:
		// constructor
		Layer(int numNodes, int inputSize)
			: m_numNodes{numNodes},
			m_inputSize{inputSize}
		{
			assert(m_numNodes > 0);
			assert(m_inputSize > 0);

			// make the vector as long as needed.
			weights.reserve(m_numNodes * m_inputSize);
		}

		void dim()
		{
			std::cout << "Number of nodes: " << m_numNodes << '\n'; 
			std::cout << "Input size: " << m_inputSize << '\n'; 
		}

		void print_weights()
		{
			int row=0;
			int col=0;
			std::cout << "Weights:" << '\n';
			for (row=0; row < m_numNodes; ++row)
			{
				for (col=0; col < m_inputSize; ++col)
				{
					std::cout << weights[getSingleIndex(row, col, m_inputSize)] << " ";
				}
				std::cout << '\n';
			}
		}

		int getSingleIndex(int row, int col, int numCols)
		{
			return (row * numCols) + col;
		}

};

int main()
{

	//std::vector< std::vector<float> > v = read::readData("data.txt");

	//std::vector<float> x;
	//std::vector<float> y;
	//std::vector<int> targets;

	//int i=0;

	//// store values from v in x, y, and targets
	//for (i=0; i < v.size(); ++i) {
		//x.push_back(v[i][0]);
		//y.push_back(v[i][1]);
		//targets.push_back(v[i][2]);
	//}
	
	Layer layer_1(4, 10);

	layer_1.dim();
	layer_1.print_weights();
	
	

	return 0;
}
