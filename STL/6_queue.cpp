#include <bits/stdc++.h>
#include<iterator> 
// #include <dequeue>
using namespace std; 

/*
refer to the notes for sets and maps docs in theory
*/
int main()
{

/* 
operations in a queue are push, front, pop, size, empty 
*/
	cout << "queue" << endl;
	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 

	cout << q.front()<< endl; // prints 1 
	q.pop(); 
	cout << q.front()<< endl; // prints 5 

	// linear time 
	while(!q.empty()) 
	{
		q.pop(); 
	}

	cout << "queue is after deletion "<<q.front()<< endl;

	/*priority queue
	push(), size, top, pop, empty
	*/
	cout << "priority queue" << endl;

	priority_queue<int> pq;
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(9);
	pq.push(8);

	cout<< "Size is "<<pq.size()<< endl;
	cout<< "top element is " <<pq.top()<< endl;
	pq.pop();
	cout<< "top element after one pop is "<<pq.top()<< endl;
	cout<<"is empty " << pq.empty()<< endl;


	cout<<"Minimum priority_queue " << endl;
	/*minimum priority queue
	Syntax: priority_queue<int, vector<int>, greater<int>> min_pq; minimum_pq for int.
	replace int with any other data type string, float, double, vector pair etc to get 
	min_pq of that type
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<vector<int, int>>> min_pq //min_pq for pairs
	*/
	priority_queue<int, vector<int>, greater<int>> min_pq;
	min_pq.push(10);
	min_pq.push(7);
	min_pq.push(15);
	cout << min_pq.top()<<endl;
	min_pq.pop();
	cout << min_pq.top()<<endl;

	//make min_pq using priority queue
	priority_queue<int> pq_1;
	pq_1.push(-18);
	pq_1.push(-4);
	pq_1.push(-32);
	pq_1.push(-15);
	cout << pq_1.top()*-1 << endl;
	pq_1.pop();
	cout << pq_1.top()*-1 << endl;
	// this method will work only for numbers

	cout << "Dequeue "<< endl;
	deque<int> dq;
	/*
	mostly used operations are push_front(), push_back(), pop_front(), pop_bacK(),
	begin(), end(), rbegin(), rend,size(), clear(), empty() and many more

	list<int> ls;
	A list has all the operations a dequeue has but also another remove opertions which takes o(1) time
	ls.remove(element);
	*/
	list<int> ls;
}