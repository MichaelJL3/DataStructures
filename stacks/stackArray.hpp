
#ifndef STACK_ARRAY
#define STACK_ARRAY

#include <cstdlib>
#include <stdexcept>

#include "stackADT.hpp"

#define DEFSIZE 1024

template<typename T>
class StackArray : public StackADT<T>{
	T* stack;
	long index;
	long size;
public:
	StackArray();
	StackArray(int size);
	~StackArray();
	T top();
	void pop();
	void push(T t);
	bool isempty();
	bool isfull();
	long getSize();
private:
	void increase();
};

#include "stackArray.cpp"

#endif
