

#include <iostream>

using namespace std;


void apply(int a, int b, auto f){
	auto output = f(a, b);
	cout << output << endl;
}


int main(){
	
	auto echo = [] (){ cout << "Hello Lambda" << endl; };

	echo();
	
	int a = 5, b = 10;

	apply(a, b, [] (int x, int y) { return x + y; } );
	return 0;
}
