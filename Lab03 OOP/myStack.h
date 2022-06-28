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
		//default constructor to initialize index of top stack to -1
		MyStack();
		bool pushStack(int number);
		bool notFull(int const& stackIndex);
	};


}