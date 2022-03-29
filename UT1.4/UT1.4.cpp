#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.4(2.0)/HomeLib.h" 
#include "../PR1.4(2.0)/HomeLib.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT14
{
	TEST_CLASS(UT14)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			HomeLib t[10];
			int x = 0;

		Assert::IsTrue(t[x].Display(t, x));
		}
	};
}