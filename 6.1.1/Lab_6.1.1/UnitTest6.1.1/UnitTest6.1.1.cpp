#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 42, 8, 50, 50, 57, 57, 13, 29, 21, 70, 51, 35, 13, 56, 4, 19, 35, 64, 70, 22, 73, 26, 17, 4, 9 };
			int S = SumArray(A, 25);
			Assert::AreEqual(733, S);
	    }
	};
}
