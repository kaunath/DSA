#include <bits/stdc++.h> 
using namespace std; 

int main(int argc, char const *argv[])
{


	/* Bitset 
	 int -> 16 bits 
	 char -> 8 bits
	 */

	int arr_int[100]; 
	char arr_char[100]; 

	// bitset -> 1 bit

	bitset<5> bt; // stores 1 or 0 
	cin >> bt; // 10111

	//all(); returns true if all bits are set or false
	cout << "all() method" << endl;
	cout << bt.all()<< endl <<endl; 

	// any()
	cout << "any() method" << endl;
	cout << bt.any()<<endl<<endl; // returns true if any bit is set or false

	//count()
	cout << "count() method" << endl;
	cout << bt.count()<<endl<<endl; // print the number of set bits

	// flip 
	cout << "flip() method" << endl;
	cout << bt.flip(2)<< endl; // flip the bit at 2nd index

	cout << bt.flip()<< endl<<endl; // flip all the bits 

	//none();
	cout << "none() method" << endl;
	cout << bt.none()<< endl<<endl; // if none is set, then true, else false 

	// set()
	cout << "set() method" << endl;
	cout << bt.set()<< endl; // set all bits 

	cout << bt.set(2)<< endl; // sets bit at the 2nd index

	cout << bt.set(2, 0)<< endl<<endl; // set bit at the 2nd index as 0


	// reset() 
	cout << "reset() method" << endl;
	cout << bt.reset()<< endl; // turn all indexes to 0 
	cout << bt.reset(2)<<endl; // turn the 2nd index to 0 

	// size 
	cout << "size() method" << endl;
	cout << bt.size()<< endl<<endl; // prints 5 

	// test 
	cout << "test() method" << endl;
	cout << bt.test(1)<<endl<<endl; // check if the bit is set or not at index  1

}