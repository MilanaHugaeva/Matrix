#pragma once

#include "Generator.h"
#include <random>

/**
* \brief Класс для выбора случайного числа
*/
class RandomGenerator : public Generator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;

public:
	/**
	* \brief Объект типа RandomGenerator
	* \param min Минимальное число в диапазоне
	* \param max Максимальное число в диапазоне
	*/
	RandomGenerator(const int min, const int max);

	/**
	* \brief Создает рандомное число из диапазона
	*/
	int generate() override;
};