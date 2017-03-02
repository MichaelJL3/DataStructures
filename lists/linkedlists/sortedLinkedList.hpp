
#ifndef SORTED_LINKED_LIST
#define SORTED_LINKED_LIST

#include "linkedList.hpp"

template<typename T>
class SortedLinkedList : public LinkedList<T>{
public:
	using LinkedList<T>::LinkedList;
	void insert(T val);
};

#include "sortedLinkedList.cpp"

#endif