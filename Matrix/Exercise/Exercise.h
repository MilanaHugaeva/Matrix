﻿#pragma once 
#include "MainExercise.h"
#include "../Matrix/Matrix.h"

class Exercise : public MainExercise 
{
private:
	Matrix matrix;
public:
	Exercise(Matrix matrix);

	/**
	* @brief Выполнение упражнения номер 1
	* @return Результат выполнения 1 упражнения
	*/
	Matrix ExerciseOne() override;

	/**
	* @brief Выполнение упражнения номер 2
	* @return Результат выполнения 2 упражнения
	*/
	Matrix ExerciseTwo() override;

	/**
	* @brief Проверка элемента в строке в матрице
	*/
	bool isElementInRow(int value, size_t rowId);

	/**
	* @brief Добавляет строку в матрицу по индексу
	* @param rowLine Строка для добавления
	* @param index Индекс для добавления строки
	*/
	void addRow(std::vector<int> data);

};
