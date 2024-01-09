#pragma once

#include "Generator.h" 
#include <iostream> 

/**
* \brief Класс генератора для ввода данных 
*/
class IStreamGenerator : public Generator
{
private:
	std::istream& in;

public:
	/**
	* \brief Объект класса IStreamGenerator
	* \param in Ввод данных 
	*/
	IStreamGenerator(std::istream& in = std::cin);

	/**
	* \brief Создание введенных данных
	*/
	int generate() override;
};