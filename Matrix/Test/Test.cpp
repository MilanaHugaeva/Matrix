#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/yanmi/source/repos/Matrix/Matrix/Matrix/Matrix.h"
#include "/Users/yanmi/source/repos/Matrix/Matrix/Generator/IStreamGenerator.h"
#include "../Generator/RandomGenerator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestMatrix
{
	TEST_CLASS(TestMatrix)
	{
	public:
		
		TEST_METHOD(MatrixToString_ValidData_Success)
		{
			Generator* generator = new RandomGenerator(0, 10);
			Matrix matrix(3, 2, generator);
			Assert::IsFalse(matrix.toString() == "");
		};

		TEST_METHOD(MatrixRowsCounts_ValidData_Success)
		{
			Generator* generator = new RandomGenerator(0, 10);
			Matrix matrix{ 3, 3, generator };
			int temp = matrix.rowsQuantity();
			Assert::IsTrue(temp == 3);
		}

		TEST_METHOD(MatrixCollumnssCounts_ValidData_Success)
		{
			Generator* generator = new RandomGenerator(0, 10);
			Matrix matrix{ 3, 3, generator };
			int temp = matrix.collumnsQuantity();
			Assert::IsTrue(temp == 3);
		}
	};
}
