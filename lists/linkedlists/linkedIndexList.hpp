
#ifndef LINKED_INDEX_LIST
#define LINKED_INDEX_LIST

template<typename T>
class LinkedIndexList : public LinkedList<T>{
public:
    using LinkedList<T>::LinkedList;

    void insert(long indx, T val);
    T valueAt(long indx);
};

#include "linkedIndexList.cpp";

#endif