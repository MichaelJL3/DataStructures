
#ifndef ARRAY_LIST
#define ARRAY_LIST

#include <stdexcept>
#include "../listADT.hpp"

#define DEFSIZE 1024

template<typename T>
class ArrayList : public ListADT<T>{
protected:
	T* list;
	long index;
	long size;
	long location;
public:
	ArrayList();
	ArrayList(long n);
	~ArrayList();
	T value();
	virtual void insert(T val);
	void remove();
	long getSize();
	bool isempty();
	bool isfull();
	virtual bool find(T val);
	std::string toString();
protected:
	void increase();
};

#include "arrayList.cpp"

#endif 