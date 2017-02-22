
#ifndef LIST_ADT
#define LIST_ADT

template<typename T>
class ListADT{
protected:
	virtual T value()=0;
	virtual void insert(T val)=0;
	virtual void remove()=0;
	virtual bool isempty()=0;
};

#endif