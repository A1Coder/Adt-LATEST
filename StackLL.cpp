#include "StackLL.h"

class Stack:: Node{
public:
	int data = 0;
	Node* link=nullptr;
	
};

int Stack::size(){
	return num_elements;
}

void Stack::push(int val){
	Node* newPtr = new Node{val};
	
	if (num_elements==0){
		frontPtr=newPtr;
	}
	
		Node* iPtr= frontPtr;

	for(int i=1; i<size();i++){
		iPtr=iPtr->link;
	}
	
	iPtr->link=newPtr;
	num_elements++;
}


void Stack::pop(){
		Node* iPtr = frontPtr;
		for(int i=1;i<size()-1;i++){
			iPtr=iPtr->link;
		}
		Node* delPtr = iPtr->link;
		iPtr->link=nullptr;
		delete delPtr;
		num_elements--;
		
}



int Stack::top(){
	Node* iPtr= frontPtr;
	for(int i=1; i<size(); i++){
		iPtr=iPtr->link;
	}
	return iPtr->data;
}



void Stack::clear(){
	while ( size() > 0){
		pop();
	}
}

Stack::~Stack(){
	clear();
}
