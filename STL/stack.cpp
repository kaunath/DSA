#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 


/*
refer to the notes for sets and maps docs in theory
*/
int main()
{

	// Stack and Queue 
	stack<int> st; 
	/*
	operations in a stack are 
	pop, top, size, empty, push and emplace 
	*/
	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 
	
	cout << st.top()<< endl; // prints 1 
	st.pop(); // deletes the last entered element 
	cout << st.top()<<endl; // prints 3 
	st.pop(); 
	cout << st.top()<<endl; 

	bool flag = st.empty(); // returns true if stack is empty, or false

	/* deleted the entire stack cause we don't have erase function in case of stack
		to empty the entire stack
	*/
	while(!st.empty()) {
		st.pop(); 
	}

	cout << st.size() << endl; // number of elements in the stack 

	if(!st.empty()) {
		cout << st.top() << endl; 

		/* 
		st.top() throw error if stack is empty, so we need to check always 
		before st.top() operation 

		*/
	}
}