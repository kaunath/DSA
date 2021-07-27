#include <bits/stdc++.h> 
using namespace std; 


// refer to bitset and algorithms docs in theory

bool comp(pair<int,int> el1, pair<int,int> el2) {
    if(el1.first < el2.first) {
        return true; 
    }

    if(el1.first == el2.first) {
        if(el1.second > el2.second) {
            return true; 
        }
    }

    return false; 
}

    bool desc_comp(int elem_1, int elem_2) {
        if(elem_1 > elem_2)
            return true;

        else
            return false;

    }


int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<pair<int, int>> vec = {{101,2}, {40,6}, {18,5}, {44,10}, {1, 7}};

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
 
    cout << "Sorting in ascending order " << endl;
    sort(arr, arr+n);
    for (auto it: arr)
     {
         cout << it << " ";
     } 
     cout << endl;
 
    cout << "Sorting in Descending order using comparator " << endl;
    sort(arr, arr+n, desc_comp); 
    for (auto it: arr)
     {
         cout << it << " ";
     } 
     cout << endl;

    cout << "Sorting 1st element in ascending and 2nd in Descending in a pair " << endl;
    sort(vec.begin(), vec.end(), comp); 
    for (auto it: vec)
     {
         cout << "{ " <<it.first << " " << it.second << " }" << endl;
     } 
     cout << endl;

    /* 
     descending 
     greater<int> is an inbuilt comparator. we can replace int in greater<> according 
     to our conatainer as char, vector, pair etc
     which works only if you wanna do this in descending 
     question of pair 
     sort(arr, arr+n, greater<pair<int,int>>);
    */


}





