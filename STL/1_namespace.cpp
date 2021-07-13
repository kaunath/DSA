#include<bits/stdc++.h>
using namespace std;


/*

1.namespace is a scope
2. we can define our own namespace
3. C++ stores all the major functions(cin, cout) inside std package
4. we need to write std::cout if we don't write using namespace std;
*/
namespace kaushik {
	int val = 50;

	int getVal(){
		return val*5;
	}
}

int main()
{
	/* code */
	cout << kaushik::getVal() << endl;
	return 0;
}