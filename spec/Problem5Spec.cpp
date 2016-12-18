#include "stdafx.h"
#include "../src/Problem5.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem5Spec
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
		struct student * new_node_spec_p5(char letter){
			struct student *temp = (struct student *)malloc(sizeof(struct student));
			temp->letter = letter;
			temp->first = NULL;
			temp->second = NULL;
			temp->third = NULL;
			return temp;
		}
		struct student * constructFormation_spec(char *students){
			struct student *root = NULL;
			struct student *nodes[2005];
			int i = 0;
			while(students[i] != '\0'){
				nodes[i] = new_node_spec_p5(students[i]);
				i++;
			}

			char invalidLetter = 'X';
			int mid = (i / 3);
  			for (int i = 0; i < mid; i++){
				struct student *curnode = nodes[i];
				struct student *firstnode = nodes[(i * 3) + 1];
				struct student *secondnode = nodes[(i * 3) + 2];
				struct student *thirdnode = nodes[(i * 3) + 3];
				if (curnode->letter != invalidLetter ){
					if (firstnode->letter != invalidLetter){
						curnode->first = firstnode;
					}
					if (secondnode->letter != invalidLetter){
						curnode->second = secondnode;
					}
					if (thirdnode->letter != invalidLetter){
						curnode->third = thirdnode;
					}
				}
			}
			root = nodes[0];
			return root;
		}
		
		void createFormationAndTest(char *students, int expectedMax, int expectedMin) {
			struct student * leaderStudent = constructFormation_spec(students);
			int actualMaxBallDistance = 0;
			int actualMinBallDistance = 0;
			findBallDistance(leaderStudent, &actualMinBallDistance, &actualMaxBallDistance);

			Assert::AreEqual(expectedMin, actualMinBallDistance, "Min ball distance mis match", 1, 2);
			Assert::AreEqual(expectedMax, actualMaxBallDistance, "Max ball distance mis match", 1, 2);

		}
		/*
			Simple Case 1 :
		*/
		[TestMethod , Timeout(1000)]
		void Sample1_Problem5()
		{
			char students[100] = "ABCDEFGHIJKLM";
			int expectedMinBallDistance = 3;
			int expectedMaxBallDistance = 3;
			createFormationAndTest(students, expectedMaxBallDistance, expectedMinBallDistance);
			
		};

		/*
			Sample Case 2:
		*/
		[TestMethod, Timeout(1000)]
		void Sample2_Problem5()
		{
			char students[100] = "ABCDXXXHIJKLM";
			int expectedMinBallDistance = 2;
			int expectedMaxBallDistance = 3;
			createFormationAndTest(students, expectedMaxBallDistance, expectedMinBallDistance);
		};

	};
}
