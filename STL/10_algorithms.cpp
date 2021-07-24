#include <bits/stdc++.h> 
using namespace std; 

int main(int argc, char const *argv[])
{
	int  n;
	cin >> n;
    int x;
	int arr[n];
	vector<int> vec(n, 0);


	for (int i = 0 ; i < n; i++)
	{
		cin >> arr[i];
		cin >> vec[i];
	}


    /* 
    binary search 
    this stl only works on SORTED arrrays
    Synatx : binary_search(firstIterator, lastIterator, x)
    returns a true or a false 
    works in log n complexity 
	*/

    bool res_arr = binary_search(arr, arr+n, 18); 
    cout << "result for array " << res_arr << endl;
    bool res_vec = binary_search(vec.begin(), vec.end(), 30); 
    cout << "result for vector " << res_vec << endl;


     /*
     lower_bound function 
  	 returns an iterator pointing to the first element which is not less than x 
  	 arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
  	if x = 10, iterator points to 10
  	if x = 6,  iterator points to 7
  	if x = 13, iterator points to end
  	this works in log N 
    */

    cout << "give the elment to be searched for lower_bound " << endl;
    cin >> x;
    auto it_arr = lower_bound(arr, arr+n, x); 
    int ind_arr = it_arr - arr; 
    cout << "index for lower_bound itearator array " << ind_arr << endl;

    auto it_vec = lower_bound(vec.begin(), vec.end(), x); 
    int ind_vec = it_vec - vec.begin();
    
    /*OR
    int ind_vec =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 
    */

    cout << "index for lower_bound itearator vector " << ind_vec << endl;


    /*
     upper bound 
     returns an iterator which points to an element which is 
     just greater than x
     arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
     if x = 7 , returns 8
     if x = 6 , returns 7
     x = 12 -> end() iterator 
     x = 15 -> end() iterator
     */
    cout << "give the elment to be searched for upper_bound " << endl;
    cin >> x;
    auto it_arr_upper = upper_bound(arr, arr+n, x); 
    int ind_upper_arr = it_arr_upper - arr; 
    cout << "index for upper_bound itearator array " << ind_upper_arr << endl;


    auto it_vec_upper = upper_bound(vec.begin(), vec.end(), x); 
    int ind_upper_vec = it_vec_upper - vec.begin();
    cout << "index for upper_bound itearator vector " << ind_upper_vec << endl;

    /*
    OR
    int ind_upper_vec =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();
    */

	return 0;
}