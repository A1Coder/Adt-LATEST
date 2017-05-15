#include "StackV.h"

void Stack::push(int val){
	data.push_back(val);
}


void Stack::pop(){
	data.pop_back();
}


int Stack::top(){
	return data[size()-1];
}


void Stack::clear(){
	while(size() !=0){
		pop();
	}
}


int Stack::size(){
	return data.size();
}
