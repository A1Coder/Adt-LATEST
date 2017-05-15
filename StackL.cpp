#include "StackL.h"

void Stack::push(int val){
	data.insert(val,size()+1);
}


int Stack::size(){
	return data.size();
}

int Stack::top(){
	
	return data.getAt(size());
	
}


void Stack::clear(){
	
	while(size() > 0){
		pop();
	}
	
}


void Stack::pop(){
	
	data.remove(size());
}
