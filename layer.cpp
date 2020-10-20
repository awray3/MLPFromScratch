#include "layer.h"
#include "linalg.h"

Layer::Layer(int numNodes, int inputSize)
	: m_numNodes{numNodes},
	m_inputSize{inputSize}
{
	assert(m_numNodes > 0);
	assert(m_inputSize > 0);

	 //make the vector as long as needed.
	weights.reserve(m_numNodes * m_inputSize);
	
	// initialize to zeros
	fill(weights.begin(), weights.end(), 0);
}

void Layer::printWeights()
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

double Layer::forward(std::vector<double>& inputVector)
{ 
	return 0;
}












