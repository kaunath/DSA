#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 

/* 	
 	refer to the notes for array docs in theory
*/

int main() {

	array <int ,5> arr_1;
	array<int, 5> arr; 
	
	// 1. arr.fill(10)
	arr_1.fill(10);  //fill(10) will fill all the index with 10
	cout << "printing the array " << '\n';
	for(int i = 0;i<5;i++) {
		
		cout << arr.at(i) << " "; 

	}

	cout << '\n' << '\n';

	// 2. arr.at(index)
	cout << "printing element at index 2" << '\n';
	cout << arr.at(2); //print element at index 2
	cout << '\n'<< '\n';
	

	// for each loop 
	cout << "using for each loop in array "<< '\n';
	for(auto it : arr) {
		cout << it << " "; 
	}
	cout << '\n'<< '\n';
	
	cout << "for each loop in charater array i.e string" << '\n';
	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c : s) {
		cout << c << " "; 
	}
	cout << '\n'<< '\n';
	
	/*
		begin, end, rbegin, rend
	*/
	
	}cout << "using begin, end iterator " << '\n';
	for (auto it = arr.begin();  it != arr.end(); it++)
	{
		cout << *it << " ";
	}
	cout << '\n'<< '\n';
	
	cout << "using rbegin, rend iterator to print the arry in reverse order" << '\n';
	for (auto it = arr.rbegin();  it != arr.rend(); it++)
	{
		cout << *it << " ";


	/* size 
	cout << arr.size();  //prints size

	// front 
	cout << arr.front(); // or arr.at(0); for begin element 

	// back
	cout << arr.back(); // or arr.at(arr.size() - 1); for last element
	*/

}