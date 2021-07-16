#include <bits/stdc++.h> 
using namespace std; 


int main(int argc, char const *argv[])
{
	/*
	 given n elements, tell me the number of unique elements, use set
	*/

	set<int> st; 
	for(int i = 0;i<5;i++) {
		int x;
		cin >> x; 
		st.insert(x); 
	}

	cout << "Set size = "<<st.size()<< endl;

	/* erase functionality, takes logn time
	3 types of erase functionality
	
	1.st.erase(st.begin()); // st.erase(iterator) 
	2. st.erase(st.begin(), st.begin()+ 2); // st.erase(start_iterator, end_iteraor) 
	3.st.erase(5); // st.erase(key) 
	*/
	st.erase(5); // st.erase(key) 
	for (auto it: st)
	{
		cout << it << " ";
		
	}
	/*
	or 
	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}
	*/
	cout << '\n';

	cout << "Set size = "<<st.size()<< endl;

	
	/*
	find() method returns an iterator pointing to the element,
	if the element is not found, then it points to st.end
	*/
	set<int> st_2 = {1, 5, 7, 8}; 

	auto it_2 = st_2.find(7); // log n // it will be iterator to 7
	cout << "find element is " << *it_2 <<  endl;
	auto it_3 = st_2.find(9); // it = st.end(); 
	cout << "find element is " << *it_3 <<  endl;
	st_2.emplace(6); // st.insert(6) 

	cout << "Set size is "<<st_2.size() << endl; 

	unordered_set<int> un_st; 
	/*
	 average time complexity is O(1) 
	if tle -> switch to set 
	 but the worst case is linear in nature, O(set size)
	*/

	un_st.insert(2); 
	un_st.insert(3);
	un_st.insert(1); 

	
	multiset<int> ms; 

	ms.insert(1); 
	ms.insert(1); 
	ms.insert(2); 
	ms.insert(2); 
	ms.insert(3); // or ms.emplace(3) 
	cout << "multiset is "; 
	for(auto it: ms){
	cout << it << " ";

	}

	ms.erase(2); // all the instances for 2 will be erased 
	cout << "multiset is after deleting 2 is "; 
	for(auto it: ms){
	cout << it << " ";

	}

	// auto it = ms.find(2); // returns an iterator pointing to the first element of 2 
	 
	 ms.clear(); // deleted the entire set 
	/*
	or 
	ms.erase(ms.begin(), ms.end()); // deletes the entire set 
	*/
	
	cout << "multiset is after clear method is "; 
	for(auto it: ms){
	cout << it << " ";

	}

	return 0;
}