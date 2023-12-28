#include "Exercise.h"
#include "MainExercise.h"
#include "/Users/yanmi/source/repos/Matrix/Matrix/Matrix/Matrix.h"
#include <vector>

miit::Exercise::Exercise(Matrix matrix) :
	matrix(matrix)
{
};

miit::Matrix miit::Exercise::ExerciseOne()
{
	miit::Matrix result{this->matrix};
	for (size_t c = 0; c < this->matrix.collumnsQuantity(); ++c)
	{
		int min = this->matrix.getMinElement(c);
		for (size_t s = 0; s < this->matrix.rowsQuantity(); ++s)
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

miit::Matrix miit::Exercise::ExerciseTwo()
{
	miit::Matrix result{};
	for (size_t s = 0; s < this->matrix.rowsQuantity(); ++s)
	{
		result.addRow(matrix[s],s);
		if (s % 2 != 0)
		{
			result.addRow(matrix[0],s);
		}
	}
	return result;
};



