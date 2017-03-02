
#include <iostream>
#include "lists/sortedLinkedList.hpp"

using namespace std;

int main(){
	SortedLinkedList<int> sorted;

	sorted.insert(1);
	sorted.insert(5);
	sorted.insert(0);

	cout<<sorted.value()<<endl;

	return 0;
}