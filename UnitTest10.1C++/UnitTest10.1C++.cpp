#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <iostream>
#include <string>
#include "../LAB10.1C++/LAB10.1C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101C
{
	TEST_CLASS(UnitTest101C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;

			string fileName = "test.txt";
			int result = hasAdjacentPairs(fileName);

			ofstream file(fileName);
			file << "abcdefabc\n";
			file.close();

			Assert::AreEqual(result, 1);
		}
	};
}
