
#ifdef SORTED_ARRAY_LIST

template<typename T>
void SortedArrayList<T>::insert(T val){
    if(this->isfull())
        this->increase();

    int loc=0;
    int first=0;
    int last=this->index;
    T temp;
    
    while(first<=last){
        loc=(first+last)/2;
        temp=this->list[loc];
        
        if(temp>val)
            last=loc-1;
        else if(temp<val)
            first=loc+1;
        else
            break;
    }

    shift(loc, ++this->index);
    this->list[loc]=val;
}

template<typename T>
void SortedArrayList<T>::shift(int from, int to){
    for(; to>from; to--){
        this->list[to]=this->list[to-1];
    }
}

template<typename T>
bool SortedArrayList<T>::find(T val){
    int first=0;
    int last=this->index;
    T temp;
    
    while(first<=last){
        this->location=(first+last)/2;
        temp=this->list[this->location];
        
        if(temp>val)
            last=this->location-1;
        else if(temp<val)
            first=this->location+1;
        else
            break;
    }

	if(first<=last){
		this->location=-1;
		return false;
	}

	return true;
}

#endif