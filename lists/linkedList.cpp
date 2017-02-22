
#ifdef LINKED_LIST

template<typename T>
LinkedList<T>::LinkedList(){
	list=NULL;
	size=0;
}

template<typename T>
LinkedList<T>::~LinkedList(){
	clear();
}

template<typename T>
void LinkedList<T>::insert(T val){
	Node<T>* newNode = new Node<T>;
	if(!newNode)
		throw std::runtime_error("List allocation failed");

	newNode->val=val;
	newNode->next=list;
	list=newNode;
	size++;
}

template<typename T>
void LinkedList<T>::remove(){
	if(isempty())
		throw std::runtime_error("Link list underflow");

	Node<T>* temp;
	temp=list->next;
	free(list);
	list=temp;
	size--;
}

template<typename T>
void LinkedList<T>::clear(){
	Node<T>* temp;

	while(list){
		temp=list->next;
		delete list;
		list=temp;
	}
}

template<typename T>
T LinkedList<T>::value(){
	if(isempty())
		throw std::runtime_error("Link list underflow");

	return list->val;
}

template<typename T>
bool LinkedList<T>::isempty(){
	return (list?false:true);
}

template<typename T>
long LinkedList<T>::getSize(){
	return size;
}

#endif