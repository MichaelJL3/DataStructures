
#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdexcept>

#include "listADT.hpp"

template<typename T>
struct Node{
	Node<T>* next;
	T val;
};

template<typename T>
class LinkedList : public ListADT<T>{
protected:
	Node<T>* list;
	long size;
	long location;
public:
	LinkedList();
	~LinkedList();
	T value();
	virtual void insert(T val);
	void remove();
	void clear();
	bool find(T val);
	bool isempty();
	long getSize();
};

#include "linkedList.cpp"

#endif