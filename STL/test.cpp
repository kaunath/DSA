#include <bits/stdc++.h> 
using namespace std; 

	


	



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





