
#ifdef LINKED_INDEX_LIST

template<typename T>
void LinkedIndexList<T>::insert(long indx, T val){
    if(indx>index+1)
        throw std::runtime_error("List Overflow Exception");
    else if(indx<0{
        throw std::runtime_error("List Underflow Exception");

    T* temp=list;
    T* newNode=new Node<T>;

    if(!newNode){
        throw std::runtime_error("Failed List Node Allocation");
    }

    newNode->val=val;
    newNode->next=NULL;
    index++;

    if(!temp){
        list=newNode;
        return;
    }

    for(long i=0; i<indx; i++){
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}

template<typename T>
T LinkedIndexList<T>::valueAt(long indx){
    T* temp=list;

    if(indx>index)
        throw std::runtime_error("List Overflow Exception");
    if(indx<0)
        throw std::runtime_error("List Underflow Exception");

    for(int i=0; i<indx; i++)
        temp=temp->next;

    return temp->val;
}

#endif