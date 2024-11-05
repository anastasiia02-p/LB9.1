#include "pch.h"
#include "CppUnitTest.h"
#include "../LB9.1/sum.h"
#include "../LB9.1/var.h"
#include "../LB9.1/dod.h"
#include "../LB9.1/sum.cpp"
#include "../LB9.1/var.cpp"
#include "../LB9.1/dod.cpp"

#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Assert::AreEqual(0, nsVar::s, 0.0001);
		}
	};
}
