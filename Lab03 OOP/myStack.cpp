#include "myStack.h"

Lab03::MyStack::MyStack() 
{
	stackIndex = -1;
	
}

// method to check if stack is full, returns true if full otherwise false
bool Lab03::MyStack::stackFull()
{
	if (stackIndex > -1)
	{
		bool result = (stackIndex == 9) ? true : false; //returns true if stack's index is equal to 9
		return result;
	}

	else
	{
		std::cout << "stack is empty";
		bool result = false;
		return result;
	}
}


//method to push a provided integer into the stack
bool Lab03::MyStack::pushStack(int number)
{
	if (Lab03::MyStack::stackFull()) 
	{
		std::cout << number << "was NOT added to the stack";
		return false;
	}
		
	else
	{
		stackArr[++stackIndex] = number;		//push integer into the stack
		return true;
	}
}

// method to remove the current top of stack
void Lab03::MyStack::popStack()
{
	if (stackIndex > -1)
	{
		stackIndex--;
	}

	else
	{
		std::cout << "Cannot pop an empty stack";
	}

}

//method that returns the integer on the current top of the stack
int Lab03::MyStack::topStack()
{
	return stackArr[stackIndex];
}

//method checks if stack is empty, returns true if empty otherwise false.
bool Lab03::MyStack::stackEmpty()
{
	bool result = (stackIndex == -1) ? true : false;

	return result;
}

std::string Lab03::MyStack::printStack()
{
	for (int elem : stackArr)
	{
		std::cout << stackArr[elem];
	}

	return "print completed"; 
}

