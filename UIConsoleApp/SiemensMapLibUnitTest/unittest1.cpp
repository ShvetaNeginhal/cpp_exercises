#include "stdafx.h"
#include "CppUnitTest.h"
#include "SiemensMap.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SiemensMapLibUnitTest
{		
	void dividetest()
	{
		//Arrange
		int a = 10, b = 0;
		SiemensMap target;
		//Act
		int actual = target.div2ints(a, b);

	}
	TEST_CLASS(SiemensMapLibUnitTest)
	{
	public:
		//feature scenario expected-behaviour
		TEST_METHOD(add2ints_withvalidnos_shouldprovidevalidresult)
		{
			// TODO: Your test code here
			///AAA approach
			//Arrange
			int a = 10, b = 10, expected = 20;
			SiemensMap target;
			//Act
			int actual = target.add2ints(a, b);
			//Assert
			Assert::AreEqual(expected, actual);
			

		}

		TEST_METHOD(sub2ints_withvalidnos_shouldprovidevalidresult)
		{
			// TODO: Your test code here
			///AAA approach
			//Arrange
			int a = 10, b = 10, expected = 0;
			SiemensMap target;
			//Act
			int actual = target.sub2ints(a, b);
			//Assert
			Assert::AreEqual(expected, actual);


		}
		TEST_METHOD(div2ints_withvalidnos_shouldprovidevalidresult)
		{
			// TODO: Your test code here
			///AAA approach
			//Arrange
			int a = 10, b = 10, expected = 1;
			SiemensMap target;
			//Act
			int actual = target.div2ints(a, b);
			//Assert
			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(div2ints_withzero_shouldthrowexception)
		{
			//Assert
			Assert::ExpectException<int>(dividetest);
		}
		TEST_METHOD(factorialofint_givenvalidinput_producingvalidoutput)
		{
			int a=3, expected = 6;
			SiemensMap target;
			int actual = target.getFactorial(a);
			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(factorialofint_for0ornegative)
		{
			int a = 0, expected = 0;
			SiemensMap target;
			int actual = target.getFactorial(0);
			Assert::AreEqual(expected, actual);

		}
	};
}