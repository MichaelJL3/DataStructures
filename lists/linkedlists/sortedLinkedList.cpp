
#ifdef SORTED_LINKED_LIST

template<typename T>
void SortedLinkedList<T>::insert(T val){
	Node<T> *prev=NULL, *temp=this->list;
	Node<T> *newNode=new Node<T>;
	newNode->val=val;
	newNode->next=NULL;
	this->size++;

	if(this->isempty()){
		this->list=newNode;
		return;
	}

	while(temp){
		if(temp->val>=val){
			newNode->next=temp;
			if(prev)
				prev->next=newNode;
			else
				this->list=newNode;
			return;
		}
		prev=temp;
		temp=temp->next;
	}

	prev->next=newNode;
}

#endif