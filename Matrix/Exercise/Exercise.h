#pragma once 
#include "MainExercise.h"
#include "../Matrix/Matrix.h"

namespace miit
{
	struct Exercise : public MainExercise
	{
	private:
		Matrix matrix;
	public:
		Exercise(Matrix matrix);
		Matrix ExerciseOne() override;
		Matrix ExerciseTwo() override;
	};
}