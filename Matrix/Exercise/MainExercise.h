#pragma once
#include "/Users/yanmi/source/repos/Matrix/Matrix/Matrix/Matrix.h"
#include "Exercise.h"
#include <vector>


class MainExercise
{
public:
	virtual ~MainExercise() = 0 {};
	virtual Matrix ExerciseOne() = 0;
	virtual Matrix ExerciseTwo() = 0;
};
