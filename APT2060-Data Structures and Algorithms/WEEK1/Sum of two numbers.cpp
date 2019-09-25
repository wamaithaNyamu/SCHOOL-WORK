/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;

int x;
int y;
int sum;

int main(){

	cout << "Enter the first number";
	cin >> x;
	cout << "Enter the second number";
	cin >> y;
	sum = x+y;
	cout << "Your sum is:" << sum;
	return 0;
	
}
