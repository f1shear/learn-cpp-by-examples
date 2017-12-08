

#include <iostream>
#include <string>

using namespace std;


int main(){

	int counter = 10;

	/* While Loop */
	while(counter > 0){
		cout << "While Loop: " <<  counter << endl;
		counter--;
	}


	/* Do While Loop */

	do{
		cout << "Do While Loop: " << counter << endl;
		counter++;	
	}while(counter<10);


	
	/* For Loop */
	for(int i=0; i<10; i++){
		cout << "For Loop: " << i << endl;
	}



	/* Range For aka Iterator */
	int bag[5] = {1, 2, 3, 4, 5};

	for(auto item: bag){
		cout << "Item: " << item << endl;
	}
	
	

	string name = "Superman";

	for(auto c: name){
		cout << "Character: " << c << endl;
	}


	return 0;
}

