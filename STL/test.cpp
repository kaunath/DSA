#include <bits/stdc++.h> 
using namespace std; 

int main()
{


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





