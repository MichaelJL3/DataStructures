
#ifndef STACK_ADT
#define STACK_ADT

template<typename T>
class StackADT{
protected:
	virtual T top()=0;
	virtual void push(T t)=0;
	virtual void pop()=0;
	virtual bool isEmpty()=0;
};

#endif