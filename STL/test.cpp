#include <bits/stdc++.h> 
using namespace std; 

int main()
{





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





