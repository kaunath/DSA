#include <bits/stdc++.h> 
using namespace std; 

	// Stack and Queue 
	stack<int> st; // lifo ds 
	// pop 
	// top 
	// size 
	// empty 
	// push and emplace 

	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 


	cout << st.top() // prints 2 
	st.pop(); // deletes the last entered element 
	cout << st.top(); // prints 3 
	st.pop(); 
	cout << st.top(); 

	bool flag = st.empty(); // returns true if stack is empty, or false

	// deleted the entire stack 
	while(!st.empty()) {
		st.pop(); 
	}

	cout << st.size() << endl; // number of elements in the stack 

	stack<int> st; 
	if(!st.empty()) {
		cout << st.top() << endl; // throw error 
	}


	// queue // fifo operation ds 
	// push 
	// front
	// pop 
	// size 
	// empty 

	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 

	cout << q.front();; // prints 1 
	q.pop(); 
	cout << q.front(); // prints 5 

	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}
	queue<int> q;
	for(int i = 0;i<10;i++) q.push(i); 



	// priority_queue 
	// push 
	// size 
	// top pop empty 
	priority_queue<int> pq;
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top(); // print 6 
	pq.pop(); 
	cout << pq.top(); // print 5 

	priority_queue<pair<int,int>> pq;
	pq.push(1, 5); 
	pq.push(1, 6); 
	pq.push(1, 7); 

	priority_queue<int> pq;
	pq.push(-1); // pq.push(-1 * el); 
	pq.push(-5); 
	pq.push(-2); 
	pq.push(-6); 

	cout << -1 * pq.top() << endl; // prints 1

	// min priority queue is 
	priority_queue<int, vector<int>, greater<int>> pq; 
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top() << endl; // prints 1 



	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 


	dequeue<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 


	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); -> // o(1) operation 



	// given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 

	// output 
	// 3


	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << x << endl; 



	// given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 

	// output 
	// 2 3 3 5 6 6 

	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}

	for(auto it : ms) {
		cout << it << endl; 
	}










}





