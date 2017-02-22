
#ifdef STACK_ARRAY

template<typename T>
StackArray<T>::StackArray(){
	index=-1;
	size=DEFSIZE;
	stack=(T*)malloc(size*sizeof(T));
	if(!stack)
		throw std::runtime_error("Stack allocation failed");
}

template<typename T>
StackArray<T>::StackArray(int size){
	index=-1;
	this->size=size;
	stack=(T*)malloc(size*sizeof(T));
	if(!stack)
		throw std::runtime_error("Stack allocation failed");
}

template<typename T>
StackArray<T>::~StackArray(){
	free(stack);
}

template<typename T>
T StackArray<T>::top(){
	if(isempty())
		throw std::runtime_error("Stack underflow exception");

	return stack[index];
}

template<typename T>
void StackArray<T>::pop(){
	if(isempty())
		throw std::runtime_error("Stack underflow exception");
		
	index--;
}

template<typename T>
void StackArray<T>::push(T t){
	if(isfull())
		increase();

	stack[++index]=t;
}

template<typename T>
void StackArray<T>::increase(){
	size*=2;
	T* nStack=(T*)realloc(stack, size*sizeof(T));

	if(!nStack){
		size/=2;
		throw std::runtime_error("Stack reallocation failed");
	}

	stack=nStack;
}

template<typename T>
bool StackArray<T>::isempty(){
	return (index<0?true:false);
}

template<typename T>
bool StackArray<T>::isfull(){
	return (index==size-1?true:false);
}

template<typename T>
long StackArray<T>::getSize(){
	return index+1;
}

#endif