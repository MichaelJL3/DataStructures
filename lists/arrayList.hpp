
#ifndef ARRAY_LIST
#define ARRAY_LIST

#include <stdexcept>
#include "listADT.hpp"

#define DEFSIZE 1024

template<typename T>
class ArrayList : public ListADT<T>{
	T* list;
	long index;
	long size;
	long location;
public:
	ArrayList();
	ArrayList(long n);
	~ArrayList();
	T value();
	void insert(T val);
	void remove();
	long getSize();
	bool isempty();
	bool isfull();
	bool find(T val);
private:
	void increase();
};

#include "arrayList.cpp"

#endif 