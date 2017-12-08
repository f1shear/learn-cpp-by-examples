


#include <iostream>
#include <string>


using namespace std;

#define HERO 1000


void print(const int value){
	value = 600;
	cout << value << endl;
};


int main(){

	const auto i1 = 100;

	const int i2 = 200;

	cout << HERO << endl;
	cout << i1 << endl;
	cout << i2 << endl;

	auto i3 = 500;

	print(i1);
	print(i2);
	print(HERO);

	print(i3);
}
