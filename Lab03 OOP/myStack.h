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
		bool stackFull(); // method to check if stack is full, returns true if full otherwise false
		void popStack(); // method to remove the current top of stack
		int topStack(); //method that returns the integer on the current top of the stack
		bool stackEmpty(); //method checks if stack is empty, returns true if empty otherwise false.
		std::string printStack(); //method that prints the stack to standard output. Returns string to confirm it printed
	};


}