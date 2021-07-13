#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 

/* 	

 refer to the notes of array in docs
max size of array in c++ if defined as global
	
	1. bool arr[100000000]; i.e 10^8 for boolean
	2. int arr [10000000];  i.e 10^7 for int, double, char


	array<int, 3> arr; // -> {0, 0, 0} cause by default value 
	is 0 for globally defined array
*/

int main() {

	/* 
	max size of 10^6 -> int, double, char 
	int arr[1000000]; 

	max size of 10^7 -> bool
	bool arr[10000000]; 

	traditional way to define an array -> int arr[100]; 

	array<int, 3> arr;  {?, ?, ?} i.e garbage value for locally defined array
	array<int, 5> arr = {1}; if we define at least one value, remaining spaces will be 0 {1, 0, 0, 0, 0}

*/

	array<int, 5> arr; 
	
	// 1. arr.fill(10)
	arr.fill(10);  //fill(10) will fill all the index with 10

	for(int i = 0;i<5;i++) {
		cout << arr.at(i) << " "; 
	}

	cout << '\n';

	// 2. arr.at(index)
	cout << arr.at(2); //print element at index 2

	/*
	iterators -> 
	1.begin() --> points to first
	2.end()  --> points to the next of the last
	3.rbegin() --> points to the last, reverse begin, 
	4.rend() --> points to the before of first 

*/
	
	// for(auto it: arr.begin(); it!=arr.end(); it++){
	// 	cout << *it << " ";
	// }

	// for(auto it:  arr.rbegin(); it>arr.rend();it++) {
	// 	cout << *it << " "; 
	// }

	// for(auto it: arr.end() - 1; it>=arr.begin();it--) {
	// 	cout << *it << " "; 
	// }

	// for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}

	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}
}