#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 

/* 	
 	refer to the notes in array docs for theory
*/

int main() {

	array<int, 5> arr; 
	
	// 1. arr.fill(10)
	arr.fill(10);  //fill(10) will fill all the index with 10

	for(int i = 0;i<5;i++) {
		cout << arr.at(i) << " "; 
	}

	cout << '\n';

	// 2. arr.at(index)
	cout << arr.at(2); //print element at index 2

	// for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}

	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}

	/* size 
	cout << arr.size();  //prints size

	// front 
	cout << arr.front(); // or arr.at(0); for begin element 

	// back
	cout << arr.back(); // or arr.at(arr.size() - 1); for last element
	*/

}