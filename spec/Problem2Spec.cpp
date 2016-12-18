#include "stdafx.h"
#include "../src/Problem2.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem2Spec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

#pragma region Additional test attributes
		//
		//You can use the following additional attributes as you write your tests:
		//
		//Use ClassInitialize to run code before running the first test in the class
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//Use ClassCleanup to run code after all tests in a class have run
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//Use TestInitialize to run code before running each test
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//Use TestCleanup to run code after each test has run
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
#pragma endregion

		void modifyOperationStr(char *str, int operation) {
			if (operation == 1){
				str[0] = 'A'; str[1] = 'N'; str[2] = 'D'; str[3] = '\0';
			}
			else if (operation == 2){
				str[0] = 'O'; str[1] = 'R'; str[2] = '\0'; str[3] = '\0';
			}
			else if (operation == 3){
				str[0] = 'X'; str[1] = 'O'; str[2] = 'R'; str[3] = '\0';
			}
			else if (operation == 4){
				str[0] = 'N'; str[1] = 'O'; str[2] = 'R'; str[3] = '\0';
			}
			else{

			}
		}

		void compareStrings(char *expected, char *actual){
			int i = 0;
			while (expected[i] != '\0'){
				char expectedChar = expected[i];
				char actualChar = actual[i];
				Assert::AreEqual(expectedChar, actualChar, "Failed Binary Operation", 1, 2);
				i++;
			}
			//Slash 0 check
			Assert::AreEqual(expected[i], actual[i], "Improper String ending in Actual answer", 1, 2);
		}
		void testOperation(char *str1, char *str2, char *expectedAns, int operation) {
			char operationStr[5];
			modifyOperationStr(operationStr, operation);
			char * ans = performOperation(str1, str2, operationStr);
			compareStrings(expectedAns, ans);
		}
		/*
		For Test Cases ,We have used .
		1 -> AND , 2->OR , 3-> XOR ,4->NOR
		*/
		[TestMethod, Timeout(1000)]
		void Sample1_Problem2()
		{

			int operation = 1;
			char str1[100] = "1111";
			char str2[100] = "0101";
			char eans[100] = "0101";
			testOperation(str1, str2, eans, operation);

		};

		[TestMethod, Timeout(1000)]
		void Sample2_Problem2()
		{
			int operation = 2;
			char str1[100] = "1001101";
			char str2[100] =  "100111";
			char eans[100] = "1101111";
			testOperation(str1, str2, eans, operation);
		};


	};
}
