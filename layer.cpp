#include "layer.h"

Layer::Layer(int numNodes, int inputSize)
	: m_numNodes{numNodes},
	m_inputSize{inputSize}
{
	assert(m_numNodes > 0);
	assert(m_inputSize > 0);

	// make the vector as long as needed.
	weights.reserve(m_numNodes * m_inputSize);
}

void Layer::print_weights()
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

