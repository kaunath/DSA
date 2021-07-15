#include <bits/stdc++.h>
#include<iterator> 
using namespace std; 


/*
refer to the notes for vector docs in theory
*/
int main()
{
	/* segmentation fault if you push_back 10^7 times in vector 
	cause array and vector have same max size in c++
	*/

	vector<int> arr; // -> {}, empty array by default
	cout << arr.size() << endl; // -> print 0 
	arr.push_back(0); // {0}
	arr.push_back(2); // {0,2}
	cout << arr.size() << endl; // -> print 2
	arr.pop_back(); // {0}
	cout << arr.size() << endl; // print 1  

	arr.push_back(0); // {0,0}
	arr.push_back(2); // {0,0,2}


	arr.clear(); // --> erase all elements at once {}


	vector<int> vec1(4, 0); // -> {0,0,0,0}
	vector<int> vec2(4, 10); // -> {10,10,10,10}
	cout << "vec2 is: " ; 
	for (auto it: vec2)
	{
	cout << it << " ";
	}
	cout << '\n';

	// copy the entire vec2 into vec3
	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
		//or
	//vector<int> vec3(vec2);
	cout << "vec3 is: " ; 
	for (auto it: vec3)
	{
	cout << it << " ";
	}
	cout << '\n';


	vector<int> raj;
	raj.push_back(1); // raj.emplace_back(1); // emplace_back takes lesser time than push back 
	raj.push_back(3); 
	raj.push_back(2); 
	raj.push_back(5); // -> {1, 3, 2, 5} 

	vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3}  
 	cout << "raj1 vector is: " ; 
	for (auto it: raj1)
	{
	cout << it << " ";
	}
	cout << '\n';


	// swap two vectors --> swap(v1, v2) //refer note


	//2D vectors 

	vector<vector<int>> vect; 

	vector<int> vect_1;
	vect_1.push_back(1); 
	vect_1.push_back(2); 

	vector<int> vect_2;
	vect_2.push_back(10); 
	vect_2.push_back(20); 

	vector<int> vect_3;
	vect_3.push_back(19); 
	vect_3.push_back(24); 
	vect_3.push_back(27); 

	vect.push_back(vect_1); 
	vect.push_back(vect_2); 
	vect.push_back(vect_3); 

	// it is vector itself 
	cout<< "printing element of vector using foreach ";
	for(auto vctr: vect) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}

	//traditional way of accessing 2D vector
cout<< "printing element of vector using traditional for loop ";
	for(int i = 0;i<vect.size();i++) {
		for(int j = 0;j<vect[i].size();j++) {
			cout <<  vect[i][j] << " "; 
		}
		cout << endl; 
	}


	// define a 10 x 20 vector 
	vector<vector<int>> vec_2(10, vector<int> (20, 0)); 
	vect.push_back(vector<int>(20, 0)); 
	cout << vect.size() << endl; // 4 prints
	
	vect[2].push_back(1); 


	vector<int> arr_4[4]; 
	arr_4[0].push_back(0); 
	arr_4[1].push_back(112); 
	arr_4[2].push_back(32); 
	arr_4[3].push_back(230); 
	//arr_4[4].push_back(434); gives error cause array size exceeds to 4 here


	// 3D vector 10 x 20 x 30 // int arr[10][20][30] 
	// vector<vector<vector<int>>> vec_3(10, vector<vector<int>> vec_2(20, vector<int> (30, 0)));

	return 0;
}