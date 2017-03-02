
#ifndef SORTED_ARRAY_LIST
#define SORTED_ARRAY_LIST

#include "arrayList.hpp"

template<typename T>
class SortedArrayList : public ArrayList<T>{
public:
    using ArrayList<T>::ArrayList;

    void insert(T val);
    bool find(T val);
    
private:
    void shift(int from, int to);
};

#include "sortedArrayList.cpp"

#endif