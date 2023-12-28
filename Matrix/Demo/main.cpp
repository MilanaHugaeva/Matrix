#include <iostream>
#include "../Generator/Generator.h"
#include "../Generator/RandomGenerator.h"
#include "../Generator/IStreamGenerator.h"
#include "../Exercise/Exercise.h"
#include "../Exercise/MainExercise.h"
#include "../Matrix/Matrix.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Generator* generator = new RandomGenerator(0, 10);
	miit::Matrix matrix(4, 3, generator);
	std::cout << matrix << std::endl;
	std::cout << "---------------------------------" << std::endl;
	miit::Exercise Exercise{ matrix };
	std::cout << Exercise.ExerciseOne().toString();
	std::cout << "---------------------------------" << std::endl;
	std::cout << Exercise.ExerciseTwo().toString();
	return 0;

}