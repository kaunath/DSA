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

	// erase functionality, takes logn time
	// st.erase(st.begin()); // st.erase(iterator) // st -> {2, 5}

	// st.erase(st.begin(), st.begin()+ 2); // -> [)
	// // st.erase(startIterator, endIterator) 

	st.erase(5); // st.erase(key) // delete the 5 -> {1, 2}
for (auto it: st)
{
	cout << it << " ";
	/* code */
}
cout << '\n';

cout << "Set size = "<<st.size()<< endl;

	// log n 
	




	return 0;
}