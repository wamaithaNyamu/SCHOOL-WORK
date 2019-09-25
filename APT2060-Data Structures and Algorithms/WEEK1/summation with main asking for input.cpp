/*library for input and output */
#include <iostream>

/*variations of input and output. Grouping of input output commands*/
/*global scoping*/
using namespace std;


void summation(int x,int y){
	int sum ;
	sum = x+y;
	cout << "Your sum is:" << sum;

}

int main(){
	int a, b;
	cout << "Enter the first number \n";
	cin >> a;
	cout << "Enter the second number \n";
	cin >> b;
	summation(a,b);
	return 0;
	
	
}
