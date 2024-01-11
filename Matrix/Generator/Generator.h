#pragma once

/**
* \brief Базовый класс генератора
*/
class Generator
{
	public:
		/**
		* \brief Виртуальны десктруктор
		*/
		virtual ~Generator() = 0 {};

		/**
		* \brief Виртуальный генератор для создания числа в классе наследнике
		*/
		virtual int generate() = 0;
};

