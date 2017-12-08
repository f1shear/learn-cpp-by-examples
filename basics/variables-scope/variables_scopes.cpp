


#include <iostream>
#include <string>

using namespace std;

int v1 = 100;

int main(){

	/* Main Scope */

	cout << v1 << endl;
	int v1 = 1;
	cout << v1 << endl;	
	{
		/* Another Scope */
		int v1 = 2;
		cout << v1 << endl;

		cout << ::v1 << endl;
	}	

	cout << v1 << endl;
	cout << ::v1 << endl;
}
