#include <bits/stdc++.h> 
using namespace std; 

int main()
{

    // Q1. find me the first index where the element X lies 
    // find function can be used but that takes O(N) times
    // the array is sorted.. 

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin >> arr[i]; 
    }

    int x; 
    cin >> x; 

    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // find x = 7
    int ind = lower_bound(arr, arr+n, x) - arr; 

    // find x = 6 
    int ind = lower_bound(arr, arr+n, x) - arr;



    // There are couple of ways to do it
    // 1st way 
    if(binary_search(arr, arr+n, x) == true) {
        cout << lower_bound(arr, arr+n, x) - arr; 
    }
    else cout << "does not exists"; 


    // 2nd way 
    int ind = lower_bound(arr, arr+n, x) - arr; 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    /////////////0  1  2  3  4  5   6   7   8   9   10 
    // find x = 13 -> ind = 11, which is out of bound 
    // hence arr[11] will give you runtime error 
    if(ind != n && arr[ind] == x) {
        cout << "Found at: " << ind;  
    }
    else {
        cout << "Not found";
    }



    // Find me the last occurrence of x in an arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 

    // last occurrence of x = 10, ans = 7th index
    // last occurrence of x = 6, ans = does not exists
    // last occurrence of x = 0, 
    // last occurence of x = 13 
    int ind = upper_bound(arr, arr+n, x) - arr; 
    ind -= 1; 
    if(ind>=0 && arr[ind] == x) {
        cout << "last occurrence: " << ind; 
    }
    else {
        cout << "Does not exists"; 
    }




    // Q3. tell me the number of times the x appears in arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 

    // x = 10, ans = 3 
    // x = 7, ans = 2 


    // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 

    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba



    // s = "bca" 
    bool res = next_permutation(s.begin(), s.end()); 

    // s = "cba"
    bool res = next_permutation(s.begin(), s.end()); 

    // if I give you any random string s = "bca"
    // i want you to print all the permutations 

    string s = "bca"; 
    sort(s.begin(), s.end()); // this makes the string as "abc"
    do {
        cout << s << endl; 
    } while(next_permutation(s.begin(), s.end())); 


    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
        for(int i = 0;i<n;i++) cout << arr[i] << " "; 
        cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 


    // prev permutation 
    bool res = prev_permutation(s.begin(), s.end()); 


    // COMPARATOR 
    sort(arr, arr+n); // sorts everything in ascending order
    sort(arr, arr+n, comp); 


    // descending 
    sort(arr, arr+n, comp); 
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    sort(arr, arr+n, greater<int>); 



    // question of pair 
    sort(arr, arr+n, greater<pair<int,int>>);


    vector<vector<int>> vec(n, vectorM<int>(n, 0)); 



}





