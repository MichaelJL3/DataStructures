
#ifndef ARRAY_INDEX_LIST
#define ARRAY_INDEX_LIST

#include "arrayList.hpp"

template<typename T>
class ArrayIndexList : public ArrayList<T>{
public:
    using ArrayList<T>::ArrayList;

    void insertAt(long indx, T val);
    T valueAt(long indx);

private:
    void shift(long from, long to);
};

#include "arrayIndexList.cpp"

#endif