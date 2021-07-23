#include <bits/stdc++.h> 
using namespace std; 

int main()
{

	int n;
	cin >> n;
	int arr[n];
	vector<int> vec(n, 0);
	for (int i = 0; i < n; i++)
	 {
	 	cin >> arr[i];
	 } 

     for (int i = 0; i < n; ++i)
     {
         cin >> vec[i];
     }
    
    /* 
    Finding maximum elements in any index range 
	*max_element(firstIterator, lastIterator);  returns the element
	but
	max_element(firstIterator, lastIterator);  returns an element pointing to 
	the iterator
	Complexity : o(n)
     */

    cout << "max_element array " << *max_element(arr, arr+n) << endl; 
    cout << "min_element array " << *min_element(arr, arr+n) << endl; 

    cout << "max_element vector " << *max_element(vec.begin(), vec.end()) << endl; 
    cout << "min_element vector " << *min_element(vec.begin(), vec.end()) << endl; 
    
    /*
    Internal implementation for max_element
    for(int k = i;k<=j;k++) {
        if(a[k] > maxi) {
            maxi = a[k]; 
        }
    }
	*/


    /* 
   given range, and find the sum in that range 
   Syntax : accumulate(startIterator, endIterator, initialSum);
   	Complexity : o(n)
   	*/

   cout << "Sum for array " <<  accumulate(arr, arr+n, 0) << endl; 
   cout << "Sum for vector " << accumulate(vec.begin(), vec.end(), 0) << endl;
   

	/* 
	internal implementation for accumulate 
    int sum = 0;
    for(int k = i;k<=j;k++) {
        sum += arr[k]; 
    }
	*/
   
   
    
    /* Counting how many times an element occurs in an array 
    Syntax : count(firstIterator, lastIterator, element) 
    Complexity : o(n)
    */
    
    cout << "count for 1 in array "<< count(arr, arr+n, 1) << endl;
    cout << "count for 1 in vector "<< count(vec.begin(), vec.end(), 1) << endl; 
    
    /* 
    Internal implementation for count
    for(int i = 0;i<n;i++) {
        if(arr[i] == x) {
            cnt++; 
        }
    } 
    cout << cnt; 
	*/
    
    /* 
    find the first occurrence of an element in an array or vector 
     Complexity : o(n)
     returns pointing to the end() if it is not there 
     */

    auto it_arr = find(arr, arr+n, 2); // return an iterator 
    cout << "find element in array is "<< *it_arr << endl; // shows the element
    cout << "find element address in array is "<<  it_arr-arr<< endl; // shows the address of the element
	/*
	Internal implementation for find
    int ind = -1; 
    for(int i = 0;i<n;i++) {
        if(arr[i] == x) {
            ind = i;
            break;
        }
    }
    cout << ind;
	*/
    
    auto it_vec = find(vec.begin(), vec.end(), 2); 
    int ind = it_vec - vec.begin(); 
    cout << "find element address in vector is " << ind << endl;

}