#pragma once

#include "/Users/yanmi/source/repos/Matrix/Matrix/Generator/Generator.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>

/**
* @brief Класс матрицы
*/
class Matrix
{
public:
	/**
	* @brief Создание объекта типа матрицы с введенными параметрами 
	* @param rows количество строк матрицы
	* @param collums количество столбцов матрицы
	* @param Generator способ заполнения матрицы
	*/
	Matrix(int rows, int collumns, Generator* generator);

	Matrix(std::vector<std::vector<int>> data);

	/**
	* @brief Количество строк в матрице
	*/
	size_t rowsQuantity() const;

	/**
	* @brief Количество столбцов в матрице
	*/
	size_t collumnsQuantity() const;

	/**
	* @brief Перегрузка оператора вывода
	* @param os Вывод
	* @param matrix Матрица, откуда берются данные для вывода
	* @return Вывод 
	*/
	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

	/**
	* @brief Перегрузка оператора сравнения
	* @param lha Первый аргумент для сравнения
	* @param rha Второй аргумент для сравнения
	*/
	friend bool operator==(Matrix& lha, Matrix& rha) noexcept;

	/**
	* @brief Перегрузка оператора квадратные скобки
	* @param index Индекс элемента в массиве
	* @return Элемент из матрцы стоящий под выбранным индексом
	*/
	std::vector<int>& operator[](size_t index);

	/**
	* @brief Преобразование объекта матрицы в строку
	* @return Строка с информацией о матрице
	*/
	std::string toString() const noexcept;

	/**
	*@ brief Получение информации
	*/
	std::vector<std::vector<int>> getData();

private:

	std::vector<std::vector<int>> data;
};