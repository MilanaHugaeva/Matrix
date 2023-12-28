#include "Matrix.h"
#include <random>
#include <sstream>
#include <vector>


miit::Matrix::Matrix(size_t rows, size_t collumns, Generator* generator):
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

miit::Matrix::Matrix(size_t rows, size_t collumns, std::initializer_list<int> data) :
	data(std::vector<std::vector<int>> {rows})
{
	size_t s = 0;
	size_t c = 0;
	for (auto& item : data)
	{
		this->data[c].push_back(item);
		s++;
		if (s % collumns == 0)
		{
			c++;
		}
	}
};

miit::Matrix::Matrix()
	:data({})
{

}


void miit::Matrix::addRow(std::vector<int> data, size_t index)
{
	this->data.push_back(data);
};

int miit::Matrix::getMaxElement() const
{
	int max = std::numeric_limits<int>::min();
	for (size_t s = 0; s < this->rowsQuantity(); ++s) {
		for (size_t c = 0; c < this->collumnsQuantity(); ++c)
		{
			if (std::fabs(this->data[s][c]) >= max)
			{
				max = this->data[s][c];
			}
		}
	}
	return max;
};


int miit::Matrix::getMinElement(size_t index) const
{
	int min = std::numeric_limits<int>::max();
	for (size_t s = 0; s < this->rowsQuantity(); ++s)
	{
		if ((this->data[s][index]) <= min)
		{
			min = this->data[s][index];
		}
	}
	return min;
}

bool miit::Matrix::isElementInRow(int value, size_t rowId)
{
	for (size_t i = 0; i < this->data[rowId].size(); i++)
	{
		if (this->data[rowId][i] == value)
		{
			return true;
		}
	}
	return false;
}


size_t miit::Matrix::Matrix::rowsQuantity() const
{
	return this->data.size();
}

size_t miit::Matrix::Matrix::collumnsQuantity() const
{
	if (this->data.size() == 0)
	{
		return 0;
	}
	return this->data[0].size();
}

std::vector<int>& miit::Matrix::operator[](size_t index)
{
	return data[index];
}

std::string miit::Matrix::toString() const noexcept
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

std::ostream& miit::operator<<(std::ostream& os, Matrix& matrix) noexcept
	{
		return os << matrix.toString();
	}

bool miit::operator==(Matrix& lha, Matrix& rha) noexcept
{

	return lha.toString() == rha.toString();
}
