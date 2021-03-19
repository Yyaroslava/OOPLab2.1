#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab2.1/Line.h"
#include "../OOP Lab2.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line a(4, 5);
			Assert::AreEqual(a(10), 45.);
		}
	};
}
