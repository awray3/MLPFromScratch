#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include <iostream>

class Layer
{
	private: 
		int m_numNodes; // number of nodes in each hidden layer
		int m_inputSize; // dimension of the inputs to the layer

		// weights will which will be a matrix
		// of size (m_numNodes, m_inputSize)
		std::vector<double> weights;

	public:
		// constructor
		Layer(int numNodes, int inputSize);

		double forward(std::vector<double>& inputVector);

		void printWeights();

		void dim()
		{
			std::cout << "Number of nodes: " << m_numNodes << '\n'; 
			std::cout << "Input size: " << m_inputSize << '\n'; 
		} 
}; 

#endif
