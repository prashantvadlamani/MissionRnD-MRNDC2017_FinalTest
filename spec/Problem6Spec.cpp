#include "stdafx.h"
#include "../src/Problem6.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem6Spec
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


		struct ListNode *createNode_P6(int val){
			struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
			newNode->next = NULL;
			newNode->val = val;
			return newNode;
		}

		struct ListNode* createList_P6(char *s){
			int i;
			struct ListNode *walker = NULL;
			struct ListNode *head = createNode_P6(s[0]);
			walker = head;
			for (i = 1; s[i] != '\0'; i++){
				walker->next = createNode_P6(s[i]);
				walker = walker->next;
			}

			return head;
		}

		void createDataAndTest_P6(char *input, char *expectedOutput) {
			struct ListNode * head = createList_P6(input);
			pairUp(head);

			char actualStr[510] = "";
			int i = 0;

			while (head){
				actualStr[i] = (head->val);
				head = head->next;
				i++;
			}

			i = 0;
			while (expectedOutput[i] != '\0' || actualStr[i] != '\0'){
				Assert::AreEqual(expectedOutput[i], actualStr[i], "Failed in Problem 6 ,Links not properly handled", 1, 2);
				i++;
			}

		}

		[TestMethod, Timeout(1000)]
		void Sample1_Problem6()
		{
			pairUp(NULL);

		};

		[TestMethod, Timeout(1000)]
		void Sample2_Problem6()
		{
			createDataAndTest_P6("123456", "162534");
		};

		[TestMethod, Timeout(1000)]
		void Sample3_Problem6()
		{
			createDataAndTest_P6("912354786", "961827345");
		};

	};
}
