/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;


int summation(int x,int y){
	int c ;
	c = x+y;
	return c;
};

int main(){
	int a, b;
	cout << "Enter the first number \n";
	cin >> a;
	cout << "Enter the second number \n";
	cin >> b;
	int sum = summation(a,b);
	cout << "Your sum is:" << sum;
	return 0;
	
	
}
