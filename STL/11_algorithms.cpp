#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	/*
	Questions on lower and upper bound
	*/

	int arr[15] = {12, 12, 14, 23, 26, 26, 26, 32, 34, 45, 50, 55 ,60, 60, 60};
	int elem;
	cout << "give the elem for 1st question " <<endl;
	cin >> elem;

	/*
	Q1. 
	find me the first index where the element X lies 
    find function can be used but that takes O(N) times
    the array is sorted.
	*/

	int index = lower_bound(arr, arr+15, elem) - arr;
	
	if(arr[index] == elem)
	{
		
	cout << "index is " << index << endl; 

	}

	else
		cout << "element not found " << endl;

	// above approach takes logn time
	/*
	if(binary_search(arr, arr+10, elem) == true) {
        cout << lower_bound(arr, arr+n, x) - arr; 
    }
    else cout << "does not exists"; 

    this approach takes 2(logn) time
    binary search --> logn
    lower bound --> logn
	*/

	/*
	Q2.Find me the last occurrence of x in an arr 
	*/

	cout << "give the elem for 2nd question " <<endl;
	int elem_2;
	cin >> elem_2;

	int index_2 = (upper_bound(arr, arr+15, elem_2) - arr) -1;
	if(arr[index_2] == elem_2)
		cout << "last occurence for " << elem_2 << " "<< index_2 << endl;
	else
		cout << "element not found " << endl;
	//complexity : o(logn)

	/*
	Q3. tell me the number of times the x appears in arr 
	*/
	int elem_3;
	cout << "give the elem for 3rd question " <<endl;
	cin >> elem_3;
	bool index_3 = binary_search(arr, arr+15, elem_3);
	if(index_3)
		cout << "No of occurence is " << upper_bound(arr, arr+15, elem_3) - lower_bound(arr, arr+15, elem_3) << endl;
	else
		cout << "element not found " << endl;

	main();
	
	return 0;
}