#include "Matrix.h"
#include <random>
#include <sstream>
#include <vector>


Matrix::Matrix(int rows, int collumns, Generator* generator):
	data({})
{
	for (size_t s = 0; s < rows; s++)
	{
		std::vector<int> temp{};
		for (size_t c = 0; c < collumns; c++)
		{
			temp.push_back(generator->generate());
		}
		this->data.push_back(temp);
	}
};

Matrix::Matrix(std::vector<std::vector<int>> data)
{
	this->data = data;
}

size_t Matrix::Matrix::rowsQuantity() const
{
	return this->data.size();
}

size_t Matrix::Matrix::collumnsQuantity() const
{
	if (this->data.size() == 0)
	{
		return 0;
	}
	return this->data[0].size();
}

std::vector<int>& Matrix::operator[](size_t index)
{
	return data[index];
}

std::string Matrix::toString() const noexcept
{
	std::stringstream temp;
	for (size_t s = 0; s < this->rowsQuantity(); s++)
	{
		for (size_t c = 0; c < this->collumnsQuantity(); c++)
		{
			temp << this->data[s][c] << ' ';
		}
		temp << "\n";
	}
	return temp.str();
}

std::vector<std::vector<int>> Matrix::getData()
{
	return data;
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept
	{
		return os << matrix.toString();
	}

bool operator==(Matrix& lha, Matrix& rha) noexcept
{
	return lha.toString() == rha.toString();
}
