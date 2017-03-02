
#ifdef ARRAY_INDEX_LIST

template<typename T>
void ArrayIndexList<T>::insertAt(long indx, T val){
    if(indx>this->index+1)
        throw std::runtime_error("List Overflow Exception");
    else if(indx<0)
        throw std::runtime_error("List Underflow Exception");
    if(this->isfull())
        this->increase();

    shift(indx, ++this->index);

    this->list[indx]=val;
}

template<typename T>
void ArrayIndexList<T>::shift(long from, long to){
    for(; to>from; to--){
        this->list[to]=this->list[to-1];
    }
}

template<typename T>
T ArrayIndexList<T>::valueAt(long indx){
    if(indx>this->index)
        throw std::runtime_error("List Overflow Exception");
    else if(indx<0)
        throw std::runtime_error("List Underflow Exception");

    return this->list[indx];
}

#endif