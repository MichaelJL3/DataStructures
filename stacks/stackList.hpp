
#ifndef STACK_LIST
#define STACK_LIST

#include "../lists/linkedList.hpp"

template<typename T>
class ListStack{
	LinkedList<T> stack;
public:
	T top();
	void push(T val);
	void pop();
	bool isempty();
	long getSize();
};

#include "stackList.cpp"

#endif