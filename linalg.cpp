// Linear algebra scripts
#include <vector>

double dotProduct(std::vector<double>& x, std::vector<double> y)
{
	assert( x.size() == y.size() );

	int i=0;
	double result=0;

	for (; i < x.size(); ++i)
	{
		result += x[i] * y[i];
	}

	return(result); 
}
