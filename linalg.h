#ifndef LINALG_H
#define LINALG_H

#include <vector>


int getSingleIndex(int row, int col, int numCols);

double dotProduct(std::vector<double>& x, std::vector<double> y);

std::vector<double> matrixVectorMultiply(std::vector<double> mat, std::vector<double> vec);

#endif
