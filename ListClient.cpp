#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2,L3;

 //Do some stuff with L1, L2, ...
 // ...

	L1.insert(3,1);
	L1.insert(2,1);
	L1.insert(4,2);
	L1.insert(20,3);

	
	L1.remove(2);
	
	
	
	
	cout<<"Size: " << L1.size()<< " " << L1.getAt(1) << " " << L1.getAt(2)<< " "<< L1.getAt(3) << endl;
	L1.~List();
cout<<"Size: " << L1.size();
	
}
