#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	/*
	Sorting
	1. Array
	2. Vector

	*/
	int n;
	cin >> n;
    int arr[n]; 
    for(int i = 0;i<n;i++) cin >> arr[i];  
    
    //Sorting Array
    cout << "Sorting Array" << endl;
   sort(arr, arr+n); // Sort in increasing order from zero index to last index 
    
    /* 
    sort from 1st to 3rd index 
    sort(arr + 1, arr + 4); 
    */
    
    for (auto it: arr)
    {
    	cout << it << " ";
    }

    cout << endl <<endl;

    //Vector
    cout << "Sorting vector" << endl;
    vector<int> vec(5, 0);

    for(int i = 0; i<n; i++) 
     {
         cin >> vec[i]; 
     }

    sort(vec.begin(), vec.end()); // Sort in increasing order from 1st to last

    /*
    	sort(vec.begin() + 1, vec.begin() + 4); 
    	Sort in increasing order from 1st index to 3rd index
    */

     for (auto it: vec)
    {
    	cout << it << " ";
    }
 	cout << endl << endl;

	cout << "Reverse Array" << endl;
	//reverse(startIterator, endIterator) -> [)  
    
    reverse(arr, arr+n); 
     for (auto it: arr)
    {
    	cout << it << " ";
    }

    cout << endl <<endl;

	cout << "Reverse vector" << endl;

    reverse(vec.begin(), vec.end()); 
 
     for (auto it: vec)
    {
    	cout << it << " ";
    }
	
	/*
	Reverse from 1st index to 4th index in case of array and vector
	reverse(arr + 1, arr + 4); 
	reverse(vec.begin() + 1, vec.begin() + 4); 
	*/
}