#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 

/*
refer to the notes for sets and maps docs in theory
*/
int main()
{

/* 
operations in a queue are push, front, pop, size, empty 
*/
	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 

	cout << q.front()<< endl; // prints 1 
	q.pop(); 
	cout << q.front()<< endl; // prints 5 

	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}

	cout << "queue is after deletion "<<q.front();

}