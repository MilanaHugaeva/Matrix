#include "/Users/yanmi/source/repos/Matrix/Matrix/Matrix/Matrix.h"
#include "Exercise.h"
#include "MainExercise.h"
#include "/Users/yanmi/source/repos/Matrix/Matrix/Matrix/Matrix.h"
#include <vector>

Exercise::Exercise(Matrix matrix) :
	matrix(matrix)
{
};

void Exercise::addRow(std::vector<int> datafirst)
{
	std::vector<std::vector<int>> data = matrix.getData();
	data.push_back(datafirst);
};

bool Exercise::isElementInRow(int value, size_t rowId)
{
	std::vector<std::vector<int>> data = matrix.getData();
	for (size_t i = 0; i < data[rowId].size(); i++)
	{
		if (data[rowId][i] == value)
		{
			return true;
		}
	}
	return false;
};

Matrix Exercise::ExerciseOne()
{
	Matrix result{this->matrix};
	for (size_t c = 0; c <matrix.collumnsQuantity(); ++c)
	{
		std::vector<std::vector<int>> data = matrix.getData();
		int min = std::numeric_limits<int>::max();
		for (size_t s = 0; s < data.size(); ++s)
		{
			if ((data[s][c]) <= min)
			{
				min = data[s][c];
			}
		}
		for (size_t s = 0; s < matrix.rowsQuantity(); ++s)
		{
			if (result[s][c] == min)
			{
				{
					result[s][c] = 0;
				}
			}
		}
	}
	return result;
}; 

Matrix Exercise::ExerciseTwo()
{
	std::vector<std::vector<int>> data = matrix.getData();
    size_t rows = data.size();
    size_t columns = data[0].size();
	std::vector<int> zeroLine(columns);
	for (size_t i = 0; i < rows; i++)
    {
		if (matrix[i][0] % 3 == 0)
		{
			data.insert(data.begin() + i, zeroLine);
		}
    }
	Matrix matrixTwo = Matrix(data);
    return matrixTwo;
}



