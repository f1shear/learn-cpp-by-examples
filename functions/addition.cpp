


#include <iostream>

using namespace std;

// Defining function
int sum_f1(int a, int b){
	return a + b;
}



// Default Values
int sum_f2(int a=0, int b=0){
	return a+b;
}


// Passing Values by reference
void sum_f3(int a, int b, int &sum){
	sum = a + b;
}


//Polymorphic function
auto sum_f4(auto a, auto b){
	return a+b;
}

// Passing values by pointer
int sum_f5(int *a, int *b){
	return *a + *b;
}


int main(){
	
	int a = 1, b = 2;
	int s1 = sum_f1(a, b);

	int s2 = sum_f2();

	int s3;
	sum_f3(a, b, s3);

	int s4 = sum_f4(a, b);

	int s5 = sum_f5(&a, &b);
	
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	
	return 0;
}
