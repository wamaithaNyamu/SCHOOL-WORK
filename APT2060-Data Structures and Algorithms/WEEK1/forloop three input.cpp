/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;

int x;
int y;


int main(){

	
	for ( int i=0; i<3; i++){
	
	cout << "Enter the first number \n";
	cin >> x;
	cout << "Enter the second number \n";
	cin >> y;
	if (x > y){
		cout << x << "is larger than" << y << "\n";
	} 
	else if (y > x){
		cout << y << " " << "is larger than " << x << "\n";
	}
	else {
			cout << "Both numbers are equal" << "\n";
	};
	cout << "................................................................\n";
	

		
	};

	return 0;
	
}
