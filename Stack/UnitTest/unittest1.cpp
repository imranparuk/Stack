#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Stack/Stack.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(PushTest)
		{
			CStack testStack(10);
			bool ret = testStack.push(0);
			Assert::AreEqual(true, ret);
		}

		TEST_METHOD(PopTest)
		{
			CStack testStack(10);
			int retNum;
			bool ret = testStack.pop(retNum);
			Assert::AreEqual(true, ret);
		}

		TEST_METHOD(peepTest)
		{
			CStack testStack(10);
			for (int i = 0; i < 9; i++)
			{
				testStack.push(i);
			}
			int peekNum;
			testStack.peek(peekNum);

			Assert::AreEqual(9, peekNum);
		}

		TEST_METHOD(isEmpty_whenEmpty)
		{
			CStack testStack(10);
			bool isEmpty = testStack.isEmpty();
			Assert::IsTrue(isEmpty);
		}

		TEST_METHOD(isEmpty_whenNotEmpty)
		{
			CStack testStack(10);
			for (int i = 0; i < 10; i++)
			{
				testStack.push(i);
			}
			bool isEmpty = testStack.isEmpty();
			Assert::IsFalse(isEmpty);
		}

		TEST_METHOD(isFull_whenFull)
		{
			CStack testStack(10);
			for (int i = 0; i < 10; i++)
			{
				testStack.push(i);
			}
			bool isFull = testStack.isFull();
			Assert::IsTrue(isFull);
		}
		TEST_METHOD(isFull_whenNotFull)
		{
			CStack testStack(10);
			for (int i = 0; i < 9; i++)
			{
				testStack.push(i);
			}
			bool isFull = testStack.isFull();
			Assert::IsFalse(isFull);
		}
	};
}