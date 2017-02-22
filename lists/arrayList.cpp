
#ifdef ARRAY_LIST

template<typename T>
ArrayList<T>::ArrayList(){
	index=-1;
	size=DEFSIZE;
	list=(T*)malloc(size*sizeof(T));
	if(!list)
		throw std::runtime_error("Failed Array Allocation");
}

template<typename T>
ArrayList<T>::ArrayList(long n){
	index=-1;
	size=n;
	list=(T*)malloc(size*sizeof(T));
	if(!list)
		throw std::runtime_error("Failed Array Allocation");
}

template<typename T>
ArrayList<T>::~ArrayList(){
	free(list);
}

template<typename T>
T ArrayList<T>::value(){
	if(isempty())
		throw std::runtime_error("List Underflow Exception");

	return list[index];
}

template<typename T>
void ArrayList<T>::insert(T val){
	if(isfull())
		increase();

	list[++index]=val;
}

template<typename T>
void ArrayList<T>::remove(){
	index--;
}

template<typename T>
long ArrayList<T>::getSize(){
	return index+1;
}

template<typename T>
bool ArrayList<T>::isfull(){
	return (size-1==index?true:false);
}

template<typename T>
bool ArrayList<T>::isempty(){
	return (index<0?true:false);
}

template<typename T>
bool ArrayList<T>::find(T val){
	for(location=0; location<=index; location++){
		if(list[location]==val)
			return true;
	}
	location=-1;
	return false;
}

template<typename T>
void ArrayList<T>::increase(){
	size+=size;
	T* temp=(T*)realloc(list, size*sizeof(T));
	if(!temp){
		size/=2;
		throw std::runtime_error("Failed Array Re-Allocation");
	}

	list=temp;
}

#endif