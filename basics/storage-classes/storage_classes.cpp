


#include <iostream>
#include <string>

using namespace std;



int main(){

	auto v1 = 1;
	cout << v1 << endl;

	register int v2 = 2;
	cout << v2 << endl;
	{
		static int v3 = 3;
		cout << v3 << endl;
	}


	

}
