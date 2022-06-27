#include "myStack.h"

Lab03::MyStack::MyStack() 
{
	stackIndex = -1;
	
}

bool Lab03::MyStack::notFull(int const& stackIndex)
{

	bool result = (stackIndex < 10) ? true : false; //returns true if stack's index is less than 10
	
	return result;
}

bool Lab03::MyStack::pushStack(int number)
{
	if (Lab03::MyStack::notFull(stackIndex)) 
	{
		stackArr[++stackIndex] = number;		//push integer into the stack
		return true;
	}

	std::cout << number << "was NOT added to the stack";

	return false;
}