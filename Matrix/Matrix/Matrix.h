#pragma once

#include "/Users/yanmi/source/repos/Matrix/Matrix/Generator/Generator.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>


namespace miit
{
	/**
	* \brief Класс матрицы
	*/
	class Matrix
	{
	public:
		/**
		* \brief Создание объекта типа матрицы с введенными параметрами 
		* \param rows количество строк матрицы
		* \param collums количество столбцов матрицы
		* \param Generator способ заполнения матрицы
		*/
		Matrix(size_t rows, size_t collumns, Generator* generator);

		/**
		* \brief Создание объекта типа матрицы с введенными параметрами
		* \param rows количество строк матрицы
		* \param collums количество столбцов матрицы
		* \param data Информация о елементах матцицы
		*/
		Matrix(size_t rows, size_t collumns, std::initializer_list<int> data);

		/**
		* \brief Создание пустого объекта типа матрицы
		*/
		Matrix();

		/**
		* @brief Добавляет строку в матрицу по индексу
		* @param rowLine Строка для добавления
		* @param index Индекс для добавления строки
		*/
		void addRow(std::vector<int> data, size_t index);

		/**
		* @brief Получение максимального по модулю элемента в матрице
		* @return Максимальный по модулю елемент в матрице
		*/
		int getMaxElement() const;

		/**
		* @brief Получение минимального элемента в матрице
		* @return Минимальный елемент в матрице
		*/
		int getMinElement(size_t index) const;

		/**
		* @brief Проверка элемента в строке в матрице
		*/
		bool isElementInRow(int value, size_t rowId);

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

	private:

		std::vector<std::vector<int>> data;
	};
}