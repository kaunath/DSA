#include <bits/stdc++.h> 
using namespace std; 

int main() {

	/* 
	Next Permutation 
    string s = "abc"
    all permutations are as follows: 
	abc, acb, bac, bca, cab, cba

	Next permutation as the name suggest, it gives the next permutation
	of string, array etc.
	It gives the next permutation in sorted order
	if s = "bca";
	next_permutation(s.begin(), s.end()); will make it cab.
	it returns true if next_permutation is successfull otherwise false 
    */


    string s = "bca"; 
    bool res = next_permutation(s.begin(), s.end()); 
    cout << "after one permutation " << s << endl;

    /* 
    if I give you any random string s = "bca"
    i want you to print all the permutations 
    */

    string s2 = "bca"; 
    sort(s2.begin(), s2.end()); // this makes the string as "abc"
    do {
        cout << s2 << endl; 
    } while(next_permutation(s2.begin(), s2.end())); 
	//Compelxity : o(n!) if all the strings need to be printed using next permutation


    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
        for(int i = 0; i<n; i++) cout << arr[i] << " "; 
        cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 


    /*
     prev permutation is same as next permutation but it yields previous 
     permutation 
     bool res = prev_permutation(s.begin(), s.end()); 
     */
    }