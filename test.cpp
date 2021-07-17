#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	set<int> st;
	int val;
	for(int i=0; i<n; i++){
		cin>> val;
		st.insert(val);
	}
	
	for(auto it:st){
		cout << it <<endl;
	}
	return 0;
}