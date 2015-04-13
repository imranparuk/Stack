// Stack.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Stack.h"


// This is an example of an exported variable
STACK_API int nStack=0;

// This is an example of an exported function.
STACK_API int fnStack(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Stack.h for the class definition
CStack::CStack(int MaxSize = 0)
{
	maxSize = MaxSize;
	head = nullptr;
	currentSize = 0;
}

CStack::~CStack()
{

}

bool CStack::push(int val)
{
	NODE *newPtr = new NODE;

	if (newPtr != nullptr && !isFull())
	{
		if (head != nullptr)
		{
			newPtr->data = val;
			newPtr->linker = head;
			head = newPtr;
			currentSize++;
		}
		else
		{
			newPtr->data = val;
			newPtr->linker = nullptr;
			head = newPtr;
			currentSize++;
		}
		return true;

	}
	else
		return false;
}

bool CStack::pop(int &val)
{

	if (!isEmpty())
	{

	}
}

bool CStack::isEmpty()
{
	if (currentSize <= 0)
		return true;
	else return false;
}

bool CStack::isFull()
{
	if (currentSize >= maxSize)
		return true;
	else return false;
}