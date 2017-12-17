

#include <iostream>
#include <string>
#include <vector>


using namespace std;


void echo(auto message){
	cout << message << endl;
}


int sum(int a, int b){
	return a + b;
}

float sum(float a, float b){
	return a + b;
}


void add_zero(vector<int> &list){
	list.push_back(0);
}


int main(){
	
	string message = "Hello World!";

	echo(message);

	int a = 1;
	int b = 2;
	auto s1 = sum(a, b);
	echo(s1);

	int c = 1.0;
	int d = 2.0;
	auto s2 = sum(c, d);
	echo(s2);


	vector<int> list;

	add_zero(list);

	echo(list[0]);

}
