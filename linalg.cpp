// Linear algebra scripts
#include <vector>


int getSingleIndex(int row, int col, int numCols)
{
	return (row * numCols) + col;
}

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

std::vector<double> matrixVectorMultiply(std::vector<double> mat, std::vector<double> vec)
{
	// mat should be a vector with length divisible by vec.size()
	assert( mat.size() % vec.size() == 0 );
	
	std::vector<double> result(mat.size() / vec.size());

	for (int i=0; i < result.size(); ++i)
	{
		for (int j=0; j < vec.size(); ++j)
		{
			result[i] += vec[j] * mat[getSingleIndex(i, j, vec.size())];
		}
	}

	return result;
}
