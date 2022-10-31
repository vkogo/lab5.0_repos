#include "pch.h"

#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
	TEST_METHOD(TestMethod1)
		{
			
		double res;
		res = f(1.3, 3, 2.2) + f(4.2, 3.2 , 2.1);
			Assert::AreEqual(res , res);
			

		}
	};
}
