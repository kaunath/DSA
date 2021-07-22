#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 


/*
refer to the notes for sets and maps docs in theory
*/
int main()
{
	// Key Value 
	// raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 
	// map only stores unique keys 
	// log n is the tc of map 

	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; 
	mpp.emplace("raj", 45); 
	mpp.erase("raj"); // mpp.erase(key) 
	//mpp.erase(mpp.begin()); // mpp.erase(iterator)
	//mpp.clear(); // entire map is cleaned up
	//mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("raj"); // points to where raj lies 
	auto it_2 = mpp.find("simran"); // points to end since she does not exists 

	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 instance of raj 
	
	/*
	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 
	*/
	// printing map same as pair
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}
	//or
	cout << "another way" << endl;
	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}

	/* Won't work
	for(auto it = mpp.begin(); it != mpp.end(); it++) {
		cout << *it.first << " " << *it.second << endl; 
	}
	*/

	// does not stores in any order 
	unordered_map<int,int> un_mpp; 
	/* 
		unordered_map<pair<int,int>,int> mpp; it is possible
	 	o(1) in almost all the operations
		 o(n) in the worst case, where n is the container size 
	 */

	// Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> pr_2 = {{1,2}, 2}; 
	cout << pr_2.first.second << endl; // 2
	pair<pair<int,int>, pair<int,int>> pr_3 = {{1,2},{2, 4}};
	cout << pr_3.first.first<< endl; // 1 
	cout << pr_3.second.second<< endl; // 4 

	/*
	Also possible
	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 
	*/

	cout << "multimap" << endl;
	multimap<string, int> mul_mpp;
	mul_mpp.emplace("raj", 2); 
	mul_mpp.emplace("raj", 5); 

	for (auto it: mul_mpp)
	{
		cout << it.first << "-> " << it.second << endl; 
		
	}

}