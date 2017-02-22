
#ifdef STACK_LIST

template<typename T>
T ListStack<T>::top(){
	return stack.value();
}

template<typename T>
void ListStack<T>::push(T val){
	stack.insert(val);
}

template<typename T>
void ListStack<T>::pop(){
	return stack.remove();
}

template<typename T>
bool ListStack<T>::isempty(){
	return stack.isempty();
}

template<typename T>
long ListStack<T>::getSize(){
	return stack.getSize();
}

#endif