#pragma once
#include <iostream>

namespace Lab03
{
	class MyStack
	{
	private:
		static const int stackSize = 10;
		int stackArr[stackSize];
		int stackIndex{ -1 };

	public:
		MyStack(); 		//default constructor to initialize index of top stack to -1
		bool pushStack(int number); //method to push a provided integer into the stack
		bool notFull(int const& stackIndex); // method to check if stack is full, returns true or false
		void popStack(); // method to remove the current top of stack
	};


}