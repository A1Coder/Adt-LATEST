#include <iostream> 
#include <string> 
#include "StackLL.h"//Use linked-list implementation of Stack

using namespace std;
        
  /*      
string reverseString(string str)
{
     string res;
     Stack stk;

   for (auto ch : str ) 
      stk.push(ch);

    
    while( stk.size() > 0)
       {
	  res +=  stk.top();
	   stk.pop();
       }

   return res;
}


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"";
	    
    return 0;
        
}
*/

int main(){
	string name = "Cameron";
	Stack stk;
	
	stk.push(25);
	stk.push(30);
	stk.push(10);
	stk.push(32);
	stk.pop();
	
	cout << stk.top()<<endl;
		stk.pop();

	cout << stk.top()<<endl;
		stk.pop();

	cout << stk.top()<<endl;
		stk.pop();

	
	stk.push(25);
	stk.push(30);
	stk.push(10);
	stk.push(32);
	
	cout << "SIZE: " << stk.size() <<endl;
	
	stk.clear();
		cout << "SIZE After clear: " << stk.size() <<endl;


}
