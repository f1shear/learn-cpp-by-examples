

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	if(true) cout << "single line if statement" << endl;

	auto a = 0, b = -1;

	
	if(a>b){
		cout << "if block" << endl;	
	}else{
		cout << "else block" <<  endl;
	}

	string choice;
	cout << "Type if , else if or else" << endl; cin >> choice;

	if(choice == "if"){
		cout << "Choosen if block" << endl;
	}else if(choice == "else if"){
		cout << "Choosen else if block " << endl;
	}else{
		cout << "Choosen else block" << endl;
	}

	auto num = 0;


	cout << "Enter any number from 1 to 4" << endl; cin >> num;

	switch(num){
	
	case 1:
	cout << "You choose One" << endl;
	break;

	case 2:
	cout << "You choose Two" << endl;
	break;

	case 3:
	cout << "You choose Three" << endl;
	break;

	case 4:
	cout << "You choose Four" << endl;
	break;

	default:
	cout << "Invalid choice " << endl;


	}

}
