/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;

int x;
int y;
int count;

int main(){
	count = 0;
	
	while ( count <4){
	
	cout << "Enter the first number";
	cin >> x;
	cout << "Enter the second number";
	cin >> y;
	if (x > y){
		cout << x << "is larger than" << y;
	} 
	else if (y > x){
		cout << y << " " << "is larger than " << x;
	}
	else {
			cout << "Both numbers are equal";
	};
	cout << "................................................................";
	
	count ++;
		
	};

	return 0;
	
}
