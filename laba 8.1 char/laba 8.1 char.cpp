#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 char/lab 8.1 char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba81char
{
	TEST_CLASS(laba81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str);
			Assert::AreEqual(2, result);

		}
	};
}
